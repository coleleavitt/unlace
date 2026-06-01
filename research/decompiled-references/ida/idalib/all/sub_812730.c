__int64 __fastcall sub_812730(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r12d
  __int64 v13; // rax
  __m128i v14; // xmm0
  void *v16; // rax
  const void *v17; // rsi
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-68h] BYREF
  int v19; // [rsp+8h] [rbp-60h]
  void *v20; // [rsp+10h] [rbp-58h]
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 8);
  v22 = __readfsqword(0x28u);
  LOBYTE(v19) = 19;
  v21 = 0;
  v18 = &off_2B3C560;
  v20 = nullptr;
  if ( v5 )
  {
    v16 = (void *)qalloc_or_throw(6 * v5);
    v17 = *(const void **)a2;
    *((_QWORD *)&v21 + 1) = v5;
    v20 = v16;
    memcpy(v16, v17, 6 * v5);
    *(_QWORD *)&v21 = v5;
  }
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v18);
  v12 = sub_812BF0(a1, v7, 23, a4, 0);
  if ( !v12 )
  {
    v13 = *a3;
    v14 = _mm_loadu_si128((const __m128i *)(a3 + 1));
    *a3 = v7[2];
    a3[1] = v7[3];
    v8 = v7[4];
    a3[2] = v8;
    v7[2] = v13;
    *(__m128i *)(v7 + 3) = v14;
  }
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64, __int64 (__fastcall **)(), int, void *, _QWORD, _QWORD, unsigned __int64))(*v7 + 8LL))(
      v7,
      v7,
      v8,
      v9,
      v10,
      v11,
      v18,
      v19,
      v20,
      v21,
      *((_QWORD *)&v21 + 1),
      v22);
  sub_80A660(&v18);
  return v12;
}

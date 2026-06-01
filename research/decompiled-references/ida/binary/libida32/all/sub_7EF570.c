__int64 __fastcall sub_7EF570(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rax
  __m128i v12; // xmm0
  void *v14; // rax
  const void *v15; // rsi
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+8h] [rbp-60h]
  void *v18; // [rsp+10h] [rbp-58h]
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 8);
  v20 = __readfsqword(0x28u);
  LOBYTE(v17) = 19;
  v19 = 0;
  v16 = &off_2B125C0;
  v18 = nullptr;
  if ( v7 )
  {
    v14 = (void *)qalloc_or_throw(6 * v7, (const char *)a2, a3, a4, a5, a6, v16, v17, v18, v19, v20);
    v15 = *(const void **)a2;
    *((_QWORD *)&v19 + 1) = v7;
    v18 = v14;
    memcpy(v14, v15, 6 * v7);
    *(_QWORD *)&v19 = v7;
  }
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v16);
  v10 = sub_7EFA30(a1, v9, 23, a4, 0);
  if ( !v10 )
  {
    v11 = *a3;
    v12 = _mm_loadu_si128((const __m128i *)(a3 + 1));
    *a3 = v9[2];
    a3[1] = v9[3];
    a3[2] = v9[4];
    v9[2] = v11;
    *(__m128i *)(v9 + 3) = v12;
  }
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  sub_7E74C0(&v16);
  return v10;
}


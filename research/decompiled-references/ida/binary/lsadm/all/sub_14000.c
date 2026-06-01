__int64 __fastcall sub_14000(__int64 *a1, __int64 a2, int a3, __int64 *a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // r12d
  __int64 v12; // rax
  __m128i v13; // xmm0
  void *v15; // rax
  const void *v16; // rsi
  __int64 (__fastcall **v17)(); // [rsp+8h] [rbp-78h] BYREF
  char v18; // [rsp+10h] [rbp-70h]
  void *v19; // [rsp+18h] [rbp-68h]
  __int128 v20; // [rsp+20h] [rbp-60h]
  int v21; // [rsp+30h] [rbp-50h]
  unsigned __int64 v22; // [rsp+40h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 8);
  v22 = __readfsqword(0x28u);
  v18 = 21;
  v20 = 0;
  v17 = &off_797C0;
  v19 = nullptr;
  if ( v7 )
  {
    v15 = (void *)sub_29E10(6 * v7);
    v16 = *(const void **)a2;
    *((_QWORD *)&v20 + 1) = v7;
    v19 = v15;
    memcpy(v15, v16, 6 * v7);
    *(_QWORD *)&v20 = v7;
  }
  v9 = *a1;
  v21 = a3;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v9 + 80))(a1, &v17);
  v11 = sub_14400(a1, v10, 23, a5, 0);
  if ( !v11 )
  {
    v12 = *a4;
    v13 = _mm_loadu_si128((const __m128i *)(a4 + 1));
    *a4 = v10[2];
    a4[1] = v10[3];
    a4[2] = v10[4];
    v10[2] = v12;
    *(__m128i *)(v10 + 3) = v13;
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  sub_2FAC0(&v17);
  return v11;
}


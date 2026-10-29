__int64 __fastcall sub_2390A0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int *v10; // rbx
  unsigned int *i; // rbp
  int *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  const char *v19; // rdi
  char v21; // [rsp+0h] [rbp-18h]

  v10 = *(unsigned int **)(a1 + 48);
  for ( i = &v10[2 * *(_QWORD *)(a1 + 56)]; i != v10; v10 += 2 )
  {
    v12 = sub_227EE0(*v10);
    if ( v12 )
    {
      v19 = &s1;
      if ( *((_QWORD *)v12 + 1) )
        v19 = *(const char **)v12;
      sub_22DC00((__int64)v19, a3, a4, a5, a6, v17, v18, a9, a10, a2, v13, v14, v15, v16, v21);
    }
  }
  return 1;
}

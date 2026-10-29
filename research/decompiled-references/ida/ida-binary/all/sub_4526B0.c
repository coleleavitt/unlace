__int64 __fastcall sub_4526B0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  __int64 v11; // rbx
  const char *v12; // rsi
  int v13; // edx
  double v14; // xmm4_8
  double v15; // xmm5_8
  int *v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  int *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  const char **v24; // rbp
  __int64 v25; // r12
  const char **v26; // r13
  const char *v27; // rbx
  char v28; // al
  double v29; // xmm4_8
  double v30; // xmm5_8
  int *v31; // [rsp+0h] [rbp-48h] BYREF
  __int128 v32; // [rsp+8h] [rbp-40h]
  unsigned __int64 v33; // [rsp+18h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 64 )
  {
    v24 = *(const char ***)(a1 + 48);
    v25 = *(_QWORD *)(a1 + 40);
    v26 = &v24[*(_QWORD *)(a1 + 56)];
    while ( v26 != v24 )
    {
      v27 = *v24++;
      v28 = sub_451350(v25, v27);
      sub_4522C0(64, v25, (int *)(*(_QWORD *)(v25 + 216) + 88LL * (int)v27), v28, a2, a3, a4, a5, v29, v30, a8, a9);
    }
  }
  else if ( v9 == 69 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    v12 = (const char *)&v31;
    v13 = **(_DWORD **)(a1 + 48);
    v31 = nullptr;
    v32 = 0;
    if ( (unsigned __int8)sub_43DF00(v11, (__int64)&v31, v13, 0.0, a3, a4, a5, a6, a7, a8, a9) )
    {
      v12 = (const char *)v11;
      sub_4522C0(69, v11, v31, 0, 0.0, a3, a4, a5, v14, v15, a8, a9);
    }
    v16 = v31;
    if ( v31 )
    {
      v17 = v32;
      if ( (_QWORD)v32 )
      {
        v18 = 0;
        v19 = 0;
        do
        {
          v20 = &v16[v18];
          v21 = *(_QWORD *)&v16[v18 + 16];
          if ( v21 )
          {
            *((_QWORD *)v20 + 9) = 0;
            qfree(v21, v12);
          }
          v22 = *((_QWORD *)v20 + 5);
          if ( v22 )
          {
            *((_QWORD *)v20 + 6) = 0;
            qfree(v22, v12);
          }
          v23 = *((_QWORD *)v20 + 2);
          if ( v23 )
          {
            *((_QWORD *)v20 + 3) = 0;
            qfree(v23, v12);
          }
          ++v19;
          v16 = v31;
          v18 += 22;
        }
        while ( v17 != v19 );
      }
      *(_QWORD *)&v32 = 0;
      qfree(v16, v12);
    }
  }
  return 1;
}

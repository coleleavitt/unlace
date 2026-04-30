unsigned __int64 __fastcall sub_371DF0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  double v18; // xmm4_8
  double v19; // xmm5_8
  const char **v20; // rbx
  const char **v21; // r12
  const char **v22; // rax
  const char **v23; // rdx
  const char **v25; // [rsp+0h] [rbp-58h] BYREF
  __int128 v26; // [rsp+8h] [rbp-50h]
  const char **v27; // [rsp+20h] [rbp-38h] BYREF
  __int128 v28; // [rsp+28h] [rbp-30h]
  unsigned __int64 v29; // [rsp+38h] [rbp-20h]

  v12 = *(_QWORD *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  v13 = *(__int64 **)a1;
  v14 = *(_QWORD *)a1 + 40 * v12;
  if ( v14 != *(_QWORD *)a1 )
  {
    while ( a2 != *v13 )
    {
      v13 += 5;
      if ( (__int64 *)v14 == v13 )
        return v29 - __readfsqword(0x28u);
    }
    if ( v13 && *(_QWORD *)(a1 + 24) != a2 )
    {
      v25 = nullptr;
      v26 = 0;
      sub_371C20((__int64 **)a1, (__int64 *)&v25, 0.0, a4, a5, a6, a7, a8, a9, a10, v14, a12);
      sub_3706F0((__int64 *)a1, a2);
      v15 = (const char *)&v27;
      v27 = nullptr;
      v28 = 0;
      sub_371C20((__int64 **)a1, (__int64 *)&v27, 0.0, a4, a5, a6, v18, v19, a9, a10, v16, v17);
      v20 = v27;
      v21 = &v27[v28];
      if ( v21 != v27 )
      {
        do
        {
          v22 = v25;
          v15 = *v20;
          v23 = &v25[v26];
          if ( v25 == v23 )
            goto LABEL_20;
          while ( v15 != *v22 )
          {
            if ( v23 == ++v22 )
              goto LABEL_20;
          }
          if ( v23 == v22 )
LABEL_20:
            sub_371DF0(a1, v15);
          ++v20;
        }
        while ( v20 != v21 );
        v20 = v27;
      }
      if ( v20 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v20, v15);
      }
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25, v15);
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}

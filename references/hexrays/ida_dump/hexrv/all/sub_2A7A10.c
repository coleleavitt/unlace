__int64 __fastcall sub_2A7A10(_QWORD *a1)
{
  const __m128i *v2; // rax
  __int64 v3; // r12
  const __m128i *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // esi
  const __m128i *v11; // rax
  __int64 v12; // r12
  const __m128i *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v20; // [rsp+0h] [rbp-70h]
  __int64 v21; // [rsp+0h] [rbp-70h]
  int v22; // [rsp+14h] [rbp-5Ch]
  const __m128i *v23; // [rsp+18h] [rbp-58h] BYREF
  __int128 v24; // [rsp+20h] [rbp-50h]
  unsigned __int64 v25; // [rsp+30h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v24 = 0;
  v23 = nullptr;
  sub_29D000(a1, &v23);
  v22 = sub_29EB80((__int64)a1, (__int64 *)&v23);
  v2 = v23;
  if ( v23 )
  {
    v20 = v24;
    if ( (_QWORD)v24 )
    {
      v3 = 0;
      do
      {
        v4 = &v2[3 * v3];
        v5 = v4->m128i_i64[1];
        if ( v5 )
        {
          v6 = v4[1].m128i_i64[0];
          if ( v6 )
          {
            v7 = 0;
            do
            {
              v8 = v7++;
              v9 = v5 + 32 * v8;
              clear_tinfo_t(v9 + 16);
              sub_29A030(v9);
              v5 = v4->m128i_i64[1];
            }
            while ( v6 != v7 );
          }
          v4[1].m128i_i64[0] = 0;
          qfree(v5);
          v2 = v23;
        }
        ++v3;
      }
      while ( v20 != v3 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v2);
  }
  v23 = nullptr;
  v24 = 0;
  sub_29CC00(a1, &v23);
  v10 = sub_2A7040((__int64)a1, (__int64)&v23) + v22;
  v11 = v23;
  if ( v23 )
  {
    v21 = v24;
    if ( (_QWORD)v24 )
    {
      v12 = 0;
      do
      {
        v13 = &v11[3 * v12];
        v14 = v13->m128i_i64[1];
        if ( v14 )
        {
          v15 = v13[1].m128i_i64[0];
          if ( v15 )
          {
            v16 = 0;
            do
            {
              v17 = v16++;
              v18 = v14 + 32 * v17;
              clear_tinfo_t(v18 + 16);
              sub_29A030(v18);
              v14 = v13->m128i_i64[1];
            }
            while ( v15 != v16 );
          }
          v13[1].m128i_i64[0] = 0;
          qfree(v14);
          v11 = v23;
        }
        ++v12;
      }
      while ( v21 != v12 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v11);
  }
  sub_2995A0(a1[1], (__int64)(a1 + 4));
  return v10;
}

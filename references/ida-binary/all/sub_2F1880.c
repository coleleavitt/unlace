__int64 __fastcall sub_2F1880(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  unsigned __int8 v8; // al
  __int64 v9; // rdi
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-98h] BYREF
  __int128 v20; // [rsp+8h] [rbp-90h]
  __int64 v21; // [rsp+18h] [rbp-80h]
  __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  __int128 v23; // [rsp+28h] [rbp-70h]
  __int64 v24; // [rsp+38h] [rbp-60h]
  __int128 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+50h] [rbp-48h]
  __int128 v27; // [rsp+58h] [rbp-40h]
  unsigned __int64 v28; // [rsp+68h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v20 = 0;
  v23 = 0;
  v19 = 0;
  v21 = -1;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v25 = 0;
  v27 = 0;
  v8 = sub_2EF430(0, &v22, (__int64)&v19, 0.0, a2, a3, a4, a5, a6, a7, a8);
  v9 = v26;
  v10 = v8;
  if ( v26 )
  {
    v11 = v27;
    if ( (_QWORD)v27 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = (__int64 *)(v9 + v12);
        v15 = *(_QWORD *)(v9 + v12 + 64);
        if ( v15 )
        {
          v14[9] = 0;
          qfree(v15, (const char *)&v22);
        }
        v16 = v14[4];
        if ( v16 )
        {
          v14[5] = 0;
          qfree(v16, (const char *)&v22);
        }
        v17 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v17, (const char *)&v22);
        }
        ++v13;
        v9 = v26;
        v12 += 88;
      }
      while ( v11 != v13 );
    }
    *(_QWORD *)&v27 = 0;
    qfree(v9, (const char *)&v22);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, (const char *)&v22);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)&v22);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, (const char *)&v22);
  }
  return v10;
}

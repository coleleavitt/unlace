unsigned __int64 __fastcall sub_4B9B80(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __int64 *v7; // rax
  __int64 *v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  __m128i v24; // [rsp+8h] [rbp-40h]
  unsigned __int64 v25; // [rsp+18h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v6 = *(_DWORD *)a1 == 3;
  v23 = 0;
  v24 = 0;
  if ( !v6 )
    sub_4B5660(0.0, a1, (__int64)a2, a3, a4);
  v7 = *(__int64 **)(a1 + 8);
  v8 = a2;
  v9 = v7[1];
  if ( v9 )
  {
    v10 = *v7;
    v11 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v10 + 8) )
      {
        a2 = (__int64 *)"default_toolbars";
        if ( !strcmp(*(const char **)v10, "default_toolbars") )
          break;
      }
      ++v11;
      v10 += 40;
      if ( v9 == v11 )
        goto LABEL_14;
    }
    if ( *(_DWORD *)(v10 + 24) != 4 )
    {
LABEL_14:
      v15 = 0;
      v9 = 0;
      v12 = 0;
      goto LABEL_15;
    }
    v12 = *(_QWORD *)(v10 + 32);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( !v13 )
        goto LABEL_13;
      v14 = *(__int64 **)v12;
      a3 = 0;
      a2 = (__int64 *)(*(_QWORD *)v12 + 16 * v13);
      do
      {
        a4 = *(_DWORD *)v14 == 2;
        v14 += 2;
        a3 += a4;
      }
      while ( a2 != v14 );
      if ( a3 == v13 )
      {
LABEL_13:
        a2 = *(__int64 **)(v10 + 32);
        sub_4B6420(&v23, a2, (__m128)0LL, a3, a4);
        v12 = v23;
        v15 = v24.m128i_i64[1];
        v9 = v24.m128i_i64[0];
        goto LABEL_15;
      }
      goto LABEL_14;
    }
    v15 = 0;
    v9 = 0;
  }
  else
  {
    v15 = 0;
    v12 = 0;
  }
LABEL_15:
  v16 = _mm_loadu_si128((const __m128i *)(v8 + 1));
  v17 = *v8;
  v8[1] = v9;
  *v8 = v12;
  v8[2] = v15;
  v23 = v17;
  v24 = v16;
  if ( v17 )
  {
    v18 = v16.m128i_i64[0];
    if ( v16.m128i_i64[0] )
    {
      v19 = 0;
      do
      {
        v20 = (__int64 *)(v17 + 24 * v19);
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          qfree(v21, (const char *)a2);
        }
        ++v19;
        v17 = v23;
      }
      while ( v18 != v19 );
    }
    qfree(v17, (const char *)a2, a3, a4, v12, a6, v23, 0, v24.m128i_i64[1]);
  }
  return v25 - __readfsqword(0x28u);
}

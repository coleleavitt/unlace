int __fastcall sub_4B9E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v9; // rbp
  int result; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 *v14; // r8
  __int64 v15; // rdi
  const char *v16; // rax
  const char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // [rsp+0h] [rbp-48h] BYREF
  __m128i v28; // [rsp+8h] [rbp-40h]
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 3 )
    sub_4B5660(a5, a1, a2, a3, a4);
  v5 = *(__int64 **)(a1 + 8);
  v6 = v5[1];
  if ( !v6 )
    return 0;
  v7 = *v5;
  v9 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v7 + 8) )
    {
      result = strcmp(*(const char **)v7, "menubar");
      if ( !result )
        break;
    }
    ++v9;
    v7 += 40;
    if ( v6 == v9 )
      return 0;
  }
  if ( *(_DWORD *)(v7 + 24) == 4 )
  {
    v14 = *(__int64 **)(v7 + 32);
    if ( v14 )
    {
      v27 = 0;
      v28 = 0;
      v15 = v14[1];
      if ( !v15 )
        goto LABEL_24;
      v16 = (const char *)*v14;
      v11 = 0;
      v17 = (const char *)(*v14 + 16 * v15);
      do
      {
        v12 = *(_DWORD *)v16 == 2;
        v16 += 16;
        v11 += v12;
      }
      while ( v16 != v17 );
      if ( v11 == v15 )
      {
LABEL_24:
        v17 = (const char *)v14;
        sub_4B6420(&v27, v14, (__m128)0LL, v11, v12);
        v20 = v27;
        v18 = v28.m128i_i64[1];
        v19 = v28.m128i_i64[0];
      }
      else
      {
        v18 = 0;
        v19 = 0;
        v20 = 0;
      }
      v21 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v22 = *(_QWORD *)a2;
      *(_QWORD *)a2 = v20;
      *(_QWORD *)(a2 + 8) = v19;
      *(_QWORD *)(a2 + 16) = v18;
      v27 = v22;
      v28 = v21;
      if ( v22 )
      {
        v23 = v21.m128i_i64[0];
        if ( v21.m128i_i64[0] )
        {
          v24 = 0;
          do
          {
            v25 = (__int64 *)(v22 + 24 * v24);
            v26 = *v25;
            if ( *v25 )
            {
              v25[1] = 0;
              qfree(v26, v17);
            }
            ++v24;
            v22 = v27;
          }
          while ( v23 != v24 );
        }
        qfree(v22, v17, v19, v20, v14, v13, v27, 0, v28.m128i_i64[1], v29);
      }
      return 1;
    }
    return 0;
  }
  return result;
}

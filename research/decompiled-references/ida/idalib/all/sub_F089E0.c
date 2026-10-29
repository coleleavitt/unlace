__int64 __fastcall sub_F089E0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  int v5; // eax
  const __m128i *v6; // rbx
  char v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  char *v16; // rsi
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  __m128i v19; // [rsp+20h] [rbp-68h] BYREF
  __int16 v20; // [rsp+40h] [rbp-48h]

  sub_995540(*a1, "__builtin_offsetof(");
  v4 = *a1;
  v18 = **(_QWORD **)(a2 + 24);
  v20 = 257;
  sub_F74830(&v18, v4, a1 + 3, &v19, 0);
  sub_995540(*a1, ", ");
  v5 = *(_DWORD *)(a2 + 32);
  if ( v5 )
  {
    v6 = (const __m128i *)(a2 + 40);
    v7 = 0;
    v8 = a2 + 16LL * (unsigned int)(v5 - 1) + 56;
    do
    {
      while ( 1 )
      {
        v11 = _mm_loadu_si128(v6);
        v19 = v11;
        if ( (v11.m128i_i8[8] & 3) != 0 )
          break;
        sub_995540(*a1, "[");
        v15 = 16LL * *(unsigned int *)(a2 + 32);
        v16 = *(char **)(a2 + v15 + 8LL * (unsigned int)((unsigned __int64)v19.m128i_i64[1] >> 2) + 40);
        if ( v16 )
          sub_F05430(a1, v16, v15, v12, v13, v14, *(double *)v11.m128i_i64);
        else
          sub_F049C0(a1);
        ++v6;
        v7 = 1;
        sub_995540(*a1, "]");
        if ( v6 == (const __m128i *)v8 )
          return sub_995540(*a1, ")");
      }
      if ( (v11.m128i_i8[8] & 3) != 3 )
      {
        v9 = sub_BF9AD0((__int64)&v19);
        if ( v9 )
        {
          v10 = *a1;
          if ( v7 )
          {
            sub_995540(v10, ".");
            v10 = *a1;
          }
          v7 = 1;
          sub_9954E0(v10, (const void *)(*(_QWORD *)(v9 + 16) + 16LL), **(unsigned int **)(v9 + 16));
        }
      }
      ++v6;
    }
    while ( v6 != (const __m128i *)v8 );
  }
  return sub_995540(*a1, ")");
}

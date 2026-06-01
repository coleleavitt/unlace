__int64 __fastcall sub_2277430(__int64 a1, const char *a2)
{
  const __m128i **v4; // rax
  const __m128i *v5; // rsi
  const __m128i *v6; // rbx
  const __m128i *v7; // r13
  unsigned int v8; // r15d
  size_t v9; // rax
  size_t v10; // rdx
  __int64 v11; // r14
  __int64 ***v12; // rdi
  const __m128i **v13; // rax
  __int64 v14; // rax
  __int64 ***v15; // rdi
  __int64 v16; // rax
  const __m128i **v18; // rax
  __int64 ***v19; // rdi
  const __m128i *v20; // rsi
  __int64 v21; // rax
  _QWORD v22[4]; // [rsp+8h] [rbp-68h] BYREF
  __int16 v23; // [rsp+28h] [rbp-48h]

  if ( !*(_DWORD *)(a1 + 96) )
  {
    v4 = *(const __m128i ***)(a1 + 672);
    v5 = *v4;
    if ( (*v4)[2].m128i_i32[0] == 5 )
    {
      v6 = v4[1];
      v7 = v4[2];
      if ( v6 != v7 )
      {
        v8 = 0;
        if ( a2 )
        {
          while ( 1 )
          {
            v11 = v6->m128i_i64[0];
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v6->m128i_i64[0] + 32LL) - 1) <= 1 )
            {
              v9 = strlen(a2);
              v10 = *(_QWORD *)(v11 + 16);
              if ( v10 == v9 && (!v10 || !memcmp(*(const void **)(v11 + 8), a2, v10)) )
                goto LABEL_19;
            }
            else
            {
              v12 = *(__int64 ****)(a1 + 80);
              v22[0] = "unexpected scalar in sequence of bit values";
              v13 = *(const __m128i ***)(a1 + 672);
              v23 = 259;
              sub_226EEF0(v12, *v13, (__int64)v22, 0);
              v14 = std::_V2::generic_category((std::_V2 *)v12);
              *(_DWORD *)(a1 + 96) = 22;
              *(_QWORD *)(a1 + 104) = v14;
            }
            v6 = (const __m128i *)((char *)v6 + 8);
            ++v8;
            if ( v7 == v6 )
              return 0;
          }
        }
        do
        {
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v6->m128i_i64[0] + 32LL) - 1) <= 1 )
          {
            if ( !*(_QWORD *)(v6->m128i_i64[0] + 16) )
            {
LABEL_19:
              *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL * (v8 >> 6)) |= 1LL << v8;
              return 1;
            }
          }
          else
          {
            v18 = *(const __m128i ***)(a1 + 672);
            v19 = *(__int64 ****)(a1 + 80);
            v23 = 259;
            v20 = *v18;
            v22[0] = "unexpected scalar in sequence of bit values";
            sub_226EEF0(v19, v20, (__int64)v22, 0);
            v21 = std::_V2::generic_category((std::_V2 *)v19);
            *(_DWORD *)(a1 + 96) = 22;
            *(_QWORD *)(a1 + 104) = v21;
          }
          v6 = (const __m128i *)((char *)v6 + 8);
          ++v8;
        }
        while ( v7 != v6 );
      }
    }
    else
    {
      v15 = *(__int64 ****)(a1 + 80);
      v22[0] = "expected sequence of bit values";
      v23 = 259;
      sub_226EEF0(v15, v5, (__int64)v22, 0);
      v16 = std::_V2::generic_category((std::_V2 *)v15);
      *(_DWORD *)(a1 + 96) = 22;
      *(_QWORD *)(a1 + 104) = v16;
    }
    return 0;
  }
  return 0;
}

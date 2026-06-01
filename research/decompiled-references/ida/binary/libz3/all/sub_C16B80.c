__int64 __fastcall sub_C16B80(__int64 **a1, __int64 *a2, double a3, __m128 a4)
{
  unsigned int v4; // r13d
  __int64 result; // rax
  __int64 *v7; // r15
  const __m128i *v8; // r12
  __int64 v9; // rax
  __m128 *v10; // rcx
  __m128 v11; // xmm0
  __int64 v12; // rax
  unsigned int v13; // esi
  size_t v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // r14
  _DWORD *v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 *v20; // rsi
  __int64 *i; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rsi
  bool v27; // zf
  __int64 v28; // rsi
  __int64 v29; // rdi
  _QWORD *v30; // rax
  char **exception; // rbx
  unsigned int v33; // [rsp+14h] [rbp-64h]
  __int64 *v34; // [rsp+18h] [rbp-60h]
  __int64 *v35; // [rsp+18h] [rbp-60h]
  __int64 v36[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0;
  for ( result = *a2; *a2; result = *a2 )
  {
    if ( v4 >= *(_DWORD *)(result - 4) )
      break;
    v7 = *a1;
    v8 = (const __m128i *)(result + 24LL * v4);
    if ( *a1 )
    {
      v9 = *((unsigned int *)v7 - 1);
      if ( (_DWORD)v9 == *((_DWORD *)v7 - 2) )
      {
        v13 = (unsigned int)(3 * v9 + 1) >> 1;
        v33 = v13;
        v14 = 8 * (v13 + ((3 * (_DWORD)v9 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * (int)v9 + 8 >= (unsigned int)v14 || (unsigned int)v9 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C0E620(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = sub_186B270(v14);
        v16 = *a1;
        v17 = (_DWORD *)v15;
        v7 = (__int64 *)(v15 + 8);
        if ( *a1 )
        {
          v18 = *((unsigned int *)v16 - 1);
          v19 = v15 + 8;
          *(_DWORD *)(v15 + 4) = v18;
          v20 = &v16[3 * v18];
          for ( i = v16; v20 != i; *(_QWORD *)(v19 - 8) = v24 )
          {
            v22 = *i;
            i += 3;
            v19 += 24;
            *(_QWORD *)(v19 - 24) = v22;
            v23 = *(i - 2);
            *(i - 2) = 0;
            *(_QWORD *)(v19 - 16) = v23;
            v24 = *(i - 1);
            *(i - 1) = 0;
          }
          if ( (_DWORD)v18 )
          {
            v25 = &v16[3 * v18];
            do
            {
              while ( 1 )
              {
                v28 = v16[1];
                v29 = *v16;
                if ( v28 )
                {
                  v27 = (*(_DWORD *)(v28 + 8))-- == 1;
                  if ( v27 )
                  {
                    v34 = v25;
                    sub_15D7BC0(v29, v28);
                    v29 = *v16;
                    v25 = v34;
                  }
                }
                v26 = v16[2];
                if ( v26 )
                {
                  v27 = (*(_DWORD *)(v26 + 8))-- == 1;
                  if ( v27 )
                    break;
                }
                v16 += 3;
                if ( v16 == v25 )
                  goto LABEL_26;
              }
              v35 = v25;
              v16 += 3;
              sub_15D7BC0(v29, v26);
              v25 = v35;
            }
            while ( v16 != v35 );
LABEL_26:
            v16 = *a1;
          }
          sub_186B220(v16 - 1);
          v10 = (__m128 *)&v7[3 * (unsigned int)v17[1]];
        }
        else
        {
          *(_DWORD *)(v15 + 4) = 0;
          v10 = (__m128 *)(v15 + 8);
        }
        *a1 = v7;
        *v17 = v33;
      }
      else
      {
        v10 = (__m128 *)&v7[3 * v9];
      }
    }
    else
    {
      v30 = (_QWORD *)sub_186B270(0x38u);
      v7 = v30 + 1;
      *v30 = 2;
      *a1 = v30 + 1;
      v10 = (__m128 *)(v30 + 1);
    }
    v11 = (__m128)_mm_loadu_si128(v8);
    v12 = v8[1].m128i_i64[0];
    a4 = _mm_movehl_ps(a4, v11);
    v10[1].m128_u64[0] = v12;
    *v10 = v11;
    if ( a4.m128_u64[0] )
      ++*(_DWORD *)(a4.m128_u64[0] + 8);
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    ++*((_DWORD *)v7 - 1);
    ++v4;
  }
  return result;
}


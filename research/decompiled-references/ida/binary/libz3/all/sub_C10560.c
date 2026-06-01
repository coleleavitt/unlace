void __fastcall sub_C10560(__int64 a1, const __m128i **a2, double a3, __m128 a4)
{
  char **exception; // rbx
  _QWORD *v6; // r15
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  const __m128i *v16; // r13
  unsigned __int32 v17; // r12d
  __m128 *v18; // rcx
  __m128 v19; // xmm0
  __int64 v20; // rax
  const __m128i *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // esi
  size_t v24; // rdi
  __int64 v25; // rax
  __int64 *v26; // r14
  _DWORD *v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 *v30; // rsi
  __int64 *i; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rdi
  _QWORD *v39; // rax
  unsigned int v41; // [rsp+14h] [rbp-64h]
  __int64 *v42; // [rsp+18h] [rbp-60h]
  __int64 *v43; // [rsp+18h] [rbp-60h]
  __int64 v44[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_QWORD **)(a1 + 936);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 944);
    v8 = 24LL * v7;
    v9 = &v6[(unsigned __int64)v8 / 8];
    v10 = 24LL * *((unsigned int *)v6 - 1);
    v11 = &v6[(unsigned __int64)v10 / 8];
    if ( v8 != v10 )
    {
      do
      {
        while ( 1 )
        {
          v14 = v9[1];
          v15 = *v9;
          if ( v14 )
          {
            v13 = (*(_DWORD *)(v14 + 8))-- == 1;
            if ( v13 )
            {
              sub_15D7BC0(v15, v14);
              v15 = *v9;
            }
          }
          v12 = v9[2];
          if ( v12 )
          {
            v13 = (*(_DWORD *)(v12 + 8))-- == 1;
            if ( v13 )
              break;
          }
          v9 += 3;
          if ( v11 == v9 )
            goto LABEL_11;
        }
        sub_15D7BC0(v15, v12);
        v9 += 3;
      }
      while ( v11 != v9 );
LABEL_11:
      v6 = *(_QWORD **)(a1 + 936);
    }
    *((_DWORD *)v6 - 1) = v7;
    v16 = *a2;
    if ( *a2 )
    {
      v17 = 0;
      if ( v16[-1].m128i_i32[3] )
      {
        while ( 1 )
        {
          v22 = *((unsigned int *)v6 - 1);
          if ( (_DWORD)v22 == *((_DWORD *)v6 - 2) )
          {
            v23 = (unsigned int)(3 * v22 + 1) >> 1;
            v41 = v23;
            v24 = 8 * (v23 + ((3 * (_DWORD)v22 + 1) & 0xFFFFFFFE)) + 8;
            if ( 24 * (int)v22 + 8 >= (unsigned int)v24 || (unsigned int)v22 >= v23 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C0E620(v44, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v44);
              sub_233E40((__int64)v44);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v25 = sub_186B270(v24);
            v26 = *(__int64 **)(a1 + 936);
            v27 = (_DWORD *)v25;
            v6 = (_QWORD *)(v25 + 8);
            if ( v26 )
            {
              v28 = *((unsigned int *)v26 - 1);
              v29 = v25 + 8;
              *(_DWORD *)(v25 + 4) = v28;
              v30 = &v26[3 * v28];
              for ( i = v26; v30 != i; *(_QWORD *)(v29 - 8) = v34 )
              {
                v32 = *i;
                i += 3;
                v29 += 24;
                *(_QWORD *)(v29 - 24) = v32;
                v33 = *(i - 2);
                *(i - 2) = 0;
                *(_QWORD *)(v29 - 16) = v33;
                v34 = *(i - 1);
                *(i - 1) = 0;
              }
              if ( (_DWORD)v28 )
              {
                v35 = &v26[3 * v28];
                do
                {
                  while ( 1 )
                  {
                    v37 = v26[1];
                    v38 = *v26;
                    if ( v37 )
                    {
                      v13 = (*(_DWORD *)(v37 + 8))-- == 1;
                      if ( v13 )
                      {
                        v42 = v35;
                        sub_15D7BC0(v38, v37);
                        v38 = *v26;
                        v35 = v42;
                      }
                    }
                    v36 = v26[2];
                    if ( v36 )
                    {
                      v13 = (*(_DWORD *)(v36 + 8))-- == 1;
                      if ( v13 )
                        break;
                    }
                    v26 += 3;
                    if ( v26 == v35 )
                      goto LABEL_38;
                  }
                  v43 = v35;
                  v26 += 3;
                  sub_15D7BC0(v38, v36);
                  v35 = v43;
                }
                while ( v26 != v43 );
LABEL_38:
                v26 = *(__int64 **)(a1 + 936);
              }
              sub_186B220(v26 - 1);
              v18 = (__m128 *)&v6[3 * (unsigned int)v27[1]];
            }
            else
            {
              *(_DWORD *)(v25 + 4) = 0;
              v18 = (__m128 *)(v25 + 8);
            }
            *(_QWORD *)(a1 + 936) = v6;
            *v27 = v41;
          }
          else
          {
            v18 = (__m128 *)&v6[3 * v22];
          }
LABEL_16:
          v19 = (__m128)_mm_loadu_si128(v16);
          v20 = v16[1].m128i_i64[0];
          a4 = _mm_movehl_ps(a4, v19);
          v18[1].m128_u64[0] = v20;
          *v18 = v19;
          if ( a4.m128_u64[0] )
            ++*(_DWORD *)(a4.m128_u64[0] + 8);
          if ( v20 )
            ++*(_DWORD *)(v20 + 8);
          ++*((_DWORD *)v6 - 1);
          ++v17;
          v21 = *a2;
          if ( !*a2 || v17 >= v21[-1].m128i_i32[3] )
            break;
          v16 = (const __m128i *)((char *)v21 + 24 * v17);
        }
      }
    }
  }
  else
  {
    v16 = *a2;
    if ( *a2 && v16[-1].m128i_i32[3] )
    {
      v17 = 0;
      v39 = (_QWORD *)sub_186B270(0x38u);
      v6 = v39 + 1;
      *v39 = 2;
      *(_QWORD *)(a1 + 936) = v39 + 1;
      v18 = (__m128 *)(v39 + 1);
      goto LABEL_16;
    }
  }
}


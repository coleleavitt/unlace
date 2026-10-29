__int64 __fastcall sub_901C40(_QWORD *a1, double a2, __m128 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned int v6; // r13d
  _QWORD *v7; // r15
  const __m128i *v8; // r12
  __int64 v9; // rax
  __m128 *v10; // rcx
  __m128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v16; // esi
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // rsi
  __int64 *i; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rsi
  bool v29; // zf
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rax
  char **exception; // rbx
  _DWORD *v34; // [rsp+8h] [rbp-70h]
  unsigned int v35; // [rsp+14h] [rbp-64h]
  __int64 *v36; // [rsp+18h] [rbp-60h]
  __int64 *v37; // [rsp+18h] [rbp-60h]
  __int64 v38[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1[74];
  v5 = a1[1];
  if ( v4 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v4 - 4) )
        break;
      v7 = *(_QWORD **)(v5 + 936);
      v8 = (const __m128i *)(v4 + 24LL * v6);
      if ( v7 )
      {
        v9 = *((unsigned int *)v7 - 1);
        if ( (_DWORD)v9 == *((_DWORD *)v7 - 2) )
        {
          v16 = (unsigned int)(3 * v9 + 1) >> 1;
          v35 = v16;
          v17 = 8 * (v16 + ((3 * (_DWORD)v9 + 1) & 0xFFFFFFFE)) + 8;
          if ( 24 * (int)v9 + 8 >= (unsigned int)v17 || (unsigned int)v9 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v38, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v38);
            sub_233E40((__int64)v38);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = sub_186B270(v17);
          v19 = *(__int64 **)(v5 + 936);
          v34 = (_DWORD *)v18;
          v7 = (_QWORD *)(v18 + 8);
          if ( v19 )
          {
            v20 = *((unsigned int *)v19 - 1);
            v21 = v18 + 8;
            *(_DWORD *)(v18 + 4) = v20;
            v22 = &v19[3 * v20];
            for ( i = v19; v22 != i; *(_QWORD *)(v21 - 8) = v26 )
            {
              v24 = *i;
              i += 3;
              v21 += 24;
              *(_QWORD *)(v21 - 24) = v24;
              v25 = *(i - 2);
              *(i - 2) = 0;
              *(_QWORD *)(v21 - 16) = v25;
              v26 = *(i - 1);
              *(i - 1) = 0;
            }
            if ( (_DWORD)v20 )
            {
              v27 = &v19[3 * v20];
              do
              {
                while ( 1 )
                {
                  v30 = v19[1];
                  v31 = *v19;
                  if ( v30 )
                  {
                    v29 = (*(_DWORD *)(v30 + 8))-- == 1;
                    if ( v29 )
                    {
                      v36 = v27;
                      sub_15D7BC0(v31, v30);
                      v31 = *v19;
                      v27 = v36;
                    }
                  }
                  v28 = v19[2];
                  if ( v28 )
                  {
                    v29 = (*(_DWORD *)(v28 + 8))-- == 1;
                    if ( v29 )
                      break;
                  }
                  v19 += 3;
                  if ( v27 == v19 )
                    goto LABEL_32;
                }
                v37 = v27;
                v19 += 3;
                sub_15D7BC0(v31, v28);
                v27 = v37;
              }
              while ( v37 != v19 );
LABEL_32:
              v19 = *(__int64 **)(v5 + 936);
            }
            sub_186B220(v19 - 1);
            v10 = (__m128 *)&v7[3 * (unsigned int)v34[1]];
          }
          else
          {
            *(_DWORD *)(v18 + 4) = 0;
            v10 = (__m128 *)(v18 + 8);
          }
          *(_QWORD *)(v5 + 936) = v7;
          *v34 = v35;
        }
        else
        {
          v10 = (__m128 *)&v7[3 * v9];
        }
      }
      else
      {
        v32 = (_QWORD *)sub_186B270(0x38u);
        v7 = v32 + 1;
        *v32 = 2;
        v10 = (__m128 *)(v32 + 1);
        *(_QWORD *)(v5 + 936) = v32 + 1;
      }
      v11 = (__m128)_mm_loadu_si128(v8);
      v12 = v8[1].m128i_i64[0];
      a3 = _mm_movehl_ps(a3, v11);
      v10[1].m128_u64[0] = v12;
      *v10 = v11;
      if ( a3.m128_u64[0] )
        ++*(_DWORD *)(a3.m128_u64[0] + 8);
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v4 = a1[74];
      ++*((_DWORD *)v7 - 1);
      ++v6;
    }
    while ( v4 );
    v5 = a1[1];
  }
  sub_C147A0(v5);
  sub_1584740(a1 + 4);
  v13 = a1[24];
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = a1[70];
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  sub_1584740(a1 + 25);
  return sub_1584740(a1 + 45);
}


__int64 __fastcall sub_C14890(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  char **exception; // rbp
  __int64 v11; // rax
  int v12; // esi
  _QWORD *v13; // r15
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 *v16; // rbp
  __int64 v17; // rax
  __int64 *v18; // r14
  __int64 v19; // rsi
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // rdi
  const __m128i *v23; // rdx
  const __m128i *v24; // r13
  unsigned __int32 v25; // r12d
  __int64 v26; // rax
  __m128 *v27; // rsi
  __int64 v28; // rax
  __int64 result; // rax
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 *v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rdi
  unsigned int v36; // esi
  size_t v37; // rdi
  __int64 v38; // rax
  __int64 *v39; // r14
  _DWORD *v40; // rbp
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 *v43; // rsi
  __int64 *i; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 *v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rdi
  _QWORD *v52; // rax
  unsigned int v53; // [rsp+Ch] [rbp-7Ch]
  __int64 *v54; // [rsp+10h] [rbp-78h]
  __int64 *v55; // [rsp+10h] [rbp-78h]
  const __m128i *v56; // [rsp+28h] [rbp-60h] BYREF
  __int64 v57[11]; // [rsp+30h] [rbp-58h] BYREF

  v11 = *(_QWORD *)(a1 + 936);
  v56 = nullptr;
  if ( v11 )
    v12 = *(_DWORD *)(v11 - 4);
  else
    v12 = 0;
  sub_139EFE0(
    *(_QWORD *)(a1 + 1520),
    v12 - *(_DWORD *)(a1 + 944),
    v11 + 24 * *(_DWORD *)(a1 + 944),
    (unsigned int)&v56,
    (unsigned int)&v56,
    a9);
  v13 = *(_QWORD **)(a1 + 936);
  if ( v13 )
  {
    v14 = *(_DWORD *)(a1 + 944);
    v15 = 24LL * v14;
    v16 = &v13[(unsigned __int64)v15 / 8];
    v17 = 24LL * *((unsigned int *)v13 - 1);
    v18 = &v13[(unsigned __int64)v17 / 8];
    if ( v15 != v17 )
    {
      do
      {
        while ( 1 )
        {
          v21 = v16[1];
          v22 = *v16;
          if ( v21 )
          {
            v20 = (*(_DWORD *)(v21 + 8))-- == 1;
            if ( v20 )
            {
              sub_15D7BC0(v22, v21);
              v22 = *v16;
            }
          }
          v19 = v16[2];
          if ( v19 )
          {
            v20 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v20 )
              break;
          }
          v16 += 3;
          if ( v18 == v16 )
            goto LABEL_13;
        }
        sub_15D7BC0(v22, v19);
        v16 += 3;
      }
      while ( v18 != v16 );
LABEL_13:
      v13 = *(_QWORD **)(a1 + 936);
    }
    v23 = v56;
    *((_DWORD *)v13 - 1) = v14;
    v24 = v23;
    if ( v23 )
    {
      v25 = 0;
      if ( v23[-1].m128i_i32[3] )
      {
        while ( 1 )
        {
          v26 = *((unsigned int *)v13 - 1);
          if ( (_DWORD)v26 == *((_DWORD *)v13 - 2) )
          {
            v36 = (unsigned int)(3 * v26 + 1) >> 1;
            v53 = v36;
            v37 = 8 * (v36 + ((3 * (_DWORD)v26 + 1) & 0xFFFFFFFE)) + 8;
            if ( 24 * (int)v26 + 8 >= (unsigned int)v37 || (unsigned int)v26 >= v36 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C0E620(v57, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v57);
              sub_233E40((__int64)v57);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v38 = sub_186B270(v37);
            v39 = *(__int64 **)(a1 + 936);
            v40 = (_DWORD *)v38;
            v13 = (_QWORD *)(v38 + 8);
            if ( v39 )
            {
              v41 = *((unsigned int *)v39 - 1);
              v42 = v38 + 8;
              *(_DWORD *)(v38 + 4) = v41;
              v43 = &v39[3 * v41];
              for ( i = v39; v43 != i; *(_QWORD *)(v42 - 8) = v47 )
              {
                v45 = *i;
                i += 3;
                v42 += 24;
                *(_QWORD *)(v42 - 24) = v45;
                v46 = *(i - 2);
                *(i - 2) = 0;
                *(_QWORD *)(v42 - 16) = v46;
                v47 = *(i - 1);
                *(i - 1) = 0;
              }
              if ( (_DWORD)v41 )
              {
                v48 = &v39[3 * v41];
                do
                {
                  while ( 1 )
                  {
                    v50 = v39[1];
                    v51 = *v39;
                    if ( v50 )
                    {
                      v20 = (*(_DWORD *)(v50 + 8))-- == 1;
                      if ( v20 )
                      {
                        v54 = v48;
                        sub_15D7BC0(v51, v50);
                        v51 = *v39;
                        v48 = v54;
                      }
                    }
                    v49 = v39[2];
                    if ( v49 )
                    {
                      v20 = (*(_DWORD *)(v49 + 8))-- == 1;
                      if ( v20 )
                        break;
                    }
                    v39 += 3;
                    if ( v39 == v48 )
                      goto LABEL_53;
                  }
                  v55 = v48;
                  v39 += 3;
                  sub_15D7BC0(v51, v49);
                  v48 = v55;
                }
                while ( v39 != v55 );
LABEL_53:
                v39 = *(__int64 **)(a1 + 936);
              }
              sub_186B220(v39 - 1);
              v27 = (__m128 *)&v13[3 * (unsigned int)v40[1]];
            }
            else
            {
              *(_DWORD *)(v38 + 4) = 0;
              v27 = (__m128 *)(v38 + 8);
            }
            v23 = v56;
            *(_QWORD *)(a1 + 936) = v13;
            *v40 = v53;
          }
          else
          {
            v27 = (__m128 *)&v13[3 * v26];
          }
LABEL_22:
          a2 = (__m128)_mm_loadu_si128(v24);
          v28 = v24[1].m128i_i64[0];
          a3 = _mm_movehl_ps(a3, a2);
          v27[1].m128_u64[0] = v28;
          *v27 = a2;
          if ( a3.m128_u64[0] )
            ++*(_DWORD *)(a3.m128_u64[0] + 8);
          if ( v28 )
          {
            ++*(_DWORD *)(v28 + 8);
            ++v25;
            ++*((_DWORD *)v13 - 1);
            if ( !v23 )
              break;
          }
          else
          {
            ++*((_DWORD *)v13 - 1);
            ++v25;
            if ( !v23 )
              break;
          }
          if ( v25 >= v23[-1].m128i_i32[3] )
            break;
          v24 = (const __m128i *)((char *)v23 + 24 * v25);
        }
      }
    }
  }
  else
  {
    v24 = v56;
    if ( v56 && v56[-1].m128i_i32[3] )
    {
      v52 = (_QWORD *)sub_186B270(0x38u);
      v13 = v52 + 1;
      *v52 = 2;
      v23 = v56;
      v25 = 0;
      *(_QWORD *)(a1 + 936) = v52 + 1;
      v27 = (__m128 *)(v52 + 1);
      goto LABEL_22;
    }
  }
  result = sub_C147A0(a1, *(double *)a2.m128_u64, *(double *)a3.m128_u64, a4);
  v30 = (__int64 *)v56;
  if ( v56 )
  {
    v31 = v56[-1].m128i_u32[3];
    if ( (_DWORD)v31 )
    {
      v32 = &v56->m128i_i64[3 * v31];
      do
      {
        v34 = v30[1];
        v35 = *v30;
        if ( v34 )
        {
          v20 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v20 )
          {
            sub_15D7BC0(v35, v34);
            v35 = *v30;
          }
        }
        v33 = v30[2];
        if ( v33 )
        {
          v20 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v35, v33);
        }
        v30 += 3;
      }
      while ( v30 != v32 );
      v30 = (__int64 *)v56;
    }
    return sub_186B220(v30 - 1);
  }
  return result;
}


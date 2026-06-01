__int64 __fastcall sub_DF9B00(__int64 a1, __int64 *a2)
{
  char **exception; // rbp
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __m128i *v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  int v12; // r13d
  __int64 v13; // rcx
  __m128i *v14; // rbp
  __int64 v15; // rax
  __m128i *v16; // r10
  __m128i *v17; // rax
  int v18; // edx
  unsigned __int64 v19; // rdx
  __int64 v20; // r13
  __m128i *v21; // rsi
  __m128i *v22; // r13
  __int32 v23; // eax
  unsigned __int64 *v24; // rbx
  _QWORD *v25; // rdx
  unsigned __int64 v26; // xmm0_8
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned __int64 **v29; // rcx
  __m128i *v30; // rax
  int v31; // edx
  unsigned int v32; // r10d
  __m128i v33; // xmm0
  unsigned __int64 v34; // xmm1_8
  unsigned __int64 v35; // rsi
  __int64 v36; // r13
  __m128i *v37; // rdi
  __int64 v38; // rcx
  int v39; // edx
  __int32 v40; // eax
  unsigned int v41; // ebp
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbp
  __m128i *v46; // rax
  int v47; // r10d
  __m128i v48; // xmm0
  __m128i *v49; // rdx
  const __m128i *v50; // rax
  __m128i *v51; // r11
  __int64 v52; // rdx
  __m128i *v53; // rsi
  __m128i *v54; // rdx
  __m128i v55; // xmm1
  _QWORD *v56; // rdx
  __int64 v57; // [rsp+0h] [rbp-98h]
  size_t v58; // [rsp+8h] [rbp-90h]
  unsigned int v59; // [rsp+28h] [rbp-70h]
  __int64 v60; // [rsp+38h] [rbp-60h] BYREF
  __int64 v61[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *a2;
  v60 = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v4 + 112))(a2, &v60, a1 + 248);
  v6 = v60;
  if ( !v60 )
    return result;
  v57 = v60 + 16LL * *(unsigned int *)(v60 - 4);
  if ( v57 == v60 )
    return sub_186B220((void *)(v6 - 8));
  v7 = v60;
  v59 = *((_DWORD *)a2 + 4);
  do
  {
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(__m128i **)(a1 + 536);
    v10 = *(_DWORD *)(a1 + 544);
    if ( v8 )
    {
      if ( (*(_QWORD *)(v7 + 8) & 7LL) == 1 )
        v11 = v8 >> 3;
      else
        LODWORD(v11) = *(_DWORD *)(v8 - 8);
    }
    else
    {
      LODWORD(v11) = -1640531495;
    }
    v12 = v10 - 1;
    v13 = 32LL * v10;
    v14 = (__m128i *)((char *)v9 + v13);
    v15 = 32LL * ((unsigned int)v11 & (v10 - 1));
    v16 = &v9[(unsigned __int64)v15 / 0x10];
    if ( v15 == v13 )
    {
LABEL_33:
      if ( v9 != v16 )
      {
        v30 = *(__m128i **)(a1 + 536);
        while ( 1 )
        {
          v31 = v30->m128i_i32[1];
          if ( v31 != 2 )
            break;
          if ( (_DWORD)v11 == v30->m128i_i32[0] )
          {
            if ( v8 == v30->m128i_i64[1] )
              goto LABEL_14;
            v30 += 2;
            if ( v16 == v30 )
              goto LABEL_41;
          }
          else
          {
LABEL_36:
            v30 += 2;
            if ( v16 == v30 )
              goto LABEL_41;
          }
        }
        if ( !v31 )
          goto LABEL_41;
        goto LABEL_36;
      }
LABEL_41:
      v32 = 2 * v10;
      v33 = _mm_cvtsi32_si128(*(_DWORD *)v7);
      if ( 3 * v10 < 4 * (*(_DWORD *)(a1 + 548) + *(_DWORD *)(a1 + 552)) )
      {
        v45 = v32;
        v58 = 32LL * v32;
        v46 = (__m128i *)sub_186B270(v58);
        v47 = 2 * v10;
        v13 = v58;
        v9 = v46;
        v48 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v33));
        if ( 2 * v10 )
        {
          v49 = &v46[2 * v45];
          do
          {
            v46->m128i_i64[0] = 0;
            v46 += 2;
            v46[-2].m128i_i64[1] = 0;
            v46[-1].m128i_i64[0] = 0xFFFFFFFFLL;
            v46[-1].m128i_i64[1] = 0;
          }
          while ( v49 != v46 );
        }
        v50 = *(const __m128i **)(a1 + 536);
        v12 = 2 * v10 - 1;
        v14 = &v9[v58 / 0x10];
        v51 = (__m128i *)&v50[2 * *(unsigned int *)(a1 + 544)];
        if ( v50 != v51 )
        {
          do
          {
            while ( v50->m128i_i32[1] != 2 )
            {
              v50 += 2;
              if ( v51 == v50 )
                goto LABEL_93;
            }
            v52 = 32LL * (v50->m128i_i32[0] & (unsigned int)v12);
            v53 = &v9[(unsigned __int64)v52 / 0x10];
            if ( v58 == v52 )
            {
LABEL_99:
              if ( v9 == v53 )
              {
LABEL_107:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v54 = v9;
              while ( v54->m128i_i32[1] )
              {
                v54 += 2;
                if ( v53 == v54 )
                  goto LABEL_107;
              }
            }
            else
            {
              v54 = &v9[(unsigned __int64)v52 / 0x10];
              while ( v54->m128i_i32[1] )
              {
                v54 += 2;
                if ( v14 == v54 )
                  goto LABEL_99;
              }
            }
            v55 = _mm_loadu_si128(v50);
            v50 += 2;
            *v54 = v55;
            v54[1] = _mm_loadu_si128(v50 - 1);
          }
          while ( v51 != v50 );
LABEL_93:
          v51 = *(__m128i **)(a1 + 536);
        }
        if ( v51 )
        {
          sub_186B220(v51);
          v47 = 2 * v10;
          v13 = v58;
          v48 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v48));
        }
        *(_QWORD *)(a1 + 536) = v9;
        *(_DWORD *)(a1 + 544) = v47;
        *(_DWORD *)(a1 + 552) = 0;
        v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), v48).m128i_u64[0];
        if ( v8 )
          goto LABEL_43;
      }
      else
      {
        v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), v33).m128i_u64[0];
        if ( v8 )
        {
LABEL_43:
          if ( (v8 & 7) == 1 )
            v35 = v8 >> 3;
          else
            LODWORD(v35) = *(_DWORD *)(v8 - 8);
LABEL_45:
          v36 = 32LL * ((unsigned int)v35 & v12);
          v37 = &v9[(unsigned __int64)v36 / 0x10];
          if ( v36 != v13 )
          {
            result = (__int64)v9[(unsigned __int64)v36 / 0x10].m128i_i64;
            v38 = 0;
            while ( 1 )
            {
              v39 = *(_DWORD *)(result + 4);
              if ( v39 == 2 )
              {
                if ( (_DWORD)v35 == *(_DWORD *)result && v8 == *(_QWORD *)(result + 8) )
                {
                  *(_QWORD *)(result + 8) = v8;
                  *(_QWORD *)(result + 24) = 0;
                  *(_DWORD *)(result + 4) = 2;
                  *(_QWORD *)(result + 16) = v34;
                  goto LABEL_28;
                }
              }
              else
              {
                if ( !v39 )
                {
                  if ( v38 )
                    goto LABEL_77;
                  v38 = result;
                  goto LABEL_78;
                }
                v38 = result;
              }
              result += 32;
              if ( (__m128i *)result == v14 )
                goto LABEL_67;
            }
          }
          v38 = 0;
          while ( 1 )
          {
LABEL_67:
            if ( v37 == v9 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            result = v9->m128i_u32[1];
            if ( (_DWORD)result == 2 )
            {
              if ( (_DWORD)v35 == v9->m128i_i32[0] && v8 == v9->m128i_i64[1] )
              {
                v9->m128i_i64[1] = v8;
                v9[1].m128i_i64[1] = 0;
                v9->m128i_i32[1] = 2;
                v9[1].m128i_i64[0] = v34;
                goto LABEL_28;
              }
            }
            else
            {
              if ( !(_DWORD)result )
              {
                if ( v38 )
LABEL_77:
                  --*(_DWORD *)(a1 + 552);
                else
                  v38 = (__int64)v9;
LABEL_78:
                *(_QWORD *)(v38 + 8) = v8;
                *(_QWORD *)(v38 + 24) = 0;
                *(_DWORD *)(v38 + 4) = 2;
                *(_DWORD *)v38 = v35;
                *(_QWORD *)(v38 + 16) = v34;
                ++*(_DWORD *)(a1 + 548);
                goto LABEL_28;
              }
              v38 = (__int64)v9;
            }
            v9 += 2;
          }
        }
      }
      LODWORD(v35) = -1640531495;
      goto LABEL_45;
    }
    v17 = &v9[(unsigned __int64)v15 / 0x10];
    while ( 1 )
    {
      v18 = v17->m128i_i32[1];
      if ( v18 != 2 )
      {
        if ( !v18 )
          goto LABEL_41;
        goto LABEL_10;
      }
      if ( (_DWORD)v11 == v17->m128i_i32[0] && v8 == v17->m128i_i64[1] )
        break;
LABEL_10:
      v17 += 2;
      if ( v14 == v17 )
        goto LABEL_33;
    }
LABEL_14:
    if ( v8 )
    {
      if ( (*(_QWORD *)(v7 + 8) & 7LL) == 1 )
        v19 = v8 >> 3;
      else
        LODWORD(v19) = *(_DWORD *)(v8 - 8);
    }
    else
    {
      LODWORD(v19) = -1640531495;
    }
    v20 = 32LL * ((unsigned int)v19 & v12);
    v21 = &v9[(unsigned __int64)v20 / 0x10];
    if ( v13 == v20 )
    {
LABEL_55:
      while ( v21 != v9 )
      {
        v40 = v9->m128i_i32[1];
        if ( v40 == 2 )
        {
          if ( (_DWORD)v19 == v9->m128i_i32[0] && v8 == v9->m128i_i64[1] )
          {
            v22 = v9;
            goto LABEL_24;
          }
        }
        else if ( !v40 )
        {
          break;
        }
        v9 += 2;
      }
LABEL_32:
      v22 = nullptr;
      goto LABEL_24;
    }
    v22 = &v9[(unsigned __int64)v20 / 0x10];
    while ( 2 )
    {
      v23 = v22->m128i_i32[1];
      if ( v23 != 2 )
      {
        if ( !v23 )
          goto LABEL_32;
LABEL_20:
        v22 += 2;
        if ( v14 == v22 )
          goto LABEL_55;
        continue;
      }
      break;
    }
    if ( (_DWORD)v19 != v22->m128i_i32[0] || v8 != v22->m128i_i64[1] )
      goto LABEL_20;
LABEL_24:
    v24 = (unsigned __int64 *)sub_186B270(0x10u);
    v25 = *(_QWORD **)(a1 + 560);
    v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(*(_DWORD *)v7)).m128i_u64[0];
    v24[1] = v22[1].m128i_u64[1];
    *v24 = v26;
    v22[1].m128i_i64[1] = (__int64)v24;
    if ( v25 )
    {
      v27 = *((_DWORD *)v25 - 1);
      if ( v27 == *((_DWORD *)v25 - 2) )
      {
        v41 = (3 * v27 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v42 || v27 >= v41 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_DF63A0(v61, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v61);
          sub_233E40((__int64)v61);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v43 = (unsigned int *)sub_186B300(v25 - 1, v42);
        v44 = v43[1];
        v25 = v43 + 2;
        *v43 = v41;
        *(_QWORD *)(a1 + 560) = v43 + 2;
        LODWORD(v43) = v44;
        v29 = (unsigned __int64 **)&v25[v44];
        result = (unsigned int)((_DWORD)v43 + 1);
      }
      else
      {
        v28 = v27;
        result = v27 + 1;
        v29 = (unsigned __int64 **)&v25[v28];
      }
    }
    else
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      *v56 = 2;
      result = 1;
      v25 = v56 + 1;
      *(_QWORD *)(a1 + 560) = v25;
      v29 = (unsigned __int64 **)v25;
    }
    *v29 = v24;
    *((_DWORD *)v25 - 1) = result;
LABEL_28:
    v7 += 16;
  }
  while ( v57 != v7 );
  v6 = v60;
  if ( v60 )
    return sub_186B220((void *)(v6 - 8));
  return result;
}


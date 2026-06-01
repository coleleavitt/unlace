__int64 __fastcall sub_AC5380(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  _DWORD *v6; // rdx
  _DWORD *v7; // rsi
  unsigned int v8; // edi
  __m128i *v9; // r12
  unsigned int v10; // eax
  int v11; // r8d
  int v12; // esi
  __int8 *v13; // rdx
  __int8 *v14; // rax
  __int64 result; // rax
  __int64 v16; // r8
  unsigned int v17; // r11d
  unsigned int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // r13d
  unsigned int i; // r14d
  unsigned int v22; // r12d
  __m128i *v23; // rax
  __m128i si128; // xmm3
  __m128i v25; // xmm2
  __m128i *v26; // rdi
  __m128i *v27; // rdx
  __int64 v28; // rax
  const double *v29; // r9
  const double *v30; // r10
  __m128 *v31; // rbx
  unsigned int v32; // r8d
  const double *v33; // rsi
  int v34; // r11d
  double *v35; // rdi
  unsigned int v36; // edx
  _QWORD *v37; // rdi
  const double *v38; // rcx
  __m128 v39; // xmm0
  __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // r10
  int v43; // esi
  int v44; // edx
  __int8 *v45; // rax
  __int64 v46; // rdx
  unsigned int v47; // esi
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  char **exception; // rbp
  __int64 v51; // rdx
  int v52; // [rsp+0h] [rbp-98h]
  const double *v53; // [rsp+0h] [rbp-98h]
  __int64 v54; // [rsp+0h] [rbp-98h]
  unsigned int v55; // [rsp+8h] [rbp-90h]
  const double *v56; // [rsp+8h] [rbp-90h]
  int v57; // [rsp+10h] [rbp-88h]
  __int64 v58; // [rsp+10h] [rbp-88h]
  unsigned int ptr; // [rsp+18h] [rbp-80h]
  __int64 v60; // [rsp+20h] [rbp-78h]
  _QWORD *v61; // [rsp+28h] [rbp-70h]
  _QWORD *v62; // [rsp+30h] [rbp-68h]
  __int64 v63; // [rsp+38h] [rbp-60h]
  __int64 v64[11]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a1;
  v4 = *(_QWORD **)(a1 + 24);
  v5 = *(_QWORD **)(a1 + 16);
  if ( v4 != v5 )
  {
    v6 = (_DWORD *)*v5;
    v7 = (_DWORD *)*v4;
    if ( *(_DWORD *)*v4 >= *(_DWORD *)*v5 )
    {
      v6 = (_DWORD *)*v4;
      v7 = (_DWORD *)*v5;
      v4 = *(_QWORD **)(a1 + 16);
      v5 = *(_QWORD **)(a1 + 24);
    }
    v8 = *(_DWORD *)(a2 + 132);
    v9 = *(__m128i **)(a2 + 112);
    v10 = v8 - 1;
    if ( !*(_QWORD *)(a2 + 160) )
    {
      v16 = *(unsigned int *)(a2 + 120);
      if ( *(_QWORD *)(a2 + 152) >= (unsigned __int64)v9 + 24 * v16 )
      {
        v17 = 2 * v8;
        v18 = v16 - v8;
        v19 = 2 * (v16 - v8);
        if ( 2 * v8 < v8 || v19 < v18 )
        {
LABEL_46:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_139F3A(v64, "table overflow", v51);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v64);
          sub_233E40((__int64)v64);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v62 = v5;
        v20 = v17 - 1;
        v57 = 2 * v8;
        v63 = v2;
        v60 = 24LL * v17;
        v61 = v4;
        for ( i = v19; ; i *= 2 )
        {
          v22 = i + v57;
          if ( __CFADD__(i, v57) )
            goto LABEL_46;
          v23 = (__m128i *)sub_186B270(24LL * v22);
          si128 = _mm_load_si128((const __m128i *)&xmmword_18B6710);
          v25 = _mm_load_si128((const __m128i *)&xmmword_18B6720);
          v26 = v23;
          if ( v22 )
          {
            v27 = &v23[3 * (v22 >> 1)];
            do
            {
              *v23 = si128;
              v23 += 3;
              v23[-2] = v25;
              v23[-1] = 0;
            }
            while ( v23 != v27 );
          }
          v28 = *(unsigned int *)(a2 + 132);
          v29 = *(const double **)(a2 + 112);
          *(_DWORD *)(a2 + 136) = 0;
          v30 = &v29[3 * v28];
          v31 = (__m128 *)&v26->m128i_i8[v60];
          if ( v29 == v30 )
            break;
          v32 = i + v57;
          v33 = v29;
LABEL_22:
          if ( (*(_QWORD *)v33 & 7LL) == 1 )
            goto LABEL_23;
          v53 = v30;
          v38 = v33;
          v56 = v33;
          while ( 1 )
          {
            while ( 1 )
            {
              v41 = *((_QWORD *)v38 + 1);
              v42 = *((_QWORD *)v38 + 2);
              v43 = *(_DWORD *)(*(_QWORD *)v41 + 12LL);
              v44 = (*(_DWORD *)(*(_QWORD *)v42 + 12LL) - v43) ^ (v43 << 8);
              v45 = &v26->m128i_i8[24 * (v20 & (((v44 ^ ((v43 - v44) << 16)) + v44 - v43) ^ ((v43 - v44) << 10)))];
              if ( (*(_QWORD *)v45 & 7LL) != 1 )
                break;
              *(_QWORD *)v45 = 0;
              v38 = *(const double **)v38;
              ++*(_DWORD *)(a2 + 136);
              *((_QWORD *)v45 + 1) = v41;
              *((_QWORD *)v45 + 2) = v42;
              if ( !v38 )
              {
LABEL_34:
                v30 = v53;
                v33 = v56;
LABEL_23:
                v33 += 3;
                if ( v30 == v33 )
                {
                  v10 = v20;
                  v4 = v61;
                  v9 = v26;
                  v5 = v62;
                  v34 = v57;
                  v35 = (double *)v29;
                  v36 = v32;
                  v2 = v63;
                  goto LABEL_25;
                }
                goto LABEL_22;
              }
            }
            if ( (__m128 *)((char *)v26 + 24 * v22) == v31 )
              break;
            *v31 = _mm_loadh_ps((const double *)v45 + 1);
            v31 = (__m128 *)((char *)v31 + 24);
            v39 = _mm_loadh_ps(v38 + 1);
            v31[-1].m128_u64[1] = *((_QWORD *)v45 + 2);
            v40 = *((_QWORD *)v38 + 2);
            *(__m128 *)v45 = v39;
            v38 = *(const double **)v38;
            *((_QWORD *)v45 + 2) = v40;
            if ( !v38 )
              goto LABEL_34;
          }
          sub_186B220(v26);
          if ( 2 * i < i )
            goto LABEL_46;
        }
        v36 = i + v57;
        v4 = v61;
        v9 = v26;
        v5 = v62;
        v34 = v57;
        v2 = v63;
        v10 = v20;
        v35 = (double *)v29;
LABEL_25:
        if ( v35 )
        {
          ptr = v36;
          v58 = v2;
          v55 = v10;
          v52 = v34;
          sub_186B220(v35);
          v36 = ptr;
          v2 = v58;
          v10 = v55;
          v34 = v52;
        }
        *(_DWORD *)(a2 + 120) = v36;
        v7 = (_DWORD *)*v4;
        *(_QWORD *)(a2 + 112) = v9;
        v6 = (_DWORD *)*v5;
        *(_DWORD *)(a2 + 132) = v34;
        *(_QWORD *)(a2 + 152) = v31;
        *(_QWORD *)(a2 + 160) = 0;
        *(_QWORD *)(a2 + 168) = 0;
      }
    }
    v11 = v7[3];
    v12 = (v6[3] - v11) ^ (v11 << 8);
    v13 = &v9->m128i_i8[24 * ((((v12 ^ ((v11 - v12) << 16)) + v12 - v11) ^ ((v11 - v12) << 10)) & v10)];
    v14 = v13;
    if ( (*(_QWORD *)v13 & 7LL) == 1 )
    {
      v49 = nullptr;
      *(_QWORD *)(a2 + 136) = _mm_add_epi32(
                                _mm_loadl_epi64((const __m128i *)(a2 + 136)),
                                _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
LABEL_40:
      *((_QWORD *)v13 + 1) = v4;
      *((_QWORD *)v13 + 2) = v5;
      *(_QWORD *)v13 = v49;
      v46 = *(_QWORD *)(a2 + 104);
      if ( !v46 || (v47 = *(_DWORD *)(v46 - 4), v47 == *(_DWORD *)(v46 - 8)) )
      {
        v54 = v2;
        sub_AC5220((__int64 *)(a2 + 104));
        v46 = *(_QWORD *)(a2 + 104);
        v2 = v54;
        v47 = *(_DWORD *)(v46 - 4);
      }
      v48 = (_QWORD *)(v46 + 16LL * v47);
      *v48 = v4;
      v48[1] = v5;
      *(_DWORD *)(v46 - 4) = v47 + 1;
    }
    else
    {
      while ( v4 != *((_QWORD **)v14 + 1) || v5 != *((_QWORD **)v14 + 2) )
      {
        v14 = *(__int8 **)v14;
        ++*(_DWORD *)(a2 + 144);
        if ( !v14 )
        {
          v49 = *(_QWORD **)(a2 + 160);
          ++*(_DWORD *)(a2 + 140);
          if ( v49 )
          {
            *(_QWORD *)(a2 + 160) = *v49;
          }
          else
          {
            v49 = *(_QWORD **)(a2 + 152);
            *(_QWORD *)(a2 + 152) = v49 + 3;
          }
          *(__m128 *)v49 = _mm_loadh_ps((const double *)v13 + 1);
          v49[2] = *((_QWORD *)v13 + 2);
          goto LABEL_40;
        }
      }
    }
  }
  result = *(unsigned int *)(v2 + 40);
  if ( *(_DWORD *)(v2 + 40) >> 1 )
  {
    v37 = *(_QWORD **)(a2 + 176);
    LODWORD(v64[0]) = *(_DWORD *)(v2 + 40);
    return sub_AB8CB0(v37, (unsigned int *)v64);
  }
  return result;
}


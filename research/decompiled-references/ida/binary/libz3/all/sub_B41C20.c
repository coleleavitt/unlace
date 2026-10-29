__int64 __fastcall sub_B41C20(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v3; // r12
  __int64 v5; // rax
  double v6; // xmm0_8
  __int64 v7; // r14
  __int64 v8; // rcx
  __m128i *v9; // rbp
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __m128i *v12; // r13
  int v13; // esi
  __int64 v14; // rax
  __m128i *v15; // rdi
  double *m128i_i64; // rax
  __m128i *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdi
  __int64 result; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rsi
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // r8
  __int64 v31; // r14
  int *v32; // r13
  int v33; // edx
  int v34; // r11d
  __int64 v35; // r10
  int v36; // r12d
  unsigned int v37; // ecx
  __int64 v38; // rbp
  __int64 v39; // r9
  double v40; // xmm0_8
  unsigned int v41; // ecx
  __int64 v42; // rbp
  double v43; // xmm2_8
  unsigned int *v44; // r13
  __int64 v45; // r15
  double v46; // xmm0_8
  __int64 v47; // r9
  int v48; // r12d
  unsigned int *v49; // rbx
  unsigned int v50; // edx
  __int64 v51; // rax
  unsigned int v52; // ebp
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  __m128i *v56; // rax
  int v57; // r10d
  __m128i *v58; // r8
  const __m128i *v59; // r15
  __m128i *v60; // r11
  __int64 v61; // rax
  __m128i *v62; // rdx
  __m128i *v63; // rax
  double v64; // xmm1_8
  __int64 v65; // r8
  _QWORD *v66; // rax
  int v67; // [rsp+8h] [rbp-90h]
  size_t v68; // [rsp+8h] [rbp-90h]
  int v69; // [rsp+14h] [rbp-84h]
  __int64 v70[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v5 + 10320) )
    goto LABEL_19;
  v6 = *(double *)(*(_QWORD *)(v5 + 8880) + 8LL * a2);
  if ( v6 <= 0.0 )
    goto LABEL_19;
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8840) + 8LL * a2);
  if ( !v7 )
    goto LABEL_19;
  v8 = *(unsigned int *)(a1 + 56);
  if ( 3 * (int)v8 < (unsigned int)(4 * (*(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 64))) )
  {
    v69 = 2 * v8;
    v68 = 16LL * (unsigned int)(2 * v8);
    v56 = (__m128i *)sub_186B270(v68);
    v57 = v69;
    v11 = v68;
    v9 = v56;
    v58 = &v56[v68 / 0x10];
    if ( v69 )
    {
      do
      {
        v56->m128i_i64[0] = 0;
        ++v56;
        v56[-1].m128i_i64[1] = 0;
      }
      while ( v56 != v58 );
    }
    v59 = *(const __m128i **)(a1 + 48);
    v10 = v69 - 1;
    v12 = v58;
    v60 = (__m128i *)&v59[*(unsigned int *)(a1 + 56)];
    if ( v59 != v60 )
    {
      do
      {
        if ( v59->m128i_i64[0] > 1uLL )
        {
          v61 = 16LL * (*(_DWORD *)(v59->m128i_i64[0] + 12) & v10);
          v62 = &v9[(unsigned __int64)v61 / 0x10];
          if ( v68 == v61 )
          {
LABEL_68:
            if ( v9 == v62 )
            {
LABEL_83:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v63 = v9;
            while ( v63->m128i_i64[0] )
            {
              if ( v62 == ++v63 )
                goto LABEL_83;
            }
          }
          else
          {
            v63 = &v9[(unsigned __int64)v61 / 0x10];
            while ( v63->m128i_i64[0] )
            {
              if ( v58 == ++v63 )
                goto LABEL_68;
            }
          }
          *v63 = _mm_loadu_si128(v59);
        }
        ++v59;
      }
      while ( v60 != v59 );
      v3 = a2;
      v60 = *(__m128i **)(a1 + 48);
    }
    if ( v60 )
    {
      sub_186B220(v60);
      v57 = v69;
      v11 = v68;
      v10 = v69 - 1;
    }
    *(_QWORD *)(a1 + 48) = v9;
    *(_DWORD *)(a1 + 56) = v57;
    *(_DWORD *)(a1 + 64) = 0;
  }
  else
  {
    v9 = *(__m128i **)(a1 + 48);
    v10 = v8 - 1;
    v11 = 16 * v8;
    v12 = (__m128i *)((char *)v9 + v11);
  }
  v13 = *(_DWORD *)(v7 + 12);
  v14 = 16LL * (v13 & v10);
  v15 = &v9[(unsigned __int64)v14 / 0x10];
  if ( v14 != v11 )
  {
    m128i_i64 = (double *)v9[(unsigned __int64)v14 / 0x10].m128i_i64;
    v17 = nullptr;
    while ( 1 )
    {
      v18 = *(_QWORD *)m128i_i64;
      if ( *(_QWORD *)m128i_i64 > 1u )
      {
        if ( *(_DWORD *)(v18 + 12) == v13 && v7 == v18 )
        {
          *(_QWORD *)m128i_i64 = v7;
          m128i_i64[1] = v6;
          goto LABEL_15;
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( v17 )
            goto LABEL_74;
          v17 = (__m128i *)m128i_i64;
          goto LABEL_75;
        }
        v17 = (__m128i *)m128i_i64;
      }
      m128i_i64 += 2;
      if ( m128i_i64 == (double *)v12 )
        goto LABEL_43;
    }
  }
  v17 = nullptr;
  while ( 1 )
  {
LABEL_43:
    if ( v15 == v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v51 = v9->m128i_i64[0];
    if ( v9->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v51 + 12) == v13 && v7 == v51 )
    {
      v9->m128i_i64[0] = v7;
      *(double *)&v9->m128i_i64[1] = v6;
      goto LABEL_15;
    }
LABEL_42:
    ++v9;
  }
  if ( v51 )
  {
    v17 = v9;
    goto LABEL_42;
  }
  if ( v17 )
LABEL_74:
    --*(_DWORD *)(a1 + 64);
  else
    v17 = v9;
LABEL_75:
  v17->m128i_i64[0] = v7;
  *(double *)&v17->m128i_i64[1] = v6;
  ++*(_DWORD *)(a1 + 60);
LABEL_15:
  v19 = *(_QWORD **)(a1 + 80);
  ++*(_DWORD *)(v7 + 8);
  if ( v19 )
  {
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v52 = (3 * v20 + 1) >> 1;
      v53 = 8 * v52 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v53 || v20 >= v52 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v70, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v70);
        sub_233E40((__int64)v70);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v54 = (unsigned int *)sub_186B300(v19 - 1, v53);
      v55 = v54[1];
      v19 = v54 + 2;
      *v54 = v52;
      *(_QWORD *)(a1 + 80) = v54 + 2;
      LODWORD(v54) = v55;
      v23 = &v19[v55];
      v22 = (_DWORD)v54 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[v21];
    }
  }
  else
  {
    v66 = (_QWORD *)sub_186B270(0x18u);
    v19 = v66 + 1;
    *v66 = 2;
    v22 = 1;
    *(_QWORD *)(a1 + 80) = v19;
    v23 = v19;
  }
  *v23 = v7;
  *((_DWORD *)v19 - 1) = v22;
LABEL_19:
  v24 = *(_QWORD *)(a1 + 40);
  if ( v24 )
    result = *(unsigned int *)(v24 - 4);
  else
    result = 0;
  if ( (int)v3 < (int)result )
  {
    v26 = (_DWORD *)(v24 + 4 * v3);
    result = (unsigned int)*v26;
    if ( (_DWORD)result )
    {
      v27 = *(_QWORD *)(a1 + 32);
      if ( v27 )
      {
        v28 = *(_DWORD *)(v27 - 4);
        v29 = v28 - 1;
      }
      else
      {
        v29 = -1;
        v28 = 0;
      }
      if ( (_DWORD)result == v29 )
      {
        *v26 = 0;
        --*(_DWORD *)(v27 - 4);
      }
      else
      {
        v30 = (unsigned int)result;
        v31 = *(unsigned int *)(v27 + 4LL * (unsigned int)(v28 - 1));
        v32 = (int *)(v27 + 4LL * (unsigned int)result);
        *v32 = v31;
        *(_DWORD *)(v24 + 4 * v31) = result;
        *v26 = 0;
        v33 = (int)result >> 1;
        v34 = *(_DWORD *)(v27 - 4) - 1;
        *(_DWORD *)(v27 - 4) = v34;
        v35 = (unsigned int)*v32;
        v36 = *v32;
        if ( (int)result >> 1
          && (v37 = *(_DWORD *)(v27 + 4LL * (unsigned int)v33),
              v38 = **(_QWORD **)(a1 + 24),
              v39 = v37,
              v40 = *(double *)(v38 + 8LL * v37),
              *(double *)(v38 + 8 * v31) > v40) )
        {
          v64 = *(double *)(v38 + 8 * v35);
          while ( 1 )
          {
            v65 = 4 * v30;
            if ( v64 <= v40 )
              break;
            *(_DWORD *)(v27 + v65) = v37;
            *(_DWORD *)(v24 + 4 * v39) = result;
            if ( !(v33 >> 1) )
            {
              v65 = 4;
              result = 1;
              break;
            }
            v39 = *(unsigned int *)(v27 + 4LL * (unsigned int)(v33 >> 1));
            result = (unsigned int)v33;
            v33 >>= 1;
            v30 = (unsigned int)result;
            v40 = *(double *)(v38 + 8 * v39);
            v37 = v39;
          }
          *(_DWORD *)(v27 + v65) = v36;
          *(_DWORD *)(v24 + 4 * v35) = result;
        }
        else
        {
          v41 = 2 * result;
          if ( 2 * (int)result < v34 )
          {
            v67 = *v32;
            v42 = **(_QWORD **)(a1 + 24);
            v43 = *(double *)(v42 + 8 * v35);
            while ( 1 )
            {
              v50 = v41 + 1;
              v49 = (unsigned int *)(v27 + 4LL * v41);
              v47 = *v49;
              v46 = *(double *)(v42 + 8 * v47);
              v48 = *v49;
              if ( v34 <= (int)(v41 + 1)
                || (v44 = (unsigned int *)(v27 + 4LL * v50), v45 = *v44, *(double *)(v42 + 8 * v45) <= v46) )
              {
                v50 = v41;
              }
              else
              {
                v46 = *(double *)(v42 + 8 * v45);
                v47 = *v44;
                v48 = *v44;
                v49 = (unsigned int *)(v27 + 4LL * v50);
              }
              v32 = (int *)(v27 + 4 * v30);
              if ( v46 <= v43 )
              {
                v36 = v67;
                goto LABEL_38;
              }
              v41 = 2 * v50;
              *v32 = v48;
              *(_DWORD *)(v24 + 4 * v47) = result;
              if ( v34 <= (int)(2 * v50) )
                break;
              v30 = v50;
              result = v50;
            }
            v36 = v67;
            v32 = (int *)v49;
            result = v50;
          }
LABEL_38:
          *v32 = v36;
          *(_DWORD *)(v24 + 4 * v35) = result;
        }
      }
    }
  }
  return result;
}


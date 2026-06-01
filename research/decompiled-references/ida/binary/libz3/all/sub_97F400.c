__m128 *__fastcall sub_97F400(__m128 *a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  _DWORD *v9; // rsi
  size_t v10; // rdx
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  char *v13; // r12
  __int64 v14; // rcx
  unsigned int *v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned int v19; // eax
  char *j; // r14
  char *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // eax
  unsigned int *v25; // r14
  __int64 v26; // r12
  unsigned int *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rsi
  _QWORD *v30; // r12
  _QWORD *v31; // rdx
  _DWORD *v32; // rcx
  _DWORD *v33; // r14
  unsigned int v34; // ebp
  _DWORD *v35; // rsi
  __int64 v36; // rax
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 *v43; // rbx
  unsigned __int64 v44; // rbp
  __int64 v45; // rsi
  bool v46; // zf
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  unsigned int v51; // eax
  char *i; // r15
  __int64 v53; // rdx
  char *v54; // r14
  __int64 v55; // rsi
  __int64 v56; // rdx
  _QWORD *v57; // rax
  __int64 k; // r15
  unsigned int v59; // eax
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // r14
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  __int64 *v66; // rcx
  unsigned int v67; // ecx
  size_t v68; // rsi
  unsigned int *v69; // rax
  _QWORD *v70; // r12
  _BYTE *src; // [rsp+8h] [rbp-D0h]
  unsigned int srca; // [rsp+8h] [rbp-D0h]
  unsigned int v73; // [rsp+10h] [rbp-C8h]
  unsigned int v74; // [rsp+10h] [rbp-C8h]
  __int64 v75; // [rsp+18h] [rbp-C0h]
  unsigned int v76; // [rsp+18h] [rbp-C0h]
  unsigned int v77; // [rsp+24h] [rbp-B4h]
  unsigned int *v78; // [rsp+28h] [rbp-B0h]
  int v79[2]; // [rsp+30h] [rbp-A8h] BYREF
  __m128 *v80; // [rsp+38h] [rbp-A0h]
  __int64 v81; // [rsp+50h] [rbp-88h]
  __int64 v82; // [rsp+60h] [rbp-78h]
  _QWORD v83[3]; // [rsp+68h] [rbp-70h] BYREF
  __int64 v84[11]; // [rsp+80h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 24);
  ++*(_DWORD *)(a2 + 944);
  v80 = a1;
  *(_QWORD *)v79 = v5;
  v81 = v5;
  v6 = *(_BYTE **)(a2 + 736);
  src = v6;
  if ( !v6 )
    goto LABEL_30;
  v7 = *((unsigned int *)v6 - 1);
  v8 = *((unsigned int *)v6 - 2);
  srca = v8;
  v75 = sub_186B270(4 * v8 + 8);
  v9 = *(_DWORD **)(a2 + 736);
  *(_QWORD *)v75 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(srca), _mm_cvtsi32_si128(v7)).m128i_u64[0];
  src = (_BYTE *)(v75 + 8);
  if ( v9 )
  {
    v10 = 4LL * (unsigned int)*(v9 - 1);
    if ( v10 <= 4 )
    {
      if ( v10 == 4 )
        *(_DWORD *)(v75 + 8) = *v9;
    }
    else
    {
      memmove((void *)(v75 + 8), v9, v10);
    }
  }
  v11 = 4 * v7;
  v78 = (unsigned int *)&src[v11];
  if ( &src[v11] == src )
  {
LABEL_30:
    v16 = a2 + 64;
    goto LABEL_31;
  }
  _BitScanReverse64(&v12, v11 >> 2);
  sub_9816D0(src, &src[v11], 2LL * (int)v12, a2);
  v13 = (char *)(v75 + 12);
  if ( (unsigned __int64)v11 <= 0x40 )
  {
    v46 = v11 == 4;
    v16 = a2 + 64;
    if ( v46 )
      goto LABEL_31;
    while ( 1 )
    {
      v48 = *(_QWORD *)(a2 + 704);
      v74 = *(_DWORD *)v13;
      v49 = v48 + 16LL * *(unsigned int *)(v75 + 8);
      v50 = 16LL * *(unsigned int *)v13 + v48;
      if ( (*(_BYTE *)(v49 + 4) & 1) != 0 || (*(_BYTE *)(v50 + 4) & 1) != 0 )
      {
        v51 = (unsigned int)sub_182EB00(a2 + 64, v49, v50) >> 31;
        v74 = *(_DWORD *)v13;
      }
      else
      {
        LOBYTE(v51) = *(_DWORD *)v49 < *(_DWORD *)v50;
      }
      if ( (_BYTE)v51 )
      {
        if ( v13 - src <= 4 )
        {
          if ( v13 - src == 4 )
            *(_DWORD *)v13 = *(_DWORD *)(v75 + 8);
        }
        else
        {
          memmove((void *)(v75 + 12), (const void *)(v75 + 8), v13 - src);
        }
        *(_DWORD *)(v75 + 8) = v74;
        goto LABEL_66;
      }
      for ( i = v13; ; *((_DWORD *)i + 1) = *(_DWORD *)i )
      {
        v53 = *(_QWORD *)(a2 + 704);
        v54 = i;
        v55 = v53 + 16LL * *((unsigned int *)i - 1);
        v56 = 16LL * v74 + v53;
        if ( (*(_BYTE *)(v55 + 4) & 1) != 0 || (*(_BYTE *)(v56 + 4) & 1) != 0 )
          break;
        i -= 4;
        if ( *(_DWORD *)v55 >= *(_DWORD *)v56 )
          goto LABEL_77;
LABEL_73:
        ;
      }
      i -= 4;
      if ( (int)sub_182EB00(a2 + 64, v55, v56) < 0 )
        goto LABEL_73;
LABEL_77:
      *(_DWORD *)v54 = v74;
LABEL_66:
      v13 += 4;
      if ( v78 == (unsigned int *)v13 )
        goto LABEL_31;
    }
  }
  v14 = *(_QWORD *)(a2 + 704);
  v15 = (unsigned int *)(v75 + 72);
  v16 = a2 + 64;
  do
  {
    while ( 1 )
    {
      v77 = *(_DWORD *)v13;
      v17 = v14 + 16LL * *(unsigned int *)v13;
      v18 = v14 + 16LL * *(unsigned int *)(v75 + 8);
      if ( (*(_BYTE *)(v18 + 4) & 1) != 0 || (*(_BYTE *)(v17 + 4) & 1) != 0 )
      {
        v19 = (unsigned int)sub_182EB00(a2 + 64, v18, v17) >> 31;
        v77 = *(_DWORD *)v13;
      }
      else
      {
        LOBYTE(v19) = *(_DWORD *)v18 < *(_DWORD *)v17;
      }
      if ( (_BYTE)v19 )
        break;
      v14 = *(_QWORD *)(a2 + 704);
      for ( j = v13; ; *((_DWORD *)j + 1) = *(_DWORD *)j )
      {
        v21 = j;
        v22 = v14 + 16LL * v77;
        v23 = v14 + 16LL * *((unsigned int *)j - 1);
        if ( (*(_BYTE *)(v23 + 4) & 1) != 0 || (*(_BYTE *)(v22 + 4) & 1) != 0 )
          break;
        j -= 4;
        if ( *(_DWORD *)v23 >= *(_DWORD *)v22 )
          goto LABEL_21;
LABEL_17:
        ;
      }
      v24 = sub_182EB00(a2 + 64, v23, v22);
      v14 = *(_QWORD *)(a2 + 704);
      j -= 4;
      if ( v24 < 0 )
        goto LABEL_17;
LABEL_21:
      v13 += 4;
      *(_DWORD *)v21 = v77;
      if ( v15 == (unsigned int *)v13 )
        goto LABEL_22;
    }
    if ( v13 - src <= 4 )
    {
      if ( v13 - src == 4 )
        *(_DWORD *)v13 = *(_DWORD *)(v75 + 8);
    }
    else
    {
      memmove((void *)(v75 + 12), (const void *)(v75 + 8), v13 - src);
    }
    v13 += 4;
    v14 = *(_QWORD *)(a2 + 704);
    *(_DWORD *)(v75 + 8) = v77;
  }
  while ( v15 != (unsigned int *)v13 );
LABEL_22:
  while ( 2 )
  {
    v25 = v15;
    v73 = *v15;
    v26 = 16LL * *v15;
    while ( 2 )
    {
      v27 = v25;
      v28 = v14 + v26;
      v29 = v14 + 16LL * *(v25 - 1);
      if ( (*(_BYTE *)(v29 + 4) & 1) == 0 && (*(_BYTE *)(v28 + 4) & 1) == 0 )
      {
        --v25;
        if ( *(_DWORD *)v29 >= *(_DWORD *)v28 )
          break;
        goto LABEL_24;
      }
      --v25;
      if ( (int)sub_182EB00(a2 + 64, v29, v28) < 0 )
      {
LABEL_24:
        v14 = *(_QWORD *)(a2 + 704);
        v25[1] = *v25;
        continue;
      }
      break;
    }
    ++v15;
    *v27 = v73;
    if ( v78 != v15 )
    {
      v14 = *(_QWORD *)(a2 + 704);
      continue;
    }
    break;
  }
LABEL_31:
  v82 = v16;
  v83[0] = 0;
  v83[1] = 0;
  sub_182F200(v16, v83);
  v30 = nullptr;
  if ( src )
  {
    for ( k = 0; (unsigned int)k < *((_DWORD *)src - 1); ++k )
    {
      if ( (v83[0] & 0x100000000LL) != 0 || (*(_BYTE *)(a2 + 836) & 1) != 0 )
        v59 = (unsigned int)sub_182EB00(v16, v83, a2 + 832) >> 31;
      else
        LOBYTE(v59) = SLODWORD(v83[0]) < *(_DWORD *)(a2 + 832);
      if ( !(_BYTE)v59 )
        break;
      v60 = *(unsigned int *)&src[4 * k];
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 936) + v60) )
      {
        sub_1839610(v82, v83, *(_QWORD *)(a2 + 704) + 16 * v60);
        v61 = sub_15E1A70(v79[0]);
        v62 = v61;
        if ( v61 )
          ++*(_DWORD *)(v61 + 8);
        if ( v30 )
        {
          v63 = *((_DWORD *)v30 - 1);
          if ( v63 == *((_DWORD *)v30 - 2) )
          {
            v67 = (3 * v63 + 1) >> 1;
            v68 = 8 * v67 + 8;
            if ( 8 * v63 + 8 >= (unsigned int)v68 || v63 >= v67 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v84, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v84);
              sub_233E40((__int64)v84);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v76 = (3 * v63 + 1) >> 1;
            v69 = (unsigned int *)sub_186B300(v30 - 1, v68);
            v30 = v69 + 2;
            *v69 = v76;
            LODWORD(v69) = v69[1];
            v66 = &v30[(unsigned int)v69];
            v65 = (_DWORD)v69 + 1;
          }
          else
          {
            v64 = v63;
            v65 = v63 + 1;
            v66 = &v30[v64];
          }
        }
        else
        {
          v70 = (_QWORD *)sub_186B270(0x18u);
          *v70 = 2;
          v65 = 1;
          v30 = v70 + 1;
          v66 = v30;
        }
        *v66 = v62;
        *((_DWORD *)v30 - 1) = v65;
      }
    }
  }
  if ( *(_BYTE *)(a2 + 848) )
  {
    if ( (*(_BYTE *)(a2 + 812) & 1) != 0 || (*(_BYTE *)(a2 + 836) & 1) != 0 )
    {
      if ( (int)sub_182EB00(*(_QWORD *)(a2 + 800), a2 + 808, a2 + 832) < 0 )
        goto LABEL_33;
    }
    else if ( *(_DWORD *)(a2 + 808) < *(_DWORD *)(a2 + 832) )
    {
      goto LABEL_33;
    }
  }
  else
  {
LABEL_33:
    v31 = *(_QWORD **)(a2 + 760);
    *(_BYTE *)(a2 + 848) = 1;
    if ( v31 )
    {
      v32 = *(_DWORD **)(a2 + 736);
      *((_DWORD *)v31 - 1) = 0;
      v33 = v32;
      if ( v32 )
      {
        v34 = 0;
        if ( *(v32 - 1) )
        {
          while ( 1 )
          {
            v36 = *((unsigned int *)v31 - 1);
            if ( (_DWORD)v36 == *((_DWORD *)v31 - 2) )
            {
              v37 = (unsigned int)(3 * v36 + 1) >> 1;
              v38 = 4 * v37 + 8;
              if ( 4 * (int)v36 + 8 >= (unsigned int)v38 || (unsigned int)v36 >= v37 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v84, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v84);
                sub_233E40((__int64)v84);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v39 = (unsigned int *)sub_186B300(v31 - 1, v38);
              v31 = v39 + 2;
              *v39 = v37;
              v40 = v39[1];
              *(_QWORD *)(a2 + 760) = v31;
              v32 = *(_DWORD **)(a2 + 736);
              v35 = (_DWORD *)v31 + v40;
            }
            else
            {
              v35 = (_DWORD *)v31 + v36;
            }
LABEL_38:
            ++v34;
            *v35 = *v33;
            ++*((_DWORD *)v31 - 1);
            if ( !v32 || v34 >= *(v32 - 1) )
              break;
            v33 = &v32[v34];
          }
        }
      }
    }
    else
    {
      v33 = *(_DWORD **)(a2 + 736);
      if ( v33 && *(v33 - 1) )
      {
        v57 = (_QWORD *)sub_186B270(0x10u);
        v31 = v57 + 1;
        *v57 = 2;
        v32 = *(_DWORD **)(a2 + 736);
        v34 = 0;
        *(_QWORD *)(a2 + 760) = v57 + 1;
        v35 = v57 + 1;
        goto LABEL_38;
      }
    }
  }
  v41 = sub_15E1AF0(v79[0]);
  *v80 = _mm_loadh_ps((const double *)v79);
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  sub_182EF00(v82, v83);
  if ( src )
    sub_186B220(src - 8);
  if ( v30 )
  {
    v42 = *(_QWORD *)v79;
    v43 = v30;
    v44 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    if ( (unsigned __int64)v30 < v44 )
    {
      do
      {
        while ( 1 )
        {
          v45 = *v43;
          if ( *v43 )
          {
            v46 = (*(_DWORD *)(v45 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( (unsigned __int64)++v43 >= v44 )
            goto LABEL_59;
        }
        ++v43;
        sub_15D7BC0(v42, v45);
      }
      while ( (unsigned __int64)v43 < v44 );
    }
LABEL_59:
    sub_186B220(v30 - 1);
  }
  return v80;
}


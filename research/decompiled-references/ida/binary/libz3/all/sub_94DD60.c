__int64 __fastcall sub_94DD60(__int64 a1, __int64 *a2, __int64 *a3)
{
  char **v3; // r13
  char **exception; // r13
  char **v5; // r13
  unsigned int *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 *v10; // r13
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned int v13; // ebp
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  unsigned int *v17; // r13
  __int64 *v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbp
  void *v23; // rdi
  int v24; // eax
  void *v25; // rbp
  __int64 v26; // rax
  unsigned int *v27; // rdx
  void *v28; // r13
  void *v29; // rbp
  unsigned int v31; // r14d
  size_t v32; // rsi
  unsigned int *v33; // rax
  void *v34; // r13
  void *v35; // rbp
  unsigned int v36; // r13d
  char *v37; // rax
  unsigned int v38; // r13d
  unsigned int j; // eax
  int **v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // r12
  void *v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // r12d
  _QWORD *v49; // rax
  __m128i v50; // xmm1
  _QWORD *v51; // r12
  __int64 v52; // r13
  __int64 v53; // r15
  __int64 v54; // rbx
  int v55; // eax
  void *v56; // r14
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // r12
  void *v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rax
  unsigned int v63; // r12d
  _QWORD *v64; // rax
  __m128i v65; // xmm2
  _QWORD *v66; // r12
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 i; // rbx
  int v70; // eax
  void *v71; // r14
  unsigned int *v72; // r8
  __int64 v73; // rax
  unsigned int *v74; // rax
  __int64 v75; // rdx
  int v76; // eax
  unsigned int *v77; // rdx
  unsigned int v78; // edx
  unsigned int v79; // ecx
  unsigned int *v80; // rax
  _QWORD *v81; // rax
  unsigned int *v82; // [rsp+8h] [rbp-F0h]
  unsigned int v84; // [rsp+10h] [rbp-E8h]
  unsigned int v85; // [rsp+10h] [rbp-E8h]
  _DWORD *v86; // [rsp+18h] [rbp-E0h]
  unsigned int v87; // [rsp+24h] [rbp-D4h]
  int v88[2]; // [rsp+30h] [rbp-C8h]
  void *dest; // [rsp+38h] [rbp-C0h]
  char *desta; // [rsp+38h] [rbp-C0h]
  unsigned int v92; // [rsp+48h] [rbp-B0h]
  unsigned int v93; // [rsp+4Ch] [rbp-ACh]
  int v94[2]; // [rsp+60h] [rbp-98h] BYREF
  int v95[2]; // [rsp+68h] [rbp-90h]
  int v96[2]; // [rsp+70h] [rbp-88h] BYREF
  int v97[2]; // [rsp+78h] [rbp-80h]
  int v98; // [rsp+80h] [rbp-78h] BYREF
  char v99; // [rsp+84h] [rbp-74h]
  int v100[2]; // [rsp+88h] [rbp-70h]
  int v101; // [rsp+90h] [rbp-68h] BYREF
  char v102; // [rsp+94h] [rbp-64h]
  int v103[2]; // [rsp+98h] [rbp-60h]
  __int64 v104[11]; // [rsp+A0h] [rbp-58h] BYREF

  if ( !*a2 || !*(_DWORD *)(*a2 - 4) )
    return 1;
  v7 = (unsigned int *)(sub_186B270(0x10u) + 8);
  v8 = *a2;
  v9 = 0;
  *((_QWORD *)v7 - 1) = 2;
  v82 = v7;
  while ( 1 )
  {
    *v7 = v9;
    ++*(v82 - 1);
    v10 = (__int64 *)(v8 + 8LL * v9);
    sub_949A20(a1, v10);
    v11 = sub_94A480(a1, v10);
    if ( !(_BYTE)v11 )
    {
      if ( v10 == a3 )
        goto LABEL_75;
      v42 = *a3;
      if ( *a3 )
      {
        v43 = *(unsigned int *)(v42 - 4);
        if ( (_DWORD)v43 )
        {
          v44 = v42 + 32 * v43;
          do
          {
            v45 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v42);
            v46 = v42 + 16;
            v42 += 32;
            sub_182CBA0(v45, v46);
          }
          while ( v42 != v44 );
          v42 = *a3;
        }
        sub_186B220((void *)(v42 - 8));
      }
      v47 = *v10;
      if ( !*v10 )
      {
        *a3 = 0;
        goto LABEL_75;
      }
      v48 = *(_DWORD *)(v47 - 4);
      v84 = *(_DWORD *)(v47 - 8);
      v49 = (_QWORD *)sub_186B270(32LL * v84 + 8);
      v50 = _mm_cvtsi32_si128(v48);
      v51 = v49 + 1;
      *v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v84), v50).m128i_u64[0];
      *a3 = (__int64)(v49 + 1);
      v52 = *v10;
      if ( !v52 )
        goto LABEL_75;
      v53 = 32LL * *(unsigned int *)(v52 - 4);
      v54 = v52 + v53;
      if ( v52 == v52 + v53 )
        goto LABEL_75;
      while ( 1 )
      {
        *((_BYTE *)v51 + 4) &= 0xFCu;
        v56 = qword_1C7F2C0;
        *((_BYTE *)v51 + 20) &= 0xFCu;
        *(_DWORD *)v51 = 0;
        v51[1] = 0;
        *((_DWORD *)v51 + 4) = 1;
        v51[3] = 0;
        if ( (*(_BYTE *)(v52 + 4) & 1) != 0 )
        {
          sub_182C690(v56, v51, v52);
          if ( (*(_BYTE *)(v52 + 20) & 1) != 0 )
          {
LABEL_71:
            sub_182C690(v56, v51 + 2, v52 + 16);
            goto LABEL_68;
          }
        }
        else
        {
          *(_DWORD *)v51 = *(_DWORD *)v52;
          if ( (*(_BYTE *)(v52 + 20) & 1) != 0 )
            goto LABEL_71;
        }
        v55 = *(_DWORD *)(v52 + 16);
        *((_BYTE *)v51 + 20) &= ~1u;
        *((_DWORD *)v51 + 4) = v55;
LABEL_68:
        v52 += 32;
        v51 += 4;
        if ( v54 == v52 )
          goto LABEL_75;
      }
    }
    v8 = *a2;
    ++v9;
    if ( !*a2 )
      goto LABEL_13;
    if ( v9 >= *(_DWORD *)(v8 - 4) )
      break;
    v12 = *(v82 - 1);
    if ( (_DWORD)v12 == *(v82 - 2) )
    {
      v13 = (unsigned int)(3 * v12 + 1) >> 1;
      v14 = 4 * v13 + 8;
      if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v104, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v104);
        sub_233E40((__int64)v104);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v82 - 2, v14);
      *v15 = v13;
      v82 = v15 + 2;
      v8 = *a2;
      v7 = &v15[v15[1] + 2];
    }
    else
    {
      v7 = &v82[v12];
    }
  }
  if ( !v82 )
    return 1;
LABEL_13:
  v87 = 1;
  v86 = nullptr;
  do
  {
    while ( 2 )
    {
      v16 = v87 - 1;
      if ( (unsigned int)v16 >= *(v82 - 1) )
      {
        if ( v86 )
          sub_186B220(v86 - 2);
        v11 = 1;
        goto LABEL_75;
      }
      v17 = &v82[v16];
      v18 = (__int64 *)(*a2 + 8LL * *v17);
      sub_949A20(a1, v18);
      v11 = sub_94A480(a1, v18);
      if ( !(_BYTE)v11 )
      {
        if ( v18 != a3 )
        {
          v57 = *a3;
          if ( *a3 )
          {
            v58 = *(unsigned int *)(v57 - 4);
            if ( (_DWORD)v58 )
            {
              v59 = v57 + 32 * v58;
              do
              {
                v60 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v57);
                v61 = v57 + 16;
                v57 += 32;
                sub_182CBA0(v60, v61);
              }
              while ( v59 != v57 );
              v57 = *a3;
            }
            sub_186B220((void *)(v57 - 8));
          }
          v62 = *v18;
          if ( *v18 )
          {
            v63 = *(_DWORD *)(v62 - 4);
            v85 = *(_DWORD *)(v62 - 8);
            v64 = (_QWORD *)sub_186B270(32LL * v85 + 8);
            v65 = _mm_cvtsi32_si128(v63);
            v66 = v64 + 1;
            *v64 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v85), v65).m128i_u64[0];
            *a3 = (__int64)(v64 + 1);
            v67 = *v18;
            if ( *v18 )
            {
              v68 = 32LL * *(unsigned int *)(v67 - 4);
              for ( i = v67 + v68; i != v67; v66 += 4 )
              {
                *((_BYTE *)v66 + 4) &= 0xFCu;
                v71 = qword_1C7F2C0;
                *((_BYTE *)v66 + 20) &= 0xFCu;
                *(_DWORD *)v66 = 0;
                v66[1] = 0;
                *((_DWORD *)v66 + 4) = 1;
                v66[3] = 0;
                if ( (*(_BYTE *)(v67 + 4) & 1) != 0 )
                {
                  sub_182C690(v71, v66, v67);
                  if ( (*(_BYTE *)(v67 + 20) & 1) != 0 )
                  {
LABEL_92:
                    sub_182C690(v71, v66 + 2, v67 + 16);
                    goto LABEL_89;
                  }
                }
                else
                {
                  *(_DWORD *)v66 = *(_DWORD *)v67;
                  if ( (*(_BYTE *)(v67 + 20) & 1) != 0 )
                    goto LABEL_92;
                }
                v70 = *(_DWORD *)(v67 + 16);
                *((_BYTE *)v66 + 20) &= ~1u;
                *((_DWORD *)v66 + 4) = v70;
LABEL_89:
                v67 += 32;
              }
            }
          }
          else
          {
            *a3 = 0;
          }
        }
        if ( v86 )
          sub_186B220(v86 - 2);
LABEL_75:
        sub_186B220(v82 - 2);
        return v11;
      }
      v19 = sub_94A150(a1, v18);
      v20 = *v18;
      v92 = v19;
      *(_QWORD *)v94 = 0;
      v21 = 32LL * v19;
      v22 = v21 + v20;
      *(_QWORD *)v88 = v21;
      v23 = qword_1C7F2C0;
      *(_QWORD *)v95 = 0;
      *(_QWORD *)v96 = 1;
      *(_QWORD *)v97 = 0;
      if ( (*(_BYTE *)(v22 + 4) & 1) != 0 )
      {
        dest = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v94, v22);
        v23 = dest;
      }
      else
      {
        v94[0] = *(_DWORD *)v22;
      }
      if ( (*(_BYTE *)(v22 + 20) & 1) != 0 )
      {
        sub_182C690(v23, v96, v22 + 16);
      }
      else
      {
        v24 = *(_DWORD *)(v22 + 16);
        LOBYTE(v96[1]) &= ~1u;
        v96[0] = v24;
      }
      v99 &= 0xFCu;
      v25 = qword_1C7F2C0;
      v102 &= 0xFCu;
      v98 = 0;
      *(_QWORD *)v100 = 0;
      v101 = 1;
      *(_QWORD *)v103 = 0;
      if ( (v94[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v98, v94);
      else
        v98 = v94[0];
      if ( (v96[1] & 1) != 0 )
      {
        sub_182C690(v25, &v101, v96);
      }
      else
      {
        v102 &= ~1u;
        v101 = v96[0];
      }
      sub_1831690(qword_1C7F2C0, &v98);
      if ( !v98 )
      {
        v34 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v98);
        sub_182CBA0(v34, &v101);
        v35 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v94);
        sub_182CBA0(v35, v96);
        ++v87;
        continue;
      }
      break;
    }
    if ( (v99 & 1) != 0 || v98 != 1 || (v102 & 1) != 0 || v101 != 1 )
    {
      if ( v86 )
      {
        v26 = (unsigned int)*(v86 - 1);
        v27 = &v86[v26];
        if ( (_DWORD)v26 == *(v86 - 2) )
        {
          v31 = (unsigned int)(3 * v26 + 1) >> 1;
          v32 = 4 * v31 + 8;
          if ( 4 * (int)v26 + 8 >= (unsigned int)v32 || (unsigned int)v26 >= v31 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v104, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v104);
            sub_233E40((__int64)v104);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = (unsigned int *)sub_186B300(v86 - 2, v32);
          *v33 = v31;
          v86 = v33 + 2;
          v27 = &v33[v33[1] + 2];
        }
      }
      else
      {
        v41 = sub_186B270(0x10u) + 8;
        *(_QWORD *)(v41 - 8) = 2;
        v27 = (unsigned int *)v41;
        v86 = (_DWORD *)v41;
      }
      *v27 = *v17;
      ++*(v86 - 1);
    }
    else
    {
      if ( v87 < *(v82 - 1) )
      {
        v36 = v87;
        v37 = (char *)&v82[v87];
        do
        {
          desta = v37;
          sub_94C200(a1, (int **)(*a2 + 8LL * *(unsigned int *)v37), v18, v92);
          ++v36;
          v37 = desta + 4;
        }
        while ( v36 < *(v82 - 1) );
      }
      if ( v86 )
      {
        v38 = 0;
        for ( j = *(v86 - 1); v38 < j; *(v86 - 1) = j )
        {
          while ( 1 )
          {
            v40 = (int **)(*a2 + 8LL * (unsigned int)v86[v38]);
            if ( *(int *)((char *)*v40 + *(_QWORD *)v88) )
              break;
            if ( ++v38 >= j )
              goto LABEL_30;
          }
          sub_94C200(a1, v40, v18, v92);
          v72 = &v86[v38];
          if ( v82 )
          {
            v73 = *(v82 - 1);
            if ( (_DWORD)v73 == *(v82 - 2) )
            {
              v78 = (unsigned int)(3 * v73 + 1) >> 1;
              v79 = 4 * v78 + 8;
              if ( 4 * (int)v73 + 8 >= v79 || (unsigned int)v73 >= v78 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v104, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v104);
                sub_233E40((__int64)v104);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v93 = (unsigned int)(3 * v73 + 1) >> 1;
              v80 = (unsigned int *)sub_186B300(v82 - 2, v79);
              v72 = &v86[v38];
              v82 = v80 + 2;
              *v80 = v93;
              v74 = &v80[v80[1] + 2];
            }
            else
            {
              v74 = &v82[v73];
            }
          }
          else
          {
            v81 = (_QWORD *)sub_186B270(0x10u);
            v72 = &v86[v38];
            *v81 = 2;
            v74 = (unsigned int *)(v81 + 1);
            v82 = v74;
          }
          *v74 = *v72;
          v75 = (unsigned int)*(v86 - 1);
          ++*(v82 - 1);
          v76 = v75;
          v77 = &v86[v75];
          if ( v72 + 1 != v77 )
          {
            memmove(v72, v72 + 1, (char *)(v77 - 1) - (char *)v72);
            v76 = *(v86 - 1);
          }
          j = v76 - 1;
        }
      }
    }
LABEL_30:
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v98);
    sub_182CBA0(v28, &v101);
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v94);
    sub_182CBA0(v29, v96);
    ++v87;
  }
  while ( v82 );
  if ( v86 )
    sub_186B220(v86 - 2);
  return 1;
}


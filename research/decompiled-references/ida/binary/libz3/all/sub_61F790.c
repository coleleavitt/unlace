__int64 __fastcall sub_61F790(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char **v6; // r12
  char **exception; // rbx
  __int64 v11; // rax
  __int64 *v12; // rcx
  int v13; // edi
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *i; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v28; // rcx
  unsigned int v29; // edx
  __m128i *v30; // r14
  int v31; // r9d
  __int64 v32; // rcx
  __int64 *v33; // r15
  int v34; // esi
  __int64 v35; // r9
  __m128i *v36; // rdi
  __m128i *v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // edx
  _QWORD *v44; // r14
  unsigned int v45; // r13d
  __int64 v46; // rax
  __int64 v47; // r15
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 *v54; // r15
  __int64 v55; // rsi
  bool v56; // zf
  unsigned int v57; // r8d
  unsigned int v58; // eax
  unsigned int *v59; // rax
  __int64 v60; // rax
  int v61; // edx
  unsigned int v62; // r14d
  unsigned int v63; // ecx
  unsigned int *v64; // rax
  __int64 v65; // rcx
  __m128i *v66; // rax
  int v67; // r10d
  __m128i *v68; // r8
  const __m128i *v69; // rax
  __m128i *v70; // r11
  __int64 v71; // rdx
  __m128i *v72; // rsi
  __m128i *v73; // rdx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rdx
  int v79[2]; // [rsp+0h] [rbp-A8h]
  unsigned int v80; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v81; // [rsp+8h] [rbp-A0h]
  size_t v82; // [rsp+8h] [rbp-A0h]
  int v83; // [rsp+8h] [rbp-A0h]
  int v84; // [rsp+10h] [rbp-98h]
  int v85; // [rsp+10h] [rbp-98h]
  size_t v86; // [rsp+10h] [rbp-98h]
  int v87; // [rsp+18h] [rbp-90h]
  int v88; // [rsp+20h] [rbp-88h]
  int v89; // [rsp+20h] [rbp-88h]
  int v90; // [rsp+28h] [rbp-80h]
  int v91; // [rsp+30h] [rbp-78h]
  int v92; // [rsp+38h] [rbp-70h]
  __int64 v93; // [rsp+40h] [rbp-68h]
  void *v94; // [rsp+48h] [rbp-60h]
  __int64 v95[11]; // [rsp+50h] [rbp-58h] BYREF

  v11 = *(unsigned int *)(a1 + 96);
  v12 = *(__int64 **)(a1 + 88);
  v13 = *(_DWORD *)(a3 + 12);
  v14 = v11 - 1;
  v11 *= 16;
  v15 = (__int64 *)((char *)v12 + v11);
  v16 = 16LL * (v13 & v14);
  v17 = &v12[(unsigned __int64)v16 / 8];
  if ( v16 != v11 )
  {
    for ( i = &v12[(unsigned __int64)v16 / 8]; v15 != i; i += 2 )
    {
      v19 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v13 && a3 == v19 )
          return i[1];
      }
      else if ( !v19 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v17 != v12; v12 += 2 )
  {
    v41 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      if ( *(_DWORD *)(v41 + 12) == v13 && a3 == v41 )
      {
        i = v12;
        return i[1];
      }
    }
    else if ( !v41 )
    {
      if ( *(_WORD *)(a3 + 4) )
        return a3;
      goto LABEL_9;
    }
  }
LABEL_8:
  if ( *(_WORD *)(a3 + 4) )
    return a3;
LABEL_9:
  v20 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)v79 = *(_QWORD *)(a1 + 24);
  v21 = *(_DWORD **)(v20 + 24);
  if ( !v21 )
    goto LABEL_12;
  if ( !*v21 )
    goto LABEL_46;
  if ( *v21 == 5 )
  {
    v74 = v21[1];
    if ( (unsigned int)(v74 - 2) > 5 )
    {
      if ( v74 )
        goto LABEL_12;
      v75 = sub_15D2CD0(*(_QWORD *)(a1 + 40), 5, 0, 0, 0);
      sub_15DB5C0(*(_QWORD *)v79, a2, v75);
      v76 = sub_15E1B70(*(_QWORD *)(a1 + 40));
      v22 = v76;
      if ( v76 )
      {
        v23 = *(_DWORD *)(v76 + 8) + 1;
        *(_DWORD *)(v22 + 8) = v23;
        goto LABEL_13;
      }
LABEL_108:
      v22 = 0;
      goto LABEL_14;
    }
LABEL_46:
    v43 = *(_DWORD *)(a3 + 24);
    v93 = *(_QWORD *)(a1 + 24);
    if ( v43 )
    {
      v44 = nullptr;
      v45 = 0;
      do
      {
        v46 = sub_61F790(
                a1,
                a2,
                *(_QWORD *)(a3 + 8LL * v45 + 32),
                (_DWORD)v12,
                (_DWORD)v17,
                a6,
                v79[0],
                v80,
                v84,
                v87,
                v88,
                v90,
                v91,
                v92,
                v93);
        v47 = v46;
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
        if ( v44 )
        {
          v48 = *((_DWORD *)v44 - 1);
          if ( v48 == *((_DWORD *)v44 - 2) )
          {
            v57 = (3 * v48 + 1) >> 1;
            v58 = 8 * v57 + 8;
            if ( 8 * v48 + 8 >= v58 || v48 >= v57 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v95, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v95);
              sub_233E40((__int64)v95);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v80 = (3 * v48 + 1) >> 1;
            v59 = (unsigned int *)sub_186B300(v44 - 1, v58);
            LODWORD(v17) = v80;
            v44 = v59 + 2;
            *v59 = v80;
            v60 = v59[1];
            v61 = v60;
            v50 = &v44[v60];
            v43 = v61 + 1;
          }
          else
          {
            v49 = v48;
            v43 = v48 + 1;
            v50 = &v44[v49];
          }
        }
        else
        {
          v77 = (_QWORD *)sub_186B270(0x18u);
          *v77 = 2;
          v43 = 1;
          v44 = v77 + 1;
          v50 = v77 + 1;
        }
        *v50 = v47;
        ++v45;
        *((_DWORD *)v44 - 1) = v43;
      }
      while ( v45 < *(_DWORD *)(a3 + 24) );
      v51 = *(_QWORD *)(a1 + 24);
      v20 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      LODWORD(v51) = *(_QWORD *)(a1 + 24);
      v44 = nullptr;
    }
    v52 = sub_15DC610(v51, v20, v43, (int)v44, (int)v17, a6, v79[0], v80, v84, v87, v88, v90, v91, v92, v93, v94);
    v22 = v52;
    if ( v52 )
    {
      ++*(_DWORD *)(v52 + 8);
      if ( !v44 )
        goto LABEL_64;
      v53 = (unsigned __int64)&v44[*((unsigned int *)v44 - 1)];
      if ( (unsigned __int64)v44 >= v53 )
      {
        sub_186B220(v44 - 1);
        goto LABEL_64;
      }
    }
    else
    {
      if ( !v44 )
        goto LABEL_108;
      v53 = (unsigned __int64)&v44[*((unsigned int *)v44 - 1)];
      if ( (unsigned __int64)v44 >= v53 )
      {
        sub_186B220(v44 - 1);
        goto LABEL_108;
      }
    }
    v54 = v44;
    do
    {
      while ( 1 )
      {
        v55 = *v54;
        if ( *v54 )
        {
          v56 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++v54 >= v53 )
          goto LABEL_63;
      }
      v81 = v53;
      ++v54;
      sub_15D7BC0(*(_QWORD *)v79, v55);
      v53 = v81;
    }
    while ( (unsigned __int64)v54 < v81 );
LABEL_63:
    sub_186B220(v44 - 1);
    if ( !v22 )
      goto LABEL_108;
LABEL_64:
    v23 = *(_DWORD *)(v22 + 8);
    goto LABEL_13;
  }
LABEL_12:
  v22 = a3;
  v23 = *(_DWORD *)(a3 + 8) + 1;
  *(_DWORD *)(a3 + 8) = v23;
LABEL_13:
  *(_DWORD *)(v22 + 8) = v23 + 1;
LABEL_14:
  v24 = *(_QWORD **)(a1 + 64);
  if ( v24 )
  {
    v25 = *((_DWORD *)v24 - 1);
    if ( v25 == *((_DWORD *)v24 - 2) )
    {
      v62 = (3 * v25 + 1) >> 1;
      v63 = 8 * v62 + 8;
      if ( 8 * v25 + 8 >= v63 || v25 >= v62 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v95, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v95);
        sub_233E40((__int64)v95);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v64 = (unsigned int *)sub_186B300(v24 - 1, v63);
      v65 = v64[1];
      v24 = v64 + 2;
      *v64 = v62;
      *(_QWORD *)(a1 + 64) = v64 + 2;
      LODWORD(v64) = v65;
      v28 = &v24[v65];
      v27 = (_DWORD)v64 + 1;
    }
    else
    {
      v26 = v25;
      v27 = v25 + 1;
      v28 = &v24[v26];
    }
  }
  else
  {
    v78 = (_QWORD *)sub_186B270(0x18u);
    *v78 = 2;
    v27 = 1;
    v24 = v78 + 1;
    *(_QWORD *)(a1 + 64) = v24;
    v28 = v24;
  }
  *v28 = v22;
  *((_DWORD *)v24 - 1) = v27;
  v29 = *(_DWORD *)(a1 + 96);
  if ( 3 * v29 < 4 * (*(_DWORD *)(a1 + 100) + *(_DWORD *)(a1 + 104)) )
  {
    v85 = 2 * v29;
    v82 = 32LL * v29;
    v66 = (__m128i *)sub_186B270(v82);
    v32 = v82;
    v67 = v85;
    v30 = v66;
    v68 = &v66[v82 / 0x10];
    if ( v85 )
    {
      if ( (v82 & 0x10) == 0 || (*v66 = 0, ++v66, v66 != v68) )
      {
        do
        {
          *v66 = 0;
          v66 += 2;
          v66[-1] = 0;
        }
        while ( v66 != v68 );
      }
    }
    v69 = *(const __m128i **)(a1 + 88);
    v31 = v85 - 1;
    v33 = (__int64 *)v68;
    v70 = (__m128i *)&v69[*(unsigned int *)(a1 + 96)];
    if ( v69 != v70 )
    {
      do
      {
        if ( v69->m128i_i64[0] > 1uLL )
        {
          v71 = 16LL * (*(_DWORD *)(v69->m128i_i64[0] + 12) & (unsigned int)v31);
          v72 = &v30[(unsigned __int64)v71 / 0x10];
          if ( v82 == v71 )
          {
LABEL_88:
            if ( v30 == v72 )
            {
LABEL_109:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v73 = v30;
            while ( v73->m128i_i64[0] )
            {
              if ( v72 == ++v73 )
                goto LABEL_109;
            }
          }
          else
          {
            v73 = &v30[(unsigned __int64)v71 / 0x10];
            while ( v73->m128i_i64[0] )
            {
              if ( v68 == ++v73 )
                goto LABEL_88;
            }
          }
          *v73 = _mm_loadu_si128(v69);
        }
        ++v69;
      }
      while ( v70 != v69 );
      v70 = *(__m128i **)(a1 + 88);
    }
    if ( v70 )
    {
      v89 = v85;
      v86 = v82;
      v83 = v67 - 1;
      sub_186B220(v70);
      v67 = v89;
      v32 = v86;
      v31 = v83;
    }
    *(_QWORD *)(a1 + 88) = v30;
    *(_DWORD *)(a1 + 96) = v67;
    *(_DWORD *)(a1 + 104) = 0;
  }
  else
  {
    v30 = *(__m128i **)(a1 + 88);
    v31 = v29 - 1;
    v32 = 16LL * v29;
    v33 = (__int64 *)((char *)v30->m128i_i64 + v32);
  }
  v34 = *(_DWORD *)(a3 + 12);
  v35 = 16LL * (v34 & (unsigned int)v31);
  v36 = &v30[(unsigned __int64)v35 / 0x10];
  if ( v35 != v32 )
  {
    v37 = &v30[(unsigned __int64)v35 / 0x10];
    v38 = nullptr;
    while ( 1 )
    {
      v39 = v37->m128i_i64[0];
      if ( v37->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v39 + 12) == v34 && a3 == v39 )
        {
          v37->m128i_i64[0] = a3;
          v37->m128i_i64[1] = v22;
          goto LABEL_72;
        }
      }
      else
      {
        if ( !v39 )
        {
          if ( v38 )
            goto LABEL_98;
          v38 = (__int64 *)v37;
          goto LABEL_99;
        }
        v38 = (__int64 *)v37;
      }
      if ( ++v37 == (__m128i *)v33 )
        goto LABEL_42;
    }
  }
  v38 = nullptr;
  while ( 1 )
  {
LABEL_42:
    if ( v36 == v30 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v42 = v30->m128i_i64[0];
    if ( v30->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v42 + 12) == v34 && a3 == v42 )
    {
      v30->m128i_i64[0] = a3;
      v30->m128i_i64[1] = v22;
      goto LABEL_72;
    }
LABEL_41:
    ++v30;
  }
  if ( v42 )
  {
    v38 = (__int64 *)v30;
    goto LABEL_41;
  }
  if ( v38 )
LABEL_98:
    --*(_DWORD *)(a1 + 104);
  else
    v38 = (__int64 *)v30;
LABEL_99:
  *v38 = a3;
  v38[1] = v22;
  ++*(_DWORD *)(a1 + 100);
LABEL_72:
  if ( v22 )
  {
    v56 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v56 )
      sub_15D7BC0(*(_QWORD *)v79, v22);
  }
  return v22;
}


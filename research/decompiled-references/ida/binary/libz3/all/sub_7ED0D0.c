__int64 __fastcall sub_7ED0D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  char **exception; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // r8
  unsigned int v19; // ecx
  __int64 v20; // r14
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // r12d
  unsigned __int64 v25; // rdx
  unsigned int v26; // r12d
  __int64 *v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 (*v33)(void); // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // r12
  unsigned int v40; // ecx
  size_t v41; // r15
  size_t v42; // r13
  int v43; // edi
  __int64 v44; // r11
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned int v51; // r10d
  __int64 v52; // r15
  unsigned int v54; // r8d
  __int64 v55; // r9
  unsigned int v56; // edx
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned int v60; // r10d
  __int64 v61; // r15
  unsigned __int64 v62; // rax
  unsigned int v63; // ecx
  __int64 v64; // r9
  unsigned int v65; // edx
  __int64 v66; // rcx
  __int64 v67; // r12
  _QWORD *v68; // rax
  _QWORD *v69; // rdx
  _QWORD *v70; // rbp
  unsigned int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  _QWORD *v74; // rcx
  unsigned int v75; // ebx
  unsigned int v76; // ecx
  unsigned int *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // r9d
  size_t v81; // r8
  const __m128i *v82; // rbp
  __m128i *v83; // r10
  size_t v84; // rax
  __int64 v85; // r8
  size_t v86; // r14
  __m128i *v87; // r13
  const __m128i *v88; // r12
  __int64 v89; // r10
  __m128i *v90; // rbx
  __int64 v91; // rax
  __m128i *v92; // rdx
  __m128i *v93; // rax
  __m128i v94; // xmm0
  __int64 v95; // rax
  _QWORD *v96; // rdx
  unsigned int v97; // [rsp+0h] [rbp-98h]
  unsigned int v98; // [rsp+0h] [rbp-98h]
  __int64 v99; // [rsp+0h] [rbp-98h]
  __int64 v100; // [rsp+0h] [rbp-98h]
  int v101; // [rsp+0h] [rbp-98h]
  __int64 v102; // [rsp+8h] [rbp-90h]
  __int64 v103; // [rsp+8h] [rbp-90h]
  unsigned int v104; // [rsp+10h] [rbp-88h]
  unsigned int v108; // [rsp+2Ch] [rbp-6Ch]
  __int64 v109[11]; // [rsp+40h] [rbp-58h] BYREF

  v9 = a2;
  v10 = a1;
  v11 = sub_7E9EC0(a1, a2, a3, a4);
  v12 = *(_DWORD *)(a1 + 304);
  v13 = v11;
  v14 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  v104 = *(_DWORD *)(v14 + 20);
  v15 = sub_7E9000(v11, v104);
  v17 = v12 - 1;
  v18 = 16LL * v12;
  v19 = v15;
  v20 = v16 + v18;
  v21 = 16LL * ((v12 - 1) & v15);
  v22 = v16 + v21;
  if ( v21 == v18 )
  {
    v58 = v16;
    v24 = v12 - 1;
    if ( v16 != v22 )
    {
      while ( 1 )
      {
LABEL_62:
        v59 = *(_QWORD *)(v58 + 8);
        if ( v59 > 1 )
        {
          if ( v19 == *(_DWORD *)v58 && v14 == *(_QWORD *)(*(_QWORD *)(v59 + 16) + 16LL) )
          {
            v100 = v14;
            v60 = *(_DWORD *)(v14 + 20) - 1;
            do
            {
              if ( v60 == -1 )
                return 0;
              v61 = v60--;
            }
            while ( *(_QWORD *)(v59 + 8 * v61 + 48) == *(_QWORD *)(v13 + 8 * v61 + 48) );
            v14 = v100;
          }
        }
        else if ( !v59 )
        {
LABEL_7:
          v17 = v24;
          v26 = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 20LL);
          v97 = v26 - 1;
          if ( v26 )
            goto LABEL_8;
          v97 = -1;
LABEL_11:
          if ( v18 == v21 )
            goto LABEL_37;
LABEL_12:
          v30 = v22;
          while ( 1 )
          {
            v31 = *(_QWORD *)(v30 + 8);
            if ( v31 > 1 )
            {
              if ( *(_DWORD *)v30 == v19 && v14 == *(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) )
              {
                v54 = *(_DWORD *)(v14 + 20) - 1;
                while ( v54 != -1 )
                {
                  v55 = v54--;
                  if ( *(_QWORD *)(v31 + 8 * v55 + 48) != *(_QWORD *)(v13 + 8 * v55 + 48) )
                    goto LABEL_14;
                }
                return 0;
              }
            }
            else if ( !v31 )
            {
              goto LABEL_17;
            }
LABEL_14:
            v30 += 16;
            if ( v20 == v30 )
              goto LABEL_37;
          }
        }
        v58 += 16;
        if ( v22 == v58 )
          goto LABEL_7;
      }
    }
    v26 = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 20LL);
    v97 = v26 - 1;
    if ( !v26 )
    {
      v97 = -1;
      while ( 1 )
      {
LABEL_37:
        if ( v22 == v16 )
          goto LABEL_17;
        v50 = *(_QWORD *)(v16 + 8);
        if ( v50 > 1 )
        {
          if ( *(_DWORD *)v16 == v19 && v14 == *(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL) )
          {
            v56 = *(_DWORD *)(v14 + 20) - 1;
            while ( v56 != -1 )
            {
              v57 = v56--;
              if ( *(_QWORD *)(v50 + 8 * v57 + 48) != *(_QWORD *)(v13 + 8 * v57 + 48) )
                goto LABEL_36;
            }
            return 0;
          }
        }
        else if ( !v50 )
        {
          goto LABEL_17;
        }
LABEL_36:
        v16 += 16;
      }
    }
    goto LABEL_8;
  }
  v23 = v16 + v21;
  v24 = v12 - 1;
  do
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(v23 + 8);
      if ( v25 > 1 )
        break;
      if ( !v25 )
        goto LABEL_7;
LABEL_4:
      v23 += 16;
      if ( v20 == v23 )
        goto LABEL_58;
    }
    if ( v19 != *(_DWORD *)v23 || v14 != *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) )
      goto LABEL_4;
    v99 = v14;
    v103 = v23;
    v51 = *(_DWORD *)(v14 + 20) - 1;
    do
    {
      if ( v51 == -1 )
        return 0;
      v52 = v51--;
    }
    while ( *(_QWORD *)(v25 + 8 * v52 + 48) == *(_QWORD *)(v13 + 8 * v52 + 48) );
    v14 = v99;
    v23 += 16;
  }
  while ( v20 != v103 + 16 );
LABEL_58:
  v17 = v24;
  if ( v16 != v22 )
  {
    v58 = v16;
    goto LABEL_62;
  }
  v26 = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 20LL);
  v97 = v26 - 1;
  if ( v26 )
  {
LABEL_8:
    v27 = (__int64 *)(v13 + 8LL * v97 + 48);
    do
    {
      v28 = *v27--;
      v27[1] = *(_QWORD *)(v28 + 64);
    }
    while ( (__int64 *)(v13 + 40) != v27 );
    v102 = v18;
    v108 = v17;
    v29 = sub_7E9000(v13, v104);
    v18 = v102;
    v19 = v29;
    v21 = 16LL * (v29 & v108);
    v22 = v16 + v21;
    goto LABEL_11;
  }
  v97 = -1;
  if ( v18 )
    goto LABEL_12;
LABEL_17:
  v32 = *(_QWORD *)(v10 + 8);
  v33 = *(__int64 (**)(void))(*(_QWORD *)v32 + 432LL);
  if ( (char *)v33 == (char *)sub_79EFF0 )
    v34 = v32 + 2144;
  else
    v34 = v33();
  v35 = sub_180C100(v34, 8 * v26 + 48);
  *(_QWORD *)(v35 + 16) = v9;
  v36 = v35;
  *(_QWORD *)v35 = v35;
  *(_QWORD *)(v35 + 24) = a3;
  *(_QWORD *)(v35 + 8) = v35;
  *(_DWORD *)(v35 + 32) = a5;
  *(_DWORD *)(v35 + 36) = a6;
  *(_DWORD *)(v35 + 40) = a7;
  if ( v26 )
  {
    if ( v97 <= 2 || a4 + 8 == v35 + 48 )
    {
      v95 = 0;
      do
      {
        *(_QWORD *)(v36 + v95 + 48) = *(_QWORD *)(a4 + v95);
        v95 += 8;
      }
      while ( 8LL * v26 != v95 );
    }
    else
    {
      v37 = 0;
      do
      {
        *(__m128i *)(v36 + v37 + 48) = _mm_loadu_si128((const __m128i *)(a4 + v37));
        v37 += 16;
      }
      while ( v37 != 16LL * (v26 >> 1) );
      if ( (v26 & 1) != 0 )
        *(_QWORD *)(v36 + 8LL * (v26 & 0xFFFFFFFE) + 48) = *(_QWORD *)(a4 + 8LL * (v26 & 0xFFFFFFFE));
    }
  }
  v38 = *(unsigned int *)(v10 + 304);
  if ( 3 * (int)v38 < (unsigned int)(4 * (*(_DWORD *)(v10 + 308) + *(_DWORD *)(v10 + 312))) )
  {
    v101 = 2 * v38;
    v41 = 16LL * (unsigned int)(2 * v38);
    v79 = sub_186B270(v41);
    v80 = v101;
    v39 = v79;
    v81 = v79 + v41;
    if ( v101 )
    {
      if ( (v41 & 0x10) == 0 || (*(_QWORD *)(v79 + 8) = 0, v79 += 16, v79 != v81) )
      {
        do
        {
          *(_QWORD *)(v79 + 8) = 0;
          v79 += 32;
          *(_QWORD *)(v79 - 8) = 0;
        }
        while ( v79 != v81 );
      }
    }
    v82 = *(const __m128i **)(v10 + 296);
    v40 = v101 - 1;
    v42 = v81;
    v83 = (__m128i *)&v82[*(unsigned int *)(v10 + 304)];
    if ( v82 != v83 )
    {
      v84 = v81;
      v85 = v36;
      v86 = v42;
      v87 = (__m128i *)v39;
      v88 = &v82[*(unsigned int *)(v10 + 304)];
      v89 = v10;
      v90 = (__m128i *)v84;
      do
      {
        while ( v82->m128i_i64[1] <= 1uLL )
        {
          if ( v88 == ++v82 )
            goto LABEL_108;
        }
        v91 = 16LL * (v82->m128i_i32[0] & v40);
        v92 = &v87[(unsigned __int64)v91 / 0x10];
        if ( v41 == v91 )
        {
LABEL_112:
          if ( v87 == v92 )
          {
LABEL_123:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v93 = v87;
          while ( v93->m128i_i64[1] )
          {
            if ( v92 == ++v93 )
              goto LABEL_123;
          }
        }
        else
        {
          v93 = &v87[(unsigned __int64)v91 / 0x10];
          while ( v93->m128i_i64[1] )
          {
            if ( v90 == ++v93 )
              goto LABEL_112;
          }
        }
        v94 = _mm_loadu_si128(v82++);
        *v93 = v94;
      }
      while ( v88 != v82 );
LABEL_108:
      v10 = v89;
      v83 = *(__m128i **)(v89 + 296);
      v39 = (__int64)v87;
      v42 = v86;
      v36 = v85;
    }
    if ( v83 )
    {
      sub_186B220(v83);
      v80 = v101;
      v40 = v101 - 1;
    }
    *(_QWORD *)(v10 + 296) = v39;
    v9 = *(_QWORD *)(v36 + 16);
    *(_DWORD *)(v10 + 304) = v80;
    *(_DWORD *)(v10 + 312) = 0;
  }
  else
  {
    v39 = *(_QWORD *)(v10 + 296);
    v40 = v38 - 1;
    v41 = 16 * v38;
    v42 = v39 + v41;
  }
  v98 = v40;
  v43 = sub_7E9000(v36, *(unsigned int *)(*(_QWORD *)(v9 + 16) + 20LL));
  v45 = 16LL * (v43 & v98);
  v46 = v39 + v45;
  if ( v45 != v41 )
  {
    v47 = v39 + v45;
    v48 = 0;
    while ( 1 )
    {
      v49 = *(_QWORD *)(v47 + 8);
      if ( v49 > 1 )
      {
        if ( v43 == *(_DWORD *)v47 && v44 == *(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL) )
        {
          v63 = *(_DWORD *)(v44 + 20) - 1;
          while ( v63 != -1 )
          {
            v64 = v63--;
            if ( *(_QWORD *)(v49 + 8 * v64 + 48) != *(_QWORD *)(v36 + 8 * v64 + 48) )
              goto LABEL_31;
          }
          *(_QWORD *)(v47 + 8) = v36;
          goto LABEL_88;
        }
      }
      else
      {
        if ( !v49 )
        {
          if ( v48 )
            goto LABEL_118;
          v48 = v47;
          goto LABEL_119;
        }
        v48 = v47;
      }
LABEL_31:
      v47 += 16;
      if ( v47 == v42 )
        goto LABEL_72;
    }
  }
  v48 = 0;
LABEL_72:
  while ( 2 )
  {
    if ( v46 == v39 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v62 = *(_QWORD *)(v39 + 8);
    if ( v62 > 1 )
    {
      if ( v43 == *(_DWORD *)v39 && v44 == *(_QWORD *)(*(_QWORD *)(v62 + 16) + 16LL) )
      {
        v65 = *(_DWORD *)(v44 + 20) - 1;
        while ( v65 != -1 )
        {
          v66 = v65--;
          if ( *(_QWORD *)(v62 + 8 * v66 + 48) != *(_QWORD *)(v36 + 8 * v66 + 48) )
            goto LABEL_71;
        }
        *(_QWORD *)(v39 + 8) = v36;
        goto LABEL_88;
      }
      goto LABEL_71;
    }
    if ( v62 )
    {
      v48 = v39;
LABEL_71:
      v39 += 16;
      continue;
    }
    break;
  }
  if ( v48 )
LABEL_118:
    --*(_DWORD *)(v10 + 312);
  else
    v48 = v39;
LABEL_119:
  *(_QWORD *)(v48 + 8) = v36;
  *(_DWORD *)v48 = v43;
  ++*(_DWORD *)(v10 + 308);
LABEL_88:
  v67 = *(_QWORD *)(v10 + 8);
  v68 = (_QWORD *)sub_180C100(v67 + 2144, 24);
  v69 = *(_QWORD **)(v67 + 2128);
  v70 = v68;
  *v68 = off_1C54B60;
  v68[1] = v10 + 296;
  v68[2] = v36;
  if ( v69 )
  {
    v71 = *((_DWORD *)v69 - 1);
    if ( v71 == *((_DWORD *)v69 - 2) )
    {
      v75 = (3 * v71 + 1) >> 1;
      v76 = 8 * v75 + 8;
      if ( 8 * v71 + 8 >= v76 || v71 >= v75 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v109, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v109);
        sub_233E40((__int64)v109);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v77 = (unsigned int *)sub_186B300(v69 - 1, v76);
      v78 = v77[1];
      v69 = v77 + 2;
      *(_QWORD *)(v67 + 2128) = v77 + 2;
      *v77 = v75;
      LODWORD(v77) = v78;
      v74 = &v69[v78];
      v73 = (_DWORD)v77 + 1;
    }
    else
    {
      v72 = v71;
      v73 = v71 + 1;
      v74 = &v69[v72];
    }
  }
  else
  {
    v96 = (_QWORD *)sub_186B270(0x18u);
    *v96 = 2;
    v73 = 1;
    v69 = v96 + 1;
    *(_QWORD *)(v67 + 2128) = v69;
    v74 = v69;
  }
  *v74 = v70;
  *((_DWORD *)v69 - 1) = v73;
  return v36;
}


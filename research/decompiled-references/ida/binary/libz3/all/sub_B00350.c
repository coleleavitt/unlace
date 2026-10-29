__int64 *__fastcall sub_B00350(__int64 *a1, __int64 a2)
{
  char **exception; // r13
  _QWORD *v3; // r15
  __int64 *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  int v15; // eax
  _QWORD *v16; // rcx
  bool v17; // zf
  _QWORD *v19; // r14
  __int64 *v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  _QWORD *v26; // rbx
  _QWORD *v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbx
  unsigned __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rdi
  _QWORD *v34; // rdx
  __int64 *v35; // r14
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 *v38; // rbp
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // ebp
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rsi
  unsigned int v54; // esi
  unsigned int v55; // ecx
  __int64 v56; // r14
  unsigned __int64 v57; // r12
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 *v60; // r10
  int v61; // r8d
  unsigned int v62; // r11d
  __int64 v63; // rcx
  __int64 *v64; // rdi
  __int64 v65; // r11
  __int64 *v66; // r9
  __int64 *i; // rax
  __int64 v68; // rdx
  __int64 *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rdx
  _QWORD *v76; // r8
  unsigned int v77; // ecx
  int v78; // eax
  unsigned int v79; // eax
  __m128i *v80; // rax
  __m128i *v81; // r10
  __m128i *v82; // rcx
  __int64 v83; // rcx
  __m128i *v84; // rdi
  unsigned int v85; // edx
  const __m128i *v86; // rax
  const __m128i *v87; // r9
  __int64 v88; // r8
  __m128i *v89; // rcx
  __int64 v90; // rdx
  unsigned __int64 v91; // rdi
  __int64 v92; // r14
  const __m128i *v93; // r12
  __int64 v94; // r11
  unsigned __int64 v95; // r9
  __m128i *v96; // rbp
  __int64 v97; // r8
  __int64 v98; // rcx
  const __m128i *v99; // rbx
  __int64 v100; // rdx
  __m128i *v101; // rsi
  __m128i *v102; // rdx
  __int64 v103; // [rsp+0h] [rbp-A8h]
  __int64 v104; // [rsp+0h] [rbp-A8h]
  _QWORD *v105; // [rsp+0h] [rbp-A8h]
  __int64 v107; // [rsp+8h] [rbp-A0h]
  size_t v108; // [rsp+8h] [rbp-A0h]
  unsigned int v109; // [rsp+8h] [rbp-A0h]
  __m128i *v110; // [rsp+8h] [rbp-A0h]
  unsigned int v111; // [rsp+10h] [rbp-98h]
  __int64 v112; // [rsp+18h] [rbp-90h]
  __int64 v113; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v114[10]; // [rsp+58h] [rbp-50h] BYREF

  v3 = (_QWORD *)(a2 + 880);
  v4 = a1;
  v5 = a2;
  v6 = sub_8E35C0(a2 + 880);
  v7 = *(_QWORD *)(a2 + 888);
  v8 = v6;
  if ( v7 )
    goto LABEL_2;
  v47 = sub_186B270(0x28u);
  *(_QWORD *)v47 = a2;
  v48 = v47;
  *(_DWORD *)(v47 + 8) = 0;
  v49 = sub_8E35C0(a2 + 880);
  *(_QWORD *)(v48 + 24) = 0;
  *(_QWORD *)(v48 + 16) = v49;
  LODWORD(v49) = *(_DWORD *)(a2 + 656);
  *(_QWORD *)(a2 + 888) = v48;
  *(_DWORD *)(v48 + 32) = v49;
  sub_8E36C0((_QWORD *)(a2 + 880));
  v50 = *(_QWORD *)(a2 + 104);
  if ( !v50 )
    goto LABEL_99;
  v51 = *(_DWORD *)(v50 - 4);
  if ( !v51 )
    goto LABEL_99;
  v52 = 0x3FFFFFFFCLL;
  v53 = *(_QWORD *)(a2 + 112);
  if ( v53 )
    v52 = 4LL * (unsigned int)(*(_DWORD *)(v53 - 4) - 1);
  v54 = *(_DWORD *)(v53 + v52);
  v55 = v51 - 1;
  if ( v54 >= v51 )
    goto LABEL_99;
  v56 = 8LL * v55;
  v57 = 8 * (v55 - (unsigned __int64)(v55 - v54));
  while ( 2 )
  {
    v58 = *(_QWORD *)(v50 + v56);
    v59 = *(unsigned int *)(v5 + 928);
    v60 = *(__int64 **)(v5 + 920);
    v61 = *(_DWORD *)(v58 + 12);
    v62 = v59 - 1;
    v63 = 16 * v59;
    v64 = &v60[(unsigned __int64)v63 / 8];
    v65 = 16LL * (v61 & v62);
    v66 = &v60[(unsigned __int64)v65 / 8];
    if ( v65 != v63 )
    {
      for ( i = &v60[(unsigned __int64)v65 / 8]; v64 != i; i += 2 )
      {
        v68 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v68 + 12) == v61 && v58 == v68 )
          {
            v71 = i[1];
            goto LABEL_101;
          }
        }
        else if ( !v68 )
        {
          goto LABEL_89;
        }
      }
    }
    if ( v60 == v66 )
LABEL_89:
      BUG();
    v69 = *(__int64 **)(v5 + 920);
    while ( 1 )
    {
      v70 = *v69;
      if ( (unsigned __int64)*v69 > 1 )
        break;
      if ( !v70 )
        goto LABEL_89;
LABEL_94:
      v69 += 2;
      if ( v66 == v69 )
        goto LABEL_89;
    }
    if ( *(_DWORD *)(v70 + 12) != v61 || v58 != v70 )
      goto LABEL_94;
    v71 = v69[1];
    if ( v65 == v63 )
      goto LABEL_113;
LABEL_101:
    v72 = &v60[(unsigned __int64)v65 / 8];
    while ( 2 )
    {
      v73 = *v72;
      if ( (unsigned __int64)*v72 <= 1 )
      {
        if ( !v73 )
          goto LABEL_107;
LABEL_104:
        v72 += 2;
        if ( v72 == v64 )
        {
          if ( v60 == v66 )
            goto LABEL_107;
LABEL_113:
          v72 = *(__int64 **)(v5 + 920);
          while ( 1 )
          {
            v75 = *v72;
            if ( (unsigned __int64)*v72 > 1 )
            {
              if ( *(_DWORD *)(v75 + 12) == v61 && v58 == v75 )
                goto LABEL_122;
            }
            else if ( !v75 )
            {
              goto LABEL_107;
            }
            v72 += 2;
            if ( v72 == v66 )
              goto LABEL_107;
          }
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v73 + 12) != v61 || v58 != v73 )
      goto LABEL_104;
LABEL_122:
    v76 = v72 + 2;
    if ( v72 + 2 == v64 )
      v76 = *(_QWORD **)(v5 + 920);
    v77 = *(_DWORD *)(v5 + 932) - 1;
    if ( *v76 )
    {
      *v72 = 1;
      v78 = *(_DWORD *)(v5 + 936);
      *(_DWORD *)(v5 + 932) = v77;
      v79 = v78 + 1;
      if ( v77 < 0x40 )
        v77 = 64;
      *(_DWORD *)(v5 + 936) = v79;
      if ( v77 < v79 && !(unsigned __int8)sub_186AF10(64) )
      {
        v112 = v71;
        v111 = *(_DWORD *)(v5 + 928);
        v108 = v111;
        v80 = (__m128i *)sub_186B270(v108 * 16);
        v81 = v80;
        v82 = &v80[v108];
        if ( v111 )
        {
          if ( ((16 * (_BYTE)v111) & 0x10) == 0 || (*v80 = 0, ++v80, v80 != v82) )
          {
            do
            {
              *v80 = 0;
              v80 += 2;
              v80[-1] = 0;
            }
            while ( v80 != v82 );
          }
        }
        v83 = *(unsigned int *)(v5 + 928);
        v84 = *(__m128i **)(v5 + 920);
        v85 = v83 - 1;
        v83 *= 16;
        v86 = v84;
        v87 = (__m128i *)((char *)v84 + v83);
        v88 = v83;
        v109 = v85;
        v89 = (__m128i *)((char *)v81 + v83);
        if ( v84 != v87 )
        {
          v90 = v56;
          v91 = v57;
          v92 = v88;
          v93 = v87;
          v94 = v5;
          v95 = v91;
          v96 = v89;
          v97 = v90;
          v98 = v58;
          v99 = v86;
          do
          {
            if ( v99->m128i_i64[0] > 1uLL )
            {
              v100 = 16LL * (*(_DWORD *)(v99->m128i_i64[0] + 12) & v109);
              v101 = &v81[(unsigned __int64)v100 / 0x10];
              if ( v92 == v100 )
              {
LABEL_145:
                if ( v81 == v101 )
                {
LABEL_154:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v102 = v81;
                while ( v102->m128i_i64[0] )
                {
                  if ( v101 == ++v102 )
                    goto LABEL_154;
                }
              }
              else
              {
                v102 = &v81[(unsigned __int64)v100 / 0x10];
                while ( v102->m128i_i64[0] )
                {
                  if ( v96 == ++v102 )
                    goto LABEL_145;
                }
              }
              *v102 = _mm_loadu_si128(v99);
            }
            ++v99;
          }
          while ( v93 != v99 );
          v84 = *(__m128i **)(v94 + 920);
          v71 = v112;
          v58 = v98;
          v56 = v97;
          v57 = v95;
          v5 = v94;
        }
        if ( v84 )
        {
          v110 = v81;
          sub_186B220(v84);
          v81 = v110;
        }
        *(_QWORD *)(v5 + 920) = v81;
        *(_DWORD *)(v5 + 936) = 0;
      }
    }
    else
    {
      *v72 = 0;
      *(_DWORD *)(v5 + 932) = v77;
    }
LABEL_107:
    v74 = *(_QWORD *)(v5 + 8);
    if ( v71 && (v17 = *(_DWORD *)(v71 + 8) == 1, --*(_DWORD *)(v71 + 8), v17) )
    {
      sub_15D7BC0(v74, v71);
      v74 = *(_QWORD *)(v5 + 8);
      v17 = (*(_DWORD *)(v58 + 8))-- == 1;
      if ( v17 )
        goto LABEL_121;
    }
    else
    {
      v17 = (*(_DWORD *)(v58 + 8))-- == 1;
      if ( !v17 )
        goto LABEL_110;
LABEL_121:
      sub_15D7BC0(v74, v58);
    }
LABEL_110:
    if ( v56 != v57 )
    {
      v50 = *(_QWORD *)(v5 + 104);
      v56 -= 8;
      continue;
    }
    break;
  }
  v4 = a1;
LABEL_99:
  sub_8E36D0(v3);
  v7 = *(_QWORD *)(v5 + 888);
LABEL_2:
  v9 = *(_DWORD *)(v7 + 8);
  if ( !v9 )
  {
    sub_8E38B0((__int64)&v113, (_QWORD *)(*(_QWORD *)v7 + 880LL), *(_DWORD *)(v7 + 32));
    if ( &v113 != (__int64 *)(v7 + 16) )
    {
      v26 = *(_QWORD **)(v7 + 24);
      if ( !v26 )
        goto LABEL_44;
      v27 = &v26[*((unsigned int *)v26 - 1)];
      if ( v26 >= v27 )
        goto LABEL_41;
      do
      {
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 )
          {
            v29 = *(_QWORD *)(v7 + 16);
            v17 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( ++v26 >= v27 )
            goto LABEL_40;
        }
        sub_15D7BC0(v29, v28);
        ++v26;
      }
      while ( v26 < v27 );
LABEL_40:
      v26 = *(_QWORD **)(v7 + 24);
      if ( v26 )
      {
LABEL_41:
        *((_DWORD *)v26 - 1) = 0;
        if ( v114 != (_QWORD *)(v7 + 24) )
        {
          sub_186B220(v26 - 1);
LABEL_43:
          v10 = v114[0];
          *(_QWORD *)(v7 + 24) = v114[0];
LABEL_55:
          v9 = *(_DWORD *)(v7 + 8);
          goto LABEL_4;
        }
      }
      else
      {
LABEL_44:
        if ( v114 != (_QWORD *)(v7 + 24) )
          goto LABEL_43;
      }
    }
    v30 = (__int64 *)v114[0];
    if ( v114[0] )
    {
      v31 = v114[0] + 8LL * *(unsigned int *)(v114[0] - 4LL);
      if ( v114[0] >= v31 )
        goto LABEL_53;
      do
      {
        while ( 1 )
        {
          v32 = *v30;
          if ( *v30 )
          {
            v33 = v113;
            v17 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v30 >= v31 )
            goto LABEL_52;
        }
        sub_15D7BC0(v33, v32);
        ++v30;
      }
      while ( (unsigned __int64)v30 < v31 );
LABEL_52:
      v30 = (__int64 *)v114[0];
      if ( v114[0] )
LABEL_53:
        sub_186B220(v30 - 1);
    }
    v10 = *(_QWORD *)(v7 + 24);
    goto LABEL_55;
  }
  v10 = *(_QWORD *)(v7 + 24);
LABEL_4:
  v11 = *(_QWORD *)(v7 + 16);
  if ( v10 && v9 < *(_DWORD *)(v10 - 4) )
  {
    v12 = *(_QWORD *)(v10 + 8LL * v9);
    if ( v12 )
      goto LABEL_7;
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 864);
    if ( v12 )
LABEL_7:
      ++*(_DWORD *)(v12 + 8);
  }
  *(_DWORD *)(v7 + 8) = v9 + 1;
  *v4 = v8;
  v4[1] = 0;
  if ( *(_QWORD *)(v8 + 864) == v12 )
  {
    v34 = *(_QWORD **)(v5 + 888);
    if ( v34 )
    {
      v35 = (__int64 *)v34[3];
      if ( v35 )
      {
        v36 = *((unsigned int *)v35 - 1);
        if ( v35 >= &v35[v36] )
          goto LABEL_65;
        v104 = v12;
        v37 = *(_QWORD **)(v5 + 888);
        v107 = v5;
        v38 = &v35[v36];
        do
        {
          while ( 1 )
          {
            v39 = *v35;
            if ( *v35 )
            {
              v40 = v37[2];
              v17 = (*(_DWORD *)(v39 + 8))-- == 1;
              if ( v17 )
                break;
            }
            if ( ++v35 >= v38 )
              goto LABEL_64;
          }
          sub_15D7BC0(v40, v39);
          ++v35;
        }
        while ( v35 < v38 );
LABEL_64:
        v34 = v37;
        v5 = v107;
        v12 = v104;
        v35 = (__int64 *)v34[3];
        if ( v35 )
        {
LABEL_65:
          v105 = v34;
          sub_186B220(v35 - 1);
          v34 = v105;
        }
      }
      sub_186B220(v34);
    }
    *(_QWORD *)(v5 + 888) = 0;
    if ( *(_QWORD *)(v8 + 856) == v12 )
      goto LABEL_31;
    v14 = (_QWORD *)v4[1];
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    if ( v14 )
    {
      v41 = *((_DWORD *)v14 - 1);
      if ( v41 == *((_DWORD *)v14 - 2) )
      {
        v43 = (3 * v41 + 1) >> 1;
        v44 = 8 * v43 + 8;
        if ( 8 * v41 + 8 >= (unsigned int)v44 || v41 >= v43 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v113, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v113);
          sub_233E40((__int64)&v113);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v45 = (unsigned int *)sub_186B300(v14 - 1, v44);
        v46 = v45[1];
        v14 = v45 + 2;
        *v45 = v43;
        v4[1] = (__int64)(v45 + 2);
        LODWORD(v45) = v46;
        v16 = &v14[v46];
        v15 = (_DWORD)v45 + 1;
      }
      else
      {
        v42 = v41;
        v15 = v41 + 1;
        v16 = &v14[v42];
      }
    }
    else
    {
LABEL_12:
      v13 = (_QWORD *)sub_186B270(0x18u);
      v14 = v13 + 1;
      *v13 = 2;
      v15 = 1;
      v4[1] = (__int64)v14;
      v16 = v14;
    }
    *v16 = v12;
    *((_DWORD *)v14 - 1) = v15;
  }
  else
  {
    if ( *(_QWORD *)(v8 + 856) != v12 )
    {
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      goto LABEL_12;
    }
    v19 = *(_QWORD **)(v5 + 888);
    if ( v19 )
    {
      v20 = (__int64 *)v19[3];
      if ( v20 )
      {
        v21 = *((unsigned int *)v20 - 1);
        if ( v20 >= &v20[v21] )
          goto LABEL_29;
        v103 = v12;
        v22 = *(_QWORD **)(v5 + 888);
        v23 = &v20[v21];
        do
        {
          while ( 1 )
          {
            v24 = *v20;
            if ( *v20 )
            {
              v25 = v22[2];
              v17 = (*(_DWORD *)(v24 + 8))-- == 1;
              if ( v17 )
                break;
            }
            if ( ++v20 >= v23 )
              goto LABEL_28;
          }
          sub_15D7BC0(v25, v24);
          ++v20;
        }
        while ( v20 < v23 );
LABEL_28:
        v19 = v22;
        v12 = v103;
        v20 = (__int64 *)v19[3];
        if ( v20 )
LABEL_29:
          sub_186B220(v20 - 1);
      }
      sub_186B220(v19);
    }
LABEL_31:
    *(_QWORD *)(v5 + 888) = 0;
  }
  if ( v12 )
  {
    v17 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v11, v12);
  }
  return v4;
}


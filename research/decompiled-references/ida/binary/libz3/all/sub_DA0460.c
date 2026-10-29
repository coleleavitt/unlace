__int64 __fastcall sub_DA0460(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rax
  int v9; // edi
  __int64 *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r11
  __int64 v21; // rax
  int v22; // edi
  __int64 *v23; // rcx
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // r10
  __int64 *i; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rdi
  int v32; // r8d
  const __m128i *v33; // rcx
  __int64 v34; // rdx
  const __m128i *v35; // r9
  const __m128i *j; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdx
  bool v40; // zf
  unsigned int v41; // r9d
  __m128i *v42; // rbx
  __int32 v43; // ecx
  __int64 v44; // r8
  __m128i *v45; // r15
  int v46; // esi
  __int64 v47; // rcx
  __m128i *v48; // rdi
  __m128i *v49; // rax
  __int64 *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r15
  __m128i **v54; // rcx
  __m128i v55; // xmm1
  __m128i *v56; // r14
  unsigned int v57; // eax
  __int64 v58; // rdi
  int v59; // eax
  __m128i *v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // edx
  unsigned int v67; // esi
  __int64 v68; // rax
  __m128i **v69; // rcx
  _DWORD *v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  __int64 v74; // r8
  _DWORD *v75; // rdx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  __int64 v78; // rsi
  unsigned int v79; // eax
  unsigned __int64 *v80; // rsi
  unsigned int v81; // eax
  int v82; // eax
  unsigned int v83; // ebx
  unsigned int v84; // ecx
  unsigned int *v85; // rax
  __int64 v86; // rcx
  unsigned int v87; // ebx
  unsigned int v88; // ecx
  unsigned int *v89; // rax
  unsigned int v90; // ebx
  unsigned int v91; // ecx
  unsigned int *v92; // rax
  __int64 v93; // rsi
  __int64 v94; // r15
  __m128i *v95; // rax
  __int32 v96; // r9d
  __m128i *v97; // rdx
  const __m128i *v98; // rax
  __m128i *v99; // r11
  __int64 v100; // rdi
  __m128i *v101; // rsi
  __m128i *v102; // rdx
  _QWORD *v103; // r14
  _QWORD *v104; // rax
  char **v105; // rbp
  char **exception; // rbp
  char **v107; // rbp
  char **v108; // rbp
  __int64 v109; // [rsp+8h] [rbp-A0h]
  unsigned int v110; // [rsp+10h] [rbp-98h]
  __int64 v111; // [rsp+10h] [rbp-98h]
  __int32 v112; // [rsp+10h] [rbp-98h]
  __m128i **v113; // [rsp+10h] [rbp-98h]
  __m128i v114; // [rsp+18h] [rbp-90h] BYREF
  _DWORD *v115; // [rsp+28h] [rbp-80h]
  __int32 v116; // [rsp+34h] [rbp-74h]
  __int64 v117; // [rsp+38h] [rbp-70h]
  __int64 v118[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = a1[1];
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(__int64 **)(v8 + 16);
  v11 = *(unsigned int *)(v8 + 24);
  v12 = v11 - 1;
  v11 *= 16;
  v13 = (__int64 *)((char *)v10 + v11);
  v14 = 16LL * (v9 & v12);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 == v11 )
  {
LABEL_9:
    while ( v15 != v10 )
    {
      v18 = *v10;
      if ( (unsigned __int64)*v10 > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v9 && a2 == v18 )
        {
          v16 = v10;
          goto LABEL_18;
        }
      }
      else if ( !v18 )
      {
        break;
      }
      v10 += 2;
    }
LABEL_8:
    BUG();
  }
  v16 = &v10[(unsigned __int64)v14 / 8];
  while ( 1 )
  {
    v17 = *v16;
    if ( (unsigned __int64)*v16 > 1 )
      break;
    if ( !v17 )
      goto LABEL_8;
LABEL_5:
    v16 += 2;
    if ( v13 == v16 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v17 + 12) != v9 || a2 != v17 )
    goto LABEL_5;
LABEL_18:
  v19 = *(_QWORD *)a1[2];
  v20 = *(_QWORD *)(v16[1] + 16);
  v109 = *a1;
  v21 = *(unsigned int *)(v19 + 32);
  v22 = *(_DWORD *)(v20 + 12);
  v23 = *(__int64 **)(v19 + 24);
  v24 = v21 - 1;
  v21 *= 24;
  v25 = (__int64 *)((char *)v23 + v21);
  v26 = 24LL * (v22 & v24);
  v27 = &v23[(unsigned __int64)v26 / 8];
  if ( v26 != v21 )
  {
    for ( i = &v23[(unsigned __int64)v26 / 8]; v25 != i; i += 3 )
    {
      v29 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v29 + 12) == v22 && v20 == v29 )
        {
LABEL_58:
          v30 = i[2];
          if ( !v30 )
            goto LABEL_25;
          goto LABEL_26;
        }
      }
      else if ( !v29 )
      {
        goto LABEL_25;
      }
    }
  }
  for ( ; v27 != v23; v23 += 3 )
  {
    v65 = *v23;
    if ( (unsigned __int64)*v23 > 1 )
    {
      if ( *(_DWORD *)(v65 + 12) == v22 && v20 == v65 )
      {
        i = v23;
        goto LABEL_58;
      }
    }
    else if ( !v65 )
    {
      break;
    }
  }
LABEL_25:
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 40LL))(
          v19,
          *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL));
  if ( v30 )
LABEL_26:
    ++*(_DWORD *)(v30 + 8);
  v31 = *((unsigned int *)a1 + 150);
  v32 = *(_DWORD *)(a3 + 12);
  v33 = (const __m128i *)a1[74];
  v34 = 24LL * (v32 & (unsigned int)(v31 - 1));
  v35 = (const __m128i *)((char *)v33 + v34);
  if ( v34 != 24 * v31 )
  {
    for ( j = (const __m128i *)((char *)v33 + v34);
          (const __m128i *)((char *)v33 + 24 * v31) != j;
          j = (const __m128i *)((char *)j + 24) )
    {
      v37 = j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v37 + 12) == v32 && a3 == v37 )
          goto LABEL_61;
      }
      else if ( !v37 )
      {
        goto LABEL_34;
      }
    }
  }
  for ( ; v35 != v33; v33 = (const __m128i *)((char *)v33 + 24) )
  {
    v64 = v33->m128i_i64[0];
    if ( v33->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v64 + 12) == v32 && a3 == v64 )
      {
        j = v33;
LABEL_61:
        v53 = j->m128i_i64[1];
        LOBYTE(a3) = v53 == v30;
        if ( v53 != v30 )
        {
          v54 = (__m128i **)a1[3];
          v55 = _mm_loadl_epi64(j + 1);
          v56 = *v54;
          if ( *v54 )
          {
            v57 = v56[-1].m128i_u32[3];
            if ( v57 == v56[-1].m128i_i32[2] )
            {
              v66 = (3 * v57 + 1) >> 1;
              v110 = v66;
              v67 = 16 * v66 + 8;
              if ( 16 * v57 + 8 >= v67 || v57 >= v66 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v118, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v118);
                sub_233E40((__int64)v118);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v114.m128i_i64[0] = (__int64)v54;
              v114.m128i_i64[1] = v55.m128i_i64[0];
              v68 = sub_186B270(v67);
              v69 = (__m128i **)v114.m128i_i64[0];
              v55 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
              v70 = (_DWORD *)v68;
              v56 = (__m128i *)(v68 + 8);
              v71 = *(_QWORD *)v114.m128i_i64[0];
              if ( *(_QWORD *)v114.m128i_i64[0] )
              {
                v72 = *(unsigned int *)(v71 - 4);
                *(_DWORD *)(v68 + 4) = v72;
                v73 = 0;
                v74 = 16 * v72;
                if ( v74 )
                {
                  do
                  {
                    *(__m128i *)&v70[v73 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v71 + v73));
                    v73 += 16LL;
                  }
                  while ( v73 != v74 );
                }
                v115 = v70;
                v114.m128i_i64[0] = (__int64)v69;
                v114.m128i_i64[1] = v55.m128i_i64[0];
                sub_186B220((void *)(v71 - 8));
                v70 = v115;
                v69 = (__m128i **)v114.m128i_i64[0];
                v55 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
                v60 = &v56[v115[1]];
                v59 = v115[1] + 1;
              }
              else
              {
                *(_DWORD *)(v68 + 4) = 0;
                v60 = (__m128i *)(v68 + 8);
                v59 = 1;
              }
              *v69 = v56;
              *v70 = v110;
            }
            else
            {
              v58 = v57;
              v59 = v57 + 1;
              v60 = &v56[v58];
            }
          }
          else
          {
            v113 = v54;
            v114.m128i_i64[0] = v55.m128i_i64[0];
            v103 = (_QWORD *)sub_186B270(0x28u);
            *v103 = 2;
            v59 = 1;
            v56 = (__m128i *)(v103 + 1);
            v55 = _mm_loadl_epi64(&v114);
            *v113 = v56;
            v60 = v56;
          }
          *v60 = _mm_unpacklo_epi64((__m128i)a2, v55);
          v56[-1].m128i_i32[3] = v59;
        }
        if ( v53 )
          ++*(_DWORD *)(v53 + 8);
        v61 = *a4;
        if ( *a4 )
        {
          v62 = a4[1];
          v40 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v40 )
            sub_15D7BC0(v62, v61);
        }
        *a4 = v53;
        goto LABEL_72;
      }
    }
    else if ( !v64 )
    {
      break;
    }
  }
LABEL_34:
  v38 = *a4;
  if ( *a4 != v30 )
  {
    if ( v38 )
    {
      v39 = a4[1];
      v40 = (*(_DWORD *)(v38 + 8))-- == 1;
      if ( v40 )
      {
        sub_15D7BC0(v39, v38);
        v31 = *((unsigned int *)a1 + 150);
      }
    }
    *a4 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
  }
  v41 = 2 * v31;
  if ( 3 * (int)v31 < (unsigned int)(4 * (*((_DWORD *)a1 + 151) + *((_DWORD *)a1 + 152))) )
  {
    v94 = v41;
    v114.m128i_i32[2] = 2 * v31;
    v114.m128i_i64[0] = 24LL * v41;
    v111 = v114.m128i_i64[0];
    v95 = (__m128i *)sub_186B270(v114.m128i_u64[0]);
    v96 = 2 * v31;
    v42 = v95;
    v44 = v114.m128i_i64[0];
    if ( 2 * (_DWORD)v31 )
    {
      v97 = (__m128i *)((char *)v95 + 24 * v94);
      do
      {
        v95->m128i_i64[0] = 0;
        v95 = (__m128i *)((char *)v95 + 24);
        v95[-1] = 0;
      }
      while ( v95 != v97 );
    }
    v98 = (const __m128i *)a1[74];
    v43 = v96 - 1;
    v45 = (__m128i *)((char *)v42 + v111);
    v99 = (__m128i *)((char *)v98 + 24 * *((unsigned int *)a1 + 150));
    if ( v98 != v99 )
    {
      do
      {
        if ( v98->m128i_i64[0] > 1uLL )
        {
          v100 = *(_DWORD *)(v98->m128i_i64[0] + 12) & (unsigned int)v43;
          v101 = (__m128i *)((char *)v42 + 24 * v100);
          if ( v111 == 24 * v100 )
          {
LABEL_130:
            if ( v42 == v101 )
            {
LABEL_142:
              v117 = v111;
              v116 = v96;
              v115 = (_DWORD *)v44;
              v114.m128i_i32[2] = v96 - 1;
              v114.m128i_i64[0] = (__int64)v99;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v102 = v42;
            while ( v102->m128i_i64[0] )
            {
              v102 = (__m128i *)((char *)v102 + 24);
              if ( v101 == v102 )
                goto LABEL_142;
            }
          }
          else
          {
            v102 = (__m128i *)((char *)v42 + 24 * v100);
            while ( v102->m128i_i64[0] )
            {
              v102 = (__m128i *)((char *)v102 + 24);
              if ( v45 == v102 )
                goto LABEL_130;
            }
          }
          *v102 = _mm_loadu_si128(v98);
          v102[1].m128i_i64[0] = v98[1].m128i_i64[0];
        }
        v98 = (const __m128i *)((char *)v98 + 24);
      }
      while ( v99 != v98 );
      v99 = (__m128i *)a1[74];
    }
    if ( v99 )
    {
      v114.m128i_i32[2] = v96;
      v114.m128i_i64[0] = v44;
      v112 = v96 - 1;
      sub_186B220(v99);
      v96 = v114.m128i_i32[2];
      v44 = v114.m128i_i64[0];
      v43 = v112;
    }
    a1[74] = (__int64)v42;
    *((_DWORD *)a1 + 150) = v96;
    *((_DWORD *)a1 + 152) = 0;
  }
  else
  {
    v42 = (__m128i *)a1[74];
    v43 = v31 - 1;
    v44 = 24 * v31;
    v45 = (__m128i *)((char *)v42 + 24 * v31);
  }
  v46 = *(_DWORD *)(a3 + 12);
  v47 = v46 & (unsigned int)v43;
  v48 = (__m128i *)((char *)v42 + 24 * v47);
  if ( 24 * v47 != v44 )
  {
    v49 = (__m128i *)((char *)v42 + 24 * v47);
    v50 = nullptr;
    while ( 1 )
    {
      v51 = v49->m128i_i64[0];
      if ( v49->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v51 + 12) == v46 && a3 == v51 )
        {
          v49->m128i_i64[0] = a3;
          v49->m128i_i64[1] = v30;
          v49[1].m128i_i64[0] = a2;
          goto LABEL_100;
        }
      }
      else
      {
        if ( !v51 )
        {
          if ( v50 )
            goto LABEL_140;
          v50 = (__int64 *)v49;
          goto LABEL_141;
        }
        v50 = (__int64 *)v49;
      }
      v49 = (__m128i *)((char *)v49 + 24);
      if ( v49 == v45 )
        goto LABEL_53;
    }
  }
  v50 = nullptr;
LABEL_53:
  while ( 2 )
  {
    if ( v48 == v42 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v52 = v42->m128i_i64[0];
    if ( v42->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v52 + 12) == v46 && a3 == v52 )
      {
        v42->m128i_i64[0] = a3;
        v42->m128i_i64[1] = v30;
        v42[1].m128i_i64[0] = a2;
        goto LABEL_100;
      }
      goto LABEL_52;
    }
    if ( v52 )
    {
      v50 = (__int64 *)v42;
LABEL_52:
      v42 = (__m128i *)((char *)v42 + 24);
      continue;
    }
    break;
  }
  if ( v50 )
LABEL_140:
    --*((_DWORD *)a1 + 152);
  else
    v50 = (__int64 *)v42;
LABEL_141:
  *v50 = a3;
  v50[1] = v30;
  v50[2] = a2;
  ++*((_DWORD *)a1 + 151);
LABEL_100:
  v75 = (_DWORD *)a1[5];
  ++*(_DWORD *)(a2 + 8);
  if ( !v75 )
  {
    v104 = (_QWORD *)sub_186B270(0x18u);
    v75 = v104 + 1;
    v104[1] = a2;
    *v104 = 0x100000002LL;
    v79 = 1;
    a1[5] = (__int64)v75;
    if ( v30 )
      goto LABEL_104;
    goto LABEL_106;
  }
  v76 = *(v75 - 1);
  v77 = *(v75 - 2);
  if ( v76 == v77 )
  {
    v83 = (3 * v76 + 1) >> 1;
    v84 = 8 * v83 + 8;
    if ( 8 * v76 + 8 >= v84 || v76 >= v83 )
    {
      v105 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v118, "Overflow encountered when expanding vector");
      *v105 = (char *)off_1C63128;
      sub_2333C0(v105 + 1, v118);
      sub_233E40((__int64)v118);
      __cxa_throw(v105, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v85 = (unsigned int *)sub_186B300(v75 - 2, v84);
    v86 = v85[1];
    v75 = v85 + 2;
    *v85 = v83;
    a1[5] = (__int64)(v85 + 2);
    LODWORD(v85) = v86;
    v80 = (unsigned __int64 *)&v75[2 * v86];
    v77 = v83;
    v79 = (_DWORD)v85 + 1;
  }
  else
  {
    v78 = v76;
    v79 = v76 + 1;
    v80 = (unsigned __int64 *)&v75[2 * v78];
  }
  *v80 = a2;
  *(v75 - 1) = v79;
  if ( v30 )
  {
LABEL_104:
    ++*(_DWORD *)(v30 + 8);
    v79 = *(v75 - 1);
    v77 = *(v75 - 2);
  }
  if ( v79 == v77 )
  {
    v90 = (3 * v79 + 1) >> 1;
    v91 = 8 * v90 + 8;
    if ( 8 * v79 + 8 >= v91 || v79 >= v90 )
    {
      v107 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v118, "Overflow encountered when expanding vector");
      *v107 = (char *)off_1C63128;
      sub_2333C0(v107 + 1, v118);
      sub_233E40((__int64)v118);
      __cxa_throw(v107, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v92 = (unsigned int *)sub_186B300(v75 - 2, v91);
    v93 = v92[1];
    v75 = v92 + 2;
    *v92 = v90;
    a1[5] = (__int64)(v92 + 2);
    *(_QWORD *)&v92[2 * v93 + 2] = v30;
    v92[1] = v93 + 1;
  }
  else
  {
LABEL_106:
    *(_QWORD *)&v75[2 * v79] = v30;
    *(v75 - 1) = v79 + 1;
  }
  ++*(_DWORD *)(a3 + 8);
  v81 = *(v75 - 2);
  if ( *(v75 - 1) == v81 )
  {
    v87 = (3 * v81 + 1) >> 1;
    v88 = 8 * v87 + 8;
    if ( 8 * v81 + 8 >= v88 || v81 >= v87 )
    {
      v108 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v118, "Overflow encountered when expanding vector");
      *v108 = (char *)off_1C63128;
      sub_2333C0(v108 + 1, v118);
      sub_233E40((__int64)v118);
      __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v89 = (unsigned int *)sub_186B300(v75 - 2, v88);
    v75 = v89 + 2;
    *v89 = v87;
    a1[5] = (__int64)(v89 + 2);
  }
  v82 = *(v75 - 1);
  *(_QWORD *)&v75[2 * v82] = a3;
  LODWORD(a3) = 1;
  *(v75 - 1) = v82 + 1;
LABEL_72:
  if ( v30 )
  {
    v40 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v109, v30);
  }
  return (unsigned int)a3;
}


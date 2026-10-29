__int64 __fastcall sub_64F660(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, double a5, double a6, __m128 a7)
{
  char **v7; // r15
  __int64 v8; // rdx
  char **exception; // r15
  __int64 v10; // rdx
  char **v11; // r15
  __int64 v12; // rdx
  char **v13; // r15
  __int64 v14; // rdx
  __int64 v17; // rdx
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // rbx
  __int64 v24; // rsi
  bool v25; // zf
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 *v31; // r15
  __int64 v32; // r13
  __int64 *v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rax
  int v36; // esi
  unsigned int v37; // edx
  __int64 *v38; // r11
  __int64 v39; // rdx
  __int64 *v40; // rdi
  __int64 *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  unsigned int *v47; // rsi
  unsigned int v48; // ebx
  __int64 v49; // r12
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  _QWORD *v54; // rcx
  _QWORD *v55; // r13
  _QWORD *v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  unsigned int *v60; // rsi
  __int64 v62; // rax
  unsigned int v63; // r12d
  unsigned int v64; // ecx
  unsigned int *v65; // rax
  __int64 v66; // rcx
  unsigned int v67; // r15d
  unsigned int v68; // ecx
  unsigned int *v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // ecx
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r13
  __int16 v76; // ax
  __int64 v77; // rax
  _DWORD *v78; // rdx
  _QWORD *v79; // rdx
  unsigned int v80; // eax
  __int64 v81; // rsi
  int v82; // eax
  __int64 *v83; // rsi
  _DWORD *v84; // rax
  __int64 v85; // rax
  unsigned int v86; // r8d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rsi
  _QWORD *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  unsigned int v96; // [rsp+8h] [rbp-88h]
  unsigned int v97; // [rsp+8h] [rbp-88h]
  __int64 v98; // [rsp+8h] [rbp-88h]
  __int64 v100; // [rsp+18h] [rbp-78h]
  __int64 *v101; // [rsp+20h] [rbp-70h]
  __int64 v103; // [rsp+30h] [rbp-60h] BYREF
  __int64 v104; // [rsp+38h] [rbp-58h]
  __int64 v105[10]; // [rsp+40h] [rbp-50h] BYREF

  v17 = *(_QWORD *)(a1 + 2912);
  v104 = *(_QWORD *)a1;
  v103 = 0;
  v101 = (__int64 *)(a1 + 656);
  if ( !v17 )
  {
    v30 = *(__int64 **)(a1 + 2384);
    if ( !v30 )
      return sub_64AD00(v103, v104);
LABEL_20:
    v31 = &v30[*((unsigned int *)v30 - 1)];
    if ( v31 == v30 )
      goto LABEL_36;
LABEL_21:
    v32 = *v30;
    sub_62E310((__int64)v101, *v30, &v103, a5, a6, a7);
    v33 = *(__int64 **)(a1 + 2512);
    v34 = *(_QWORD *)(*(_QWORD *)(v32 + 40) + 16LL);
    v35 = *(unsigned int *)(a1 + 2520);
    v36 = *(_DWORD *)(v34 + 12);
    v37 = v35 - 1;
    v35 *= 8;
    v38 = (__int64 *)((char *)v33 + v35);
    v39 = 8LL * (v36 & v37);
    v40 = &v33[(unsigned __int64)v39 / 8];
    if ( v39 == v35 )
    {
LABEL_49:
      while ( v40 != v33 )
      {
        v62 = *v33;
        if ( (unsigned __int64)*v33 > 1 )
        {
          if ( *(_DWORD *)(v62 + 12) == v36 && v34 == v62 )
            goto LABEL_67;
        }
        else if ( !v62 )
        {
          break;
        }
        ++v33;
      }
LABEL_28:
      v105[0] = v103;
      if ( v103 )
        ++*(_DWORD *)(v103 + 8);
      sub_64DC20((_QWORD *)(a2 + 8), v105);
      v43 = (_QWORD *)*a4;
      if ( *a4 )
      {
        v44 = *((_DWORD *)v43 - 1);
        if ( v44 == *((_DWORD *)v43 - 2) )
        {
          v71 = (3 * v44 + 1) >> 1;
          v72 = 8 * v71 + 8;
          if ( 8 * v44 + 8 >= (unsigned int)v72 || v44 >= v71 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_104888(v105, "Overflow encountered when expanding vector", v10);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v105);
            sub_233E40((__int64)v105);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v96 = (3 * v44 + 1) >> 1;
          v73 = (unsigned int *)sub_186B300(v43 - 1, v72);
          v43 = v73 + 2;
          *v73 = v96;
          v74 = v73[1];
          *a4 = v73 + 2;
          v47 = &v73[2 * v74 + 2];
          v46 = v74 + 1;
        }
        else
        {
          v45 = v44;
          v46 = v44 + 1;
          v47 = (unsigned int *)&v43[v45];
        }
      }
      else
      {
        v95 = (_QWORD *)sub_186B270(0x18u);
        *v95 = 2;
        v43 = v95 + 1;
        *a4 = v95 + 1;
        v47 = (unsigned int *)(v95 + 1);
        v46 = 1;
      }
      *(_QWORD *)v47 = *(_QWORD *)(v32 + 72);
      *((_DWORD *)v43 - 1) = v46;
      goto LABEL_34;
    }
    v41 = &v33[(unsigned __int64)v39 / 8];
    while ( 1 )
    {
      v42 = *v41;
      if ( (unsigned __int64)*v41 > 1 )
      {
        if ( *(_DWORD *)(v42 + 12) == v36 && v34 == v42 )
        {
LABEL_67:
          v75 = v103;
          v76 = *(_WORD *)(v103 + 4);
          if ( v76 != 2 )
          {
            if ( !*(_DWORD *)(v103 + 8) )
            {
              sub_15D7BC0(v104, v103);
              v76 = *(_WORD *)(v75 + 4);
            }
            v103 = v75;
            if ( v76 )
              goto LABEL_72;
            v84 = *(_DWORD **)(*(_QWORD *)(v75 + 16) + 24LL);
            if ( !v84 || *v84 || v84[1] != 9 || *(_DWORD *)(v75 + 24) != 2 )
              goto LABEL_72;
            v85 = *(_QWORD *)(v75 + 32);
            if ( v85 )
            {
              ++*(_DWORD *)(v85 + 8);
              v98 = v85;
              sub_64AD00(v75, v104);
              v103 = v98;
              v75 = v98;
              goto LABEL_72;
            }
            sub_64AD00(v75, v104);
            goto LABEL_106;
          }
          v77 = *(_QWORD *)(v103 + 24);
          if ( !*(_WORD *)(v77 + 4)
            && (v78 = *(_DWORD **)(*(_QWORD *)(v77 + 16) + 24LL)) != nullptr
            && !*v78
            && v78[1] == 9
            && *(_DWORD *)(v77 + 24) == 2 )
          {
            v92 = sub_15DB6A0(
                    *(_QWORD *)a1,
                    1,
                    *(unsigned int *)(v103 + 20),
                    v103 + 80,
                    v103 + 80 + 8LL * *(unsigned int *)(v103 + 20),
                    *(_QWORD *)(v77 + 32),
                    0,
                    &qword_18D6CD0,
                    &qword_18D6CD0,
                    0,
                    0,
                    0,
                    0);
            v75 = v92;
            if ( v92 )
            {
              ++*(_DWORD *)(v92 + 8);
              sub_64AD00(v103, v104);
LABEL_90:
              v103 = v75;
              goto LABEL_72;
            }
            sub_64AD00(v103, v104);
LABEL_106:
            v103 = 0;
            v75 = 0;
          }
          else
          {
            if ( !*(_DWORD *)(v103 + 8) )
            {
              sub_15D7BC0(v104, v103);
              goto LABEL_90;
            }
LABEL_72:
            ++*(_DWORD *)(v75 + 8);
          }
          v79 = *(_QWORD **)(a3 + 8);
          if ( v79 )
          {
            v80 = *((_DWORD *)v79 - 1);
            if ( v80 == *((_DWORD *)v79 - 2) )
            {
              v86 = (3 * v80 + 1) >> 1;
              v87 = 8 * v86 + 8;
              if ( 8 * v80 + 8 >= (unsigned int)v87 || v80 >= v86 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_104888(v105, "Overflow encountered when expanding vector", v8);
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, v105);
                sub_233E40((__int64)v105);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v97 = (3 * v80 + 1) >> 1;
              v88 = (unsigned int *)sub_186B300(v79 - 1, v87);
              v89 = v88[1];
              v79 = v88 + 2;
              *(_QWORD *)(a3 + 8) = v88 + 2;
              *v88 = v97;
              LODWORD(v88) = v89;
              v83 = &v79[v89];
              v82 = (_DWORD)v88 + 1;
            }
            else
            {
              v81 = v80;
              v82 = v80 + 1;
              v83 = &v79[v81];
            }
          }
          else
          {
            v90 = (_QWORD *)sub_186B270(0x18u);
            *v90 = 2;
            v82 = 1;
            v79 = v90 + 1;
            *(_QWORD *)(a3 + 8) = v79;
            v83 = v79;
          }
          *v83 = v75;
          *((_DWORD *)v79 - 1) = v82;
LABEL_34:
          if ( v31 == ++v30 )
          {
            v17 = *(_QWORD *)(a1 + 2912);
            goto LABEL_36;
          }
          goto LABEL_21;
        }
      }
      else if ( !v42 )
      {
        goto LABEL_28;
      }
      if ( v38 == ++v41 )
        goto LABEL_49;
    }
  }
  v18 = *(_DWORD *)(a1 + 2896);
  while ( v18 < *(_DWORD *)(v17 - 4) )
  {
    sub_157E9E0(a1 + 2856, *(_QWORD *)(v17 + 8LL * v18));
    v19 = *(_QWORD *)(a1 + 2880);
    v17 = *(_QWORD *)(a1 + 2912);
    if ( v19 && *(_DWORD *)(v19 - 4) )
    {
      sub_631ED0(
        v101,
        *(_QWORD *)(v17 + 8LL * v18),
        0,
        a1 + 2360,
        (__int64 *)(8LL * v18 + *(_QWORD *)(a1 + 2920)),
        a5,
        a6,
        a7);
      v17 = *(_QWORD *)(a1 + 2912);
      v20 = 0x7FFFFFFF8LL;
      if ( v17 )
        v20 = 8LL * (unsigned int)(*(_DWORD *)(v17 - 4) - 1);
      v21 = *(_QWORD *)(v17 + v20);
      v22 = *(_QWORD *)(a1 + 2904);
      v23 = (__int64 *)(v17 + 8LL * v18);
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v24 = *v23;
      if ( *v23 && (v25 = *(_DWORD *)(v24 + 8) == 1, --*(_DWORD *)(v24 + 8), v25) )
      {
        v100 = v21;
        sub_15D7BC0(v22, v24);
        v26 = *(_QWORD *)(a1 + 2920);
        v17 = *(_QWORD *)(a1 + 2912);
        v22 = *(_QWORD *)(a1 + 2904);
        *v23 = v100;
        if ( v26 )
        {
LABEL_13:
          *(_QWORD *)(v26 + 8LL * v18) = *(_QWORD *)(v26 + 8LL * (unsigned int)(*(_DWORD *)(v26 - 4) - 1));
          v27 = *(_DWORD *)(v17 - 4) - 1;
          goto LABEL_14;
        }
      }
      else
      {
        v26 = *(_QWORD *)(a1 + 2920);
        *v23 = v21;
        if ( v26 )
          goto LABEL_13;
      }
      *(_QWORD *)(8LL * v18) = MEMORY[0x7FFFFFFF8];
      v27 = *(_DWORD *)(v17 - 4) - 1;
LABEL_14:
      v28 = *(_QWORD *)(v17 + 8LL * v27);
      *(_DWORD *)(v17 - 4) = v27;
      if ( v28 )
      {
        v25 = (*(_DWORD *)(v28 + 8))-- == 1;
        if ( v25 )
        {
          sub_15D7BC0(v22, v28);
          v26 = *(_QWORD *)(a1 + 2920);
          v17 = *(_QWORD *)(a1 + 2912);
        }
        v29 = *(_QWORD *)(a1 + 2928);
        --*(_DWORD *)(v26 - 4);
        --*(_DWORD *)(v29 - 4);
        goto LABEL_18;
      }
      v91 = *(_QWORD *)(a1 + 2928);
      --*(_DWORD *)(v26 - 4);
      --*(_DWORD *)(v91 - 4);
    }
    else
    {
      ++v18;
LABEL_18:
      if ( !v17 )
        break;
    }
  }
  v30 = *(__int64 **)(a1 + 2384);
  if ( v30 )
    goto LABEL_20;
LABEL_36:
  if ( v17 )
  {
    v48 = *(_DWORD *)(a1 + 2896);
    do
    {
      if ( v48 >= *(_DWORD *)(v17 - 4) )
        break;
      v49 = *(_QWORD *)(v17 + 8LL * v48);
      if ( v49 )
        ++*(_DWORD *)(v49 + 8);
      v50 = *(_QWORD **)(a2 + 8);
      if ( v50 )
      {
        v51 = *((_DWORD *)v50 - 1);
        if ( v51 == *((_DWORD *)v50 - 2) )
        {
          v67 = (3 * v51 + 1) >> 1;
          v68 = 8 * v67 + 8;
          if ( 8 * v51 + 8 >= v68 || v51 >= v67 )
          {
            v11 = (char **)__cxa_allocate_exception(0x28u);
            sub_104888(v105, "Overflow encountered when expanding vector", v12);
            *v11 = (char *)off_1C63128;
            sub_2333C0(v11 + 1, v105);
            sub_233E40((__int64)v105);
            __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v69 = (unsigned int *)sub_186B300(v50 - 1, v68);
          v70 = v69[1];
          v50 = v69 + 2;
          *v69 = v67;
          LODWORD(v69) = v70;
          *(_QWORD *)(a2 + 8) = v50;
          v54 = &v50[v70];
          v53 = (_DWORD)v69 + 1;
        }
        else
        {
          v52 = v51;
          v53 = v51 + 1;
          v54 = &v50[v52];
        }
      }
      else
      {
        v94 = (_QWORD *)sub_186B270(0x18u);
        *v94 = 2;
        v50 = v94 + 1;
        *(_QWORD *)(a2 + 8) = v94 + 1;
        v54 = v94 + 1;
        v53 = 1;
      }
      *v54 = v49;
      v55 = (_QWORD *)(*(_QWORD *)(a1 + 2920) + 8LL * v48);
      *((_DWORD *)v50 - 1) = v53;
      v56 = (_QWORD *)*a4;
      if ( *a4 )
      {
        v57 = *((_DWORD *)v56 - 1);
        if ( v57 == *((_DWORD *)v56 - 2) )
        {
          v63 = (3 * v57 + 1) >> 1;
          v64 = 8 * v63 + 8;
          if ( 8 * v57 + 8 >= v64 || v57 >= v63 )
          {
            v13 = (char **)__cxa_allocate_exception(0x28u);
            sub_104888(v105, "Overflow encountered when expanding vector", v14);
            *v13 = (char *)off_1C63128;
            sub_2333C0(v13 + 1, v105);
            sub_233E40((__int64)v105);
            __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (unsigned int *)sub_186B300(v56 - 1, v64);
          v66 = v65[1];
          v56 = v65 + 2;
          *v65 = v63;
          *a4 = v65 + 2;
          v60 = &v65[2 * v66 + 2];
          v59 = v66 + 1;
        }
        else
        {
          v58 = v57;
          v59 = v57 + 1;
          v60 = (unsigned int *)&v56[v58];
        }
      }
      else
      {
        v93 = (_QWORD *)sub_186B270(0x18u);
        *v93 = 2;
        v56 = v93 + 1;
        *a4 = v93 + 1;
        v60 = (unsigned int *)(v93 + 1);
        v59 = 1;
      }
      ++v48;
      *(_QWORD *)v60 = *v55;
      *((_DWORD *)v56 - 1) = v59;
      v17 = *(_QWORD *)(a1 + 2912);
    }
    while ( v17 );
  }
  return sub_64AD00(v103, v104);
}


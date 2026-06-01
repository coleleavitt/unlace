__int64 __fastcall sub_775160(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r14
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // r12
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rsi
  unsigned int v26; // r8d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r14
  _QWORD *v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // r13
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rsi
  unsigned int v41; // r9d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // r14
  __int64 v47; // rax
  unsigned int v48; // r8d
  __int64 *v49; // r15
  __int64 v50; // rsi
  bool v51; // zf
  unsigned __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rax
  _QWORD *v55; // r15
  __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 *v58; // r14
  __int64 v59; // rsi
  unsigned __int64 v60; // r14
  __int64 *i; // r15
  __int64 v62; // rsi
  int v63; // r12d
  _QWORD *v64; // rax
  int v65; // r15d
  int v66; // r14d
  __int64 v67; // rcx
  int v68; // edx
  _QWORD *v69; // rcx
  _QWORD *v70; // rdx
  __int64 v71; // rax
  _DWORD *v72; // rax
  unsigned int v73; // edx
  unsigned int v74; // ecx
  size_t v75; // rsi
  unsigned int *v76; // rdx
  __int64 v77; // rcx
  unsigned int v78; // ecx
  size_t v79; // rsi
  unsigned int *v80; // rax
  _DWORD *v81; // rdx
  __int64 v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  char **v85; // r14
  char **exception; // r14
  char **v87; // r14
  __int64 v88; // [rsp+0h] [rbp-C0h]
  _QWORD *v89; // [rsp+8h] [rbp-B8h]
  _QWORD *v90; // [rsp+10h] [rbp-B0h]
  unsigned int v91; // [rsp+10h] [rbp-B0h]
  unsigned __int64 v92; // [rsp+18h] [rbp-A8h]
  __int64 v93; // [rsp+20h] [rbp-A0h]
  __int64 v94; // [rsp+20h] [rbp-A0h]
  __int64 v95; // [rsp+28h] [rbp-98h]
  unsigned __int64 v96; // [rsp+28h] [rbp-98h]
  unsigned int v97; // [rsp+28h] [rbp-98h]
  __int64 v98; // [rsp+28h] [rbp-98h]
  __int64 v100; // [rsp+38h] [rbp-88h]
  __int64 v101; // [rsp+38h] [rbp-88h]
  unsigned int v102; // [rsp+38h] [rbp-88h]
  _QWORD *v103; // [rsp+38h] [rbp-88h]
  unsigned __int64 v104; // [rsp+38h] [rbp-88h]
  _QWORD *v105; // [rsp+38h] [rbp-88h]
  unsigned int v106; // [rsp+40h] [rbp-80h]
  __int64 v107; // [rsp+40h] [rbp-80h]
  unsigned int v108; // [rsp+48h] [rbp-78h]
  __int64 v109; // [rsp+48h] [rbp-78h]
  unsigned int v110; // [rsp+48h] [rbp-78h]
  unsigned int v111; // [rsp+48h] [rbp-78h]
  __int64 v112[10]; // [rsp+70h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  v63 = *(_DWORD *)(a2 + 20);
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v64 = *(_QWORD **)(a1 + 160);
  if ( v64 )
    v65 = *((_DWORD *)v64 - 1);
  else
    v65 = 0;
  if ( v63 )
  {
    v66 = 0;
    while ( 1 )
    {
      if ( v64 )
      {
        v73 = *((_DWORD *)v64 - 1);
        if ( v73 == *((_DWORD *)v64 - 2) )
        {
          v74 = (3 * v73 + 1) >> 1;
          v75 = 8 * v74 + 8;
          v110 = v74;
          if ( 8 * v73 + 8 >= (unsigned int)v75 || v73 >= v74 )
          {
LABEL_103:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_76A180(v112, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v112);
            sub_233E40((__int64)v112);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v76 = (unsigned int *)sub_186B300(v64 - 1, v75);
          v64 = v76 + 2;
          *v76 = v110;
          v77 = v76[1];
          *(_QWORD *)(a1 + 160) = v76 + 2;
          LODWORD(v76) = v77;
          v69 = &v64[v77];
          v68 = (_DWORD)v76 + 1;
        }
        else
        {
          v67 = v73;
          v68 = v73 + 1;
          v69 = &v64[v67];
        }
      }
      else
      {
        v83 = (_QWORD *)sub_186B270(0x18u);
        v68 = 1;
        *v83 = 2;
        v64 = v83 + 1;
        *(_QWORD *)(a1 + 160) = v64;
        v69 = v64;
      }
      *v69 = 0;
      *((_DWORD *)v64 - 1) = v68;
      v70 = *(_QWORD **)(a1 + 528);
      if ( !v70 )
        break;
      v71 = *((unsigned int *)v70 - 1);
      if ( (_DWORD)v71 != *((_DWORD *)v70 - 2) )
      {
        v72 = (_DWORD *)v70 + v71;
        goto LABEL_82;
      }
      v78 = (unsigned int)(3 * v71 + 1) >> 1;
      v79 = 4 * v78 + 8;
      v111 = v78;
      if ( 4 * (int)v71 + 8 >= (unsigned int)v79 || (unsigned int)v71 >= v78 )
        goto LABEL_103;
      ++v66;
      v80 = (unsigned int *)sub_186B300(v70 - 1, v79);
      v81 = v80 + 2;
      *v80 = v111;
      v82 = v80[1];
      *(_QWORD *)(a1 + 528) = v81;
      v81[v82] = v65;
      ++*(v81 - 1);
      if ( v66 == v63 )
        goto LABEL_92;
LABEL_83:
      v64 = *(_QWORD **)(a1 + 160);
    }
    v84 = (_QWORD *)sub_186B270(0x10u);
    v70 = v84 + 1;
    *v84 = 2;
    *(_QWORD *)(a1 + 528) = v84 + 1;
    v72 = v84 + 1;
LABEL_82:
    ++v66;
    *v72 = v65;
    ++*((_DWORD *)v70 - 1);
    if ( v66 == v63 )
      goto LABEL_92;
    goto LABEL_83;
  }
LABEL_92:
  *(_DWORD *)(a1 + 128) += v63;
LABEL_2:
  v5 = *(_DWORD *)(a2 + 72) + *(_DWORD *)(a2 + 76) + 1;
  do
  {
    v9 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v9 >= v5 )
    {
      v12 = *(unsigned int *)(a2 + 20);
      LODWORD(v13) = *(_DWORD *)(a2 + 72);
      v90 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
      v14 = 16 * v12;
      v88 = *v90;
      v106 = *(_DWORD *)(a2 + 76);
      v15 = *(_QWORD *)(a1 + 8);
      v92 = v15;
      if ( (_DWORD)v13 )
      {
        v16 = v14 + a2;
        v17 = *(_QWORD *)(v14 + a2 + 80);
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v18 = (_QWORD *)sub_186B270(0x18u);
        v19 = v18 + 1;
        *v18 = 2;
        v93 = (unsigned int)v13;
        v20 = (unsigned int)v13 + 2 * v12;
        v21 = 1;
        v22 = v19;
        v23 = a2 + 8 * v20;
        while ( 1 )
        {
          v16 += 8;
          *v19 = v17;
          *(v22 - 1) = v21;
          if ( v23 == v16 )
            break;
          v17 = *(_QWORD *)(v16 + 80);
          if ( v17 )
            ++*(_DWORD *)(v17 + 8);
          v24 = *(v22 - 1);
          if ( v24 == *(v22 - 2) )
          {
            v26 = (3 * v24 + 1) >> 1;
            v27 = 8 * v26 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v27 || v24 >= v26 )
            {
              v85 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(v112, "Overflow encountered when expanding vector");
              *v85 = (char *)off_1C63128;
              sub_2333C0(v85 + 1, v112);
              sub_233E40((__int64)v112);
              __cxa_throw(v85, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v100 = v23;
            v108 = (3 * v24 + 1) >> 1;
            v28 = (unsigned int *)sub_186B300(v22 - 2, v27);
            v29 = v28[1];
            v22 = v28 + 2;
            v23 = v100;
            *v28 = v108;
            LODWORD(v28) = v29;
            v19 = &v22[2 * v29];
            v21 = (_DWORD)v28 + 1;
          }
          else
          {
            v25 = v24;
            v21 = v24 + 1;
            v19 = &v22[2 * v25];
          }
        }
        v30 = *(_QWORD *)(a1 + 8);
        v109 = *(_QWORD *)(a1 + 8);
        v14 = 16LL * *(unsigned int *)(a2 + 20);
        if ( !v106 )
        {
          v37 = nullptr;
          v89 = v90 + 1;
          v45 = (unsigned int)v13;
          goto LABEL_38;
        }
      }
      else
      {
        v22 = nullptr;
        v109 = *(_QWORD *)(a1 + 8);
        if ( !v106 )
          goto LABEL_96;
      }
      v31 = a2 + v14;
      v32 = *(_QWORD *)(v31 + 80);
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      v101 = v31;
      v33 = (_QWORD *)sub_186B270(0x18u);
      v34 = v33 + 1;
      v35 = v101;
      *v33 = 2;
      v36 = 0;
      v37 = v33 + 1;
      v38 = 1;
      while ( 1 )
      {
        *v34 = v32;
        ++v36;
        *((_DWORD *)v37 - 1) = v38;
        if ( (unsigned int)v36 >= v106 )
          break;
        v32 = *(_QWORD *)(v35 + 8 * v36 + 80);
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v39 = *((_DWORD *)v37 - 1);
        if ( v39 == *((_DWORD *)v37 - 2) )
        {
          v41 = (3 * v39 + 1) >> 1;
          v42 = 8 * v41 + 8;
          if ( 8 * v39 + 8 >= (unsigned int)v42 || v39 >= v41 )
          {
            v87 = (char **)__cxa_allocate_exception(0x28u);
            sub_76A180(v112, "Overflow encountered when expanding vector");
            *v87 = (char *)off_1C63128;
            sub_2333C0(v87 + 1, v112);
            sub_233E40((__int64)v112);
            __cxa_throw(v87, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = v36;
          v95 = v35;
          v102 = (3 * v39 + 1) >> 1;
          v43 = (unsigned int *)sub_186B300(v37 - 1, v42);
          v44 = v43[1];
          v37 = v43 + 2;
          v35 = v95;
          v36 = v94;
          *v43 = v102;
          LODWORD(v43) = v44;
          v34 = &v37[v44];
          v38 = (_DWORD)v43 + 1;
        }
        else
        {
          v40 = v39;
          v38 = v39 + 1;
          v34 = &v37[v40];
        }
      }
      v89 = v90 + 1;
      v45 = (unsigned int)v13;
      v93 = (unsigned int)v13;
      if ( (_DWORD)v13 )
      {
        v30 = *(_QWORD *)(a1 + 8);
LABEL_38:
        v46 = v90;
        v13 = 0;
        v103 = &v90[v45];
        while ( 1 )
        {
          if ( (unsigned __int8)sub_15D3190(v30, v46[1]) )
          {
            v47 = v46[1];
            v48 = v13 + 1;
            v49 = (__int64 *)&v22[2 * v13];
            if ( v47 )
              ++*(_DWORD *)(v47 + 8);
            v50 = *v49;
            if ( *v49 )
            {
              v51 = (*(_DWORD *)(v50 + 8))-- == 1;
              if ( v51 )
              {
                v91 = v48;
                v98 = v47;
                sub_15D7BC0(v92, v50);
                v48 = v91;
                v47 = v98;
              }
            }
            *v49 = v47;
            v15 = (unsigned __int64)v103;
            ++v46;
            v13 = v48;
            if ( v46 == v103 )
            {
LABEL_48:
              if ( v22 )
              {
                v45 = (unsigned int)v13;
                goto LABEL_50;
              }
LABEL_57:
              if ( v106 )
                goto LABEL_58;
              goto LABEL_67;
            }
          }
          else
          {
            v15 = (unsigned __int64)v103;
            if ( ++v46 == v103 )
              goto LABEL_48;
          }
          v30 = *(_QWORD *)(a1 + 8);
        }
      }
      v93 = 0;
      if ( v22 )
      {
LABEL_50:
        v15 = (unsigned __int64)&v22[2 * v45];
        v52 = (unsigned __int64)&v22[2 * *(v22 - 1)];
        if ( v15 < v52 )
        {
          do
          {
            while ( 1 )
            {
              v53 = *(_QWORD *)v15;
              if ( *(_QWORD *)v15 )
              {
                v51 = (*(_DWORD *)(v53 + 8))-- == 1;
                if ( v51 )
                  break;
              }
              v15 += 8LL;
              if ( v15 >= v52 )
                goto LABEL_56;
            }
            v96 = v15;
            v104 = v52;
            sub_15D7BC0(v92, v53);
            v52 = v104;
            v15 = v96 + 8;
          }
          while ( v96 + 8 < v104 );
        }
LABEL_56:
        *(v22 - 1) = v13;
        goto LABEL_57;
      }
LABEL_58:
      v54 = v106;
      v106 = 0;
      v55 = &v89[v93];
      v105 = &v89[v93 + v54];
      do
      {
        while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v55) )
        {
          v15 = (unsigned __int64)v105;
          if ( ++v55 == v105 )
            goto LABEL_67;
        }
        v56 = *v55;
        v57 = v106 + 1;
        v58 = &v37[v106];
        if ( *v55 )
          ++*(_DWORD *)(v56 + 8);
        v59 = *v58;
        if ( *v58 )
        {
          v51 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v51 )
          {
            v97 = v106 + 1;
            v107 = v56;
            sub_15D7BC0(v109, v59);
            v57 = v97;
            v56 = v107;
          }
        }
        *v58 = v56;
        v15 = (unsigned __int64)v105;
        ++v55;
        v106 = v57;
      }
      while ( v55 != v105 );
LABEL_67:
      if ( v37 )
      {
        v60 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
        for ( i = &v37[v106]; (unsigned __int64)i < v60; ++i )
        {
          v62 = *i;
          if ( *i )
          {
            v51 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v51 )
              sub_15D7BC0(v109, v62);
          }
        }
        v15 = v106;
        *((_DWORD *)v37 - 1) = v106;
LABEL_97:
        sub_10E3C0(*(_QWORD *)(a1 + 144), a2, v88, v22, v37, a1 + 480, a1 + 496, v15);
      }
LABEL_96:
      v37 = nullptr;
      goto LABEL_97;
    }
    if ( v9 )
    {
      v10 = *(_DWORD *)(a2 + 72);
      if ( v10 < v9 )
        v11 = a2 + 8LL * (v9 - v10 - 1);
      else
        v11 = a2 + 8LL * (v9 - 1);
      v6 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + v11 + 80);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 24);
    }
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_773C40(a1, v6, ((unsigned __int8)v7 >> 4) & 3);
  }
  while ( (_BYTE)result );
  return result;
}


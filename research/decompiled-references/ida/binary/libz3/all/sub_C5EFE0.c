__int64 __fastcall sub_C5EFE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  _Unwind_Exception_Class v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // r15
  _QWORD *v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int *v35; // rax
  _DWORD *v36; // rdi
  __int64 *v37; // r14
  __int64 v38; // r15
  _QWORD *v39; // rax
  _QWORD *v40; // rsi
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // r12
  unsigned int v44; // eax
  __int64 v45; // rsi
  unsigned int v46; // r8d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rsi
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // rax
  int v64; // r12d
  __int64 v65; // rcx
  int v66; // edx
  _QWORD *v67; // rcx
  _QWORD *v68; // rdx
  __int64 v69; // rax
  _DWORD *v70; // rax
  unsigned int v71; // edx
  unsigned int v72; // r15d
  size_t v73; // rsi
  unsigned int *v74; // rdx
  __int64 v75; // rcx
  unsigned int v76; // r15d
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rdi
  char **v83; // r13
  char **v84; // r12
  char **exception; // r14
  __int64 v86; // [rsp+8h] [rbp-B8h]
  unsigned int v87; // [rsp+14h] [rbp-ACh]
  unsigned int v88; // [rsp+18h] [rbp-A8h]
  unsigned int v89; // [rsp+18h] [rbp-A8h]
  int v90; // [rsp+1Ch] [rbp-A4h]
  __int64 *v91; // [rsp+20h] [rbp-A0h]
  unsigned __int64 v92; // [rsp+20h] [rbp-A0h]
  unsigned int v93; // [rsp+28h] [rbp-98h]
  unsigned int v94; // [rsp+28h] [rbp-98h]
  __int64 v95; // [rsp+28h] [rbp-98h]
  __int64 v96; // [rsp+28h] [rbp-98h]
  __int64 v97; // [rsp+28h] [rbp-98h]
  _QWORD *v98; // [rsp+28h] [rbp-98h]
  __int64 v100; // [rsp+38h] [rbp-88h]
  int v101; // [rsp+38h] [rbp-88h]
  __int64 v102; // [rsp+48h] [rbp-78h] BYREF
  __int64 v103[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v104[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v105[10]; // [rsp+70h] [rbp-50h] BYREF

  v3 = a2;
  v90 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v63 = *(_QWORD **)(a1 + 160);
    if ( v63 )
      v64 = *((_DWORD *)v63 - 1);
    else
      v64 = 0;
    if ( !v90 )
    {
LABEL_86:
      v3 = a2;
      *(_DWORD *)(a1 + 128) += v90;
      goto LABEL_4;
    }
    v101 = 0;
    while ( 1 )
    {
      if ( v63 )
      {
        v71 = *((_DWORD *)v63 - 1);
        if ( v71 == *((_DWORD *)v63 - 2) )
        {
          v72 = (3 * v71 + 1) >> 1;
          v73 = 8 * v72 + 8;
          if ( 8 * v71 + 8 >= (unsigned int)v73 || v71 >= v72 )
          {
LABEL_96:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v105, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v105);
            sub_233E40((__int64)v105);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v74 = (unsigned int *)sub_186B300(v63 - 1, v73);
          v63 = v74 + 2;
          v75 = v74[1];
          *v74 = v72;
          *(_QWORD *)(a1 + 160) = v74 + 2;
          LODWORD(v74) = v75;
          v67 = &v63[v75];
          v66 = (_DWORD)v74 + 1;
        }
        else
        {
          v65 = v71;
          v66 = v71 + 1;
          v67 = &v63[v65];
        }
      }
      else
      {
        v81 = (_QWORD *)sub_186B270(0x18u);
        v66 = 1;
        *v81 = 2;
        v63 = v81 + 1;
        *(_QWORD *)(a1 + 160) = v63;
        v67 = v63;
      }
      *v67 = 0;
      *((_DWORD *)v63 - 1) = v66;
      v68 = *(_QWORD **)(a1 + 528);
      if ( v68 )
      {
        v69 = *((unsigned int *)v68 - 1);
        if ( (_DWORD)v69 == *((_DWORD *)v68 - 2) )
        {
          v76 = (unsigned int)(3 * v69 + 1) >> 1;
          v77 = 4 * v76 + 8;
          if ( 4 * (int)v69 + 8 >= (unsigned int)v77 || (unsigned int)v69 >= v76 )
            goto LABEL_96;
          v78 = (unsigned int *)sub_186B300(v68 - 1, v77);
          v68 = v78 + 2;
          *v78 = v76;
          v79 = v78[1];
          *(_QWORD *)(a1 + 528) = v68;
          v70 = (_DWORD *)v68 + v79;
        }
        else
        {
          v70 = (_DWORD *)v68 + v69;
        }
      }
      else
      {
        v80 = (_QWORD *)sub_186B270(0x10u);
        v68 = v80 + 1;
        *v80 = 2;
        *(_QWORD *)(a1 + 528) = v80 + 1;
        v70 = v80 + 1;
      }
      *v70 = v64;
      ++v101;
      ++*((_DWORD *)v68 - 1);
      if ( v101 == v90 )
        goto LABEL_86;
      v63 = *(_QWORD **)(a1 + 160);
    }
  }
LABEL_4:
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(v3 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_C5EC00(a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v103[0] = v10;
  v86 = v11;
  v88 = *(_DWORD *)(a2 + 76);
  v87 = *(_DWORD *)(a2 + 72);
  v12 = *(unsigned int *)(a2 + 20);
  v13 = 16 * v12;
  if ( v87 )
  {
    v14 = a2 + v13;
    v15 = *(_QWORD *)(v14 + 80);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v16 = (_QWORD *)sub_186B270(0x18u);
    *v16 = 2;
    v17 = a2 + 8 * (v87 + 2 * v12);
    v18 = v16 + 1;
    v19 = 1;
    v100 = (__int64)v18;
    while ( 1 )
    {
      *v18 = v15;
      v14 += 8;
      *(_DWORD *)(v100 - 4) = v19;
      if ( v17 == v14 )
        break;
      v15 = *(_QWORD *)(v14 + 80);
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v20 = *(_DWORD *)(v100 - 4);
      if ( v20 == *(_DWORD *)(v100 - 8) )
      {
        v33 = (3 * v20 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v34 || v20 >= v33 )
        {
          v84 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v105, "Overflow encountered when expanding vector");
          *v84 = (char *)off_1C63128;
          sub_2333C0(v84 + 1, v105);
          sub_233E40((__int64)v105);
          __cxa_throw(v84, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v93 = (3 * v20 + 1) >> 1;
        v35 = (unsigned int *)sub_186B300((void *)(v100 - 8), v34);
        v36 = v35 + 2;
        v100 = (__int64)(v35 + 2);
        *v35 = v93;
        LODWORD(v35) = v35[1];
        v18 = &v36[2 * (unsigned int)v35];
        v19 = (_DWORD)v35 + 1;
      }
      else
      {
        v21 = v20;
        v19 = v20 + 1;
        v18 = (_QWORD *)(v100 + 8 * v21);
      }
    }
    v10 = *(_QWORD *)(a1 + 8);
    v13 = 16LL * *(unsigned int *)(a2 + 20);
  }
  else
  {
    v100 = 0;
  }
  v104[0] = v10;
  if ( v88 )
  {
    v37 = (__int64 *)(a2 + v13 + 80);
    v38 = *v37;
    if ( *v37 )
      ++*(_DWORD *)(v38 + 8);
    v39 = (_QWORD *)sub_186B270(0x18u);
    v40 = v39 + 1;
    *v39 = 2;
    v41 = 1;
    v42 = (__int64 *)(v13 + a2 + 8LL * v88 + 80);
    v43 = (__int64)v40;
    while ( 1 )
    {
      ++v37;
      *v40 = v38;
      *(_DWORD *)(v43 - 4) = v41;
      if ( v37 == v42 )
        break;
      v38 = *v37;
      if ( *v37 )
        ++*(_DWORD *)(v38 + 8);
      v44 = *(_DWORD *)(v43 - 4);
      if ( v44 == *(_DWORD *)(v43 - 8) )
      {
        v46 = (3 * v44 + 1) >> 1;
        v47 = 8 * v46 + 8;
        if ( 8 * v44 + 8 >= (unsigned int)v47 || v44 >= v46 )
        {
          v83 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v105, "Overflow encountered when expanding vector");
          *v83 = (char *)off_1C63128;
          sub_2333C0(v83 + 1, v105);
          sub_233E40((__int64)v105);
          __cxa_throw(v83, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v91 = v42;
        v94 = (3 * v44 + 1) >> 1;
        v48 = (unsigned int *)sub_186B300((void *)(v43 - 8), v47);
        v49 = v48[1];
        v43 = (__int64)(v48 + 2);
        v42 = v91;
        *v48 = v94;
        LODWORD(v48) = v49;
        v40 = (_QWORD *)(v43 + 8 * v49);
        v41 = (_DWORD)v48 + 1;
      }
      else
      {
        v45 = v44;
        v41 = v44 + 1;
        v40 = (_QWORD *)(v43 + 8 * v45);
      }
    }
    v10 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v43 = 0;
  }
  v50 = sub_15DBA30(v10, a2, v87, v100, v88, v43, v86);
  v51 = *(_QWORD *)(a1 + 504);
  v52 = *(_QWORD *)(a1 + 496);
  if ( !v50 )
  {
    sub_C4E200(v52, v51);
    *(_QWORD *)(a1 + 496) = 0;
LABEL_53:
    v53 = *(_QWORD *)(a1 + 504);
    v54 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
    if ( v54 )
    {
      ++*(_DWORD *)(v54 + 8);
      v95 = v54;
      sub_C4E200(0, v53);
      v55 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = v95;
      v56 = sub_15DE700(v55);
      if ( v56 )
        ++*(_DWORD *)(v56 + 8);
      v96 = v56;
      sub_C4E200(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
      v57 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = v96;
      v58 = sub_15DE750(v57);
    }
    else
    {
      sub_C4E200(0, v53);
      v82 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = 0;
      v58 = sub_15DE370(v82);
    }
    if ( v58 )
      ++*(_DWORD *)(v58 + 8);
    v97 = v58;
    sub_C4E200(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    *(_QWORD *)(a1 + 496) = v97;
    if ( !v50 )
      goto LABEL_61;
    goto LABEL_60;
  }
  ++*(_DWORD *)(v50 + 8);
  sub_C4E200(v52, v51);
  *(_QWORD *)(a1 + 496) = 0;
  if ( a2 != v50 )
    goto LABEL_53;
LABEL_60:
  ++*(_DWORD *)(v50 + 8);
LABEL_61:
  sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  v22 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v50;
  if ( v22 )
  {
    v59 = v22 + 8LL * *(unsigned int *)(v22 - 4);
    v89 = *(_DWORD *)(a3 + 12);
    v60 = (_QWORD *)(v22 + 8LL * v89);
    if ( (unsigned __int64)v60 >= v59 )
      goto LABEL_15;
    do
    {
      v61 = *v60;
      if ( *v60 )
      {
        v62 = *(_QWORD *)(a1 + 80);
        v24 = (*(_DWORD *)(v61 + 8))-- == 1;
        if ( v24 )
        {
          v92 = v59;
          v98 = v60;
          sub_15D7BC0(v62, v61);
          v60 = v98;
          v59 = v92;
        }
      }
      ++v60;
    }
    while ( (unsigned __int64)v60 < v59 );
    v22 = *(_QWORD *)(a1 + 88);
    if ( v22 )
LABEL_15:
      *(_DWORD *)(v22 - 4) = v89;
  }
  v23 = *(_QWORD *)(a1 + 496);
  v102 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  sub_C50B00((_QWORD *)(a1 + 88), &v102);
  if ( v50 )
  {
    v24 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v10, v50);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v25 = *(_QWORD *)(a1 + 480);
  v105[0] = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  sub_C516F0((_QWORD *)(a1 + 56), v105);
  v26 = *(_QWORD *)(a1 + 160);
  if ( v26 )
    *(_DWORD *)(v26 - 4) -= v90;
  v27 = *(_QWORD *)(a1 + 528);
  if ( v27 )
    *(_DWORD *)(v27 - 4) -= v90;
  sub_15844D0(a1);
  v28 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v28 = *(_QWORD *)(a1 + 480);
  }
  sub_C4E2C0(v28, *(_QWORD *)(a1 + 488));
  v29 = *(_QWORD *)(a1 + 504);
  v30 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_C4E200(v30, v29);
  v31 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 496) = 0;
  v32 = *(_DWORD *)(v31 - 4);
  *(_DWORD *)(v31 - 4) = v32 - 1;
  if ( *(_QWORD *)(a1 + 480) != a2 && v32 != 1 )
    *(_BYTE *)(v31 + 16LL * (unsigned int)(v32 - 2) + 8) |= 2u;
  v104[1] = v43;
  sub_2334C0(v104);
  v103[1] = v100;
  return sub_2334C0(v103);
}


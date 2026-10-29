__int64 __fastcall sub_D875F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 result; // rax
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // rdx
  unsigned int v24; // r13d
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r12
  int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // ebp
  __int64 v36; // rax
  __int64 v37; // r13
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  _QWORD *v43; // rdi
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 *v46; // rdx
  unsigned int v47; // r12d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  _QWORD *v55; // rdx
  int v56; // edx
  unsigned int v57; // r12d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // r12d
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rdx
  unsigned int v65; // r12d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  unsigned int v70; // ebp
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r13
  _QWORD *v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  _QWORD *v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rdi
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  unsigned int v87; // ebp
  unsigned int v88; // ecx
  unsigned int *v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  unsigned int v92; // r14d
  unsigned int v93; // ecx
  unsigned int *v94; // rax
  __int64 v95; // rcx
  _QWORD *v96; // rdx
  _QWORD *v97; // rdx
  char **exception; // rbp
  char **v99; // rbp
  __int64 v100; // [rsp+10h] [rbp-58h] BYREF
  __int64 v101; // [rsp+18h] [rbp-50h]
  __int64 v102[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned __int8)sub_D82AC0(*(_QWORD **)(a1 + 144), a2, (__int64 *)(a1 + 480), (__int64 *)(a1 + 496)) )
  {
    v4 = *(_QWORD *)(a1 + 480);
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    v5 = *(_QWORD **)(a1 + 56);
    if ( v5 )
    {
      v6 = *((_DWORD *)v5 - 1);
      if ( v6 == *((_DWORD *)v5 - 2) )
      {
        v61 = (3 * v6 + 1) >> 1;
        v62 = 8 * v61 + 8;
        if ( 8 * v6 + 8 >= (unsigned int)v62 || v6 >= v61 )
          goto LABEL_84;
        v63 = (unsigned int *)sub_186B300(v5 - 1, v62);
        v64 = v63[1];
        v5 = v63 + 2;
        *v63 = v61;
        *(_QWORD *)(a1 + 56) = v63 + 2;
        LODWORD(v63) = v64;
        v9 = &v5[v64];
        v8 = (_DWORD)v63 + 1;
      }
      else
      {
        v7 = v6;
        v8 = v6 + 1;
        v9 = &v5[v7];
      }
    }
    else
    {
      v69 = (_QWORD *)sub_186B270(0x18u);
      v5 = v69 + 1;
      *v69 = 2;
      v8 = 1;
      *(_QWORD *)(a1 + 56) = v5;
      v9 = v5;
    }
    *v9 = v4;
    v10 = *(_QWORD *)(a1 + 496);
    *((_DWORD *)v5 - 1) = v8;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v11 = *(_QWORD **)(a1 + 88);
    if ( !v11 )
    {
      v84 = (_QWORD *)sub_186B270(0x18u);
      v11 = v84 + 1;
      *v84 = 2;
      v14 = 1;
      *(_QWORD *)(a1 + 88) = v11;
      v15 = v11;
LABEL_12:
      *v15 = v10;
      v16 = *(_QWORD *)(a1 + 496);
      *((_DWORD *)v11 - 1) = v14;
      if ( v16 )
      {
        v17 = *(_QWORD *)(a1 + 504);
        v18 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v17, v16);
      }
      *(_QWORD *)(a1 + 496) = 0;
      result = *(_QWORD *)(a1 + 40);
      if ( result )
      {
        v20 = *(_DWORD *)(result - 4);
        if ( v20 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v20 - 1) + 8) |= 2u;
      }
      v21 = *(_QWORD *)(a1 + 480);
      if ( v21 )
      {
        v22 = *(_QWORD *)(a1 + 488);
        v18 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v18 )
          result = sub_15D7BC0(v22, v21);
      }
      *(_QWORD *)(a1 + 480) = 0;
      return result;
    }
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 != *((_DWORD *)v11 - 2) )
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v11[v13];
      goto LABEL_12;
    }
    v57 = (3 * v12 + 1) >> 1;
    v58 = 8 * v57 + 8;
    if ( 8 * v12 + 8 < (unsigned int)v58 && v12 < v57 )
    {
      v59 = (unsigned int *)sub_186B300(v11 - 1, v58);
      v60 = v59[1];
      v11 = v59 + 2;
      *v59 = v57;
      *(_QWORD *)(a1 + 88) = v59 + 2;
      LODWORD(v59) = v60;
      v15 = &v11[v60];
      v14 = (_DWORD)v59 + 1;
      goto LABEL_12;
    }
LABEL_84:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v102, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v102);
    sub_233E40((__int64)v102);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v23 = *(_QWORD **)(a1 + 88);
  v24 = *(_DWORD *)(a2 + 16);
  if ( v23 )
  {
    v25 = *((_DWORD *)v23 - 1);
    if ( v25 == *((_DWORD *)v23 - 2) )
    {
      v65 = (3 * v25 + 1) >> 1;
      v66 = 8 * v65 + 8;
      if ( 8 * v25 + 8 >= (unsigned int)v66 || v25 >= v65 )
        goto LABEL_84;
      v67 = (unsigned int *)sub_186B300(v23 - 1, v66);
      v68 = v67[1];
      v23 = v67 + 2;
      *v67 = v65;
      *(_QWORD *)(a1 + 88) = v67 + 2;
      LODWORD(v67) = v68;
      v28 = &v23[v68];
      v27 = (_DWORD)v67 + 1;
    }
    else
    {
      v26 = v25;
      v27 = v25 + 1;
      v28 = &v23[v26];
    }
  }
  else
  {
    v85 = (_QWORD *)sub_186B270(0x18u);
    v23 = v85 + 1;
    *v85 = 2;
    v27 = 1;
    *(_QWORD *)(a1 + 88) = v23;
    v28 = v23;
  }
  *v28 = 0;
  *((_DWORD *)v23 - 1) = v27;
  v29 = *(_QWORD *)(a1 + 160);
  if ( !v29
    || (v30 = *(_DWORD *)(v29 - 4), v24 >= v30)
    || (v31 = v30 - v24 - 1, (v32 = *(_QWORD *)(v29 + 8 * v31)) == 0) )
  {
    v43 = *(_QWORD **)(a1 + 56);
    ++*(_DWORD *)(a2 + 8);
    if ( v43 )
    {
      v44 = *((_DWORD *)v43 - 1);
      if ( v44 == *((_DWORD *)v43 - 2) )
      {
        v47 = (3 * v44 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v44 + 8 >= (unsigned int)v48 || v44 >= v47 )
          goto LABEL_84;
        v49 = (unsigned int *)sub_186B300(v43 - 1, v48);
        v50 = v49[1];
        v43 = v49 + 2;
        *v49 = v47;
        *(_QWORD *)(a1 + 56) = v49 + 2;
        LODWORD(v49) = v50;
        v46 = &v43[v50];
        result = (unsigned int)((_DWORD)v49 + 1);
      }
      else
      {
        v45 = v44;
        result = v44 + 1;
        v46 = &v43[v45];
      }
    }
    else
    {
      v86 = (_QWORD *)sub_186B270(0x18u);
      v43 = v86 + 1;
      *v86 = 2;
      result = 1;
      *(_QWORD *)(a1 + 56) = v43;
      v46 = v43;
    }
    *v46 = a2;
    *((_DWORD *)v43 - 1) = result;
    return result;
  }
  if ( !*(_WORD *)(v32 + 4) && (*(_BYTE *)(v32 + 30) & 1) != 0
    || (v33 = *(_DWORD *)(*(_QWORD *)(a1 + 528) + 4 * v31), v33 == v30) )
  {
    v51 = *(_QWORD **)(a1 + 56);
    ++*(_DWORD *)(v32 + 8);
    if ( v51 )
    {
      v52 = *((_DWORD *)v51 - 1);
      if ( v52 == *((_DWORD *)v51 - 2) )
      {
        v70 = (3 * v52 + 1) >> 1;
        v71 = 8 * v70 + 8;
        if ( 8 * v52 + 8 >= (unsigned int)v71 || v52 >= v70 )
          goto LABEL_84;
        v72 = (unsigned int *)sub_186B300(v51 - 1, v71);
        v73 = v72[1];
        v51 = v72 + 2;
        *v72 = v70;
        *(_QWORD *)(a1 + 56) = v72 + 2;
        LODWORD(v72) = v73;
        v55 = &v51[v73];
        v54 = (_DWORD)v72 + 1;
      }
      else
      {
        v53 = v52;
        v54 = v52 + 1;
        v55 = &v51[v53];
      }
    }
    else
    {
      v91 = (_QWORD *)sub_186B270(0x18u);
      v51 = v91 + 1;
      *v91 = 2;
      v54 = 1;
      *(_QWORD *)(a1 + 56) = v51;
      v55 = v51;
    }
    *v55 = v32;
    *((_DWORD *)v51 - 1) = v54;
  }
  else
  {
    v34 = v30 - v33;
    v35 = v34;
    v36 = sub_1680FB0(*(_QWORD *)(a1 + 32), v32, v34);
    v37 = v36;
    if ( v36 )
    {
      v38 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v36 + 8);
      if ( v38 )
      {
        v39 = *((_DWORD *)v38 - 1);
        if ( v39 == *((_DWORD *)v38 - 2) )
        {
          v87 = (3 * v39 + 1) >> 1;
          v88 = 8 * v87 + 8;
          if ( 8 * v39 + 8 >= v88 || v39 >= v87 )
            goto LABEL_84;
          v89 = (unsigned int *)sub_186B300(v38 - 1, v88);
          v90 = v89[1];
          v38 = v89 + 2;
          *v89 = v87;
          *(_QWORD *)(a1 + 56) = v89 + 2;
          LODWORD(v89) = v90;
          v42 = &v38[v90];
          v41 = (_DWORD)v89 + 1;
        }
        else
        {
          v40 = v39;
          v41 = v39 + 1;
          v42 = &v38[v40];
        }
      }
      else
      {
        v96 = (_QWORD *)sub_186B270(0x18u);
        *v96 = 2;
        v41 = 1;
        v38 = v96 + 1;
        *(_QWORD *)(a1 + 56) = v38;
        v42 = v38;
      }
      *v42 = v37;
      *((_DWORD *)v38 - 1) = v41;
    }
    else
    {
      v74 = *(_QWORD *)(a1 + 8);
      v100 = 0;
      v101 = v74;
      sub_1585D20(a1 + 168, v32, 0, v35, 0, &v100);
      v75 = v100;
      if ( v100 )
        ++*(_DWORD *)(v100 + 8);
      v76 = *(_QWORD **)(a1 + 56);
      if ( v76 )
      {
        v77 = *((_DWORD *)v76 - 1);
        if ( v77 == *((_DWORD *)v76 - 2) )
        {
          v92 = (3 * v77 + 1) >> 1;
          v93 = 8 * v92 + 8;
          if ( 8 * v77 + 8 >= v93 || v77 >= v92 )
          {
            v99 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v102, "Overflow encountered when expanding vector");
            *v99 = (char *)off_1C63128;
            sub_2333C0(v99 + 1, v102);
            sub_233E40((__int64)v102);
            __cxa_throw(v99, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (unsigned int *)sub_186B300(v76 - 1, v93);
          v95 = v94[1];
          v76 = v94 + 2;
          *v94 = v92;
          *(_QWORD *)(a1 + 56) = v94 + 2;
          LODWORD(v94) = v95;
          v80 = &v76[v95];
          v79 = (_DWORD)v94 + 1;
        }
        else
        {
          v78 = v77;
          v79 = v77 + 1;
          v80 = &v76[v78];
        }
      }
      else
      {
        v97 = (_QWORD *)sub_186B270(0x18u);
        *v97 = 2;
        v79 = 1;
        v76 = v97 + 1;
        *(_QWORD *)(a1 + 56) = v76;
        v80 = v76;
      }
      *v80 = v75;
      v81 = v100;
      *((_DWORD *)v76 - 1) = v79;
      sub_1584390(a1, v32, v35, v81);
      v82 = v100;
      if ( v100 )
      {
        v83 = v101;
        v18 = (*(_DWORD *)(v100 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v83, v82);
      }
    }
  }
  result = *(_QWORD *)(a1 + 40);
  if ( result )
  {
    v56 = *(_DWORD *)(result - 4);
    if ( v56 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v56 - 1) + 8) |= 2u;
  }
  return result;
}


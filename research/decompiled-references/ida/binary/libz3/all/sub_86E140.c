char __fastcall sub_86E140(__int64 a1, unsigned int *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  __int64 v6; // rax
  unsigned int v7; // eax
  int *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdi
  __int64 v15; // rax
  void *v16; // r12
  __int64 v17; // r14
  _QWORD *v18; // r12
  _QWORD *v19; // rbx
  unsigned int v20; // r13d
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rdx
  unsigned int v24; // esi
  __int64 v25; // r14
  int v26; // eax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // r14
  unsigned int v34; // eax
  unsigned int v35; // r15d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // r15
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 *v46; // rcx
  __int64 v47; // r14
  _QWORD *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rdx
  _QWORD *v52; // r15
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  _QWORD *v56; // rcx
  char result; // al
  bool v58; // zf
  __int64 *v59; // rbp
  unsigned __int64 v60; // r12
  __int64 v61; // rsi
  __int64 *v62; // rbx
  unsigned __int64 v63; // rbp
  __int64 v64; // rsi
  _QWORD *v65; // rax
  unsigned int v66; // r8d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rcx
  unsigned int v70; // ecx
  size_t v71; // rsi
  unsigned int v72; // r13d
  unsigned int *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // [rsp+8h] [rbp-E0h]
  _QWORD *v78; // [rsp+10h] [rbp-D8h]
  unsigned int v79; // [rsp+10h] [rbp-D8h]
  int v80; // [rsp+10h] [rbp-D8h]
  _QWORD *v81; // [rsp+18h] [rbp-D0h]
  __int64 v82; // [rsp+20h] [rbp-C8h]
  __int64 v83; // [rsp+20h] [rbp-C8h]
  int v84; // [rsp+28h] [rbp-C0h]
  __int64 v85; // [rsp+28h] [rbp-C0h]
  int v86; // [rsp+34h] [rbp-B4h]
  unsigned int v87; // [rsp+34h] [rbp-B4h]
  __int64 v88; // [rsp+38h] [rbp-B0h]
  __int64 v90; // [rsp+48h] [rbp-A0h]
  unsigned int *v91; // [rsp+68h] [rbp-80h] BYREF
  __int64 v92; // [rsp+70h] [rbp-78h] BYREF
  _QWORD *v93; // [rsp+78h] [rbp-70h]
  __int64 v94; // [rsp+80h] [rbp-68h]
  __int64 v95[2]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v96[9]; // [rsp+A0h] [rbp-48h] BYREF

  v91 = nullptr;
  if ( !(unsigned __int8)sub_1674410(a1 + 128, a2, &v91) )
  {
    sub_1872CE0("");
    sub_1873130(114, 419);
  }
  v82 = *(_QWORD *)(a1 + 72);
  v6 = sub_7E4F00(a1, v91);
  v7 = sub_86BFC0((unsigned int *)a1, v6);
  v93 = nullptr;
  v92 = v82;
  sub_86BC60(a1, v7, (__int64)&v92);
  v83 = v92;
  v81 = v93;
  v8 = *(int **)(*(_QWORD *)(sub_15D1F10(v91) + 24) + 8LL);
  if ( *((_BYTE *)v8 + 8) )
    sub_DBF6E(0);
  v9 = *v8;
  v95[0] = 0;
  v95[1] = 0;
  v86 = v9;
  v10 = *(_QWORD *)(a1 + 72);
  v96[0] = 1;
  v90 = v10;
  v94 = v10;
  v88 = a1 + 152;
  v96[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v96);
  v14 = *(_QWORD *)(a1 + 160);
  BYTE4(v96[0]) &= ~1u;
  LODWORD(v96[0]) = 1;
  if ( !v14 )
  {
    sub_16669E0(v88);
    v14 = *(_QWORD *)(a1 + 160);
  }
  v15 = sub_166A700(v14, (unsigned int)v95, 1, v11, v12, v13);
  v16 = qword_1C7F2C0;
  v17 = v15;
  v77 = v15;
  sub_182CBA0(qword_1C7F2C0, v95);
  sub_182CBA0(v16, v96);
  if ( v17 )
    ++*(_DWORD *)(v77 + 8);
  if ( !v81 || (v78 = &v81[*((unsigned int *)v81 - 1)], v78 == v81) )
  {
    v19 = nullptr;
  }
  else
  {
    v18 = v81;
    v19 = nullptr;
    v20 = 0;
    do
    {
      v24 = v20;
      v25 = *(_QWORD *)(a1 + 72);
      ++v20;
      v26 = sub_811880(a1, v24);
      v30 = *(_QWORD *)(a1 + 160);
      v31 = v26;
      if ( !v30 )
      {
        v84 = v26;
        sub_16669E0(v88);
        v30 = *(_QWORD *)(a1 + 160);
        v31 = v84;
      }
      sub_166A700(v30, v31, 1, v27, v28, v29);
      v32 = sub_15E1BF0(v25);
      v33 = v32;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      if ( v19 )
      {
        v34 = *((_DWORD *)v19 - 1);
        if ( v34 == *((_DWORD *)v19 - 2) )
        {
          v35 = (3 * v34 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v34 + 8 >= (unsigned int)v36 || v34 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v95, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v95);
            sub_233E40((__int64)v95);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v37 = (unsigned int *)sub_186B300(v19 - 1, v36);
          v38 = v37[1];
          v19 = v37 + 2;
          *v37 = v35;
          LODWORD(v37) = v38;
          v23 = &v19[v38];
          v22 = (_DWORD)v37 + 1;
        }
        else
        {
          v21 = v34;
          v22 = v34 + 1;
          v23 = &v19[v21];
        }
      }
      else
      {
        v65 = (_QWORD *)sub_186B270(0x18u);
        v19 = v65 + 1;
        *v65 = 2;
        v22 = 1;
        v23 = v19;
      }
      *v23 = v33;
      ++v18;
      *((_DWORD *)v19 - 1) = v22;
    }
    while ( v78 != v18 );
  }
  v85 = *(_QWORD *)(a1 + 72);
  if ( v86 == 1 && (v39 = *v19, !*(_WORD *)(*v19 + 4LL)) || (v39 = sub_15E1AF0(*(_QWORD *)(a1 + 152))) != 0 )
    ++*(_DWORD *)(v39 + 8);
  v79 = sub_7E58D0(a1, (__int64)a2, v39);
  v40 = sub_7E4F00(a1, a2);
  v41 = *(_QWORD **)(a1 + 704);
  v42 = v40;
  if ( v41 )
  {
    v43 = *((_DWORD *)v41 - 1);
    if ( v43 == *((_DWORD *)v41 - 2) )
    {
      v70 = (3 * v43 + 1) >> 1;
      v71 = 8 * v70 + 8;
      v72 = v70;
      if ( 8 * v43 + 8 >= (unsigned int)v71 || v43 >= v70 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v95, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v95);
        sub_233E40((__int64)v95);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v73 = (unsigned int *)sub_186B300(v41 - 1, v71);
      v74 = v73[1];
      v41 = v73 + 2;
      *v73 = v72;
      *(_QWORD *)(a1 + 704) = v73 + 2;
      LODWORD(v73) = v74;
      v46 = &v41[v74];
      v45 = (_DWORD)v73 + 1;
    }
    else
    {
      v44 = v43;
      v45 = v43 + 1;
      v46 = &v41[v44];
    }
  }
  else
  {
    v76 = (_QWORD *)sub_186B270(0x18u);
    v41 = v76 + 1;
    *v76 = 2;
    v45 = 1;
    *(_QWORD *)(a1 + 704) = v41;
    v46 = v41;
  }
  *v46 = v42;
  v47 = *(_QWORD *)(a1 + 80);
  *((_DWORD *)v41 - 1) = v45;
  v48 = (_QWORD *)sub_180C100(v47 + 2144, 16);
  v51 = *(_QWORD **)(v47 + 2128);
  v52 = v48;
  *v48 = off_1C55728;
  v48[1] = a1 + 704;
  if ( v51 )
  {
    v53 = *((_DWORD *)v51 - 1);
    if ( v53 == *((_DWORD *)v51 - 2) )
    {
      v66 = (3 * v53 + 1) >> 1;
      v67 = 8 * v66 + 8;
      if ( 8 * v53 + 8 >= (unsigned int)v67 || v53 >= v66 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v95, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v95);
        sub_233E40((__int64)v95);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v87 = (3 * v53 + 1) >> 1;
      v68 = (unsigned int *)sub_186B300(v51 - 1, v67);
      v69 = v68[1];
      v49 = v87;
      v51 = v68 + 2;
      *(_QWORD *)(v47 + 2128) = v68 + 2;
      *v68 = v87;
      LODWORD(v68) = v69;
      v56 = &v51[v69];
      v55 = (_DWORD)v68 + 1;
    }
    else
    {
      v54 = v53;
      v55 = v53 + 1;
      v56 = &v51[v54];
    }
  }
  else
  {
    v75 = (_QWORD *)sub_186B270(0x18u);
    v51 = v75 + 1;
    *v75 = 2;
    v55 = 1;
    *(_QWORD *)(v47 + 2128) = v51;
    v56 = v51;
  }
  *v56 = v52;
  *((_DWORD *)v51 - 1) = v55;
  result = sub_7E5160(a1, v79, nullptr, (__int64)v56, v49, v50);
  if ( v39 )
  {
    v58 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v58 )
      result = sub_15D7BC0(v85, v39);
  }
  if ( v77 )
  {
    v80 = *(_DWORD *)(v77 + 8);
    result = v80 - 1;
    *(_DWORD *)(v77 + 8) = v80 - 1;
    if ( v80 == 1 )
      result = sub_15D7BC0(v90, v77);
  }
  if ( v19 )
  {
    v59 = v19;
    v60 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
    if ( (unsigned __int64)v19 < v60 )
    {
      do
      {
        while ( 1 )
        {
          v61 = *v59;
          if ( *v59 )
          {
            v58 = (*(_DWORD *)(v61 + 8))-- == 1;
            if ( v58 )
              break;
          }
          if ( (unsigned __int64)++v59 >= v60 )
            goto LABEL_44;
        }
        ++v59;
        sub_15D7BC0(v90, v61);
      }
      while ( (unsigned __int64)v59 < v60 );
    }
LABEL_44:
    result = sub_186B220(v19 - 1);
  }
  if ( v81 )
  {
    v62 = v81;
    v63 = (unsigned __int64)&v81[*((unsigned int *)v81 - 1)];
    if ( (unsigned __int64)v81 < v63 )
    {
      do
      {
        while ( 1 )
        {
          v64 = *v62;
          if ( *v62 )
          {
            v58 = (*(_DWORD *)(v64 + 8))-- == 1;
            if ( v58 )
              break;
          }
          if ( (unsigned __int64)++v62 >= v63 )
            return sub_186B220(v81 - 1);
        }
        ++v62;
        sub_15D7BC0(v83, v64);
      }
      while ( (unsigned __int64)v62 < v63 );
    }
    return sub_186B220(v81 - 1);
  }
  return result;
}


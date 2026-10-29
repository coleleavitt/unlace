__int64 __fastcall sub_B49B70(_QWORD *a1, __int64 *a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **exception; // rbp
  char **v7; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // r13d
  __int64 **v13; // rcx
  int v14; // eax
  _QWORD *v15; // rdi
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _DWORD *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned int *v23; // rax
  _QWORD *v24; // r15
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rsi
  int v29; // eax
  _QWORD *v30; // rsi
  _OWORD *v31; // rax
  _QWORD *v32; // rdx
  _OWORD *v33; // r14
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  _QWORD *v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // r15
  int v41; // eax
  _DWORD *v42; // rdx
  __int64 v43; // r14
  __int64 v44; // r14
  int v45; // eax
  _DWORD *v46; // rdx
  unsigned int v48; // r15d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // r8d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rsi
  unsigned int v56; // r15d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r15d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rax
  unsigned int v64; // r15d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r14d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r14
  int v73; // eax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  int v77; // eax
  _DWORD *v78; // rdx
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 **v83; // rax
  unsigned int v84; // [rsp+Ch] [rbp-6Ch]
  __int64 v85[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = (_QWORD *)a1[4];
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    v12 = v11;
    if ( (_DWORD)v11 == *((_DWORD *)v10 - 2) )
    {
      v68 = (unsigned int)(3 * v11 + 1) >> 1;
      v69 = 8 * v68 + 8;
      if ( 8 * (int)v11 + 8 >= (unsigned int)v69 || (unsigned int)v11 >= v68 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v70 = (unsigned int *)sub_186B300(v10 - 1, v69);
      v71 = v70[1];
      v10 = v70 + 2;
      *v70 = v68;
      a1[4] = v70 + 2;
      LODWORD(v70) = v71;
      v13 = (__int64 **)&v10[v71];
      v14 = (_DWORD)v70 + 1;
    }
    else
    {
      v13 = (__int64 **)&v10[(unsigned int)v11];
      v14 = v11 + 1;
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
    v76 = (_QWORD *)sub_186B270(0x18u);
    v10 = v76 + 1;
    *v76 = 2;
    v14 = 1;
    a1[4] = v10;
    v13 = (__int64 **)v10;
  }
  v15 = (_QWORD *)a1[32];
  *v13 = a2;
  *((_DWORD *)v10 - 1) = v14;
  if ( v15 )
  {
    v16 = *((_DWORD *)v15 - 1);
    v17 = (unsigned int *)v15 + v16;
    if ( v16 == *((_DWORD *)v15 - 2) )
    {
      v64 = (3 * v16 + 1) >> 1;
      v65 = 4 * v64 + 8;
      if ( 4 * v16 + 8 >= (unsigned int)v65 || v16 >= v64 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (unsigned int *)sub_186B300(v15 - 1, v65);
      v15 = v66 + 2;
      *v66 = v64;
      v67 = v66[1];
      a1[32] = v15;
      v17 = (unsigned int *)v15 + v67;
    }
  }
  else
  {
    v16 = 0;
    v75 = (_QWORD *)sub_186B270(0x10u);
    v15 = v75 + 1;
    *v75 = 2;
    a1[32] = v75 + 1;
    v17 = (unsigned int *)(v75 + 1);
  }
  v18 = (_QWORD *)a1[33];
  *v17 = v16;
  ++*((_DWORD *)v15 - 1);
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
    {
      v60 = (unsigned int)(3 * v19 + 1) >> 1;
      v61 = 4 * v60 + 8;
      if ( 4 * (int)v19 + 8 >= (unsigned int)v61 || (unsigned int)v19 >= v60 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v62 = (unsigned int *)sub_186B300(v18 - 1, v61);
      v18 = v62 + 2;
      *v62 = v60;
      v63 = v62[1];
      a1[33] = v18;
      v20 = (_DWORD *)v18 + v63;
    }
    else
    {
      v20 = (_DWORD *)v18 + v19;
    }
  }
  else
  {
    v80 = (_QWORD *)sub_186B270(0x10u);
    v18 = v80 + 1;
    *v80 = 2;
    a1[33] = v80 + 1;
    v20 = v80 + 1;
  }
  *v20 = 1;
  ++*((_DWORD *)v18 - 1);
  v21 = (_QWORD *)a1[34];
  if ( v21 )
  {
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
    {
      v56 = (unsigned int)(3 * v22 + 1) >> 1;
      v57 = 4 * v56 + 8;
      if ( 4 * (int)v22 + 8 >= (unsigned int)v57 || (unsigned int)v22 >= v56 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v58 = (unsigned int *)sub_186B300(v21 - 1, v57);
      v21 = v58 + 2;
      *v58 = v56;
      v59 = v58[1];
      a1[34] = v21;
      v23 = (unsigned int *)v21 + v59;
    }
    else
    {
      v23 = (unsigned int *)v21 + v22;
    }
  }
  else
  {
    v81 = (_QWORD *)sub_186B270(0x10u);
    v21 = v81 + 1;
    *v81 = 2;
    a1[34] = v81 + 1;
    v23 = (unsigned int *)(v81 + 1);
  }
  v24 = (_QWORD *)a1[31];
  *v23 = v16;
  v25 = a1 + 35;
  ++*((_DWORD *)v21 - 1);
  v26 = (_QWORD *)*v24;
  if ( *v24 )
  {
    v27 = *((_DWORD *)v26 - 1);
    if ( v27 == *((_DWORD *)v26 - 2) )
    {
      v52 = (3 * v27 + 1) >> 1;
      v53 = 8 * v52 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v53 || v27 >= v52 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v84 = (3 * v27 + 1) >> 1;
      v54 = (unsigned int *)sub_186B300(v26 - 1, v53);
      v25 = a1 + 35;
      v55 = v54[1];
      v26 = v54 + 2;
      *v24 = v54 + 2;
      *v54 = v84;
      LODWORD(v54) = v55;
      v30 = &v26[v55];
      v29 = (_DWORD)v54 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v26[v28];
    }
  }
  else
  {
    v82 = (_QWORD *)sub_186B270(0x18u);
    v25 = a1 + 35;
    v26 = v82 + 1;
    *v82 = 2;
    v29 = 1;
    *v24 = v26;
    v30 = v26;
  }
  *v30 = v25;
  *((_DWORD *)v26 - 1) = v29;
  if ( v16 != (_DWORD)v11 )
  {
    sub_1872CE0("");
    sub_1873130(114, 265);
  }
  v31 = (_OWORD *)sub_186B270(0x10u);
  v32 = (_QWORD *)a1[29];
  v33 = v31;
  *v31 = 0;
  if ( v32 )
  {
    v34 = *((_DWORD *)v32 - 1);
    if ( v34 == *((_DWORD *)v32 - 2) )
    {
      v48 = (3 * v34 + 1) >> 1;
      v49 = 8 * v48 + 8;
      if ( 8 * v34 + 8 >= (unsigned int)v49 || v34 >= v48 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v50 = (unsigned int *)sub_186B300(v32 - 1, v49);
      v51 = v50[1];
      v32 = v50 + 2;
      *v50 = v48;
      a1[29] = v50 + 2;
      LODWORD(v50) = v51;
      v37 = &v32[v51];
      v36 = (_DWORD)v50 + 1;
    }
    else
    {
      v35 = v34;
      v36 = v34 + 1;
      v37 = &v32[v35];
    }
  }
  else
  {
    v79 = (_QWORD *)sub_186B270(0x18u);
    v32 = v79 + 1;
    *v79 = 2;
    v36 = 1;
    a1[29] = v32;
    v37 = v32;
  }
  *v37 = v33;
  v38 = a1[2];
  *((_DWORD *)v32 - 1) = v36;
  v39 = v32[v11];
  sub_B66EF0(v38, a2, a1, v12);
  v40 = *a2;
  v41 = sub_15F0200(a1 + 7);
  if ( *(_WORD *)(v40 + 4) || (v42 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL)) == nullptr || v41 != *v42 || v42[1] )
  {
    v43 = *a2;
    if ( !*(_WORD *)(*a2 + 4) )
    {
      v77 = sub_15F0200(a1 + 7);
      if ( !*(_WORD *)(v43 + 4) )
      {
        v78 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL);
        if ( v78 )
        {
          if ( v77 == *v78 && v78[1] == 4 )
          {
            sub_B495A0((__int64)a1, a2);
            return v12;
          }
        }
      }
      v43 = *a2;
    }
    v44 = sub_15D1F10(v43);
    v45 = sub_15F0200(a1 + 7);
    v46 = *(_DWORD **)(v44 + 24);
    if ( v46 && v45 == *v46 && !v46[1] )
    {
      v72 = sub_15D1F10(*a2);
      if ( (unsigned int)sub_15F10D0(a1 + 7, v72) == 1 )
      {
        v83 = (__int64 **)sub_15F6BE0(a1 + 7, v72);
        sub_B48E80((__int64)a1, a2, **v83);
      }
      else
      {
        v73 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 464LL);
        if ( !v73 || v73 == 1 && (v74 = *(_QWORD *)(v72 + 24)) != 0 && *(_DWORD *)(v74 + 24) != 2 )
          sub_B45840((__int64)a1, v12);
      }
    }
  }
  else
  {
    *(_QWORD *)(v39 + 8) = a2;
    sub_B49070((__int64)a1, a2);
  }
  return v12;
}


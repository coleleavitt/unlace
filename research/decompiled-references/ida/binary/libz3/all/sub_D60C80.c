__int64 __fastcall sub_D60C80(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  char **exception; // rbx
  char **v6; // rbx
  __int64 v8; // rsi
  int *v9; // rax
  __int64 result; // rax
  unsigned int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r13
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // r13
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  unsigned int v48; // ecx
  size_t v49; // rsi
  unsigned int *v50; // rax
  unsigned int v51; // r14d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  int v57; // [rsp+0h] [rbp-D0h]
  int v58; // [rsp+8h] [rbp-C8h]
  __int64 v59; // [rsp+8h] [rbp-C8h]
  int v60; // [rsp+10h] [rbp-C0h]
  __int64 v61; // [rsp+10h] [rbp-C0h]
  int v62; // [rsp+18h] [rbp-B8h]
  __int64 v63; // [rsp+18h] [rbp-B8h]
  int v64; // [rsp+20h] [rbp-B0h]
  void *v65; // [rsp+20h] [rbp-B0h]
  __int64 v66; // [rsp+20h] [rbp-B0h]
  char v67; // [rsp+28h] [rbp-A8h]
  int v68; // [rsp+30h] [rbp-A0h]
  int v69; // [rsp+30h] [rbp-A0h]
  int v70; // [rsp+38h] [rbp-98h]
  __int64 v71; // [rsp+38h] [rbp-98h]
  void *v72; // [rsp+38h] [rbp-98h]
  int v73; // [rsp+40h] [rbp-90h]
  __int64 *v74; // [rsp+40h] [rbp-90h]
  __int64 v75; // [rsp+40h] [rbp-90h]
  void *v76; // [rsp+48h] [rbp-88h]
  int v77; // [rsp+48h] [rbp-88h]
  int v78; // [rsp+48h] [rbp-88h]
  unsigned int v79; // [rsp+48h] [rbp-88h]
  __int64 v80; // [rsp+58h] [rbp-78h] BYREF
  int v81[2]; // [rsp+60h] [rbp-70h] BYREF
  int v82[2]; // [rsp+68h] [rbp-68h] BYREF
  __int64 v83; // [rsp+70h] [rbp-60h] BYREF
  __int64 v84; // [rsp+78h] [rbp-58h]
  int v85[2]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v86; // [rsp+88h] [rbp-48h]
  __int64 v87; // [rsp+90h] [rbp-40h] BYREF
  __int64 v88; // [rsp+98h] [rbp-38h]

  v8 = *(_QWORD *)(a2 + 48);
  v73 = (int)a5;
  v9 = *(int **)(*(_QWORD *)(v8 + 24) + 8LL);
  if ( *((_BYTE *)v9 + 8) || *((_BYTE *)v9 + 24) )
    sub_DBF6E(0);
  if ( *(_BYTE *)(a1 + 520) )
  {
    sub_D5B8E0(a1, v8, a5);
    return sub_D52910(a1, *a5, a5);
  }
  else
  {
    v13 = *v9;
    v68 = v9[4];
    sub_D60A90(&v83, a1, *a4);
    v14 = v83;
    v58 = v84;
    v62 = v83;
    v15 = sub_15D1F10(v83);
    v16 = *(_QWORD *)(a2 + 40);
    v80 = v15;
    v17 = sub_D567F0(a1, a2, &v80, v16);
    v18 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)v85 = v14;
    v21 = sub_15DC610(v18, v17, 1, (int)v85, v19, v20, v57, v58, v60, v62, v64, v67, v68, v70, v73, v76);
    v22 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v23 = *v74;
    if ( *v74 )
    {
      v24 = v74[1];
      v25 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v24, v23);
    }
    *(_QWORD *)v81 = v22;
    LOBYTE(v86) = 0;
    *v74 = v22;
    v26 = *(_QWORD *)(a1 + 8);
    LOBYTE(v88) = 0;
    v27 = *(_QWORD *)(a1 + 240);
    v61 = v26;
    v71 = a1 + 232;
    v85[0] = v13 + v69 - 2;
    LODWORD(v87) = v69 - 1;
    v28 = sub_15DCAD0(v27, (int)v81, 0);
    sub_15D0DF0(&v87);
    sub_15D0DF0(v85);
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    *(_QWORD *)v85 = 1;
    v86 = 0;
    v29 = *(_QWORD *)(a1 + 8);
    v87 = 1;
    v88 = 0;
    sub_182CBA0(qword_1C7F2C0, &v87);
    BYTE4(v87) &= ~1u;
    LODWORD(v87) = 1;
    sub_1674520(v71, v85, v13);
    v65 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v85);
    sub_182CBA0(v65, &v87);
    sub_15E1A70(*(_QWORD *)(a1 + 240));
    v30 = sub_15E1B70(v29);
    v31 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v32 = *(_QWORD **)(a1 + 632);
    if ( v32 )
    {
      v33 = *((_DWORD *)v32 - 1);
      if ( v33 == *((_DWORD *)v32 - 2) )
      {
        v51 = (3 * v33 + 1) >> 1;
        v52 = 8 * v51 + 8;
        if ( 8 * v33 + 8 >= (unsigned int)v52 || v33 >= v51 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v85, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = (unsigned int *)sub_186B300(v32 - 1, v52);
        v54 = v53[1];
        v32 = v53 + 2;
        *v53 = v51;
        *(_QWORD *)(a1 + 632) = v53 + 2;
        LODWORD(v53) = v54;
        v36 = &v32[v54];
        v35 = (_DWORD)v53 + 1;
      }
      else
      {
        v34 = v33;
        v35 = v33 + 1;
        v36 = &v32[v34];
      }
    }
    else
    {
      v55 = (_QWORD *)sub_186B270(0x18u);
      v32 = v55 + 1;
      *v55 = 2;
      v35 = 1;
      *(_QWORD *)(a1 + 632) = v32;
      v36 = v32;
    }
    *v36 = v31;
    *((_DWORD *)v32 - 1) = v35;
    v37 = *(_QWORD *)(a1 + 8);
    LOBYTE(v86) = 0;
    v66 = v37;
    v87 = 0;
    v38 = *(_QWORD *)(a1 + 240);
    v39 = *v74;
    v88 = 0;
    *(_QWORD *)v82 = v39;
    v85[0] = v69 - 2;
    v75 = sub_15DCAD0(v38, (int)v82, 0);
    sub_15D0DF0(&v87);
    sub_15D0DF0(v85);
    if ( v75 )
      ++*(_DWORD *)(v75 + 8);
    *(_QWORD *)v85 = 0;
    v86 = 0;
    v40 = *(_QWORD *)(a1 + 8);
    v87 = 1;
    v88 = 0;
    sub_182CBA0(qword_1C7F2C0, &v87);
    LODWORD(v87) = 1;
    BYTE4(v87) &= ~1u;
    sub_1674520(v71, v85, (unsigned int)(v69 - 1));
    v72 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v85);
    sub_182CBA0(v72, &v87);
    sub_15E1B70(v40);
    v41 = sub_15E1A70(v40);
    v42 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v43 = *(_QWORD **)(a1 + 632);
    if ( v43 )
    {
      v44 = *((_DWORD *)v43 - 1);
      if ( v44 == *((_DWORD *)v43 - 2) )
      {
        v48 = (3 * v44 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v44 + 8 >= (unsigned int)v49 || v44 >= v48 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v85, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v79 = (3 * v44 + 1) >> 1;
        v50 = (unsigned int *)sub_186B300(v43 - 1, v49);
        v43 = v50 + 2;
        *(_QWORD *)(a1 + 632) = v50 + 2;
        *v50 = v79;
        LODWORD(v50) = v50[1];
        v47 = &v43[(unsigned int)v50];
        v46 = (_DWORD)v50 + 1;
      }
      else
      {
        v45 = v44;
        v46 = v44 + 1;
        v47 = &v43[v45];
      }
    }
    else
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      v43 = v56 + 1;
      *v56 = 2;
      v46 = 1;
      *(_QWORD *)(a1 + 632) = v43;
      v47 = v43;
    }
    *v47 = v42;
    *((_DWORD *)v43 - 1) = v46;
    if ( v75 )
    {
      v77 = *(_DWORD *)(v75 + 8);
      *(_DWORD *)(v75 + 8) = v77 - 1;
      if ( v77 == 1 )
        sub_15D7BC0(v66, v75);
    }
    if ( v28 )
    {
      v25 = (*(_DWORD *)(v28 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v61, v28);
    }
    v78 = *(_DWORD *)(v63 + 8);
    result = (unsigned int)(v78 - 1);
    *(_DWORD *)(v63 + 8) = result;
    if ( v78 == 1 )
      return sub_15D7BC0(v59, v63);
  }
  return result;
}


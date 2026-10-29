__int64 *__fastcall sub_58A930(__int64 *a1, __int64 a2, __int64 *a3, _QWORD *a4, int a5, __int64 a6)
{
  char **exception; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, __int64 *); // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64 *); // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  bool v17; // zf
  int v18; // r9d
  __int64 v19; // rax
  _QWORD *v20; // rbx
  unsigned int v21; // r12d
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 *v30; // rdx
  int v31; // ecx
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rsi
  unsigned int v42; // r12d
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 *v53; // r14
  unsigned __int64 v54; // r15
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdi
  unsigned int v65; // r14d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // rax
  int v70[2]; // [rsp+0h] [rbp-2F8h]
  int v71[2]; // [rsp+0h] [rbp-2F8h]
  struct _Unwind_Exception *v72; // [rsp+8h] [rbp-2F0h]
  unsigned int v73; // [rsp+8h] [rbp-2F0h]
  int v75[2]; // [rsp+10h] [rbp-2E8h]
  int v76; // [rsp+18h] [rbp-2E0h]
  __int64 v77; // [rsp+18h] [rbp-2E0h]
  __int64 *v79; // [rsp+20h] [rbp-2D8h]
  int v80; // [rsp+28h] [rbp-2D0h]
  int v81; // [rsp+2Ch] [rbp-2CCh]
  _QWORD *v83; // [rsp+30h] [rbp-2C8h]
  void *ptr; // [rsp+38h] [rbp-2C0h]
  int v85[2]; // [rsp+50h] [rbp-2A8h] BYREF
  __int64 v86; // [rsp+58h] [rbp-2A0h]
  __int64 v87; // [rsp+60h] [rbp-298h]
  int v88[2]; // [rsp+70h] [rbp-288h] BYREF
  __int64 v89; // [rsp+78h] [rbp-280h]
  _QWORD v90[20]; // [rsp+90h] [rbp-268h] BYREF
  __int64 v91; // [rsp+130h] [rbp-1C8h]
  int *v92; // [rsp+138h] [rbp-1C0h] BYREF
  int *v93; // [rsp+1D8h] [rbp-120h] BYREF
  __int64 v94; // [rsp+270h] [rbp-88h]
  __int64 v95; // [rsp+278h] [rbp-80h]
  __int64 v96; // [rsp+280h] [rbp-78h]
  __int64 v97; // [rsp+288h] [rbp-70h]
  __int64 v98; // [rsp+290h] [rbp-68h]
  __int64 v99; // [rsp+298h] [rbp-60h]
  __int64 v100; // [rsp+2A0h] [rbp-58h]
  _BYTE v101[80]; // [rsp+2A8h] [rbp-50h] BYREF

  v9 = sub_4D6490(*(_QWORD *)(a2 + 24));
  *a1 = 0;
  *(_QWORD *)v70 = v9;
  a1[1] = v9;
  v86 = v9;
  v10 = *a3;
  *(_QWORD *)v85 = 0;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(v10 + 144);
  if ( v11 == sub_586990 )
  {
    v12 = a3[6];
    if ( v12 )
    {
      *a1 = v12;
      ++*(_DWORD *)(v12 + 8);
    }
  }
  else
  {
    v11((__int64)a3, a1);
  }
  v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a4 + 144LL);
  if ( v13 == sub_586990 )
  {
    v14 = *(_QWORD *)v85;
    v15 = a4[6];
    if ( *(_QWORD *)v85 != v15 )
    {
      if ( *(_QWORD *)v85 )
      {
        v16 = v86;
        v17 = (*(_DWORD *)(*(_QWORD *)v85 + 8LL))-- == 1;
        if ( v17 )
        {
          sub_15D7BC0(v16, v14);
          v15 = a4[6];
        }
      }
      *(_QWORD *)v85 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
    }
  }
  else
  {
    v13((__int64)a4, (__int64 *)v85);
  }
  sub_633760(v90, *(_QWORD *)v70, 0, v101);
  v101[8] = 0;
  v90[0] = &off_1C4CA80;
  v87 = *(_QWORD *)v70;
  v19 = a4[2];
  if ( v19 )
  {
    v20 = nullptr;
    v21 = 0;
    while ( v21 < *(_DWORD *)(v19 - 4) )
    {
      v22 = v21;
      v23 = *(_QWORD *)(v19 + 8LL * v21);
      v24 = a3[2];
      if ( v24 )
        v22 = *(_DWORD *)(v24 - 4) + v21;
      v25 = sub_15DB5C0(*(_QWORD *)v70, v22, v23);
      v26 = v25;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v20 )
      {
        v27 = *((_DWORD *)v20 - 1);
        if ( v27 == *((_DWORD *)v20 - 2) )
        {
          v65 = (3 * v27 + 1) >> 1;
          v66 = 8 * v65 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v66 || v27 >= v65 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v88, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v88);
            sub_233E40((__int64)v88);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v67 = (unsigned int *)sub_186B300(v20 - 1, v66);
          v68 = v67[1];
          v20 = v67 + 2;
          *v67 = v65;
          LODWORD(v67) = v68;
          v30 = &v20[v68];
          v29 = (_DWORD)v67 + 1;
        }
        else
        {
          v28 = v27;
          v29 = v27 + 1;
          v30 = &v20[v28];
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x18u);
        v20 = v69 + 1;
        *v69 = 2;
        v29 = 1;
        v30 = v20;
      }
      *v30 = v26;
      ++v21;
      *((_DWORD *)v20 - 1) = v29;
      v19 = a4[2];
      if ( !v19 )
        goto LABEL_22;
    }
    if ( v20 )
    {
LABEL_22:
      v31 = *((_DWORD *)v20 - 1);
      goto LABEL_23;
    }
  }
  v20 = nullptr;
  v31 = 0;
LABEL_23:
  sub_157BE40((int)v88, (int)v90, v85[0], v31, (int)v20, v18, v70[0], (__int64)v72, (int)a4, v76, a5, v80, a6, v90);
  v32 = *(_QWORD *)v85;
  v33 = *(_QWORD *)v88;
  *(_QWORD *)v88 = *(_QWORD *)v85;
  *(_QWORD *)v85 = v33;
  if ( *(_QWORD *)v88 )
  {
    v34 = v89;
    v17 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v34, v32);
  }
  v35 = sub_15E1B70(v71[0]);
  v36 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v37 = *a1;
  if ( *a1 )
  {
    v38 = a1[1];
    v17 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v38, v37);
  }
  *a1 = v36;
  v39 = *v79;
  if ( *v79 )
  {
    v73 = 0;
    v40 = 0;
    v77 = 0;
    if ( *(_DWORD *)(v39 - 4) )
    {
      while ( 1 )
      {
        v41 = *(unsigned int *)(v39 + 4LL * v73);
        v42 = *(_DWORD *)(*v83 + 4LL * v73);
        v43 = sub_15DB5C0(*(_QWORD *)v71, v41, *(_QWORD *)(a3[2] + 8LL * (unsigned int)v41));
        v44 = v43;
        if ( v43 )
          ++*(_DWORD *)(v43 + 8);
        if ( v77 )
        {
          v81 = *(_DWORD *)(v77 + 8);
          *(_DWORD *)(v77 + 8) = v81 - 1;
          if ( v81 == 1 )
            sub_15D7BC0(*(_QWORD *)v71, v77);
        }
        v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v75 + 16LL) + 8LL * v42);
        v46 = a3[2];
        if ( v46 )
          v42 += *(_DWORD *)(v46 - 4);
        v47 = sub_15DB5C0(*(_QWORD *)v71, v42, v45);
        v48 = v47;
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
        if ( v40 )
        {
          v17 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(*(_QWORD *)v71, v40);
        }
        sub_15E1B70(v71[0]);
        v49 = sub_15E1B70(v71[0]);
        v50 = v49;
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
        v51 = *a1;
        if ( *a1 )
        {
          v52 = a1[1];
          v17 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v52, v51);
        }
        ++v73;
        *a1 = v50;
        v39 = *v79;
        if ( !*v79 )
          break;
        v77 = v44;
        v40 = v48;
        if ( v73 >= *(_DWORD *)(v39 - 4) )
          goto LABEL_52;
      }
    }
    else
    {
LABEL_52:
      v44 = v77;
      v48 = v40;
    }
  }
  else
  {
    v48 = 0;
    v44 = 0;
  }
  if ( v20 )
  {
    v53 = v20;
    v54 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
    if ( (unsigned __int64)v20 < v54 )
    {
      do
      {
        while ( 1 )
        {
          v55 = *v53;
          if ( *v53 )
          {
            v17 = (*(_DWORD *)(v55 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( (unsigned __int64)++v53 >= v54 )
            goto LABEL_60;
        }
        ++v53;
        sub_15D7BC0(*(_QWORD *)v71, v55);
      }
      while ( (unsigned __int64)v53 < v54 );
    }
LABEL_60:
    sub_186B220(v20 - 1);
  }
  v90[0] = &off_1C4CA60;
  if ( v100 )
    sub_186B220((void *)(v100 - 8));
  v56 = v98;
  if ( v98 )
  {
    v57 = v99;
    v17 = (*(_DWORD *)(v98 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v57, v56);
  }
  v58 = v96;
  if ( v96 )
  {
    v59 = v97;
    v17 = (*(_DWORD *)(v96 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v59, v58);
  }
  v60 = v94;
  if ( v94 )
  {
    v61 = v95;
    v17 = (*(_DWORD *)(v94 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v61, v60);
  }
  v93 = &qword_1C637E8;
  sub_15841B0(&v93);
  v92 = &qword_1C637E8;
  sub_15841B0(&v92);
  if ( v91 )
    sub_186B220((void *)(v91 - 8));
  sub_15841B0(ptr);
  if ( v48 )
  {
    v17 = (*(_DWORD *)(v48 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(*(_QWORD *)v71, v48);
  }
  if ( v44 )
  {
    v17 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(*(_QWORD *)v71, v44);
  }
  v62 = *(_QWORD *)v85;
  if ( *(_QWORD *)v85 )
  {
    v63 = v86;
    v17 = (*(_DWORD *)(*(_QWORD *)v85 + 8LL))-- == 1;
    if ( v17 )
      sub_15D7BC0(v63, v62);
  }
  return a1;
}


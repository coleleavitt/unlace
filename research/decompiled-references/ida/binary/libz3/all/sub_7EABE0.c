__int64 __fastcall sub_7EABE0(__int64 a1, __int64 a2, int a3, __int64 **a4, __int64 *a5)
{
  char **exception; // r12
  __int64 v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  int v12; // edx
  _QWORD *v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // r14
  int v16; // r9d
  __int64 v17; // r15
  __int64 v18; // r14
  int v19; // r12d
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // r13
  int v25; // ecx
  __int64 v26; // rdi
  unsigned int v27; // ebp
  __int64 v28; // rsi
  __int64 v29; // rdi
  bool v30; // zf
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // r12
  unsigned __int64 v39; // r13
  __int64 v40; // rsi
  unsigned int v42; // r9d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rdi
  unsigned int v49; // eax
  __int64 v50; // rsi
  __int64 v51; // rdi
  int v52; // ecx
  __int64 v53; // rdi
  int v54[2]; // [rsp+0h] [rbp-2B8h]
  unsigned int v55; // [rsp+0h] [rbp-2B8h]
  __int64 v57; // [rsp+8h] [rbp-2B0h]
  __int64 v58; // [rsp+8h] [rbp-2B0h]
  __int64 v59; // [rsp+8h] [rbp-2B0h]
  int v60[2]; // [rsp+10h] [rbp-2A8h]
  int v61; // [rsp+18h] [rbp-2A0h]
  int v63[2]; // [rsp+20h] [rbp-298h]
  __int64 v64; // [rsp+28h] [rbp-290h]
  int v65[2]; // [rsp+28h] [rbp-290h]
  void *v66; // [rsp+38h] [rbp-280h]
  int v67[2]; // [rsp+40h] [rbp-278h] BYREF
  __int64 v68; // [rsp+48h] [rbp-270h]
  int v69[2]; // [rsp+50h] [rbp-268h] BYREF
  _BYTE *v70; // [rsp+E0h] [rbp-1D8h]
  int v71; // [rsp+E8h] [rbp-1D0h]
  __int64 v72; // [rsp+F0h] [rbp-1C8h]
  int v73[2]; // [rsp+F8h] [rbp-1C0h] BYREF
  __int64 v74; // [rsp+188h] [rbp-130h]
  int v75; // [rsp+190h] [rbp-128h]
  int v76[2]; // [rsp+198h] [rbp-120h] BYREF
  int v77; // [rsp+228h] [rbp-90h]
  __int64 v78; // [rsp+230h] [rbp-88h]
  __int64 v79; // [rsp+238h] [rbp-80h]
  __int64 v80; // [rsp+240h] [rbp-78h]
  __int64 v81; // [rsp+248h] [rbp-70h]
  __int64 v82; // [rsp+250h] [rbp-68h]
  __int64 v83; // [rsp+258h] [rbp-60h]
  __int64 v84; // [rsp+260h] [rbp-58h]
  _BYTE v85[80]; // [rsp+268h] [rbp-50h] BYREF

  v64 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 16) + 20LL) )
  {
    v8 = **a4;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    v9 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v10 = *(_QWORD *)(a2 + 16);
    v11 = 0;
    v12 = 1;
    *(v9 - 1) = 2;
    v13 = v9;
    while ( 1 )
    {
      *v9 = v8;
      ++v11;
      *((_DWORD *)v13 - 1) = v12;
      if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 20) )
        break;
      while ( 1 )
      {
        v8 = *a4[v11];
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        v14 = *((_DWORD *)v13 - 1);
        if ( v14 == *((_DWORD *)v13 - 2) )
          break;
        ++v11;
        v13[v14] = v8;
        *((_DWORD *)v13 - 1) = v14 + 1;
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 20) )
          goto LABEL_10;
      }
      v42 = (3 * v14 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v43 || v14 >= v42 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v69, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v69);
        sub_233E40((__int64)v69);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v55 = (3 * v14 + 1) >> 1;
      v44 = (unsigned int *)sub_186B300(v13 - 1, v43);
      v13 = v44 + 2;
      v10 = *(_QWORD *)(a2 + 16);
      *v44 = v55;
      v45 = v44[1];
      v46 = v45;
      v9 = &v13[v45];
      v12 = v46 + 1;
    }
LABEL_10:
    v15 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 24);
    v13 = nullptr;
  }
  sub_1584DD0(v69, v15, 0);
  v71 = 0;
  *(_QWORD *)v69 = &off_1C4CA60;
  v70 = v85;
  v72 = 0;
  sub_1584DD0(v73, v15, 0);
  v74 = 0;
  v75 = 0;
  *(_QWORD *)v73 = &off_1C61DB8;
  sub_1584DD0(v76, v15, 0);
  v79 = v15;
  v81 = v15;
  v17 = *(_QWORD *)(a1 + 24);
  v83 = v15;
  v18 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v76 = &off_1C61DE0;
  *(_QWORD *)v69 = &off_1C4CA80;
  v77 = 0;
  v19 = *(_DWORD *)(v18 + 2280);
  v78 = 0;
  v20 = a5[2];
  v80 = 0;
  v21 = *a5;
  v82 = 0;
  v84 = 0;
  v85[8] = 1;
  *(_DWORD *)(v18 + 2280) = a3 + 1;
  if ( *(_QWORD *)(v17 + 856) == v20 )
  {
    if ( v13 )
      v52 = *((_DWORD *)v13 - 1);
    else
      v52 = 0;
    sub_157BE40(
      (int)v67,
      (int)v69,
      v21,
      v52,
      (int)v13,
      v16,
      (int)v69,
      (__int64)a5,
      (int)v73,
      v61,
      (int)v76,
      v64,
      v64,
      v66);
    v53 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v59 + 32) )
      v27 = sub_79C480(v53, *(__int64 *)v67) ^ 1;
    else
      v27 = sub_79C480(v53, *(__int64 *)v67);
    v50 = *(_QWORD *)v67;
    if ( !*(_QWORD *)v67 )
      goto LABEL_25;
    v51 = v68;
    v30 = (*(_DWORD *)(*(_QWORD *)v67 + 8LL))-- == 1;
    if ( !v30 )
      goto LABEL_25;
LABEL_57:
    sub_15D7BC0(v51, v50);
    goto LABEL_25;
  }
  if ( v20 == *(_QWORD *)(v17 + 864) )
  {
    if ( v13 )
      v47 = *((_DWORD *)v13 - 1);
    else
      v47 = 0;
    sub_157BE40(
      (int)v67,
      (int)v69,
      v21,
      v47,
      (int)v13,
      v16,
      (int)v69,
      (__int64)a5,
      (int)v73,
      v61,
      (int)v76,
      v64,
      v64,
      v66);
    v48 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v58 + 32) )
      v49 = sub_79C480(v48, *(__int64 *)v67);
    else
      v49 = sub_79C480(v48, *(__int64 *)v67) ^ 1;
    v50 = *(_QWORD *)v67;
    v27 = v49;
    if ( !*(_QWORD *)v67 )
      goto LABEL_25;
    v51 = v68;
    v30 = (*(_DWORD *)(*(_QWORD *)v67 + 8LL))-- == 1;
    if ( !v30 )
      goto LABEL_25;
    goto LABEL_57;
  }
  v22 = sub_15E1B70(v17);
  v24 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  if ( v13 )
    v25 = *((_DWORD *)v13 - 1);
  else
    v25 = 0;
  sub_157BE40(
    (int)v67,
    (int)v69,
    v22,
    v25,
    (int)v13,
    v23,
    (int)v69,
    (__int64)a5,
    (int)v73,
    v61,
    (int)v76,
    v64,
    v64,
    v66);
  v26 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v57 + 32) )
    v27 = sub_79C480(v26, *(__int64 *)v67) ^ 1;
  else
    v27 = sub_79C480(v26, *(__int64 *)v67);
  v28 = *(_QWORD *)v67;
  if ( *(_QWORD *)v67 )
  {
    v29 = v68;
    v30 = (*(_DWORD *)(*(_QWORD *)v67 + 8LL))-- == 1;
    if ( v30 )
      sub_15D7BC0(v29, v28);
  }
  if ( v24 )
  {
    v30 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v17, v24);
  }
LABEL_25:
  v31 = v84;
  *(_DWORD *)(v18 + 2280) = v19;
  *(_QWORD *)v69 = &off_1C4CA60;
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = v82;
  if ( v82 )
  {
    v33 = v83;
    v30 = (*(_DWORD *)(v82 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v33, v32);
  }
  v34 = v80;
  if ( v80 )
  {
    v35 = v81;
    v30 = (*(_DWORD *)(v80 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v35, v34);
  }
  v36 = v78;
  if ( v78 )
  {
    v37 = v79;
    v30 = (*(_DWORD *)(v78 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v37, v36);
  }
  *(_QWORD *)v76 = &qword_1C637E8;
  sub_15841B0(*(_QWORD *)v63);
  *(_QWORD *)v73 = &qword_1C637E8;
  sub_15841B0(*(_QWORD *)v60);
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  sub_15841B0(*(_QWORD *)v54);
  if ( v13 )
  {
    v38 = v13;
    v39 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
    if ( (unsigned __int64)v13 < v39 )
    {
      do
      {
        while ( 1 )
        {
          v40 = *v38;
          if ( *v38 )
          {
            v30 = (*(_DWORD *)(v40 + 8))-- == 1;
            if ( v30 )
              break;
          }
          if ( (unsigned __int64)++v38 >= v39 )
            goto LABEL_45;
        }
        ++v38;
        sub_15D7BC0(*(_QWORD *)v65, v40);
      }
      while ( (unsigned __int64)v38 < v39 );
    }
LABEL_45:
    sub_186B220(v13 - 1);
  }
  return v27;
}


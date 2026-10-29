__int64 __fastcall sub_6B4D10(__int64 *a1, __int64 a2, int a3, _QWORD *a4, __int64 *a5, __int64 *a6, __int64 *a7)
{
  _QWORD *v7; // rbx
  __int64 v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // r12d
  _QWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rbp
  __int64 (__fastcall ***v17)(); // rbp
  __int64 v18; // r13
  __int64 v19; // r15
  char v20; // r14
  char v21; // al
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  unsigned int v25; // ebp
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  unsigned int v29; // ebp
  int v30; // r8d
  int v31; // r9d
  unsigned int v32; // ebp
  unsigned int v34; // r14d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbp
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rbp
  unsigned int *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 (*v49)(); // rax
  unsigned int v50; // r12d
  char v51; // r14
  __int64 v52; // r13
  char **exception; // rbp
  __int64 v54; // [rsp+0h] [rbp-268h]
  __int64 (__fastcall ***v55)(); // [rsp+8h] [rbp-260h]
  __int64 (__fastcall ***v56)(); // [rsp+10h] [rbp-258h]
  __int64 v58; // [rsp+18h] [rbp-250h]
  __int64 v60; // [rsp+20h] [rbp-248h]
  __int64 (__fastcall ***v61)(); // [rsp+28h] [rbp-240h]
  __int64 *v62; // [rsp+30h] [rbp-238h]
  __int64 *v63; // [rsp+38h] [rbp-230h]
  __int64 *v64; // [rsp+40h] [rbp-228h]
  __int64 *v65; // [rsp+48h] [rbp-220h]
  int v66; // [rsp+50h] [rbp-218h]
  _QWORD *v67; // [rsp+58h] [rbp-210h] BYREF
  __int64 v68; // [rsp+60h] [rbp-208h] BYREF
  __int64 v69; // [rsp+68h] [rbp-200h] BYREF
  int v70[2]; // [rsp+70h] [rbp-1F8h] BYREF
  int v71[2]; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v72; // [rsp+80h] [rbp-1E8h] BYREF
  _QWORD *v73; // [rsp+88h] [rbp-1E0h]
  __int64 (__fastcall **v74)(); // [rsp+90h] [rbp-1D8h] BYREF
  int v75; // [rsp+98h] [rbp-1D0h]
  __int64 v76; // [rsp+A0h] [rbp-1C8h]
  void *v77; // [rsp+A8h] [rbp-1C0h]
  int v78; // [rsp+B0h] [rbp-1B8h]
  __int64 v79; // [rsp+B8h] [rbp-1B0h]
  void *v80; // [rsp+C0h] [rbp-1A8h]
  int v81; // [rsp+C8h] [rbp-1A0h]
  __int64 (__fastcall **v82)(); // [rsp+D0h] [rbp-198h] BYREF
  int v83; // [rsp+D8h] [rbp-190h]
  __int64 v84; // [rsp+E0h] [rbp-188h]
  void *v85; // [rsp+E8h] [rbp-180h]
  int v86; // [rsp+F0h] [rbp-178h]
  __int64 v87; // [rsp+F8h] [rbp-170h]
  void *v88; // [rsp+100h] [rbp-168h]
  int v89; // [rsp+108h] [rbp-160h]
  __int64 (__fastcall **v90)(); // [rsp+110h] [rbp-158h] BYREF
  int v91; // [rsp+118h] [rbp-150h]
  __int64 v92; // [rsp+120h] [rbp-148h]
  void *v93; // [rsp+128h] [rbp-140h]
  int v94; // [rsp+130h] [rbp-138h]
  __int64 v95; // [rsp+138h] [rbp-130h]
  void *ptr; // [rsp+140h] [rbp-128h]
  char v97; // [rsp+148h] [rbp-120h]
  int v98[2]; // [rsp+150h] [rbp-118h] BYREF
  int v99; // [rsp+158h] [rbp-110h]
  __int16 v100; // [rsp+15Ch] [rbp-10Ch]
  int v101; // [rsp+16Ch] [rbp-FCh]
  __int128 v102; // [rsp+178h] [rbp-F0h]
  __int128 v103; // [rsp+188h] [rbp-E0h]
  char *v104; // [rsp+198h] [rbp-D0h]
  __int64 v105; // [rsp+1A0h] [rbp-C8h]
  char v106; // [rsp+1A8h] [rbp-C0h] BYREF

  v64 = a1;
  v72 = *a1;
  v74 = &off_1C62200;
  v82 = &off_1C62200;
  v62 = a5;
  v63 = a6;
  v73 = nullptr;
  v76 = 0;
  v77 = nullptr;
  v79 = 0;
  v80 = nullptr;
  v84 = 0;
  v85 = nullptr;
  v87 = 0;
  v88 = nullptr;
  v90 = &off_1C62200;
  v92 = 0;
  v93 = nullptr;
  v95 = 0;
  ptr = nullptr;
  v65 = &v72;
  sub_15EEF60(a2);
  v7 = v73;
  if ( !v73 )
    goto LABEL_100;
  if ( !*((_DWORD *)v73 - 1) )
  {
    v17 = (__int64 (__fastcall ***)())v73;
    v7 = nullptr;
    goto LABEL_12;
  }
  v8 = *v73;
  v9 = (_QWORD *)sub_186B270(0x18u);
  v7 = v9 + 1;
  v10 = v73;
  v11 = 0;
  *v9 = 2;
  v12 = v9 + 1;
  v13 = 1;
LABEL_4:
  *v12 = v8;
  *((_DWORD *)v7 - 1) = v13;
  if ( !v10 )
    goto LABEL_8;
  if ( ++v11 >= *((_DWORD *)v10 - 1) )
    goto LABEL_8;
  do
  {
    v8 = v10[v11];
    v14 = *((_DWORD *)v7 - 1);
    if ( v14 == *((_DWORD *)v7 - 2) )
    {
      v34 = (3 * v14 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v35 || v14 >= v34 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0((__int64 *)v98, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v98);
        sub_233E40((__int64)v98);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v61 = &v74;
      v55 = &v90;
      v56 = &v82;
      v36 = (unsigned int *)sub_186B300(v7 - 1, v35);
      v37 = v36[1];
      v7 = v36 + 2;
      *v36 = v34;
      v10 = v73;
      LODWORD(v36) = v37;
      v12 = &v7[v37];
      v13 = (_DWORD)v36 + 1;
      goto LABEL_4;
    }
    ++v11;
    v7[v14] = v8;
    *((_DWORD *)v7 - 1) = v14 + 1;
  }
  while ( v11 < *((_DWORD *)v10 - 1) );
  do
  {
LABEL_8:
    v15 = *((_DWORD *)v7 - 1);
    if ( !v15 )
      break;
    while ( 1 )
    {
      v16 = v7[v15 - 1];
      v61 = &v74;
      v55 = &v90;
      v56 = &v82;
      if ( (unsigned __int8)sub_15D37A0(&v74, v16) )
        goto LABEL_10;
      if ( !a3 )
        break;
      v40 = a4;
      while ( v16 != *v40 )
      {
        if ( &a4[a3] == ++v40 )
          goto LABEL_78;
      }
      v56 = &v82;
      sub_15D0A90(&v82, v16, 1);
      v55 = &v90;
      sub_15D0A90(&v74, v16, 1);
LABEL_10:
      v15 = --*((_DWORD *)v7 - 1);
      if ( !v15 )
        goto LABEL_11;
    }
LABEL_78:
    if ( *(_WORD *)(v16 + 4) )
    {
      v55 = &v90;
      v56 = &v82;
      sub_15D0A90(&v74, v16, 1);
      goto LABEL_10;
    }
    v45 = *(unsigned int **)(*(_QWORD *)(v16 + 16) + 24LL);
    if ( !v45
      || (v46 = *v45, (_DWORD)v46 == -1)
      || (v47 = v64[1]) == 0
      || (unsigned int)v46 >= *(_DWORD *)(v47 - 4)
      || (v48 = *(_QWORD *)(v47 + 8 * v46)) == 0
      || (v49 = *(__int64 (**)())(*(_QWORD *)v48 + 80LL), v49 == sub_6AFD70)
      || ((unsigned __int8 (__fastcall *)(__int64, __int64))v49)(v48, v16) )
    {
      sub_15D0A90(&v90, v16, 1);
    }
    if ( !*(_DWORD *)(v16 + 24) )
    {
LABEL_105:
      --*((_DWORD *)v7 - 1);
      v55 = &v90;
      v56 = &v82;
      sub_15D0A90(&v74, v16, 1);
      goto LABEL_8;
    }
    v50 = 0;
    v51 = 1;
    while ( 2 )
    {
      while ( 2 )
      {
        v55 = &v90;
        v56 = &v82;
        *(_QWORD *)v98 = *(_QWORD *)(v16 + 8LL * v50 + 32);
        v52 = *(_QWORD *)v98;
        if ( !(unsigned __int8)sub_15D37A0(&v74, *(_QWORD *)v98) )
        {
          v67 = v7;
          sub_6ACBA0(&v67, v98);
          v7 = v67;
          v51 = 0;
LABEL_90:
          if ( ++v50 >= *(_DWORD *)(v16 + 24) )
            goto LABEL_96;
          continue;
        }
        break;
      }
      v56 = &v82;
      if ( (unsigned __int8)sub_15D37A0(&v82, v52) )
        sub_15D0A90(&v82, v16, 1);
      v55 = &v90;
      if ( !(unsigned __int8)sub_15D37A0(&v90, v52) )
        goto LABEL_90;
      sub_15D0A90(&v90, v16, 1);
      if ( ++v50 < *(_DWORD *)(v16 + 24) )
        continue;
      break;
    }
LABEL_96:
    if ( v51 )
      goto LABEL_105;
  }
  while ( v7 );
LABEL_11:
  v17 = (__int64 (__fastcall ***)())v73;
  if ( !v73 )
  {
LABEL_100:
    v60 = 0;
    v18 = 0;
    v58 = 0;
    goto LABEL_19;
  }
LABEL_12:
  v60 = 0;
  v18 = 0;
  v58 = 0;
  v61 = &v17[*((unsigned int *)v17 - 1)];
  if ( v61 != v17 )
  {
    v55 = &v90;
    v56 = &v82;
    do
    {
      while ( 1 )
      {
        *(_QWORD *)v98 = *v17;
        v19 = *(_QWORD *)v98;
        v20 = sub_15D37A0(&v82, *(_QWORD *)v98);
        v21 = sub_15D37A0(&v90, v19);
        if ( v20 )
          break;
        v68 = v58;
        sub_6ACBA0(&v68, v98);
        ++v17;
        v58 = v68;
        if ( v61 == v17 )
          goto LABEL_19;
      }
      if ( v21 )
      {
        v69 = v60;
        sub_6ACBA0(&v69, v98);
        *(_QWORD *)v70 = v18;
        v60 = v69;
      }
      else
      {
        *(_QWORD *)v70 = v18;
      }
      sub_6ACBA0(v70, v98);
      v18 = *(_QWORD *)v70;
      ++v17;
    }
    while ( v61 != v17 );
  }
LABEL_19:
  *(_QWORD *)v71 = 0;
  v22 = *v64;
  v102 = 0;
  v99 = 256;
  *(_QWORD *)v98 = v22;
  v100 = 0;
  v104 = &v106;
  v101 = 0;
  v105 = 0x1000000000LL;
  v103 = 0;
  sub_14DC230(v98, v71);
  sub_18572D0(v71);
  if ( v58 )
    v25 = *(_DWORD *)(v58 - 4);
  else
    v25 = 0;
  if ( HIBYTE(v99) )
  {
    sub_14E1930((int)v98, v54, (int)v55, (int)v56, v58, v60, (__int64)v61, v62, (int)v63);
    goto LABEL_24;
  }
  if ( (_BYTE)v99 )
  {
    if ( (unsigned int)sub_14DD000(v98, v25, v58, v62) == 5 )
      goto LABEL_60;
LABEL_24:
    v28 = v60;
    if ( !v60 )
      goto LABEL_63;
    goto LABEL_25;
  }
  if ( (unsigned int)sub_14DC740(
                       (int)v98,
                       v25,
                       v58,
                       (int)v62,
                       v23,
                       v24,
                       v54,
                       (int)v55,
                       (int)v56,
                       v58,
                       v60,
                       v61,
                       (int)v62,
                       (int)v63,
                       (int)v64,
                       (int)&v72,
                       v66,
                       (int)v67,
                       v68,
                       v69,
                       v70[0],
                       v71[0],
                       v72,
                       (int)v73,
                       (int)v74,
                       v75,
                       v76,
                       (int)v77,
                       v78,
                       v79,
                       (int)v80,
                       v81,
                       (int)v82,
                       v83,
                       v84,
                       (int)v85,
                       v86,
                       v87,
                       (int)v88,
                       v89,
                       (int)v90,
                       v91,
                       v92,
                       (int)v93,
                       v94,
                       v95,
                       (int)ptr,
                       v97) != 5 )
    goto LABEL_24;
LABEL_60:
  v38 = sub_15E1AF0(v98[0]);
  v39 = v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  sub_6A99C0(*v62, v62[1]);
  v28 = v60;
  *v62 = v39;
  if ( v60 )
  {
LABEL_25:
    v29 = *(_DWORD *)(v28 - 4);
    goto LABEL_26;
  }
LABEL_63:
  v29 = 0;
LABEL_26:
  if ( HIBYTE(v99) )
  {
    sub_14E1930((int)v98, v54, (int)v55, (int)v56, v58, v60, (__int64)v61, v62, (int)v63);
    goto LABEL_29;
  }
  if ( !(_BYTE)v99 )
  {
    if ( (unsigned int)sub_14DC740(
                         (int)v98,
                         v29,
                         v60,
                         (int)v63,
                         v26,
                         v27,
                         v54,
                         (int)v55,
                         (int)v56,
                         v58,
                         v60,
                         v61,
                         (int)v62,
                         (int)v63,
                         (int)v64,
                         (int)v65,
                         v66,
                         (int)v67,
                         v68,
                         v69,
                         v70[0],
                         v71[0],
                         v72,
                         (int)v73,
                         (int)v74,
                         v75,
                         v76,
                         (int)v77,
                         v78,
                         v79,
                         (int)v80,
                         v81,
                         (int)v82,
                         v83,
                         v84,
                         (int)v85,
                         v86,
                         v87,
                         (int)v88,
                         v89,
                         (int)v90,
                         v91,
                         v92,
                         (int)v93,
                         v94,
                         v95,
                         (int)ptr,
                         v97) == 5 )
      goto LABEL_70;
LABEL_29:
    if ( !v18 )
      goto LABEL_73;
    goto LABEL_30;
  }
  if ( (unsigned int)sub_14DD000(v98, v29, v60, v63) != 5 )
    goto LABEL_29;
LABEL_70:
  v41 = sub_15E1AF0(v98[0]);
  v42 = v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  sub_6A99C0(*v63, v63[1]);
  *v63 = v42;
  if ( v18 )
  {
LABEL_30:
    v32 = *(_DWORD *)(v18 - 4);
    goto LABEL_31;
  }
LABEL_73:
  v32 = 0;
LABEL_31:
  if ( HIBYTE(v99) )
  {
    sub_14E1930((int)v98, v54, (int)v55, (int)v56, v58, v60, (__int64)v61, v62, (int)v63);
  }
  else if ( (_BYTE)v99 )
  {
    if ( (unsigned int)sub_14DD000(v98, v32, v18, a7) != 5 )
      goto LABEL_34;
LABEL_75:
    v43 = sub_15E1AF0(v98[0]);
    v44 = v43;
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    sub_6A99C0(*a7, a7[1]);
    *a7 = v44;
  }
  else if ( (unsigned int)sub_14DC740(
                            (int)v98,
                            v32,
                            v18,
                            (int)a7,
                            v30,
                            v31,
                            v54,
                            (int)v55,
                            (int)v56,
                            v58,
                            v60,
                            v61,
                            (int)v62,
                            (int)v63,
                            (int)v64,
                            (int)v65,
                            v66,
                            (int)v67,
                            v68,
                            v69,
                            v70[0],
                            v71[0],
                            v72,
                            (int)v73,
                            (int)v74,
                            v75,
                            v76,
                            (int)v77,
                            v78,
                            v79,
                            (int)v80,
                            v81,
                            (int)v82,
                            v83,
                            v84,
                            (int)v85,
                            v86,
                            v87,
                            (int)v88,
                            v89,
                            (int)v90,
                            v91,
                            v92,
                            (int)v93,
                            v94,
                            v95,
                            (int)ptr,
                            v97) == 5 )
  {
    goto LABEL_75;
  }
LABEL_34:
  sub_39A7A0((__int64)v98);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  if ( v7 )
    sub_186B220(v7 - 1);
  v90 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v93 )
    sub_186B220(v93);
  v82 = &off_1C62200;
  if ( v88 )
    sub_186B220(v88);
  if ( v85 )
    sub_186B220(v85);
  v74 = &off_1C62200;
  if ( v80 )
    sub_186B220(v80);
  if ( v77 )
    sub_186B220(v77);
  return sub_2334C0(v65);
}


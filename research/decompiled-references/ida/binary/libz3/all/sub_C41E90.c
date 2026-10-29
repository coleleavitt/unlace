__int64 __fastcall sub_C41E90(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rsi
  unsigned __int8 v9; // al
  __int64 *v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 *v13; // rdi
  bool v14; // zf
  void *v15; // rbx
  void (__fastcall ***v16)(void *, __int64, __int64); // rbx
  void *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rsi
  void *v26; // r13
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r13
  void *v30; // r15
  __int64 v31; // rsi
  __int64 *v32; // rbx
  unsigned __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  _QWORD *v37; // rdi
  __int64 v38; // rsi
  _QWORD *v39; // rdi
  __int64 v40; // rsi
  _QWORD *v41; // rdi
  __int64 v43; // [rsp-8h] [rbp-3C8h]
  int v46; // [rsp+28h] [rbp-398h]
  unsigned __int8 v47; // [rsp+30h] [rbp-390h]
  unsigned __int8 v48; // [rsp+48h] [rbp-378h]
  void *v49; // [rsp+48h] [rbp-378h]
  __int64 v50; // [rsp+58h] [rbp-368h] BYREF
  __int64 *v51; // [rsp+60h] [rbp-360h] BYREF
  __int64 *v52; // [rsp+68h] [rbp-358h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+70h] [rbp-350h] BYREF
  int v54; // [rsp+78h] [rbp-348h]
  _QWORD *v55; // [rsp+80h] [rbp-340h]
  char v56[16]; // [rsp+88h] [rbp-338h] BYREF
  _QWORD v57[19]; // [rsp+98h] [rbp-328h] BYREF
  int v58; // [rsp+130h] [rbp-290h]
  __int64 v59; // [rsp+138h] [rbp-288h]
  _QWORD v60[19]; // [rsp+140h] [rbp-280h] BYREF
  int v61; // [rsp+1D8h] [rbp-1E8h]
  _QWORD v62[18]; // [rsp+1E0h] [rbp-1E0h] BYREF
  int v63; // [rsp+270h] [rbp-150h]
  __int64 v64; // [rsp+278h] [rbp-148h]
  _QWORD *v65; // [rsp+280h] [rbp-140h]
  __int64 v66; // [rsp+288h] [rbp-138h]
  _QWORD *v67; // [rsp+290h] [rbp-130h]
  __int64 v68; // [rsp+298h] [rbp-128h]
  _QWORD *v69; // [rsp+2A0h] [rbp-120h]
  __int64 v70; // [rsp+2A8h] [rbp-118h]
  _QWORD v71[2]; // [rsp+2B0h] [rbp-110h] BYREF
  char v72[16]; // [rsp+2C0h] [rbp-100h] BYREF
  __int64 v73; // [rsp+2D0h] [rbp-F0h]
  __int64 *v74; // [rsp+2D8h] [rbp-E8h]
  __int64 v75; // [rsp+2E0h] [rbp-E0h]
  _QWORD v76[2]; // [rsp+2E8h] [rbp-D8h] BYREF
  __int64 v77; // [rsp+2F8h] [rbp-C8h] BYREF
  __int128 v78; // [rsp+300h] [rbp-C0h] BYREF
  _QWORD *v79; // [rsp+310h] [rbp-B0h]
  int v80; // [rsp+318h] [rbp-A8h]
  __int128 v81; // [rsp+320h] [rbp-A0h]
  _QWORD v82[2]; // [rsp+330h] [rbp-90h] BYREF
  _QWORD v83[2]; // [rsp+340h] [rbp-80h] BYREF
  void *v84; // [rsp+350h] [rbp-70h]
  void *ptr; // [rsp+358h] [rbp-68h]
  __int64 v86; // [rsp+360h] [rbp-60h]
  int v87; // [rsp+368h] [rbp-58h]
  char v88; // [rsp+370h] [rbp-50h]
  __int64 v89; // [rsp+374h] [rbp-4Ch]
  void *v90; // [rsp+380h] [rbp-40h]

  v46 = (int)a2;
  v4 = (_QWORD *)*a2;
  v50 = 0;
  v54 = 0;
  v53 = &off_1C58828;
  v55 = v4;
  sub_16669D0(v56, v4);
  sub_1584DD0(v57, v4, 0);
  v58 = 0;
  v57[0] = &off_1C587E8;
  v57[18] = v71;
  v59 = 0;
  sub_1584DD0(v60, v4, 0);
  v60[18] = 0;
  v61 = 0;
  v60[0] = &off_1C61DB8;
  sub_1584DD0(v62, v4, 0);
  v63 = 0;
  v64 = 0;
  v65 = v4;
  v62[0] = &off_1C61DE0;
  v57[0] = &off_1C58808;
  v66 = 0;
  v67 = v4;
  v68 = 0;
  v69 = v4;
  v70 = 0;
  v71[0] = v4;
  v71[1] = &v53;
  sub_16669D0(v72, v4);
  v5 = v55;
  v74 = nullptr;
  v73 = v71[0];
  v75 = 0;
  v76[0] = 0;
  v76[1] = 0;
  v77 = 1;
  v79 = v55;
  v78 = 0;
  sub_180C5A0(&v51, "pb");
  v80 = sub_15DA4C0(v5 + 70, &v51);
  v82[0] = 0;
  v82[1] = 0;
  v83[0] = 1;
  v83[1] = 0;
  v81 = 0;
  v6 = (_QWORD *)sub_186B270(8u);
  *v6 = 0;
  v84 = v6;
  v7 = (_QWORD *)sub_186B270(0xC0u);
  *v7 = 0;
  v7[1] = 0;
  v7[4] = 0;
  v7[7] = 0;
  v7[10] = 0;
  v7[13] = 0;
  v7[16] = 0;
  v7[19] = 0;
  v7[22] = 0;
  v7[23] = 0;
  ptr = v7;
  *((_OWORD *)v7 + 1) = 0;
  *(_OWORD *)(v7 + 5) = 0;
  *((_OWORD *)v7 + 4) = 0;
  *(_OWORD *)(v7 + 11) = 0;
  *((_OWORD *)v7 + 7) = 0;
  *(_OWORD *)(v7 + 17) = 0;
  *((_OWORD *)v7 + 10) = 0;
  v86 = 8;
  v87 = 0;
  v88 = 1;
  v89 = 0x100000065LL;
  v90 = nullptr;
  sub_1863170((char *)&v78 + 8, &v50);
  v51 = &v50;
  sub_17F9A60(&v52, "tactic");
  v88 = sub_1859610((char *)&v78 + 8, "compile_equality", 1);
  LODWORD(v89) = sub_1859980(v51, "lia2card.max_range", &v52, 100);
  HIDWORD(v89) = sub_1859980(v51, "lia2card.max_ite_nesting", &v52, 4);
  sub_18572D0(&v52);
  v8 = 0;
  v52 = nullptr;
  v51 = v55;
  v9 = sub_C45340((unsigned int)&v53, 0, a1, (unsigned int)&qword_1C7F280, (unsigned int)&v51, v46, a3, a4);
  v10 = v52;
  v48 = v9;
  v11 = v43;
  if ( v52 )
  {
    v12 = (unsigned __int64)&v52[*((unsigned int *)v52 - 1)];
    if ( (unsigned __int64)v52 >= v12 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v8 = *v10;
        if ( *v10 )
        {
          v13 = v51;
          v14 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( (unsigned __int64)++v10 >= v12 )
          goto LABEL_8;
      }
      sub_15D7BC0(v13, v8);
      ++v10;
    }
    while ( (unsigned __int64)v10 < v12 );
LABEL_8:
    v10 = v52;
    if ( v52 )
LABEL_9:
      sub_186B220(v10 - 1);
  }
  v15 = v84;
  v53 = &off_1C58828;
  if ( v84 )
  {
    if ( *(_QWORD *)v84 )
      sub_186B220((void *)(*(_QWORD *)v84 - 8LL));
    sub_186B220(v15);
  }
  v16 = (void (__fastcall ***)(void *, __int64, __int64))v90;
  if ( v90 )
  {
    v14 = (*((_DWORD *)v90 + 2))-- == 1;
    if ( v14 )
    {
      (**v16)(v16, v8, v11);
      sub_186B220(v16);
    }
  }
  if ( ptr )
    sub_186B220(ptr);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v82);
  sub_182CBA0(v17, v83);
  v18 = *((_QWORD *)&v81 + 1);
  if ( *((_QWORD *)&v81 + 1) )
  {
    v19 = *(unsigned int *)(*((_QWORD *)&v81 + 1) - 4LL);
    if ( (_DWORD)v19 )
    {
      v20 = *((_QWORD *)&v81 + 1) + 16 * v19;
      do
      {
        v21 = v18;
        v18 += 16;
        sub_15D0DF0(v21);
      }
      while ( v18 != v20 );
      v18 = *((_QWORD *)&v81 + 1);
    }
    sub_186B220((void *)(v18 - 8));
  }
  v22 = v81;
  if ( (_QWORD)v81 )
  {
    v23 = *(unsigned int *)(v81 - 4);
    if ( (_DWORD)v23 )
    {
      v24 = v81 + 32 * v23;
      v47 = v48;
      do
      {
        v49 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v22);
        v25 = v22 + 16;
        v22 += 32;
        sub_182CBA0(v49, v25);
      }
      while ( v22 != v24 );
      v22 = v81;
      v48 = v47;
    }
    sub_186B220((void *)(v22 - 8));
  }
  sub_18572D0((char *)&v78 + 8);
  v26 = qword_1C7F2C0;
  v57[0] = &off_1C58808;
  sub_182CBA0(qword_1C7F2C0, v76);
  sub_182CBA0(v26, &v77);
  v27 = v75;
  if ( v75 )
  {
    v28 = *(unsigned int *)(v75 - 4);
    if ( (_DWORD)v28 )
    {
      v29 = v75 + 32 * v28;
      do
      {
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v27);
        v31 = v27 + 16;
        v27 += 32;
        sub_182CBA0(v30, v31);
      }
      while ( v29 != v27 );
      v27 = v75;
    }
    sub_186B220((void *)(v27 - 8));
  }
  v32 = v74;
  if ( v74 )
  {
    v33 = (unsigned __int64)&v74[*((unsigned int *)v74 - 1)];
    if ( (unsigned __int64)v74 >= v33 )
      goto LABEL_45;
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          v35 = v73;
          v14 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( (unsigned __int64)++v32 >= v33 )
          goto LABEL_44;
      }
      sub_15D7BC0(v35, v34);
      ++v32;
    }
    while ( (unsigned __int64)v32 < v33 );
LABEL_44:
    v32 = v74;
    if ( v74 )
LABEL_45:
      sub_186B220(v32 - 1);
  }
  v57[0] = &off_1C587E8;
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  v36 = v68;
  if ( v68 )
  {
    v37 = v69;
    v14 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v37, v36);
  }
  v38 = v66;
  if ( v66 )
  {
    v39 = v67;
    v14 = (*(_DWORD *)(v66 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v39, v38);
  }
  v40 = v64;
  if ( v64 )
  {
    v41 = v65;
    v14 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v41, v40);
  }
  v62[0] = &qword_1C637E8;
  sub_15841B0(v62);
  v60[0] = &qword_1C637E8;
  sub_15841B0(v60);
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  sub_15841B0(v57);
  sub_18572D0(&v50);
  return v48;
}


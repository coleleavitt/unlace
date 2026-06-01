__int64 __fastcall sub_3034A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  _DWORD *v4; // r13
  char *v5; // r13
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 (*v9)(void); // rax
  __int64 v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // r15
  __int64 i; // r12
  void (__fastcall ***v14)(_QWORD); // rbx
  bool v15; // zf
  void *v16; // rbx
  void *v17; // rbx
  __int64 *v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdi
  char *v22; // rbx
  __int64 v23; // rax
  char *v24; // rbp
  void *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdi
  void *v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r13
  void *v32; // rbp
  __int64 v33; // rsi
  void (__fastcall ***v34)(_QWORD); // rbx
  void (__fastcall ***v35)(_QWORD); // rbx
  void (__fastcall ***v36)(_QWORD); // rbx
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // r15
  void *v41; // r12
  __int64 v42; // rax
  int v43; // edx
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // r14
  void *v49; // r13
  __int64 v50; // rsi
  unsigned int v51; // [rsp+8h] [rbp-160h]
  unsigned int v52; // [rsp+Ch] [rbp-15Ch]
  __int64 v53; // [rsp+20h] [rbp-148h]
  __int64 v54; // [rsp+28h] [rbp-140h]
  __int64 v55; // [rsp+38h] [rbp-130h] BYREF
  __int64 (__fastcall **v56)(); // [rsp+40h] [rbp-128h] BYREF
  char v57[8]; // [rsp+48h] [rbp-120h] BYREF
  void *v58; // [rsp+50h] [rbp-118h]
  void *v59; // [rsp+58h] [rbp-110h]
  void *v60; // [rsp+60h] [rbp-108h]
  __int64 v61; // [rsp+68h] [rbp-100h]
  __int64 v62; // [rsp+70h] [rbp-F8h]
  __int64 v63; // [rsp+80h] [rbp-E8h] BYREF
  __int64 (__fastcall ***v64)(); // [rsp+88h] [rbp-E0h] BYREF
  int v65; // [rsp+90h] [rbp-D8h]
  void *v66[2]; // [rsp+98h] [rbp-D0h]
  void *v67; // [rsp+A8h] [rbp-C0h]
  __int64 v68; // [rsp+B0h] [rbp-B8h]
  int v69; // [rsp+B8h] [rbp-B0h]
  __int64 v70; // [rsp+C0h] [rbp-A8h]
  __int64 *v71; // [rsp+C8h] [rbp-A0h]
  _QWORD v72[2]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v73[2]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v74[2]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v75; // [rsp+100h] [rbp-68h] BYREF
  void *v76[2]; // [rsp+108h] [rbp-60h]
  __int128 v77; // [rsp+118h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD **)(a1 + 16);
  v56 = &off_1C4D310;
  sub_1858590(v57, a1);
  v58 = (void *)v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 48);
  v59 = v4;
  if ( v4 )
    ++v4[4];
  v5 = (char *)sub_186B270(0x50u);
  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 72LL);
  if ( v6 == sub_303CC0 )
    v7 = *(_QWORD *)(v3 + 888);
  else
    v7 = ((__int64 (__fastcall *)(__int64))v6)(v3);
  *((_QWORD *)v5 + 4) = v7;
  v5[24] = 1;
  *((_QWORD *)v5 + 2) = 0;
  *(_QWORD *)v5 = &off_1C60CE8;
  *((_QWORD *)v5 + 5) = v5 + 56;
  strcpy(v5 + 56, "maxsmt");
  *((_QWORD *)v5 + 6) = 6;
  *((_QWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 2) = 1;
  v60 = v5;
  v61 = 0;
  v62 = 0;
  v63 = a1;
  sub_17F9A60(&v64, "opt");
  v8 = v63;
  sub_180C5A0(&v55, "maxres");
  v61 = sub_185A820(v8, "maxsat_engine", &v64, &v55);
  sub_18572D0(&v64);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v58 + 72LL);
  if ( v9 == sub_303CC0 )
    v10 = *((_QWORD *)v58 + 111);
  else
    v10 = v9();
  v63 = v10;
  v64 = &v56;
  v65 = 0;
  *(_OWORD *)v66 = 0;
  v11 = (_DWORD *)sub_186B270(0x80u);
  *(_QWORD *)v11 = 0;
  v12 = *a2;
  v11[2] = 0;
  *((_QWORD *)v11 + 2) = 0;
  v11[6] = 0;
  *((_QWORD *)v11 + 4) = 0;
  v11[10] = 0;
  *((_QWORD *)v11 + 6) = 0;
  v11[14] = 0;
  *((_QWORD *)v11 + 8) = 0;
  v11[18] = 0;
  *((_QWORD *)v11 + 10) = 0;
  v11[22] = 0;
  *((_QWORD *)v11 + 12) = 0;
  v11[26] = 0;
  *((_QWORD *)v11 + 14) = 0;
  v11[30] = 0;
  v67 = v11;
  v68 = 8;
  v69 = 0;
  v70 = v63;
  v71 = nullptr;
  v72[0] = 0;
  v72[1] = 0;
  v73[0] = 1;
  v73[1] = 0;
  v74[0] = 0;
  v74[1] = 0;
  v75 = 1;
  *(_OWORD *)v76 = 0;
  v77 = 0;
  if ( v12 )
  {
    for ( i = v12 + 40LL * *(unsigned int *)(v12 - 4); i != v12; v12 += 40 )
      sub_300E90((__int64)&v63, *(_QWORD *)v12, (int *)(v12 + 8));
  }
  v52 = sub_301AB0(&v63, 1);
  if ( v52 != 1 )
    goto LABEL_13;
  v55 = 0;
  sub_300510((__int64)&v63, (_DWORD **)(a1 + 16), &v55);
  v38 = *a2;
  v53 = v55;
  if ( !*a2 )
    goto LABEL_70;
  v39 = v38 + 40LL * *(unsigned int *)(v38 - 4);
  if ( v39 == v38 )
  {
    v51 = 0;
    goto LABEL_69;
  }
  v51 = 0;
  v40 = *a2;
  do
  {
    while ( !(unsigned __int8)sub_1374270(*(_QWORD *)(a1 + 16), *(_QWORD *)v40) )
    {
      v40 += 40;
      if ( v39 == v40 )
        goto LABEL_65;
    }
    v41 = qword_1C7F2C0;
    v42 = *a2 + 40LL * v51;
    *(_QWORD *)v42 = *(_QWORD *)v40;
    if ( (*(_BYTE *)(v40 + 12) & 1) != 0 )
    {
      v54 = v42;
      sub_182C690(v41, v42 + 8, v40 + 8);
      v42 = v54;
      if ( (*(_BYTE *)(v40 + 28) & 1) == 0 )
      {
LABEL_63:
        v44 = *(_DWORD *)(v40 + 24);
        *(_BYTE *)(v42 + 28) &= ~1u;
        *(_DWORD *)(v42 + 24) = v44;
        goto LABEL_64;
      }
    }
    else
    {
      v43 = *(_DWORD *)(v40 + 8);
      *(_BYTE *)(v42 + 12) &= ~1u;
      *(_DWORD *)(v42 + 8) = v43;
      if ( (*(_BYTE *)(v40 + 28) & 1) == 0 )
        goto LABEL_63;
    }
    sub_182C690(v41, v42 + 24, v40 + 24);
LABEL_64:
    v40 += 40;
    ++v51;
  }
  while ( v39 != v40 );
LABEL_65:
  v38 = *a2;
  if ( *a2 )
  {
    v45 = 40LL * v51;
    v46 = 40LL * *(unsigned int *)(v38 - 4);
    v47 = v38 + v45;
    v48 = v38 + v46;
    if ( v46 != v45 )
    {
      do
      {
        v49 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v47 + 8);
        v50 = v47 + 24;
        v47 += 40;
        sub_182CBA0(v49, v50);
      }
      while ( v48 != v47 );
      v38 = *a2;
    }
LABEL_69:
    *(_DWORD *)(v38 - 4) = v51;
  }
LABEL_70:
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
LABEL_13:
  sub_18572D0((char *)&v77 + 8);
  if ( (_QWORD)v77 )
    sub_186B220((void *)(v77 - 8));
  v14 = (void (__fastcall ***)(_QWORD))v76[1];
  if ( v76[1] )
  {
    v15 = (*((_DWORD *)v76[1] + 4))-- == 1;
    if ( v15 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v74);
  sub_182CBA0(v16, &v75);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v72);
  sub_182CBA0(v17, v73);
  v18 = v71;
  if ( v71 )
  {
    v19 = (unsigned __int64)&v71[*((unsigned int *)v71 - 1)];
    if ( (unsigned __int64)v71 >= v19 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = v70;
          v15 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v18 >= v19 )
          goto LABEL_25;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( (unsigned __int64)v18 < v19 );
LABEL_25:
    v18 = v71;
    if ( v71 )
LABEL_26:
      sub_186B220(v18 - 1);
  }
  if ( v67 )
    sub_186B220(v67);
  v22 = (char *)v66[1];
  if ( v66[1] )
  {
    v23 = *((unsigned int *)v66[1] - 1);
    if ( (_DWORD)v23 )
    {
      v24 = (char *)v66[1] + 56 * v23;
      do
      {
        while ( 1 )
        {
          v25 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v22 + 16);
          sub_182CBA0(v25, v22 + 32);
          v26 = *(_QWORD *)v22;
          if ( *(_QWORD *)v22 )
          {
            v27 = *((_QWORD *)v22 + 1);
            v15 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v15 )
              break;
          }
          v22 += 56;
          if ( v22 == v24 )
            goto LABEL_36;
        }
        sub_15D7BC0(v27, v26);
        v22 += 56;
      }
      while ( v22 != v24 );
LABEL_36:
      v22 = (char *)v66[1];
    }
    sub_186B220(v22 - 8);
  }
  v28 = v66[0];
  if ( v66[0] )
  {
    (**(void (__fastcall ***)(void *))v66[0])(v66[0]);
    sub_186B220(v28);
  }
  v29 = v62;
  v56 = &off_1C4D310;
  if ( v62 )
  {
    v30 = *(unsigned int *)(v62 - 4);
    if ( (_DWORD)v30 )
    {
      v31 = v62 + 32 * v30;
      do
      {
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v29);
        v33 = v29 + 16;
        v29 += 32;
        sub_182CBA0(v32, v33);
      }
      while ( v29 != v31 );
      v29 = v62;
    }
    sub_186B220((void *)(v29 - 8));
  }
  v34 = (void (__fastcall ***)(_QWORD))v60;
  if ( v60 )
  {
    v15 = (*((_DWORD *)v60 + 2))-- == 1;
    if ( v15 )
    {
      (**v34)(v34);
      sub_186B220(v34);
    }
  }
  v35 = (void (__fastcall ***)(_QWORD))v59;
  if ( v59 )
  {
    v15 = (*((_DWORD *)v59 + 4))-- == 1;
    if ( v15 )
    {
      (**v35)(v35);
      sub_186B220(v35);
    }
  }
  v36 = (void (__fastcall ***)(_QWORD))v58;
  if ( v58 )
  {
    v15 = (*((_DWORD *)v58 + 12))-- == 1;
    if ( v15 )
    {
      (**v36)(v36);
      sub_186B220(v36);
    }
  }
  sub_18572D0(v57);
  return v52;
}


__int64 __fastcall sub_8577E0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r10
  char v12; // r9
  __int64 v13; // rcx
  unsigned int *v14; // rdx
  int *v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  _QWORD *v18; // r14
  unsigned int *v19; // r15
  unsigned int *v20; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r15
  void **p_s; // rdi
  char v26; // al
  __int64 v27; // rdx
  char v28; // r14
  __int64 v29; // rdx
  unsigned __int64 *v30; // rax
  void *v31; // rax
  __int64 v32; // rax
  char v33; // r9
  unsigned int *v34; // r14
  __int64 v35; // r15
  int *v36; // rbp
  __int64 v37; // rbx
  int *v38; // rsi
  __int64 v39; // rdi
  unsigned int *v40; // rbp
  unsigned int *v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // r12
  unsigned int *v44; // rbx
  int v45; // r13d
  __int64 v46; // rbp
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  _QWORD *v50; // r12
  _QWORD *v51; // rax
  unsigned int *v52; // rbp
  __int64 v53; // rsi
  __int64 v54; // rdi
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // [rsp+8h] [rbp-2A0h]
  int v65; // [rsp+10h] [rbp-298h]
  __int64 v67; // [rsp+30h] [rbp-278h]
  char v68; // [rsp+40h] [rbp-268h]
  unsigned int v69; // [rsp+40h] [rbp-268h]
  __int64 v70; // [rsp+48h] [rbp-260h]
  unsigned int *v71; // [rsp+48h] [rbp-260h]
  char v72; // [rsp+50h] [rbp-258h]
  unsigned int v73; // [rsp+50h] [rbp-258h]
  char v74; // [rsp+50h] [rbp-258h]
  unsigned __int8 v75; // [rsp+57h] [rbp-251h]
  __int64 v76; // [rsp+58h] [rbp-250h]
  void *s; // [rsp+60h] [rbp-248h] BYREF
  unsigned int v78; // [rsp+68h] [rbp-240h]
  char v79; // [rsp+6Ch] [rbp-23Ch]
  void *v80; // [rsp+70h] [rbp-238h] BYREF
  unsigned int v81; // [rsp+78h] [rbp-230h]
  char v82; // [rsp+7Ch] [rbp-22Ch]
  unsigned int v83; // [rsp+80h] [rbp-228h] BYREF
  char v84; // [rsp+84h] [rbp-224h]
  __int64 v85; // [rsp+88h] [rbp-220h]
  unsigned int v86; // [rsp+C0h] [rbp-1E8h] BYREF
  unsigned __int64 v87; // [rsp+C8h] [rbp-1E0h] BYREF
  unsigned __int64 *v88; // [rsp+D0h] [rbp-1D8h]
  unsigned int v89; // [rsp+100h] [rbp-1A8h] BYREF
  char v90; // [rsp+104h] [rbp-1A4h]
  void *v91; // [rsp+108h] [rbp-1A0h]
  int v92; // [rsp+110h] [rbp-198h]
  char v93; // [rsp+114h] [rbp-194h]
  unsigned int v94; // [rsp+140h] [rbp-168h] BYREF
  char v95; // [rsp+144h] [rbp-164h]
  _QWORD *v96; // [rsp+148h] [rbp-160h]
  int v97; // [rsp+150h] [rbp-158h]
  char v98; // [rsp+178h] [rbp-130h]
  unsigned int *v99; // [rsp+180h] [rbp-128h] BYREF
  __int64 v100; // [rsp+188h] [rbp-120h]
  _BYTE v101[280]; // [rsp+190h] [rbp-118h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v3 + 16) - 56 > 1 )
    v3 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_BYTE *)(a2 + 2);
  v64 = v3;
  v84 &= ~1u;
  v67 = v4;
  v6 = v5 >> 3;
  v83 = 0;
  v7 = sub_856400((__int64)&v83, *a1, v2);
  if ( !(_BYTE)v7 )
    goto LABEL_37;
  if ( v83 == 7 )
  {
    v7 = 0;
LABEL_78:
    sub_69F740((__int64)&v83);
    return v7;
  }
  v99 = (unsigned int *)v101;
  v100 = 0x400000000LL;
  if ( !*(_DWORD *)(v64 + 20) )
  {
    v95 &= ~1u;
    v96 = nullptr;
    v97 = 0;
    v94 = 8;
    v63 = (_QWORD *)operator new[](8u);
    *v63 = 0;
    v48 = v63 + 1;
    goto LABEL_111;
  }
  v8 = 0;
  v9 = 0;
  v75 = v7;
  do
  {
    v16 = v8 + v85;
    sub_6A4260((__int64)&v86, (int *)(v8 + v85));
    if ( v6 == 8 )
    {
      if ( (unsigned int)v88 > 0x40 )
      {
        sub_25869C0(&v87, v16);
      }
      else
      {
        v22 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v88) & ~v87;
        if ( !(_DWORD)v88 )
          v22 = 0;
        v87 = v22;
      }
      goto LABEL_12;
    }
    if ( v6 <= 8u )
    {
      if ( v6 == 6 )
        goto LABEL_12;
      if ( v6 == 7 )
      {
        if ( v86 == 2 )
        {
          if ( (unsigned int)v88 <= 0x40 )
          {
            v59 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v88) & ~v87;
            if ( !(_DWORD)v88 )
              v59 = 0;
            v87 = v59;
          }
          else
          {
            sub_25869C0(&v87, v16);
          }
          sub_25860D0(&v87);
        }
        else
        {
          v10 = sub_2575D20(&v86, v16, v17);
          if ( v87 == v10 )
            sub_257D180(&v87);
          else
            sub_2577530(&v87);
        }
LABEL_12:
        sub_69F700((__int64)&v94, (int *)&v86);
        v98 = 1;
        goto LABEL_13;
      }
LABEL_43:
      v98 = 0;
      goto LABEL_13;
    }
    if ( v6 != 9 )
      goto LABEL_43;
    if ( v86 == 2 )
    {
      v18 = (_QWORD *)v87;
      if ( (unsigned int)v88 <= 0x40 )
      {
        v55 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v88;
        v56 = v55;
        if ( !(_DWORD)v88 )
        {
LABEL_115:
          v58 = 0;
          goto LABEL_93;
        }
        v57 = ~(unsigned __int64)((unsigned __int8)v55 & (v87 == 0));
      }
      else
      {
        v65 = (int)v88;
        *v18 = v65 == (unsigned int)sub_2587400(&v87);
        memset((void *)(v87 + 8), 0, 8 * (unsigned int)(((unsigned __int64)(unsigned int)v88 + 63) >> 6) - 8);
        if ( (unsigned int)v88 > 0x40 )
        {
          sub_25869C0(&v87, (unsigned int)v88);
LABEL_28:
          sub_25860D0(&v87);
          sub_69F700((__int64)&v94, (int *)&v86);
          v98 = 1;
          goto LABEL_13;
        }
        v57 = ~v87;
        v56 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v88;
        if ( !(_DWORD)v88 )
          goto LABEL_115;
      }
      v58 = v56 & v57;
LABEL_93:
      v87 = v58;
      goto LABEL_28;
    }
    v23 = v67;
    v24 = (unsigned int)sub_70B280(*(_QWORD *)(*a1 + 16), v67);
    p_s = *(void ***)(v67 & 0xFFFFFFFFFFFFFFF0LL);
    v26 = sub_B0FF70(p_s);
    v78 = v24;
    v28 = v26;
    if ( (unsigned int)v24 > 0x40 )
    {
      p_s = &s;
      v23 = 0;
      sub_2585A50(&s, 0, 0);
      v24 = v78;
    }
    else
    {
      s = nullptr;
    }
    v79 = v28;
    v29 = sub_2575D20(p_s, v23, v27);
    v30 = &v87;
    if ( v87 == v29 )
      v30 = v88;
    if ( (*((_BYTE *)v30 + 20) & 7) == 3 )
    {
      if ( (unsigned int)v24 > 0x40 )
      {
        memset(s, -1, 8 * (((unsigned __int64)(unsigned int)v24 + 63) >> 6));
        LODWORD(v24) = v78;
        v60 = (__int64)s;
        v61 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v78;
        if ( v78 )
        {
          if ( v78 <= 0x40 )
            goto LABEL_105;
          v62 = (unsigned int)(((unsigned __int64)v78 + 63) >> 6) - 1;
          *((_QWORD *)s + v62) &= v61;
          goto LABEL_99;
        }
        v61 = 0;
      }
      else
      {
        v60 = -1;
        v61 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v24;
        if ( !(_DWORD)v24 )
          v61 = 0;
      }
LABEL_105:
      v31 = (void *)(v61 & v60);
      v28 = v79;
      s = v31;
      goto LABEL_52;
    }
    if ( (unsigned int)v24 <= 0x40 )
    {
      s = nullptr;
      v31 = nullptr;
      goto LABEL_52;
    }
    memset(s, 0, 8 * ((unsigned __int64)(v24 + 63) >> 6));
LABEL_99:
    LODWORD(v24) = v78;
    v81 = v78;
    if ( v78 > 0x40 )
    {
      sub_2585B30(&v80);
      v28 = v79;
      LODWORD(v24) = v81;
      v31 = v80;
      goto LABEL_53;
    }
    v31 = s;
    v28 = v79;
LABEL_52:
    v80 = v31;
LABEL_53:
    v92 = v24;
    v82 = v28;
    v90 &= ~1u;
    v89 = 2;
    v81 = 0;
    v91 = v31;
    v93 = v28;
    sub_69F700((__int64)&v94, (int *)&v89);
    v98 = 1;
    if ( v89 > 1 )
      sub_69F740((__int64)&v89);
    if ( v81 > 0x40 && v80 )
      operator delete[](v80);
    if ( v78 > 0x40 && s )
      operator delete[](s);
LABEL_13:
    if ( v86 > 1 )
      sub_69F740((__int64)&v86);
    v11 = (unsigned int)v100;
    v12 = v98;
    v13 = (unsigned int)v100;
    v14 = v99;
    if ( !v98 )
    {
      v19 = v99;
      v7 = 0;
      goto LABEL_30;
    }
    v15 = (int *)&v94;
    if ( HIDWORD(v100) < (unsigned __int64)(unsigned int)v100 + 1 )
    {
      if ( &v94 >= v99 && &v94 < &v99[14 * (unsigned int)v100] )
      {
        v76 = 0x6DB6DB6DB6DB6DB7LL * (((char *)&v94 - (char *)v99) >> 3);
      }
      else
      {
        v76 = -1;
        v12 = 0;
      }
      v72 = v12;
      v32 = sub_25D5F70(&v99, v101, (unsigned int)v100 + 1LL, 56, &v89);
      v33 = v72;
      v14 = (unsigned int *)v32;
      v34 = &v99[14 * (unsigned int)v100];
      if ( v99 != v34 )
      {
        v68 = v72;
        v35 = v32;
        v73 = v9;
        v36 = (int *)v99;
        v70 = v8;
        v37 = v32;
        do
        {
          v38 = v36;
          v39 = v37;
          v36 += 14;
          v37 += 56;
          sub_69F700(v39, v38);
        }
        while ( v34 != (unsigned int *)v36 );
        v9 = v73;
        v14 = (unsigned int *)v35;
        v33 = v68;
        v8 = v70;
        v34 = &v99[14 * (unsigned int)v100];
        if ( v99 != v34 )
        {
          v40 = &v99[14 * (unsigned int)v100];
          v41 = v99;
          do
          {
            v40 -= 14;
            if ( *v40 > 1 )
              sub_69F740((__int64)v40);
          }
          while ( v41 != v40 );
          v14 = (unsigned int *)v35;
          v9 = v73;
          v8 = v70;
          v33 = v68;
          v34 = v99;
        }
      }
      v42 = v89;
      if ( v34 != (unsigned int *)v101 )
      {
        v71 = v14;
        v69 = v89;
        v74 = v33;
        free(v34);
        v14 = v71;
        v42 = v69;
        v33 = v74;
      }
      v99 = v14;
      v13 = (unsigned int)v100;
      HIDWORD(v100) = v42;
      v15 = (int *)&v94;
      if ( v33 )
        v15 = (int *)&v14[14 * v76];
    }
    sub_6A4260((__int64)&v14[14 * v13], v15);
    LODWORD(v100) = v100 + 1;
    if ( v98 )
    {
      v98 = 0;
      if ( v94 > 1 )
        sub_69F740((__int64)&v94);
    }
    ++v9;
    v8 += 56;
  }
  while ( v9 < *(_DWORD *)(v64 + 20) );
  v43 = (unsigned int)v100;
  v95 &= ~1u;
  v7 = v75;
  v44 = v99;
  v96 = nullptr;
  v45 = v100;
  v97 = 0;
  v94 = 8;
  v46 = 14LL * (unsigned int)v100;
  v47 = (_QWORD *)operator new[](v46 * 4 + 8);
  *v47 = v43;
  v48 = v47 + 1;
  if ( v43 )
  {
    v49 = &v47[(unsigned __int64)v46 / 2 + 1];
    v50 = v47 + 1;
    v51 = v47 + 1;
    do
    {
      *((_BYTE *)v51 + 4) &= ~1u;
      v51 += 7;
      *((_DWORD *)v51 - 14) = 0;
    }
    while ( v49 != v51 );
    v96 = v48;
    v52 = &v44[v46];
    v97 = v45;
    do
    {
      v53 = (__int64)v44;
      v54 = (__int64)v50;
      v44 += 14;
      v50 += 7;
      sub_6A63E0(v54, v53);
    }
    while ( v52 != v44 );
    goto LABEL_87;
  }
LABEL_111:
  v96 = v48;
  v97 = 0;
LABEL_87:
  sub_6A63E0(a1[1], (__int64)&v94);
  if ( v94 > 1 )
    sub_69F740((__int64)&v94);
  v11 = (unsigned int)v100;
  v19 = v99;
LABEL_30:
  v20 = &v19[14 * v11];
  if ( v19 != v20 )
  {
    do
    {
      v20 -= 14;
      if ( *v20 > 1 )
        sub_69F740((__int64)v20);
    }
    while ( v19 != v20 );
    v20 = v99;
  }
  if ( v20 != (unsigned int *)v101 )
    free(v20);
LABEL_37:
  if ( v83 > 1 )
    goto LABEL_78;
  return v7;
}


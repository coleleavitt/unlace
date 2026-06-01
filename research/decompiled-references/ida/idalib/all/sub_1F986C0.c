void __fastcall sub_1F986C0(__int64 *a1, unsigned int *a2)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r12
  bool v7; // r14
  __int64 v8; // rdx
  bool v9; // r15
  bool v10; // al
  bool v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rax
  __int64 *v22; // rdx
  unsigned int v23; // eax
  __int64 *v24; // rdx
  unsigned int v25; // eax
  unsigned int *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rax
  __int64 *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 *v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  void *v41; // rdi
  unsigned int v42; // eax
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 *v45; // rsi
  __int64 v46; // r13
  __int64 v47; // r14
  int *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r13
  __int64 v52; // r14
  int *v53; // rsi
  unsigned int v54; // eax
  __int64 v55; // r12
  __int64 v56; // r14
  int *v57; // rsi
  unsigned int v58; // r15d
  int i; // r14d
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rdi
  unsigned int v63; // r12d
  unsigned int v64; // eax
  bool v65; // r12
  void *v66; // rdx
  __int64 v67; // rdi
  unsigned int v68; // eax
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rax
  unsigned int *v73; // rsi
  __int64 v74; // rdx
  bool v75; // r15
  bool v76; // al
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  bool v80; // [rsp+2h] [rbp-236h]
  bool v81; // [rsp+3h] [rbp-235h]
  int v82; // [rsp+4h] [rbp-234h]
  __int64 v83; // [rsp+8h] [rbp-230h]
  __int64 v84; // [rsp+10h] [rbp-228h]
  unsigned __int64 v85; // [rsp+18h] [rbp-220h]
  __int64 v86; // [rsp+20h] [rbp-218h] BYREF
  __int64 v87; // [rsp+28h] [rbp-210h]
  __int64 v88; // [rsp+30h] [rbp-208h] BYREF
  void *v89; // [rsp+110h] [rbp-128h] BYREF
  __int64 v90; // [rsp+118h] [rbp-120h]
  __int64 v91[35]; // [rsp+120h] [rbp-118h] BYREF

  v4 = *a2;
  sub_9B9C90(a1[2], v4);
  switch ( v4 )
  {
    case 0LL:
    case 1LL:
      return;
    case 2LL:
      LODWORD(v90) = a2[4];
      if ( (unsigned int)v90 > 0x40 )
        sub_2205510(&v89);
      else
        v89 = *((void **)a2 + 1);
      v40 = a1[2];
      BYTE4(v90) = *((_BYTE *)a2 + 20);
      sub_9B9C90(v40, BYTE4(v90));
      goto LABEL_28;
    case 3LL:
      v42 = sub_21F8E40(*((_QWORD *)a2 + 1));
      sub_9B9C90(a1[2], v42);
      sub_1F6DD40((__int64)&v89, (_QWORD *)a2 + 1, v43);
LABEL_28:
      sub_1F70270((__int64)a1, (__int64)&v89);
      if ( (unsigned int)v90 > 0x40 )
      {
        v41 = v89;
        if ( v89 )
          goto LABEL_30;
      }
      return;
    case 4LL:
      v63 = a2[6];
      sub_9B9C90(a1[2], (unsigned __int16)v63);
      sub_9B9C90(a1[2], (unsigned int)-((int)(8 * v63) >> 19));
      sub_9B9C90(a1[2], (int)(((v63 & 0x20000000) != 0) | (v63 >> 29) & 2 | (4 * (v63 >> 31))));
      v64 = a2[4];
      v65 = (*((_BYTE *)a2 + 27) & 0x20) == 0;
      LODWORD(v90) = v64;
      if ( v64 > 0x40 )
      {
        sub_2205510(&v89);
        v64 = v90;
        v66 = v89;
      }
      else
      {
        v66 = *((void **)a2 + 1);
      }
      v67 = a1[2];
      LODWORD(v87) = v64;
      v86 = (__int64)v66;
      BYTE4(v87) = v65;
      sub_9B9C90(v67, v65);
      sub_1F70270((__int64)a1, (__int64)&v86);
      if ( (unsigned int)v87 > 0x40 )
        goto LABEL_60;
      return;
    case 5LL:
      LODWORD(v87) = a2[4];
      if ( (unsigned int)v87 > 0x40 )
        sub_2205510(&v86);
      else
        v86 = *((_QWORD *)a2 + 1);
      v61 = a1[2];
      BYTE4(v87) = *((_BYTE *)a2 + 20);
      sub_9B9C90(v61, BYTE4(v87));
      sub_1F70270((__int64)a1, (__int64)&v86);
      LODWORD(v90) = a2[8];
      if ( (unsigned int)v90 > 0x40 )
        sub_2205510(&v89);
      else
        v89 = *((void **)a2 + 3);
      v62 = a1[2];
      BYTE4(v90) = *((_BYTE *)a2 + 36);
      sub_9B9C90(v62, BYTE4(v90));
      goto LABEL_56;
    case 6LL:
      v68 = sub_21F8E40(*((_QWORD *)a2 + 1));
      v69 = a1[2];
      v70 = v68;
      sub_9B9C90(v69, v68);
      v72 = sub_21F90D0(v69, v70, v71);
      v73 = a2 + 2;
      if ( *((_QWORD *)a2 + 1) == v72 )
        sub_22010F0(&v86, v73);
      else
        sub_21FEE00(&v86, v73);
      sub_1F70270((__int64)a1, (__int64)&v86);
      sub_1F6DD40((__int64)&v89, (_QWORD *)a2 + 4, v74);
LABEL_56:
      sub_1F70270((__int64)a1, (__int64)&v89);
      if ( (unsigned int)v90 > 0x40 && v89 )
        operator delete[](v89);
      if ( (unsigned int)v87 > 0x40 )
      {
LABEL_60:
        v41 = (void *)v86;
        if ( v86 )
LABEL_30:
          operator delete[](v41);
      }
      return;
    case 7LL:
      v86 = sub_A51060((__int64)a2);
      v87 = v5;
      if ( sub_A4F700(&v86) )
      {
        v6 = v86 & 3;
        v82 = v86 & 3;
        v81 = (_DWORD)v6 == 3;
        v80 = (_DWORD)v6 == 2;
        if ( !v86 )
        {
          v84 = 0;
          v85 = 0;
          v7 = sub_A4F700(&v86);
          if ( v7 )
            goto LABEL_7;
          v8 = 0;
          goto LABEL_8;
        }
        if ( v6 == 1 )
        {
          v84 = 0;
          v85 = v86 & 0xFFFFFFFFFFFFFFFCLL;
          v75 = (v86 & 0xFFFFFFFFFFFFFFFCLL) != 0;
          v76 = sub_A4F700(&v86);
          v8 = v75;
          v7 = v76;
          if ( v76 )
          {
            if ( !v85 )
            {
              v82 = 1;
              goto LABEL_7;
            }
            v8 = 1;
            v82 = 1;
            v84 = *(_QWORD *)(v85 + 8);
          }
          else
          {
            v7 = v75;
            v82 = 1;
          }
          goto LABEL_8;
        }
      }
      else
      {
        v6 = v86 & 3;
        v82 = v86 & 3;
        v81 = (_DWORD)v6 == 3;
        v80 = (_DWORD)v6 == 2;
      }
      v84 = 0;
      v7 = sub_A4F700(&v86);
      if ( v7 )
      {
        if ( v6 == 2 )
        {
          v7 = 0;
          v78 = sub_A4F510((__int64)&v86);
          v8 = 0;
          v85 = 0;
          v84 = v78;
        }
        else
        {
          v85 = 0;
          if ( v82 != 3 )
          {
LABEL_7:
            v8 = 0;
            v7 = 0;
            v84 = *(_QWORD *)((v86 & 0xFFFFFFFFFFFFFFFCLL) + 48);
            goto LABEL_8;
          }
          v7 = 0;
          v79 = sub_A4F520((__int64)&v86);
          v8 = 0;
          v84 = v79;
        }
      }
      else
      {
        v85 = 0;
        v8 = 0;
      }
LABEL_8:
      v83 = v8;
      v9 = sub_A51090((__int64)a2);
      sub_9B9C90(a1[2], v9);
      v10 = sub_A51070((__int64)a2);
      sub_9B9C90(a1[2], v10);
      sub_9B9C90(a1[2], v83);
      sub_9B9C90(a1[2], v80);
      sub_9B9C90(a1[2], v81);
      v11 = sub_A4F700(&v86);
      sub_9B9C90(a1[2], v11);
      v12 = sub_A510C0((__int64)a2);
      sub_9B9C90(a1[2], v12);
      if ( !v11 )
        goto LABEL_16;
      if ( v80 )
      {
        v13 = sub_A51060((__int64)a2);
        sub_1F85840(a1[1], *a1, v13 & 0xFFFFFFFFFFFFFFF0LL, (_QWORD *)a1[2], v14, v15);
      }
      else
      {
        if ( !v81 )
          goto LABEL_14;
        v77 = sub_A51060((__int64)a2);
        sub_9B9C90(a1[2], (unsigned int)(v77 >> 3) - 1);
      }
      v16 = (void *)sub_A51060((__int64)a2);
      v90 = (__int64)v17;
      v89 = v16;
      if ( v6 == 2 )
        v18 = sub_A4F510((__int64)&v89);
      else
        v18 = sub_A4F520((__int64)&v89);
      sub_1F85840(a1[1], *a1, v18, (_QWORD *)a1[2], v19, v20);
      if ( v82 == 2 )
        goto LABEL_16;
LABEL_14:
      v21 = (void *)sub_A51060((__int64)a2);
      v90 = (__int64)v22;
      v89 = v21;
      v23 = sub_A4F4B0((__int64)&v89);
      sub_9B9C90(a1[2], v23);
      v89 = (void *)sub_A51060((__int64)a2);
      v90 = (__int64)v24;
      v25 = sub_A4F4E0((__int64)&v89);
      sub_9B9C90(a1[2], v25);
      if ( v7 )
      {
        sub_183F100((__int64)(a1 + 3), v85);
      }
      else if ( v82 != 3 && !v85 )
      {
        sub_1F952B0((__int64)a1, v86 & 0xFFFFFFFFFFFFFFFCLL);
      }
LABEL_16:
      v26 = (unsigned int *)sub_A51080((__int64)a2);
      sub_9B9C90(a1[2], *v26);
      if ( v9 )
      {
        v27 = sub_A510A0((__int64)a2);
        sub_A4F6B0(&v89, v27, v28, v84);
        sub_1F98540(a1, v27, v29, v30, v31, v32, (char)v89, (__int64 *)v90, v91[0]);
      }
      return;
    case 8LL:
      v90 = 0x400000000LL;
      v44 = a2[4];
      v45 = v91;
      v89 = v91;
      if ( v44 )
      {
        v46 = 0;
        v47 = 56 * (v44 - 1 + 1LL);
        do
        {
          v48 = (int *)(v46 + *((_QWORD *)a2 + 1));
          v46 += 56;
          sub_1F7E550((__int64)&v89, v48);
        }
        while ( v46 != v47 );
        v45 = (__int64 *)v89;
        v49 = (unsigned int)v90;
      }
      else
      {
        v49 = 0;
      }
      goto LABEL_36;
    case 9LL:
      v50 = a2[4];
      v89 = v91;
      v90 = 0x400000000LL;
      if ( (_DWORD)v50 )
      {
        v51 = 0;
        v52 = 56 * ((unsigned int)(v50 - 1) + 1LL);
        do
        {
          v53 = (int *)(v51 + *((_QWORD *)a2 + 1));
          v51 += 56;
          sub_1F7E550((__int64)&v89, v53);
        }
        while ( v52 != v51 );
        v50 = a2[4];
      }
      if ( a2[5] != (_DWORD)v50 )
      {
        sub_1F7E550((__int64)&v89, (int *)(*((_QWORD *)a2 + 1) + 56 * v50));
        v50 = a2[5];
      }
      sub_9B9C90(a1[2], v50);
      sub_9B9C90(a1[2], a2[4] != a2[5]);
      v49 = (unsigned int)v90;
      v45 = (__int64 *)v89;
LABEL_36:
      sub_1F991A0(a1, v45, v49);
      sub_C235B0((__int64)&v89);
      return;
    case 10LL:
      v86 = (__int64)&v88;
      v87 = 0x400000000LL;
      v54 = a2[4];
      if ( v54 )
      {
        v55 = 0;
        v56 = 56 * (v54 - 1 + 1LL);
        do
        {
          v57 = (int *)(v55 + *((_QWORD *)a2 + 1));
          v55 += 56;
          sub_1F7E550((__int64)&v86, v57);
        }
        while ( v56 != v55 );
      }
      v58 = a2[5];
      v89 = v91;
      v90 = 0x400000000LL;
      if ( v58 )
      {
        for ( i = 0; i != v58; ++i )
        {
          v60 = a2[4] + i;
          sub_1F7E550((__int64)&v89, (int *)(*((_QWORD *)a2 + 1) + 56 * v60));
        }
      }
      sub_1F991A0(a1, v86, (unsigned int)v87);
      sub_1F991A0(a1, v89, (unsigned int)v90);
      sub_C235B0((__int64)&v89);
      sub_C235B0((__int64)&v86);
      return;
    case 11LL:
      sub_1F952B0((__int64)a1, *((_QWORD *)a2 + 1));
      sub_A53C40((__int64)&v89, *((int **)a2 + 2));
      sub_1F986C0(a1, &v89);
      if ( (unsigned int)v89 > 1 )
        sub_A4F8E0((int *)&v89);
      return;
    case 12LL:
      v33 = sub_A513A0((__int64)a2);
      sub_9B9C90(a1[2], v33);
      v34 = sub_A51390((__int64)a2);
      sub_1F952B0((__int64)a1, v34);
      v35 = (__int64 *)sub_A513B0((__int64)a2);
      v37 = v36;
      sub_9B9C90(a1[2], (unsigned int)v36);
      v38 = &v35[v37];
      while ( v38 != v35 )
      {
        v39 = *v35++;
        sub_1F952B0((__int64)a1, v39);
      }
      return;
    case 13LL:
      sub_183F100((__int64)(a1 + 3), *((_QWORD *)a2 + 1));
      sub_183F100((__int64)(a1 + 3), *((_QWORD *)a2 + 2));
      return;
  }
}

__int64 __fastcall sub_C02900(__int64 a1, double a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  unsigned int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // r14
  __int64 v11; // rax
  void *v12; // r15
  _DWORD *v13; // rsi
  _DWORD *v14; // r14
  __int64 v15; // rax
  void *v16; // r15
  _DWORD *v17; // rsi
  _DWORD *v19; // rax
  __int64 v20; // rdx
  int v21; // edx
  void *v22; // rdi
  _DWORD *v23; // rax
  int v24; // edx
  void *v25; // rdi
  void *v26; // rdi
  bool v27; // al
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 *v30; // r8
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 *v35; // r8
  int v36; // ecx
  __int64 v37; // rax
  char v38; // al
  unsigned int *v39; // rsi
  unsigned int *v40; // rdi
  bool v41; // zf
  unsigned int *v42; // rsi
  unsigned int *v43; // rdi
  void *v44; // r15
  void *v45; // r15
  _DWORD *v46; // r14
  __int64 v47; // rax
  void *v48; // r15
  _DWORD *v49; // rsi
  __int64 v50; // rax
  void *v51; // r15
  _DWORD *v52; // rsi
  int v53; // edx
  int v54; // edx
  int v55; // eax
  int v56; // r8d
  int v57; // r9d
  int v58; // eax
  int v59; // r8d
  int v60; // r9d
  bool v61; // al
  _DWORD *v62; // rax
  _DWORD *v63; // r12
  __int64 v64; // rdx
  __int64 v65; // r15
  void *v66; // r13
  _DWORD *v67; // rsi
  _DWORD *v68; // rax
  _DWORD *v69; // r12
  __int64 v70; // rdx
  _DWORD *v71; // r15
  void *v72; // r13
  _DWORD *v73; // rsi
  int v74; // [rsp+0h] [rbp-100h]
  _DWORD *v75; // [rsp+8h] [rbp-F8h]
  __int64 v76; // [rsp+10h] [rbp-F0h]
  __int64 v77; // [rsp+10h] [rbp-F0h]
  __int64 v78; // [rsp+18h] [rbp-E8h]
  int v79[2]; // [rsp+20h] [rbp-E0h]
  _QWORD *v80; // [rsp+28h] [rbp-D8h]
  _DWORD *v81; // [rsp+30h] [rbp-D0h]
  int v82[2]; // [rsp+30h] [rbp-D0h]
  int v83[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v84; // [rsp+30h] [rbp-D0h]
  int v85; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v86; // [rsp+3Fh] [rbp-C1h]
  _QWORD *v87; // [rsp+40h] [rbp-C0h]
  void *v88; // [rsp+48h] [rbp-B8h]
  int v89[2]; // [rsp+58h] [rbp-A8h]
  _DWORD *v90; // [rsp+58h] [rbp-A8h]
  int v91; // [rsp+58h] [rbp-A8h]
  int v92; // [rsp+58h] [rbp-A8h]
  int v93[2]; // [rsp+58h] [rbp-A8h]
  _DWORD *v94; // [rsp+58h] [rbp-A8h]
  _DWORD *v95; // [rsp+60h] [rbp-A0h] BYREF
  int v96[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v97[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v98[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v99[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v100[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v101[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v102[8]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  HIDWORD(v88) = *(_DWORD *)(a1 + 240);
  v3 = 214013 * *(_DWORD *)(v2 + 7504) + 2531011;
  *(_DWORD *)(v2 + 7504) = v3;
  v4 = HIWORD(v3) & 0x7FFF;
  if ( !HIDWORD(v88) )
    return 0;
  v86 = 0;
  LODWORD(v88) = HIDWORD(v88) + v4;
  while ( 1 )
  {
    v6 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL * (v4 % HIDWORD(v88)));
    v95 = nullptr;
    *(_QWORD *)v96 = 0;
    v7 = *(_QWORD *)(a1 + 256) + 48 * v6;
    if ( sub_BF6430(a1, v7) )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 - 4) )
        {
          v9 = *(_QWORD *)(v7 + 24);
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 - 4) && ((unsigned __int8)sub_BB1010(a1) || (unsigned __int8)sub_BB1010(a1)) )
            {
              if ( (unsigned __int8)sub_BCC410((_DWORD *)a1, v7, (__int64 *)&v95) )
              {
                v76 = v7 + 16;
                if ( (unsigned __int8)sub_BCC410((_DWORD *)a1, v7 + 16, (__int64 *)v96) )
                  break;
              }
            }
          }
        }
      }
    }
    v10 = *(_DWORD **)v96;
    if ( *(_QWORD *)v96 )
    {
      v11 = *(unsigned int *)(*(_QWORD *)v96 - 4LL);
      if ( (_DWORD)v11 )
      {
        *(_QWORD *)v89 = *(_QWORD *)v96 + 32 * v11;
        do
        {
          v12 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v10);
          v13 = v10 + 4;
          v10 += 8;
          sub_182CBA0(v12, v13);
        }
        while ( v10 != *(_DWORD **)v89 );
        v10 = *(_DWORD **)v96;
      }
      sub_186B220(v10 - 2);
    }
    v14 = v95;
    if ( !v95 )
      goto LABEL_24;
    v15 = (unsigned int)*(v95 - 1);
    if ( (_DWORD)v15 )
    {
      v90 = &v95[8 * v15];
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v14);
        v17 = v14 + 4;
        v14 += 8;
        sub_182CBA0(v16, v17);
      }
      while ( v14 != v90 );
      v14 = v95;
    }
LABEL_23:
    sub_186B220(v14 - 2);
LABEL_24:
    if ( (_DWORD)v88 == ++v4 )
      return v86;
  }
  v19 = v95;
  v99[0] = 0;
  v99[1] = 0;
  v100[0] = 1;
  v100[1] = 0;
  v101[0] = 0;
  v101[1] = 0;
  v102[0] = 1;
  v102[1] = 0;
  if ( v95 )
  {
    v20 = 8LL * (unsigned int)*(v95 - 1);
    v81 = &v95[v20];
    if ( &v95[v20] != v95 )
    {
      v80 = v99;
      while ( 1 )
      {
        v21 = *v19;
        v22 = qword_1C7F2C0;
        if ( *v19 )
        {
          if ( LODWORD(v99[0]) )
          {
            if ( (v100[0] & 0x100000000LL) == 0 && LODWORD(v100[0]) == 1 && (v19[5] & 1) == 0 && v19[4] == 1 )
            {
              v75 = v19;
              v79[0] = (int)qword_1C7F2C0;
              sub_1831A80(qword_1C7F2C0, v99, v19, v99);
              sub_182CBA0(v22, v100);
              BYTE4(v100[0]) &= ~1u;
              v19 = v75;
              LODWORD(v100[0]) = 1;
              goto LABEL_34;
            }
            *(_QWORD *)v79 = v19;
            sub_1851D20(qword_1C7F2C0, v99, v19, v99);
          }
          else
          {
            if ( (v19[1] & 1) != 0 )
            {
              v75 = v19;
              v79[0] = (int)qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v99, v19);
              v19 = v75;
            }
            else
            {
              BYTE4(v99[0]) &= ~1u;
              LODWORD(v99[0]) = v21;
            }
            if ( (v19[5] & 1) == 0 )
            {
              v54 = v19[4];
              BYTE4(v100[0]) &= ~1u;
              LODWORD(v100[0]) = v54;
              goto LABEL_34;
            }
            *(_QWORD *)v79 = v19;
            sub_182C690(v22, v100, v19 + 4);
          }
        }
        else
        {
          if ( (v99[0] & 0x100000000LL) != 0 )
          {
            v75 = v19;
            v79[0] = (int)qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v99, v99);
            v19 = v75;
          }
          else
          {
            BYTE4(v99[0]) &= ~1u;
          }
          if ( (v100[0] & 0x100000000LL) == 0 )
          {
            BYTE4(v100[0]) &= ~1u;
            goto LABEL_34;
          }
          *(_QWORD *)v79 = v19;
          sub_182C690(v22, v100, v100);
        }
        v19 = *(_DWORD **)v79;
LABEL_34:
        v19 += 8;
        if ( v81 == v19 )
          goto LABEL_41;
      }
    }
  }
  v80 = v99;
LABEL_41:
  v23 = *(_DWORD **)v96;
  if ( *(_QWORD *)v96 )
  {
    *(_QWORD *)v82 = *(_QWORD *)v96 + 32LL * *(unsigned int *)(*(_QWORD *)v96 - 4LL);
    if ( *(_QWORD *)v82 != *(_QWORD *)v96 )
    {
      v87 = v101;
      while ( 1 )
      {
        while ( 1 )
        {
          v24 = *v23;
          v25 = qword_1C7F2C0;
          if ( !*v23 )
            break;
          if ( LODWORD(v101[0]) )
          {
            if ( (v102[0] & 0x100000000LL) == 0 && LODWORD(v102[0]) == 1 && (v23[5] & 1) == 0 && v23[4] == 1 )
            {
              v75 = v23;
              v79[0] = (int)qword_1C7F2C0;
              sub_1831A80(qword_1C7F2C0, v101, v23, v101);
              sub_182CBA0(v25, v102);
              BYTE4(v102[0]) &= ~1u;
              v23 = v75;
              LODWORD(v102[0]) = 1;
              goto LABEL_49;
            }
            *(_QWORD *)v79 = v23;
            sub_1851D20(qword_1C7F2C0, v101, v23, v101);
          }
          else
          {
            if ( (v23[1] & 1) != 0 )
            {
              v75 = v23;
              v79[0] = (int)qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v101, v23);
              v23 = v75;
            }
            else
            {
              BYTE4(v101[0]) &= ~1u;
              LODWORD(v101[0]) = v24;
            }
            if ( (v23[5] & 1) == 0 )
            {
              v53 = v23[4];
              BYTE4(v102[0]) &= ~1u;
              LODWORD(v102[0]) = v53;
              goto LABEL_49;
            }
            *(_QWORD *)v79 = v23;
            sub_182C690(v25, v102, v23 + 4);
          }
LABEL_48:
          v23 = *(_DWORD **)v79;
LABEL_49:
          v23 += 8;
          if ( *(_DWORD **)v82 == v23 )
            goto LABEL_55;
        }
        if ( (v101[0] & 0x100000000LL) != 0 )
        {
          v75 = v23;
          v79[0] = (int)qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v101, v101);
          v23 = v75;
        }
        else
        {
          BYTE4(v101[0]) &= ~1u;
        }
        if ( (v102[0] & 0x100000000LL) != 0 )
        {
          *(_QWORD *)v79 = v23;
          sub_182C690(v25, v102, v102);
          goto LABEL_48;
        }
        v23 += 8;
        BYTE4(v102[0]) &= ~1u;
        if ( *(_DWORD **)v82 == v23 )
          goto LABEL_55;
      }
    }
  }
  v87 = v101;
LABEL_55:
  v26 = qword_1C7F2C0;
  if ( (v99[0] & 0x100000000LL) != 0 || (v101[0] & 0x100000000LL) != 0 )
  {
    v26 = qword_1C7F2C0;
    v27 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v99, v101) == 0;
  }
  else
  {
    v27 = LODWORD(v99[0]) == LODWORD(v101[0]);
  }
  if ( !v27
    || ((v100[0] & 0x100000000LL) == 0 && (v102[0] & 0x100000000LL) == 0
      ? (v61 = LODWORD(v100[0]) == LODWORD(v102[0]))
      : (v61 = (unsigned int)sub_182C7B0(v26, v100, v102) == 0),
        !v61 || (v84 = sub_BFE080(a1, *(_DWORD **)(v7 + 40), v7, v76, &v95, (_DWORD **)v96, a2)) == 0) )
  {
    v78 = *(_QWORD *)(a1 + 24);
    v28 = sub_15D1F10(**(_QWORD **)(v7 + 8));
    v29 = *(_QWORD *)(a1 + 1736);
    v30 = *(__int64 **)(v7 + 8);
    if ( v30 && (v31 = *((_DWORD *)v30 - 1)) != 0 )
    {
      if ( v31 == 1 )
      {
        v32 = *v30;
        *(_QWORD *)v83 = *v30;
LABEL_64:
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v77 = *(_QWORD *)(a1 + 24);
        v33 = sub_15D1F10(**(_QWORD **)(v7 + 24));
        v34 = *(_QWORD *)(a1 + 1736);
        v35 = *(__int64 **)(v7 + 24);
        if ( v35 && (v36 = *((_DWORD *)v35 - 1)) != 0 )
        {
          if ( v36 == 1 )
          {
            v37 = *v35;
            *(_QWORD *)v79 = *v35;
            goto LABEL_71;
          }
          v37 = sub_15E1AF0(v34);
        }
        else
        {
          v55 = sub_15D2D60(v34, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v33);
          v37 = sub_15DC610(
                  v34,
                  v55,
                  0,
                  0,
                  v56,
                  v57,
                  v74,
                  (int)v75,
                  v77,
                  v78,
                  v34,
                  (char)v80,
                  v83[0],
                  v85,
                  (int)v87,
                  v88);
        }
        *(_QWORD *)v79 = v37;
LABEL_71:
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        sub_BB1EF0((__int64)v97, a1);
        sub_BB1EF0((__int64)v98, a1);
        v38 = sub_BC5830(a1, *(_DWORD **)(v7 + 40), v97[0], v98[0], 0);
        v39 = v98[0];
        v86 |= v38;
        if ( v98[0] )
        {
          v40 = v98[1];
          v41 = v98[0][2]-- == 1;
          if ( v41 )
            sub_15D7BC0(v40, v39);
        }
        v42 = v97[0];
        if ( v97[0] )
        {
          v43 = v97[1];
          v41 = v97[0][2]-- == 1;
          if ( v41 )
            sub_15D7BC0(v43, v42);
        }
        if ( *(_QWORD *)v79 )
        {
          v91 = *(_DWORD *)(*(_QWORD *)v79 + 8LL);
          *(_DWORD *)(*(_QWORD *)v79 + 8LL) = v91 - 1;
          if ( v91 == 1 )
            sub_15D7BC0(v77, *(_QWORD *)v79);
        }
        if ( *(_QWORD *)v83 )
        {
          v92 = *(_DWORD *)(*(_QWORD *)v83 + 8LL);
          *(_DWORD *)(*(_QWORD *)v83 + 8LL) = v92 - 1;
          if ( v92 == 1 )
            sub_15D7BC0(v78, *(_QWORD *)v83);
        }
        v44 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v87);
        sub_182CBA0(v44, v102);
        v45 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v80);
        sub_182CBA0(v45, v100);
        v46 = *(_DWORD **)v96;
        if ( *(_QWORD *)v96 )
        {
          v47 = *(unsigned int *)(*(_QWORD *)v96 - 4LL);
          if ( (_DWORD)v47 )
          {
            *(_QWORD *)v93 = *(_QWORD *)v96 + 32 * v47;
            do
            {
              v48 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v46);
              v49 = v46 + 4;
              v46 += 8;
              sub_182CBA0(v48, v49);
            }
            while ( v46 != *(_DWORD **)v93 );
            v46 = *(_DWORD **)v96;
          }
          sub_186B220(v46 - 2);
        }
        v14 = v95;
        if ( !v95 )
          goto LABEL_24;
        v50 = (unsigned int)*(v95 - 1);
        if ( (_DWORD)v50 )
        {
          v94 = &v95[8 * v50];
          do
          {
            v51 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v14);
            v52 = v14 + 4;
            v14 += 8;
            sub_182CBA0(v51, v52);
          }
          while ( v14 != v94 );
          v14 = v95;
        }
        goto LABEL_23;
      }
      v32 = sub_15E1AF0(v29);
    }
    else
    {
      v58 = sub_15D2D60(v29, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v28);
      v32 = sub_15DC610(v29, v58, 0, 0, v59, v60, v74, (int)v75, v76, v78, v79[0], (char)v99, v29, v85, (int)v101, v88);
    }
    *(_QWORD *)v83 = v32;
    goto LABEL_64;
  }
  sub_25A130((char *)v101);
  sub_25A130((char *)v99);
  v62 = *(_DWORD **)v96;
  v63 = *(_DWORD **)v96;
  if ( *(_QWORD *)v96 )
  {
    v64 = *(unsigned int *)(*(_QWORD *)v96 - 4LL);
    v65 = *(_QWORD *)v96 + 32 * v64;
    if ( (_DWORD)v64 )
    {
      do
      {
        v66 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v63);
        v67 = v63 + 4;
        v63 += 8;
        sub_182CBA0(v66, v67);
      }
      while ( v63 != (_DWORD *)v65 );
      v62 = *(_DWORD **)v96;
    }
    sub_186B220(v62 - 2);
  }
  v68 = v95;
  v69 = v95;
  if ( v95 )
  {
    v70 = (unsigned int)*(v95 - 1);
    v71 = &v95[8 * v70];
    if ( (_DWORD)v70 )
    {
      do
      {
        v72 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v69);
        v73 = v69 + 4;
        v69 += 8;
        sub_182CBA0(v72, v73);
      }
      while ( v69 != v71 );
      v68 = v95;
    }
    sub_186B220(v68 - 2);
  }
  return v84;
}


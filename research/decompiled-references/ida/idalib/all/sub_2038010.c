void __fastcall sub_2038010(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  _BYTE *v13; // rbp
  _BYTE *v14; // rsi
  __int64 v15; // rsi
  int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rsi
  _DWORD *v22; // rdx
  _QWORD *v23; // rbp
  _QWORD *v24; // r13
  int v25; // r14d
  int v26; // esi
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rdi
  unsigned int v30; // eax
  _QWORD *v31; // rdx
  _DWORD *v32; // rdx
  _QWORD *v33; // rbp
  _QWORD *v34; // r13
  int v35; // r14d
  int v36; // esi
  __int64 v37; // rcx
  int v38; // esi
  __int64 v39; // rdi
  unsigned int v40; // eax
  _QWORD *v41; // rdx
  _DWORD *v42; // rdx
  _QWORD *v43; // r12
  _QWORD *v44; // r14
  unsigned int v45; // ebp
  int v46; // r13d
  __int64 v47; // rsi
  _BYTE *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rbp
  _QWORD *v53; // r12
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // r15d
  int v58; // esi
  __int64 v59; // rcx
  int v60; // esi
  __int64 v61; // rdi
  unsigned int v62; // eax
  _QWORD *v63; // rdx
  __int64 v64; // r10
  _DWORD *v65; // rdx
  __int64 v66; // rdx
  char v67; // al
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rax
  __int64 v73; // rdx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  int v76; // r10d
  int v77; // r11d
  int v78; // r11d
  int v79; // r11d
  _QWORD *v80; // [rsp+0h] [rbp-A8h]
  __int64 v81; // [rsp+8h] [rbp-A0h]
  char v82; // [rsp+17h] [rbp-91h] BYREF
  __int64 v83; // [rsp+18h] [rbp-90h] BYREF
  _BYTE *v84; // [rsp+20h] [rbp-88h] BYREF
  __int64 v85; // [rsp+28h] [rbp-80h]
  _BYTE v86[120]; // [rsp+30h] [rbp-78h] BYREF

  v7 = *(_QWORD **)(a1 + 8);
  v8 = (_QWORD *)v7[2];
  v80 = v7 + 1;
  if ( v8 != v7 + 1 )
  {
    if ( !v8 )
LABEL_114:
      BUG();
    v81 = a1 + 104;
    v9 = (__int64)(v8 - 7);
    if ( (*((_BYTE *)v8 - 49) & 0x10) == 0 )
      goto LABEL_14;
    while ( 1 )
    {
      do
      {
        v84 = v86;
        v85 = 0x400000000LL;
        sub_20B4C70(v9, &v84);
        v12 = (__int64)v84;
        v13 = &v84[16 * (unsigned int)v85];
        if ( v84 != v13 )
        {
          do
          {
            v14 = *(_BYTE **)(v12 + 8);
            v12 += 16;
            sub_2037330(a1, v14, v10, v11, a5);
          }
          while ( v13 != (_BYTE *)v12 );
          v13 = v84;
        }
        if ( v13 != v86 )
          free(v13);
        v15 = v8[2];
        if ( v15 )
          sub_2036410(a1, v15, v10, v11, a5, a6);
        v8 = (_QWORD *)v8[1];
        if ( v80 == v8 )
        {
          v7 = *(_QWORD **)(a1 + 8);
          goto LABEL_19;
        }
        if ( !v8 )
          goto LABEL_114;
        v9 = (__int64)(v8 - 7);
      }
      while ( (*((_BYTE *)v8 - 49) & 0x10) != 0 );
LABEL_14:
      v16 = *(_DWORD *)(a1 + 128);
      v17 = *(unsigned int *)(a1 + 120);
      v84 = (_BYTE *)v9;
      *(_DWORD *)(a1 + 128) = v16 + 1;
      if ( (_DWORD)v17 )
      {
        v17 = (unsigned int)(v17 - 1);
        v18 = *(_QWORD *)(a1 + 104);
        LODWORD(v19) = v17 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v20 = (_QWORD *)(v18 + 16LL * (unsigned int)v19);
        v21 = *v20;
        if ( *v20 == v9 )
          goto LABEL_16;
        v76 = 1;
        a6 = 0;
        if ( v21 != -4096 )
        {
          while ( 1 )
          {
            if ( !a6 && v21 == -8192 )
              a6 = (__int64)v20;
            a5 = (unsigned int)(v76 + 1);
            v19 = (unsigned int)v17 & ((_DWORD)v19 + v76);
            v20 = (_QWORD *)(v18 + 16 * v19);
            v21 = *v20;
            if ( *v20 == v9 )
              break;
            if ( v21 == -4096 )
            {
              if ( a6 )
                v20 = (_QWORD *)a6;
              goto LABEL_68;
            }
            ++v76;
          }
LABEL_16:
          v22 = v20 + 1;
          goto LABEL_17;
        }
      }
      else
      {
        v20 = nullptr;
      }
LABEL_68:
      v72 = sub_2035ED0(v81, (__int64 *)&v84, v20, v17, a5, a6);
      v73 = (__int64)v84;
      *((_DWORD *)v72 + 2) = 0;
      *v72 = v73;
      v22 = v72 + 1;
LABEL_17:
      *v22 = v16;
    }
  }
LABEL_19:
  v23 = (_QWORD *)v7[6];
  v24 = v7 + 5;
  if ( v7 + 5 == v23 )
    goto LABEL_30;
  if ( !v23 )
LABEL_113:
    BUG();
  while ( 1 )
  {
    if ( (*((_BYTE *)v23 - 41) & 0x10) != 0 )
    {
      v23 = (_QWORD *)v23[1];
      if ( v24 == v23 )
        break;
      goto LABEL_23;
    }
    v25 = *(_DWORD *)(a1 + 128);
    v26 = *(_DWORD *)(a1 + 120);
    v27 = (__int64)(v23 - 6);
    v84 = v23 - 6;
    *(_DWORD *)(a1 + 128) = v25 + 1;
    if ( v26 )
    {
      v28 = v26 - 1;
      v29 = *(_QWORD *)(a1 + 104);
      v30 = v28 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
      v31 = (_QWORD *)(v29 + 16LL * v30);
      a5 = *v31;
      if ( v27 == *v31 )
        goto LABEL_27;
      v77 = 1;
      a6 = 0;
      if ( a5 != -4096 )
      {
        while ( 1 )
        {
          if ( !a6 && a5 == -8192 )
            a6 = (__int64)v31;
          v30 = v28 & (v77 + v30);
          v31 = (_QWORD *)(v29 + 16LL * v30);
          a5 = *v31;
          if ( v27 == *v31 )
            break;
          if ( a5 == -4096 )
          {
            if ( a6 )
              v31 = (_QWORD *)a6;
            goto LABEL_70;
          }
          ++v77;
        }
LABEL_27:
        v32 = v31 + 1;
        goto LABEL_28;
      }
    }
    else
    {
      v31 = nullptr;
    }
LABEL_70:
    v74 = sub_2035ED0(a1 + 104, (__int64 *)&v84, v31, v27, a5, a6);
    v75 = (__int64)v84;
    *((_DWORD *)v74 + 2) = 0;
    *v74 = v75;
    v32 = v74 + 1;
LABEL_28:
    v23 = (_QWORD *)v23[1];
    *v32 = v25;
    if ( v24 == v23 )
      break;
LABEL_23:
    if ( !v23 )
      goto LABEL_113;
  }
  v7 = *(_QWORD **)(a1 + 8);
LABEL_30:
  v33 = (_QWORD *)v7[8];
  v34 = v7 + 7;
  if ( v7 + 7 == v33 )
    goto LABEL_41;
  if ( !v33 )
LABEL_111:
    BUG();
  while ( 2 )
  {
    if ( (*((_BYTE *)v33 - 49) & 0x10) != 0 )
    {
      v33 = (_QWORD *)v33[1];
      if ( v34 == v33 )
        break;
      goto LABEL_34;
    }
    v35 = *(_DWORD *)(a1 + 128);
    v36 = *(_DWORD *)(a1 + 120);
    v37 = (__int64)(v33 - 7);
    v84 = v33 - 7;
    *(_DWORD *)(a1 + 128) = v35 + 1;
    if ( !v36 )
    {
      v41 = nullptr;
LABEL_66:
      v70 = sub_2035ED0(a1 + 104, (__int64 *)&v84, v41, v37, a5, a6);
      v71 = (__int64)v84;
      *((_DWORD *)v70 + 2) = 0;
      *v70 = v71;
      v42 = v70 + 1;
      goto LABEL_39;
    }
    v38 = v36 - 1;
    v39 = *(_QWORD *)(a1 + 104);
    v40 = v38 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
    v41 = (_QWORD *)(v39 + 16LL * v40);
    a5 = *v41;
    if ( v37 == *v41 )
      goto LABEL_38;
    v78 = 1;
    a6 = 0;
    if ( a5 == -4096 )
      goto LABEL_66;
    while ( 1 )
    {
      if ( a5 == -8192 && !a6 )
        a6 = (__int64)v41;
      v40 = v38 & (v78 + v40);
      v41 = (_QWORD *)(v39 + 16LL * v40);
      a5 = *v41;
      if ( v37 == *v41 )
        break;
      if ( a5 == -4096 )
      {
        if ( a6 )
          v41 = (_QWORD *)a6;
        goto LABEL_66;
      }
      ++v78;
    }
LABEL_38:
    v42 = v41 + 1;
LABEL_39:
    v33 = (_QWORD *)v33[1];
    *v42 = v35;
    if ( v34 != v33 )
    {
LABEL_34:
      if ( !v33 )
        goto LABEL_111;
      continue;
    }
    break;
  }
  v7 = *(_QWORD **)(a1 + 8);
LABEL_41:
  v43 = (_QWORD *)v7[10];
  v44 = v7 + 9;
  if ( v7 + 9 != v43 )
  {
    do
    {
      v45 = 0;
      v46 = sub_20A0E10(v43);
      if ( v46 )
      {
        do
        {
          v47 = v45++;
          v48 = (_BYTE *)sub_20A0E20(v43, v47);
          sub_2037330(a1, v48, v49, v50, v51);
        }
        while ( v46 != v45 );
      }
      v43 = (_QWORD *)v43[1];
    }
    while ( v44 != v43 );
    v7 = *(_QWORD **)(a1 + 8);
  }
  v52 = (_QWORD *)v7[4];
  v53 = v7 + 3;
  if ( v7 + 3 != v52 )
  {
    if ( !v52 )
LABEL_112:
      BUG();
    while ( 2 )
    {
      if ( (*((_BYTE *)v52 - 49) & 0x10) != 0 )
        goto LABEL_54;
      v57 = *(_DWORD *)(a1 + 128);
      v58 = *(_DWORD *)(a1 + 120);
      v59 = (__int64)(v52 - 7);
      v84 = v52 - 7;
      *(_DWORD *)(a1 + 128) = v57 + 1;
      if ( v58 )
      {
        v60 = v58 - 1;
        v61 = *(_QWORD *)(a1 + 104);
        v62 = v60 & (((unsigned int)v59 >> 9) ^ ((unsigned int)v59 >> 4));
        v63 = (_QWORD *)(v61 + 16LL * v62);
        v64 = *v63;
        if ( v59 == *v63 )
          goto LABEL_58;
        v79 = 1;
        a5 = 0;
        if ( v64 != -4096 )
        {
          while ( 1 )
          {
            if ( v64 == -8192 && !a5 )
              a5 = (__int64)v63;
            a6 = (unsigned int)(v79 + 1);
            v62 = v60 & (v79 + v62);
            v63 = (_QWORD *)(v61 + 16LL * v62);
            v64 = *v63;
            if ( v59 == *v63 )
              break;
            if ( v64 == -4096 )
            {
              if ( a5 )
                v63 = (_QWORD *)a5;
              goto LABEL_64;
            }
            ++v79;
          }
LABEL_58:
          v65 = v63 + 1;
LABEL_59:
          *v65 = v57;
LABEL_54:
          if ( *(_BYTE *)(a1 + 25) )
            sub_2037850(a1, (__int64)(v52 - 7));
          v84 = (_BYTE *)v52[8];
          v54 = sub_2049510(&v84);
          if ( v54 )
            sub_2036410(a1, v54, v55, v56, a5, a6);
          v52 = (_QWORD *)v52[1];
          if ( v53 == v52 )
            goto LABEL_60;
          if ( !v52 )
            goto LABEL_112;
          continue;
        }
      }
      else
      {
        v63 = nullptr;
      }
      break;
    }
LABEL_64:
    v68 = sub_2035ED0(a1 + 104, (__int64 *)&v84, v63, v59, a5, a6);
    v69 = (__int64)v84;
    *((_DWORD *)v68 + 2) = 0;
    *v68 = v69;
    v65 = v68 + 1;
    goto LABEL_59;
  }
LABEL_60:
  if ( *(_QWORD *)(a1 + 48) )
  {
    v66 = *(_QWORD *)(a1 + 8);
    v67 = *(_BYTE *)(a1 + 25);
    v83 = a1;
    v84 = (_BYTE *)v66;
    v82 = v67;
    (*(void (__fastcall **)(__int64, __int64 *, _BYTE **, char *))(a1 + 56))(a1 + 32, &v83, &v84, &v82);
  }
}

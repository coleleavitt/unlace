__int64 __fastcall sub_C465A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // r15
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  unsigned int *v12; // r14
  __int64 v13; // rdx
  void *v14; // r12
  char *v15; // rsi
  void *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // al
  __int64 *v20; // r14
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // r12d
  __int64 v26; // r12
  void *v27; // r14
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 *v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // rsi
  void *v33; // r15
  __int64 v34; // r15
  void *v35; // rdi
  int v36; // eax
  __int64 v37; // r10
  unsigned int v38; // r9d
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rdi
  void *v45; // rbx
  __int64 v46; // rax
  char v47; // dl
  char v48; // si
  __int64 v51; // [rsp+20h] [rbp-80h]
  char v52; // [rsp+20h] [rbp-80h]
  __int64 v53; // [rsp+20h] [rbp-80h]
  __int64 v54; // [rsp+28h] [rbp-78h]
  __int64 v55; // [rsp+28h] [rbp-78h]
  __int64 v56; // [rsp+30h] [rbp-70h]
  unsigned int *v57; // [rsp+38h] [rbp-68h]
  __int64 v58; // [rsp+40h] [rbp-60h] BYREF
  __int64 *v59; // [rsp+48h] [rbp-58h]
  __int64 v60; // [rsp+50h] [rbp-50h] BYREF
  __int64 *v61; // [rsp+58h] [rbp-48h]
  int v62; // [rsp+60h] [rbp-40h] BYREF
  char v63; // [rsp+64h] [rbp-3Ch]
  __int64 v64; // [rsp+68h] [rbp-38h]

  v4 = (__int64 *)(a1 + 48);
  v7 = *(_QWORD **)(a1 + 40);
  v56 = a1 + 56;
  v54 = a1 + 32;
  if ( v7 )
  {
    if ( v7 >= &v7[*((unsigned int *)v7 - 1)] )
      goto LABEL_9;
    v8 = &v7[*((unsigned int *)v7 - 1)];
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a1 + 32);
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_8;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_8:
    v7 = *(_QWORD **)(a1 + 40);
    if ( v7 )
LABEL_9:
      *((_DWORD *)v7 - 1) = 0;
  }
  v12 = *(unsigned int **)(a1 + 48);
  if ( v12 )
  {
    v13 = *(v12 - 1);
    if ( (_DWORD)v13 )
    {
      v51 = a2;
      v57 = &v12[8 * v13];
      do
      {
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12);
        v15 = (char *)(v12 + 4);
        v12 += 8;
        sub_182CBA0(v14, v15);
      }
      while ( v12 != v57 );
      a2 = v51;
      v12 = *(unsigned int **)(a1 + 48);
    }
    *(v12 - 1) = 0;
  }
  v16 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, v56);
  sub_182CBA0(v16, a1 + 72);
  v17 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 76) &= ~1u;
  *(_DWORD *)(a1 + 72) = 1;
  v18 = *(_QWORD *)(v17 + 16);
  v61 = nullptr;
  v60 = v18;
  v19 = sub_C45340(v17, 0, a2, (__int64)&qword_1C7F280, &v60, v54, v4, v56);
  v20 = v61;
  v52 = v19;
  if ( v61 )
  {
    v21 = (unsigned __int64)&v61[*((unsigned int *)v61 - 1)];
    if ( (unsigned __int64)v61 >= v21 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = v60;
          v11 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v20 >= v21 )
          goto LABEL_23;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( (unsigned __int64)v20 < v21 );
LABEL_23:
    v20 = v61;
    if ( v61 )
LABEL_24:
      sub_186B220(v20 - 1);
  }
  if ( !v52 )
    return 0;
  BYTE4(v60) &= 0xFCu;
  v63 &= 0xFCu;
  v26 = *(_QWORD *)(a1 + 8);
  LODWORD(v60) = 0;
  v27 = qword_1C7F2C0;
  v61 = nullptr;
  v62 = 1;
  v64 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v60, &qword_1C7F280);
    if ( (qword_1C7F290 & 0x100000000LL) == 0 )
      goto LABEL_31;
LABEL_63:
    sub_182C690(v27, &v62, &qword_1C7F290);
    goto LABEL_32;
  }
  LODWORD(v60) = qword_1C7F280;
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
    goto LABEL_63;
LABEL_31:
  v63 &= ~1u;
  v62 = qword_1C7F290;
LABEL_32:
  sub_1831620(qword_1C7F2C0, &v60);
  v28 = *(_QWORD *)(v26 + 16);
  v59 = nullptr;
  v58 = v28;
  v29 = sub_C45340(v26, 0, a3, (__int64)&v60, &v58, v54, v4, v56);
  v30 = v59;
  v24 = v29;
  if ( v59 )
  {
    v31 = (unsigned __int64)&v59[*((unsigned int *)v59 - 1)];
    if ( (unsigned __int64)v59 >= v31 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v11 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v30 >= v31 )
          goto LABEL_39;
      }
      sub_15D7BC0(v58, v32);
      ++v30;
    }
    while ( (unsigned __int64)v30 < v31 );
LABEL_39:
    v30 = v59;
    if ( v59 )
LABEL_40:
      sub_186B220(v30 - 1);
  }
  v33 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v60);
  sub_182CBA0(v33, &v62);
  if ( !(_BYTE)v24 )
    return 0;
  BYTE4(v60) &= 0xFCu;
  v34 = *(_QWORD *)(a1 + 8);
  v63 &= 0xFCu;
  v35 = qword_1C7F2C0;
  LODWORD(v60) = 0;
  v61 = nullptr;
  v62 = 1;
  v64 = 0;
  if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v60, v56);
  else
    LODWORD(v60) = *(_DWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
  {
    sub_182C690(v35, &v62, a1 + 72);
  }
  else
  {
    v36 = *(_DWORD *)(a1 + 72);
    v63 &= ~1u;
    v62 = v36;
  }
  sub_1831620(qword_1C7F2C0, &v60);
  v37 = *(_QWORD *)(a1 + 48);
  if ( v37 )
  {
    v38 = *(_DWORD *)(v37 - 4);
    if ( v38 )
    {
      v39 = *(_QWORD *)(a1 + 40);
      if ( v38 != 1 || (v47 = *(_BYTE *)(v37 + 4), (v47 & 1) != 0) || *(_DWORD *)v37 != 1 )
      {
        v40 = v60;
        goto LABEL_50;
      }
      v48 = *(_BYTE *)(v37 + 20);
      v40 = v60;
      if ( (v48 & 1) != 0 )
        goto LABEL_50;
      if ( *(_DWORD *)(v37 + 16) != 1 )
      {
LABEL_72:
        if ( (v48 & 1) == 0 && *(_DWORD *)(v37 + 16) == 1 && !v40 )
        {
          v46 = sub_15E1A70(*(_QWORD *)(v34 + 16));
          goto LABEL_67;
        }
        goto LABEL_50;
      }
      if ( (v63 & 1) != 0 || v62 != 1 || (qword_1C7F290 & 0x100000000LL) != 0 || (_DWORD)qword_1C7F290 != 1 )
      {
        v53 = *(_QWORD *)(a1 + 40);
        v55 = *(_QWORD *)(a1 + 48);
        if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, &v60, &qword_1C7F280) )
        {
LABEL_88:
          v41 = *(_QWORD *)(v34 + 16);
          goto LABEL_60;
        }
      }
      else
      {
        if ( (v60 & 0x100000000LL) == 0 && (*(_BYTE *)(&qword_1C7F280 + 1) & 1) == 0 )
        {
          v40 = v60;
          if ( (int)v60 >= qword_1C7F280 )
            goto LABEL_88;
          goto LABEL_80;
        }
        v53 = *(_QWORD *)(a1 + 40);
        v55 = *(_QWORD *)(a1 + 48);
        if ( (int)sub_182C7B0(qword_1C7F2C0, &v60, &qword_1C7F280) >= 0 )
          goto LABEL_88;
      }
      v37 = v55;
      v40 = v60;
      v38 = 1;
      v39 = v53;
      v47 = *(_BYTE *)(v55 + 4);
LABEL_80:
      if ( (v47 & 1) == 0 && *(_DWORD *)v37 == 1 )
      {
        v48 = *(_BYTE *)(v37 + 20);
        goto LABEL_72;
      }
LABEL_50:
      if ( v40 >= 0 )
      {
        v46 = sub_168FD40(v34 + 672, v38, v37, v39, &v60);
LABEL_67:
        v42 = v46;
        goto LABEL_53;
      }
      v41 = *(_QWORD *)(v34 + 16);
      goto LABEL_52;
    }
  }
  v41 = *(_QWORD *)(v34 + 16);
  if ( (int)v60 >= 0 )
  {
LABEL_60:
    v42 = *(_QWORD *)(v41 + 856);
    goto LABEL_53;
  }
LABEL_52:
  v42 = *(_QWORD *)(v41 + 864);
LABEL_53:
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v43 = *a4;
  if ( *a4 )
  {
    v44 = a4[1];
    v11 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v44, v43);
  }
  v45 = qword_1C7F2C0;
  *a4 = v42;
  sub_182CBA0(v45, &v60);
  sub_182CBA0(v45, &v62);
  return v24;
}


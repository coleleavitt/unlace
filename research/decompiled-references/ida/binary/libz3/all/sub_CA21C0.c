__int64 __fastcall sub_CA21C0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v4; // r13
  __int64 v5; // rdx
  _QWORD *v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // r14d
  size_t v10; // rdi
  unsigned int *v11; // rax
  int *v12; // r15
  __int64 v13; // rdi
  _DWORD *v14; // rdx
  int *v15; // rax
  int *v16; // rdi
  int v17; // ecx
  char v18; // si
  __int64 v19; // rcx
  char v20; // si
  __int64 v21; // rcx
  __int64 v22; // rbx
  int *v23; // rbx
  void *v24; // r14
  int *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  _QWORD *v28; // rax
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // rdx
  _QWORD *v34; // rax
  int v35; // edx
  int v36; // edx
  void *v37; // rdi
  void *v38; // rdi
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rdx
  char v42; // cl
  char v43; // si
  __int64 v44; // rdx
  char v45; // cl
  char v46; // si
  void *v47; // r13
  __int64 v48; // rdx
  void *v49; // rdi
  __int64 v50; // r13
  __int64 v51; // rsi
  int v52; // eax
  int v53; // eax
  __int64 v54; // rax
  _QWORD *v55; // rbx
  void *v56; // r13
  _QWORD *v57; // rsi
  _QWORD *v58; // rax
  char **exception; // rbx
  unsigned int v60; // [rsp+0h] [rbp-A8h]
  void *v61; // [rsp+0h] [rbp-A8h]
  _QWORD *v62; // [rsp+0h] [rbp-A8h]
  void *v63; // [rsp+0h] [rbp-A8h]
  void *v64; // [rsp+0h] [rbp-A8h]
  unsigned int *v65; // [rsp+8h] [rbp-A0h]
  __int64 v66; // [rsp+8h] [rbp-A0h]
  __int64 v67; // [rsp+8h] [rbp-A0h]
  _QWORD *v68; // [rsp+8h] [rbp-A0h]
  unsigned int v69; // [rsp+10h] [rbp-98h]
  unsigned int v71; // [rsp+20h] [rbp-88h]
  __int64 v72; // [rsp+28h] [rbp-80h]
  int v73; // [rsp+30h] [rbp-78h] BYREF
  char v74; // [rsp+34h] [rbp-74h]
  __int64 v75; // [rsp+38h] [rbp-70h]
  int v76; // [rsp+40h] [rbp-68h] BYREF
  char v77; // [rsp+44h] [rbp-64h]
  __int64 v78; // [rsp+48h] [rbp-60h]
  __int64 v79[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v80[9]; // [rsp+60h] [rbp-48h] BYREF

  result = *a2;
  v4 = *(_QWORD **)(a1 + 24);
  if ( !*a2 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    if ( !v4 )
      return result;
    v69 = 0;
    v6 = v4;
    v5 = 0;
    v71 = *((_DWORD *)v4 - 1);
    goto LABEL_65;
  }
  result = *(unsigned int *)(result - 4);
  v69 = result;
  *(_DWORD *)(a1 + 16) = result;
  if ( !v4 )
  {
    if ( !(_DWORD)result )
      return result;
    v71 = 0;
    v58 = (_QWORD *)sub_186B270(0x48u);
    *v58 = 2;
    v4 = v58 + 1;
    *(_QWORD *)(a1 + 24) = v58 + 1;
    goto LABEL_4;
  }
  v5 = 32LL * (unsigned int)result;
  v71 = *((_DWORD *)v4 - 1);
  v6 = &v4[(unsigned __int64)v5 / 8];
  if ( v71 >= (unsigned int)result )
  {
LABEL_65:
    v54 = 32LL * v71;
    v55 = &v4[(unsigned __int64)v54 / 8];
    if ( v54 != v5 )
    {
      do
      {
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v6);
        v57 = v6 + 2;
        v6 += 4;
        sub_182CBA0(v56, v57);
      }
      while ( v55 != v6 );
      v4 = *(_QWORD **)(a1 + 24);
    }
    *((_DWORD *)v4 - 1) = v69;
    goto LABEL_17;
  }
LABEL_4:
  while ( 1 )
  {
    v7 = *((_DWORD *)v4 - 2);
    v8 = v69;
    if ( v7 >= v69 )
      break;
    while ( 1 )
    {
      v9 = (3 * v7 + 1) >> 1;
      v60 = v9;
      v10 = 32 * v9 + 8;
      if ( 32 * v7 + 8 >= (unsigned int)v10 || v7 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C9E960(v79, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v79);
        sub_233E40((__int64)v79);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B270(v10);
      v12 = *(int **)(a1 + 24);
      v65 = v11;
      v4 = v11 + 2;
      if ( !v12 )
        break;
      v13 = (unsigned int)*(v12 - 1);
      v14 = v11 + 2;
      v11[1] = v13;
      v15 = v12;
      v16 = &v12[8 * v13];
      if ( v12 != v16 )
      {
        do
        {
          v17 = *v15;
          v18 = *((_BYTE *)v15 + 4);
          v15 += 8;
          v14 += 8;
          *(v14 - 8) = v17;
          *((_BYTE *)v14 - 28) = v18 & 3 | *(_BYTE *)(v14 - 7) & 0xFC;
          v19 = *((_QWORD *)v15 - 3);
          *((_QWORD *)v15 - 3) = 0;
          *((_QWORD *)v14 - 3) = v19;
          v20 = *((_BYTE *)v15 - 12);
          *(v14 - 4) = *(v15 - 4);
          *((_BYTE *)v14 - 12) = v20 & 3 | *(_BYTE *)(v14 - 3) & 0xFC;
          v21 = *((_QWORD *)v15 - 1);
          *((_QWORD *)v15 - 1) = 0;
          *((_QWORD *)v14 - 1) = v21;
        }
        while ( v15 != v16 );
      }
      v22 = (unsigned int)*(v12 - 1);
      if ( (_DWORD)v22 )
      {
        v23 = &v12[8 * v22];
        do
        {
          v24 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v12);
          v25 = v12 + 4;
          v12 += 8;
          sub_182CBA0(v24, v25);
        }
        while ( v12 != v23 );
        v12 = *(int **)(a1 + 24);
      }
      sub_186B220(v12 - 2);
      *(_QWORD *)(a1 + 24) = v4;
      *v65 = v60;
      v8 = v69;
      v7 = *((_DWORD *)v4 - 2);
      if ( v7 >= v69 )
        goto LABEL_15;
    }
    v11[1] = 0;
    *(_QWORD *)(a1 + 24) = v4;
    *v11 = v9;
  }
LABEL_15:
  *((_DWORD *)v4 - 1) = v8;
  v26 = 32LL * v8;
  v27 = 32LL * v71;
  v28 = &v4[(unsigned __int64)v27 / 8];
  if ( v27 != v26 )
  {
    do
    {
      *((_OWORD *)v28 + 1) = 0;
      v28 += 4;
      *((_OWORD *)v28 - 2) = 0;
      *((_DWORD *)v28 - 4) = 1;
      *((_BYTE *)v28 - 28) = 0;
      *((_BYTE *)v28 - 12) = 0;
    }
    while ( &v4[(unsigned __int64)v26 / 8] != v28 );
  }
LABEL_17:
  result = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)result )
  {
    v29 = (unsigned int)(result - 1);
    v30 = *(_DWORD *)(a1 + 16);
    v31 = 4 * v29;
    v72 = 4 * ((unsigned int)result - v29);
    v32 = 40 * v29;
    while ( 1 )
    {
      v48 = *a2;
      v49 = qword_1C7F2C0;
      if ( v30 != (_DWORD)result )
        break;
      v50 = v48 + v32;
      v51 = v31 * 8 + *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v48 + v32 + 4) & 1) != 0 )
      {
        v67 = v31 * 8 + *(_QWORD *)(a1 + 24);
        sub_182C690(qword_1C7F2C0, v51, v48 + v32);
        v51 = v67;
      }
      else
      {
        v52 = *(_DWORD *)v50;
        *(_BYTE *)(v51 + 4) &= ~1u;
        *(_DWORD *)v51 = v52;
      }
      if ( (*(_BYTE *)(v50 + 20) & 1) != 0 )
      {
        result = sub_182C690(v49, v51 + 16, v50 + 16);
        goto LABEL_33;
      }
      result = *(unsigned int *)(v50 + 16);
      v31 -= 4;
      *(_BYTE *)(v51 + 20) &= ~1u;
      v32 -= 40;
      *(_DWORD *)(v51 + 16) = result;
      if ( !--v30 )
        return result;
LABEL_34:
      LODWORD(result) = *(_DWORD *)(a1 + 16);
      v4 = *(_QWORD **)(a1 + 24);
    }
    v33 = v32 + v48;
    v79[0] = 0;
    v79[1] = 0;
    v80[0] = 1;
    v80[1] = 0;
    v34 = &v4[v31 + v72];
    if ( (*(_BYTE *)(v33 + 4) & 1) != 0 )
    {
      v66 = v33;
      sub_182C690(qword_1C7F2C0, v79, v33);
      v34 = &v4[v31 + v72];
      v33 = v66;
    }
    else
    {
      LODWORD(v79[0]) = *(_DWORD *)v33;
    }
    if ( (*(_BYTE *)(v33 + 20) & 1) != 0 )
    {
      v62 = v34;
      sub_182C690(v49, v80, v33 + 16);
      v34 = v62;
    }
    else
    {
      v35 = *(_DWORD *)(v33 + 16);
      BYTE4(v80[0]) &= ~1u;
      LODWORD(v80[0]) = v35;
    }
    v36 = *(_DWORD *)v34;
    v37 = qword_1C7F2C0;
    if ( *(_DWORD *)v34 )
    {
      if ( LODWORD(v79[0]) )
      {
        if ( (v80[0] & 0x100000000LL) != 0
          || LODWORD(v80[0]) != 1
          || (*((_BYTE *)v34 + 20) & 1) != 0
          || *((_DWORD *)v34 + 4) != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v79, v34, v79);
        }
        else
        {
          v64 = qword_1C7F2C0;
          sub_1831A80(qword_1C7F2C0, v79, v34, v79);
          sub_182CBA0(v64, v80);
          BYTE4(v80[0]) &= ~1u;
          LODWORD(v80[0]) = 1;
        }
      }
      else
      {
        if ( (*((_BYTE *)v34 + 4) & 1) != 0 )
        {
          v68 = v34;
          sub_182C690(qword_1C7F2C0, v79, v34);
          v34 = v68;
        }
        else
        {
          BYTE4(v79[0]) &= ~1u;
          LODWORD(v79[0]) = v36;
        }
        if ( (*((_BYTE *)v34 + 20) & 1) != 0 )
        {
          sub_182C690(v37, v80, v34 + 2);
        }
        else
        {
          v53 = *((_DWORD *)v34 + 4);
          BYTE4(v80[0]) &= ~1u;
          LODWORD(v80[0]) = v53;
        }
      }
    }
    else
    {
      if ( (v79[0] & 0x100000000LL) != 0 )
      {
        v63 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v79, v79);
        v37 = v63;
      }
      else
      {
        BYTE4(v79[0]) &= ~1u;
      }
      if ( (v80[0] & 0x100000000LL) != 0 )
        sub_182C690(v37, v80, v80);
      else
        BYTE4(v80[0]) &= ~1u;
    }
    v74 &= 0xFCu;
    v38 = qword_1C7F2C0;
    v77 &= 0xFCu;
    v73 = 0;
    v75 = 0;
    v76 = 1;
    v78 = 0;
    if ( (v79[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v73, v79);
    else
      v73 = v79[0];
    if ( (v80[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v38, &v76, v80);
    }
    else
    {
      v77 &= ~1u;
      v76 = v80[0];
    }
    v61 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v79);
    sub_182CBA0(v61, v80);
    v39 = v31 * 8 + *(_QWORD *)(a1 + 24);
    v40 = *(_DWORD *)v39;
    *(_DWORD *)v39 = v73;
    v73 = v40;
    v41 = *(_QWORD *)(v39 + 8);
    *(_QWORD *)(v39 + 8) = v75;
    v75 = v41;
    v42 = *(_BYTE *)(v39 + 4);
    *(_BYTE *)(v39 + 4) = v74 & 2 | v42 & 0xFD;
    v74 = v42 & 2 | v74 & 0xFD;
    v43 = *(_BYTE *)(v39 + 4);
    *(_BYTE *)(v39 + 4) = v74 & 1 | v43 & 0xFE;
    v74 = v43 & 1 | v74 & 0xFE;
    LODWORD(v41) = *(_DWORD *)(v39 + 16);
    *(_DWORD *)(v39 + 16) = v76;
    v76 = v41;
    v44 = *(_QWORD *)(v39 + 24);
    *(_QWORD *)(v39 + 24) = v78;
    v78 = v44;
    v45 = *(_BYTE *)(v39 + 20);
    *(_BYTE *)(v39 + 20) = v77 & 2 | v45 & 0xFD;
    v77 = v45 & 2 | v77 & 0xFD;
    v46 = *(_BYTE *)(v39 + 20) & 1;
    *(_BYTE *)(v39 + 20) = v77 & 1 | *(_BYTE *)(v39 + 20) & 0xFE;
    v47 = qword_1C7F2C0;
    v77 = v46 | v77 & 0xFE;
    sub_182CBA0(qword_1C7F2C0, &v73);
    result = sub_182CBA0(v47, &v76);
LABEL_33:
    v31 -= 4;
    v32 -= 40;
    if ( !--v30 )
      return result;
    goto LABEL_34;
  }
  return result;
}


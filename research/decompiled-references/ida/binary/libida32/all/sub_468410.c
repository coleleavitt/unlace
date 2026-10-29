__int64 __fastcall sub_468410(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  const char *v4; // r12
  unsigned int v5; // ebp
  __int16 v6; // ax
  __int16 v7; // bp
  __int64 v8; // rax
  int v9; // edx
  _DWORD *v10; // rax
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rsi
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v34; // [rsp+8h] [rbp-30h]

  v4 = "COMMON ";
  v34 = __readfsqword(0x28u);
  v5 = node2ea(a4);
  netnode_check(&v33, "$ arm segflags", 0, 0);
  v6 = netnode_altval(v33, v5, 321);
  *(_QWORD *)a1 = 0;
  v7 = v6;
  *(_OWORD *)(a1 + 8) = 0;
  if ( (v6 & 0x100) != 0 )
    v4 = "COMDEF ";
  v8 = qvector_reserve(a1, 0, 8, 1);
  *(_QWORD *)a1 = v8;
  v9 = *(_DWORD *)v4;
  *(_QWORD *)(a1 + 8) = 8;
  *(_BYTE *)(v8 + 7) = 0;
  v10 = *(_DWORD **)a1;
  *v10 = v9;
  *(_DWORD *)((char *)v10 + 3) = *(_DWORD *)(v4 + 3);
  if ( (v7 & 0x200) != 0 )
    sub_357520((__int64 *)a1);
  if ( (v7 & 0x10) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 8);
    if ( v26 )
    {
      v29 = v26 + 3;
      v28 = v26 + 4;
      v27 = *(_QWORD *)a1;
      --v26;
      if ( *(_QWORD *)(a1 + 16) >= v28 )
        goto LABEL_23;
    }
    else
    {
      v27 = *(_QWORD *)a1;
      v28 = 5;
      v29 = 4;
      if ( *(_QWORD *)(a1 + 16) >= 5u )
      {
LABEL_23:
        *(_QWORD *)(a1 + 8) = v28;
        *(_BYTE *)(v27 + v29) = 0;
        *(_DWORD *)(*(_QWORD *)a1 + v26) = 541280592;
        goto LABEL_6;
      }
    }
    v30 = qvector_reserve(a1, v27, v28, 1);
    *(_QWORD *)a1 = v30;
    v27 = v30;
    goto LABEL_23;
  }
LABEL_6:
  if ( (v7 & 0x20) == 0 )
    goto LABEL_7;
  v22 = *(_QWORD *)(a1 + 8);
  if ( !v22 )
  {
    v25 = *(_QWORD *)a1;
    v24 = 11;
    v23 = 10;
    if ( *(_QWORD *)(a1 + 16) >= 0xBu )
      goto LABEL_20;
LABEL_27:
    v31 = qvector_reserve(a1, v25, v24, 1);
    *(_QWORD *)a1 = v31;
    v25 = v31;
    goto LABEL_20;
  }
  v23 = v22 + 9;
  v24 = v22 + 10;
  v25 = *(_QWORD *)a1;
  --v22;
  if ( *(_QWORD *)(a1 + 16) < v24 )
    goto LABEL_27;
LABEL_20:
  *(_QWORD *)(a1 + 8) = v24;
  *(_BYTE *)(v25 + v23) = 0;
  qmemcpy((void *)(*(_QWORD *)a1 + v22), "REENTRANT ", 10);
LABEL_7:
  if ( (v7 & 0x40) == 0 )
    goto LABEL_8;
  v17 = *(_QWORD *)(a1 + 8);
  if ( !v17 )
  {
    v20 = *(_QWORD *)a1;
    v19 = 10;
    v18 = 9;
    if ( *(_QWORD *)(a1 + 16) >= 0xAu )
      goto LABEL_17;
LABEL_29:
    v32 = qvector_reserve(a1, v20, v19, 1);
    *(_QWORD *)a1 = v32;
    v20 = v32;
    goto LABEL_17;
  }
  v18 = v17 + 8;
  v19 = v17 + 9;
  v20 = *(_QWORD *)a1;
  --v17;
  if ( *(_QWORD *)(a1 + 16) < v19 )
    goto LABEL_29;
LABEL_17:
  *(_QWORD *)(a1 + 8) = v19;
  *(_BYTE *)(v20 + v18) = 0;
  v21 = *(_QWORD *)a1 + v17;
  *(_QWORD *)v21 = 0x44524F57464C4148LL;
  *(_BYTE *)(v21 + 8) = 32;
LABEL_8:
  if ( (v7 & 0x80u) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( v11 )
    {
      v14 = v11 + 9;
      v13 = v11 + 10;
      v12 = *(_QWORD *)a1;
      --v11;
      if ( *(_QWORD *)(a1 + 16) >= v13 )
        goto LABEL_11;
    }
    else
    {
      v12 = *(_QWORD *)a1;
      v13 = 11;
      v14 = 10;
      if ( *(_QWORD *)(a1 + 16) >= 0xBu )
      {
LABEL_11:
        *(_QWORD *)(a1 + 8) = v13;
        *(_BYTE *)(v12 + v14) = 0;
        qmemcpy((void *)(*(_QWORD *)a1 + v11), "INTERWORK ", 10);
        goto LABEL_12;
      }
    }
    v16 = qvector_reserve(a1, v12, v13, 1);
    *(_QWORD *)a1 = v16;
    v12 = v16;
    goto LABEL_11;
  }
LABEL_12:
  sub_357520((__int64 *)a1);
  return a1;
}


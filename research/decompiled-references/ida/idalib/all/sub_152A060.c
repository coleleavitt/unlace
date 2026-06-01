void __fastcall sub_152A060(__int64 a1, __int64 *a2, __int64 a3, int *a4)
{
  int v4; // ebp
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // edx
  __int16 v8; // ax
  __int16 v9; // r12
  int v10; // r15d
  int v11; // r14d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  int v16; // r14d
  char *v17; // rdx
  unsigned int *v18; // rax
  int v19; // [rsp+4h] [rbp-D4h]
  __int64 v20; // [rsp+8h] [rbp-D0h]
  int v21; // [rsp+10h] [rbp-C8h]
  __int16 v22; // [rsp+16h] [rbp-C2h]
  __int64 v23; // [rsp+18h] [rbp-C0h]
  unsigned int *v24; // [rsp+20h] [rbp-B8h]
  int v25; // [rsp+30h] [rbp-A8h] BYREF
  int v26; // [rsp+34h] [rbp-A4h]
  __int64 v27; // [rsp+38h] [rbp-A0h]
  __int16 v28; // [rsp+40h] [rbp-98h]
  __int16 v29; // [rsp+42h] [rbp-96h]
  unsigned __int8 *v30[17]; // [rsp+50h] [rbp-88h] BYREF

  v4 = *a4;
  sub_14634E0(a2, &v25);
  if ( v28 != 22 )
  {
    v5 = a2[6];
    v6 = 2192;
LABEL_3:
    v7 = v25;
LABEL_4:
    sub_FC70B0((__int64)v30, v5, v7, v6);
    sub_1520A40(v30, (__int64)"pack");
    sub_AEA040((__int64)v30);
    return;
  }
  sub_14634E0(a2, &v25);
  v8 = v28;
  if ( v28 == 7 )
  {
    v9 = 7;
    v21 = v25;
    v19 = v26;
    v20 = v27;
    v22 = v29;
    sub_14634E0(a2, &v25);
    v8 = v28;
    if ( (*(_BYTE *)(a2[7] + 156) & 3) == 0 )
    {
      v23 = 0;
      v10 = 1;
      v24 = nullptr;
      goto LABEL_8;
    }
LABEL_27:
    v23 = 0;
    v10 = 3;
    v24 = nullptr;
    goto LABEL_8;
  }
  if ( v28 != 5 )
  {
    v9 = 0;
    v20 = 0;
    v22 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v24 = nullptr;
    v10 = (*(_BYTE *)(a2[7] + 156) & 3) != 0 ? 4 : 0;
    goto LABEL_8;
  }
  v14 = *(__int64 **)(v27 + 16);
  v15 = *v14;
  if ( (unsigned int)*v14 != 4 )
  {
    if ( (_DWORD)v15 != 6 )
    {
      if ( (_DWORD)v15 == 7 )
      {
        if ( *((_DWORD *)v14 + 4) == 1651472244
          && *((_WORD *)v14 + 10) == 29817
          && *((_BYTE *)v14 + 22) == 101
          && (*(_BYTE *)(a2[7] + 1) & 1) != 0 )
        {
          v9 = 7;
          v21 = v25;
          v22 = v29;
          sub_14634E0(a2, &v25);
          v8 = v28;
          v17 = "2";
          goto LABEL_26;
        }
      }
      else if ( (_DWORD)v15 == 5
             && *((_DWORD *)v14 + 4) == 1702061426
             && *((_BYTE *)v14 + 20) == 116
             && (*(_BYTE *)(a2[7] + 1) & 1) != 0 )
      {
        v9 = 0;
        v10 = 4;
        sub_14634E0(a2, &v25);
        v8 = v28;
        v20 = 0;
        v22 = 0;
        v19 = 0;
        v21 = 0;
        v23 = 0;
        v24 = nullptr;
        goto LABEL_8;
      }
      goto LABEL_17;
    }
    if ( *((_DWORD *)v14 + 4) == 1801675120 && *((_WORD *)v14 + 10) == 25701 && (*(_BYTE *)(a2[7] + 1) & 1) != 0 )
    {
      v9 = 7;
      v21 = v25;
      v22 = v29;
      sub_14634E0(a2, &v25);
      v8 = v28;
      v17 = "1";
LABEL_26:
      v20 = (__int64)v17;
      v19 = 1;
      goto LABEL_27;
    }
    goto LABEL_17;
  }
  if ( *((_DWORD *)v14 + 4) == 2003789939 )
  {
    v9 = 0;
    v10 = 8;
    sub_14634E0(a2, &v25);
    v8 = v28;
    v20 = 0;
    v22 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v24 = nullptr;
    goto LABEL_8;
  }
  if ( *((_DWORD *)v14 + 4) == 1819047270 && (*(_BYTE *)(a2[7] + 1) & 1) != 0 )
  {
    v9 = 7;
    v21 = v25;
    v22 = v29;
    sub_14634E0(a2, &v25);
    v8 = v28;
    v17 = "4";
    goto LABEL_26;
  }
  if ( *((_DWORD *)v14 + 4) != 1752397168 )
  {
LABEL_17:
    v16 = 5;
    v10 = 4;
    if ( !sub_1528280(v27, (__int64)"pop") )
    {
      v5 = a2[6];
      v6 = 2207;
      goto LABEL_3;
    }
    goto LABEL_18;
  }
  v16 = 3;
  v10 = 2;
LABEL_18:
  sub_14634E0(a2, &v25);
  v8 = v28;
  if ( v28 == 66 )
  {
    sub_14634E0(a2, &v25);
    v9 = v28;
    if ( v28 == 7 )
    {
      v10 = v16;
      v21 = v25;
      v19 = v26;
      v20 = v27;
      v22 = v29;
      sub_14634E0(a2, &v25);
      v8 = v28;
      v23 = 0;
      v24 = nullptr;
      goto LABEL_8;
    }
    if ( v28 == 5 )
    {
      v18 = *(unsigned int **)(v27 + 16);
      v24 = v18 + 4;
      v23 = *v18;
      sub_14634E0(a2, &v25);
      v8 = v28;
      if ( v28 != 66 )
      {
        v9 = 0;
        v20 = 0;
        v22 = 0;
        v19 = 0;
        v21 = 0;
        goto LABEL_8;
      }
      sub_14634E0(a2, &v25);
      v9 = v28;
      if ( v28 == 7 )
      {
        v10 = v16;
        v21 = v25;
        v19 = v26;
        v20 = v27;
        v22 = v29;
        sub_14634E0(a2, &v25);
        v8 = v28;
        goto LABEL_8;
      }
    }
    sub_FC70B0((__int64)v30, a2[6], v25, 2215);
    sub_AEA040((__int64)v30);
    return;
  }
  v9 = 0;
  v20 = 0;
  v22 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v24 = nullptr;
LABEL_8:
  v11 = v25;
  if ( v8 != 23 )
  {
    v5 = a2[6];
    v6 = 2196;
    v7 = v25;
    goto LABEL_4;
  }
  sub_14634E0(a2, &v25);
  if ( v28 != 2 )
  {
    v5 = a2[6];
    v6 = 2202;
    goto LABEL_3;
  }
  v12 = sub_15290A0(a2 + 16, 48, 3u);
  *(_DWORD *)v12 = v10;
  *(_WORD *)(v12 + 40) = v9;
  *(_QWORD *)(v12 + 8) = v24;
  *(_QWORD *)(v12 + 16) = v23;
  *(_DWORD *)(v12 + 24) = v21;
  *(_DWORD *)(v12 + 28) = v19;
  *(_QWORD *)(v12 + 32) = v20;
  *(_WORD *)(v12 + 42) = v22;
  v13 = sub_15290A0(a2 + 16, 24, 3u);
  *(_DWORD *)v13 = v4;
  *(_DWORD *)(v13 + 16) = 428;
  *(_DWORD *)(v13 + 4) = v11;
  *(_QWORD *)(v13 + 8) = v12;
  sub_14368B0((__int64)a2, (char *)v13, 1, 1u, 0, 0);
}

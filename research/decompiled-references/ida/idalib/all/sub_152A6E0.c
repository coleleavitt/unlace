void __fastcall sub_152A6E0(__int64 *a1, int *a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  int v9; // r13d
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // rsi
  int v13; // ecx
  char *v14; // rsi
  __int64 v15; // rsi
  int v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // edx
  int v19; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+8h] [rbp-A0h]
  __int16 v21; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v22[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( a3 )
  {
    sub_14634E0(a1, &v19);
    if ( v21 != 5
      || (v5 = *(_QWORD *)(v20 + 16), *(_DWORD *)v5 != 5)
      || *(_DWORD *)(v5 + 16) != 1734962273
      || *(_BYTE *)(v5 + 20) != 110 )
    {
      sub_FC70B0((__int64)v22, a1[6], v19, 2214);
      sub_AEA040((__int64)v22);
      return;
    }
  }
  sub_14634E0(a1, &v19);
  if ( (*(_BYTE *)(a1[7] + 156) & 2) != 0 )
  {
    if ( v21 != 22 )
    {
      v12 = a1[6];
      v13 = 2192;
LABEL_21:
      sub_FC70B0((__int64)v22, v12, v19, v13);
      sub_1520A40(v22, (__int64)"align");
      sub_AEA040((__int64)v22);
      return;
    }
  }
  else if ( v21 != 64 )
  {
    v15 = a1[6];
    v16 = 2181;
LABEL_27:
    sub_FC70B0((__int64)v22, v15, v19, v16);
    sub_1520C80(v22, a3);
    sub_AEA040((__int64)v22);
    return;
  }
  sub_14634E0(a1, &v19);
  if ( v21 != 5 )
  {
    v10 = a1[6];
    v11 = 2189;
    goto LABEL_23;
  }
  v6 = *(__int64 **)(v20 + 16);
  v7 = *v6;
  if ( (unsigned int)*v6 == 6 )
  {
    if ( *((_DWORD *)v6 + 4) == 1769234798 )
    {
      v8 = 0;
      if ( *((_WORD *)v6 + 10) == 25974 )
        goto LABEL_15;
    }
    if ( *((_DWORD *)v6 + 4) == 1801675120 )
    {
      v8 = 2;
      if ( *((_WORD *)v6 + 10) == 25701 )
        goto LABEL_15;
    }
    if ( *((_DWORD *)v6 + 4) == 912482669 )
    {
      v8 = 4;
      if ( *((_WORD *)v6 + 10) == 27448 )
        goto LABEL_15;
    }
LABEL_34:
    v15 = a1[6];
    v16 = 2182;
    goto LABEL_27;
  }
  if ( (_DWORD)v7 == 7 )
  {
    if ( *((_DWORD *)v6 + 4) == 1970561390 && *((_WORD *)v6 + 10) == 24946 )
    {
      v8 = 1;
      if ( *((_BYTE *)v6 + 22) == 108 )
        goto LABEL_15;
    }
    goto LABEL_34;
  }
  if ( (_DWORD)v7 != 5 )
    goto LABEL_34;
  if ( *((_DWORD *)v6 + 4) != 1702326128 || (v8 = 3, *((_BYTE *)v6 + 20) != 114) )
  {
    if ( *((_DWORD *)v6 + 4) != 1702061426 )
      goto LABEL_34;
    v8 = 5;
    if ( *((_BYTE *)v6 + 20) != 116 )
      goto LABEL_34;
  }
LABEL_15:
  if ( (*(_BYTE *)(a1[7] + 156) & 2) != 0 )
  {
    sub_14634E0(a1, &v19);
    if ( v21 != 23 )
    {
      v12 = a1[6];
      v13 = 2196;
      goto LABEL_21;
    }
  }
  v9 = v19;
  sub_14634E0(a1, &v19);
  if ( v21 == 2 )
  {
    v17 = sub_15290A0(a1 + 16, 24, 3u);
    *(_QWORD *)v17 = 0;
    *(_DWORD *)(v17 + 16) = 433;
    v18 = *a2;
    *(_DWORD *)(v17 + 4) = v9;
    *(_DWORD *)v17 = v18;
    *(_QWORD *)(v17 + 8) = v8;
    sub_14368B0((__int64)a1, (char *)v17, 1, 1u, 0, 0);
    return;
  }
  v10 = a1[6];
  v11 = 2202;
LABEL_23:
  sub_FC70B0((__int64)v22, v10, v19, v11);
  v14 = "options";
  if ( !a3 )
    v14 = "align";
  sub_1520A40(v22, (__int64)v14);
  sub_AEA040((__int64)v22);
}

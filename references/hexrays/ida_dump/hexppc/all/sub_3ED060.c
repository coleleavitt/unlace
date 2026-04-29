__int64 __fastcall sub_3ED060(__int64 a1, int a2, int a3, int a4)
{
  int v5; // r11d
  unsigned int v6; // r12d
  __int64 v7; // rdx
  unsigned __int16 v8; // ax
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r15
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r14
  unsigned int v16; // r15d
  int v17; // eax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // r15
  int v24; // eax
  int v25; // edx
  char v26; // al
  int v27; // r11d
  __int64 v28; // r15
  int dtype_size; // eax
  int v30; // eax
  int v31; // edx
  int v32; // [rsp+4h] [rbp-44h]
  char v33; // [rsp+4h] [rbp-44h]
  int v34; // [rsp+4h] [rbp-44h]
  int v36; // [rsp+8h] [rbp-40h]
  int v37; // [rsp+8h] [rbp-40h]
  int v38; // [rsp+8h] [rbp-40h]
  int v39; // [rsp+8h] [rbp-40h]
  int v40; // [rsp+8h] [rbp-40h]
  int v42; // [rsp+Ch] [rbp-3Ch]

  v5 = a4;
  v6 = 7;
  v7 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v7 + 84) != 8 )
    v6 = 2;
  v8 = *(_WORD *)(a1 + 48);
  if ( v8 == 215 )
  {
    if ( !*(_QWORD *)(a1 + 152) )
    {
      v39 = a3;
      v26 = sub_3ECE40(a1, a2, a3);
      v27 = a4;
      v33 = v26;
      if ( v26 )
        return 1;
      v15 = v39;
      v10 = a4;
      v42 = v39;
      v40 = v27;
      v28 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
      dtype_size = get_dtype_size(v6);
      sub_1D2710(a1, 0x21u, dtype_size, v10, v15, v28, 0);
      v9 = *(_DWORD *)(a1 + 52);
      if ( (v9 & 0x2000) == 0 )
      {
        v5 = v40;
        a3 = v42;
        v16 = 13;
        goto LABEL_24;
      }
      goto LABEL_36;
    }
LABEL_35:
    v38 = a3;
    v15 = a3;
    v10 = a4;
    v23 = *(int *)(v7 + 488);
    v24 = get_dtype_size(v6);
    sub_1D2710(a1, 0x22u, v24, v10, v15, v23, 0);
    v9 = *(_DWORD *)(a1 + 52);
    v5 = a4;
    a3 = v38;
    if ( (v9 & 0x2000) == 0 )
    {
      v33 = 0;
      v16 = 13;
      goto LABEL_24;
    }
LABEL_36:
    if ( *(_BYTE *)(a1 + 145) )
      goto LABEL_37;
LABEL_47:
    v30 = get_dtype_size(v6);
    sub_1D2710(a1, 0xDu, v30, v15, a2, a2, 0);
    goto LABEL_27;
  }
  if ( v8 <= 0xD7u )
  {
    if ( v8 == 212 )
    {
      v9 = *(_DWORD *)(a1 + 52);
      v15 = a3;
      if ( (v9 & 0x2000) == 0 )
      {
        v33 = 0;
        v10 = a4;
        v16 = 13;
        goto LABEL_24;
      }
      if ( *(_BYTE *)(a1 + 145) )
      {
        v10 = a4;
        v16 = 13;
        goto LABEL_26;
      }
      goto LABEL_47;
    }
    if ( v8 <= 0xD4u )
    {
      if ( v8 != 2 && v8 != 5 )
      {
        if ( v8 == 1 )
        {
LABEL_10:
          v9 = *(_DWORD *)(a1 + 52);
          v10 = a3;
          v11 = a3;
          if ( (v9 & 0x2000) != 0 )
          {
            if ( !*(_BYTE *)(a1 + 145) )
            {
              v12 = 12;
LABEL_21:
              v14 = get_dtype_size(v6);
              sub_1D2710(a1, v12, v14, a2, v11, a2, 0);
LABEL_27:
              sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              return 1;
            }
            v15 = a4;
            v16 = 12;
LABEL_26:
            v17 = get_dtype_size(v6);
            sub_1D2710(a1, v16, v17, v10, v15, a2, 0);
            goto LABEL_27;
          }
          v31 = a3;
          v15 = a4;
          a3 = a4;
          v33 = 1;
          v5 = v31;
          v16 = 12;
LABEL_24:
          if ( (v9 & 1) != 0 )
            sub_3E8330(a1, v5, a3, v33);
          goto LABEL_26;
        }
        return 0;
      }
      if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 || *(_BYTE *)(a1 + 145) )
      {
LABEL_31:
        v37 = v5;
        v15 = v5;
        v10 = a3;
        v34 = a3;
        v19 = *(int *)(v7 + 488);
        v20 = get_dtype_size(v6);
        v21 = v19;
        v16 = 12;
        sub_1D2710(a1, 0x19u, v20, v10, v15, v21, 0);
        v9 = *(_DWORD *)(a1 + 52);
        if ( (v9 & 0x2000) != 0 )
          goto LABEL_26;
        v22 = v34;
        v33 = 1;
        a3 = v37;
        v5 = v22;
        goto LABEL_24;
      }
      goto LABEL_20;
    }
    if ( v8 != 213 )
      return 0;
    goto LABEL_35;
  }
  if ( v8 > 0x485u )
  {
    if ( (unsigned __int16)(v8 - 1181) > 3u )
      return 0;
    v9 = *(_DWORD *)(a1 + 52);
    v10 = a3;
    v11 = a3;
    if ( (v9 & 0x2000) == 0 )
    {
      v25 = a3;
      v15 = a4;
      a3 = a4;
      v33 = 0;
      v5 = v25;
      v16 = 13;
      goto LABEL_24;
    }
    if ( !*(_BYTE *)(a1 + 145) )
    {
      v12 = 13;
      goto LABEL_21;
    }
    v15 = a4;
LABEL_37:
    v16 = 13;
    goto LABEL_26;
  }
  if ( v8 > 0x482u )
    goto LABEL_10;
  if ( v8 == 283 )
  {
    v13 = *(_QWORD *)(a1 + 152);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 24LL) != 8 )
      v13 = (int)v13;
    v36 = a3;
    v32 = v5;
    sub_3E9DD0(a1, (unsigned __int8 *)(a1 + 144), v6, -v13, v5);
    v5 = v32;
    a3 = v36;
    if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 || *(_BYTE *)(a1 + 145) )
    {
      v7 = *(_QWORD *)(a1 + 832);
      goto LABEL_31;
    }
LABEL_20:
    v12 = 12;
    v11 = a3;
    goto LABEL_21;
  }
  return 0;
}

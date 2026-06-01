__int64 __fastcall sub_98AE90(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int16 v5; // ax
  __int64 v7; // rdx
  __int64 i; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r11
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rdx
  _QWORD *v16; // r11
  __int64 v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // [rsp+8h] [rbp-8h] BYREF

  v3 = a1;
  v5 = *(_WORD *)a3 & 0x1FF;
  if ( v5 <= 0x75u )
  {
    if ( v5 == 4 )
    {
      *(_DWORD *)a1 = 6;
      *(_QWORD *)(a1 + 8) = a3;
      *(_BYTE *)(a1 + 16) = 1;
      return a1;
    }
  }
  else if ( v5 <= 0x77u )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return v3;
  }
  if ( v5 == 129 )
    goto LABEL_25;
  if ( v5 <= 0x81u )
  {
    if ( v5 <= 0x77u )
    {
      if ( v5 != 1 )
      {
        if ( v5 )
          goto LABEL_9;
        goto LABEL_28;
      }
      goto LABEL_26;
    }
    if ( v5 <= 0x7Fu )
      goto LABEL_9;
    goto LABEL_25;
  }
  if ( v5 == 241 )
  {
LABEL_25:
    v9 = a2[1];
    v10 = *(_QWORD **)(*a2 + 80LL);
    v11 = *(_QWORD *)(*a2 + 88LL);
    v21 = v9;
    v12 = sub_98AC90(v10, v11, &v21);
    *(_QWORD *)(v3 + 8) = v14;
    *(_BYTE *)(v3 + 16) = 1;
    *(_DWORD *)v3 = ((__int64)v12 - v13) >> 4;
    return v3;
  }
  if ( v5 > 0xF1u )
  {
    if ( v5 != 243 )
    {
      if ( v5 <= 0x100u )
      {
LABEL_9:
        *(_DWORD *)a1 = 6;
        *(_QWORD *)(a1 + 8) = a3;
        *(_BYTE *)(a1 + 16) = 1;
        return a1;
      }
LABEL_28:
      BUG();
    }
LABEL_26:
    v15 = a2[1];
    v16 = *(_QWORD **)(*a2 + 80LL);
    v17 = *(_QWORD *)(*a2 + 88LL);
    v21 = v15;
    v18 = sub_98AC90(v16, v17, &v21);
    *(_QWORD *)(v3 + 8) = v20;
    *(_BYTE *)(v3 + 16) = 1;
    *(_DWORD *)v3 = (((__int64)v18 - v19) >> 4) + 4;
    return v3;
  }
  if ( v5 != 131 )
    goto LABEL_9;
  v7 = *(_QWORD *)(a2[1] + 24LL);
  if ( v7 )
  {
    for ( i = *(_QWORD *)(a3 + 8); v7 != i; i = *(_QWORD *)(i + 16) )
      ;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = i;
    *(_BYTE *)(a1 + 16) = 1;
  }
  else
  {
    *(_DWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = a3;
    *(_BYTE *)(a1 + 16) = 1;
  }
  return v3;
}

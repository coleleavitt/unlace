/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D2F8
// Address: 0x000000000003D2F8

//----- (000000000003D2F8) ----------------------------------------------------
__int64 *__fastcall sub_3D2F8(__int64 a1, int a2)
{
  __int64 **v4; // x23
  __int64 v5; // x24
  __int64 *v6; // x21
  int v7; // w8
  char *v8; // x0
  __int64 v9; // x8
  __int64 *v10; // x1
  unsigned __int16 v12; // [xsp+4h] [xbp-6Ch]
  __int16 v13; // [xsp+14h] [xbp-5Ch]
  char v14; // [xsp+16h] [xbp-5Ah]
  _BYTE v15[9]; // [xsp+1Ch] [xbp-54h] BYREF

  v4 = (__int64 **)(a1 + 1744);
  _ReadStatusReg(TPIDR_EL0);
  memset(v15, 0, sizeof(v15));
  v5 = *(_QWORD *)(a1 + 1744);
  if ( !v5 )
  {
    v5 = a1 + 1744;
    v6 = *v4;
    if ( *v4 )
      goto LABEL_16;
    goto LABEL_12;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v5 + 32);
      if ( v7 > a2 )
        break;
      if ( v7 >= a2 )
        goto LABEL_11;
      v4 = (__int64 **)(v5 + 8);
      if ( !*(_QWORD *)(v5 + 8) )
        goto LABEL_11;
      v5 = *(_QWORD *)(v5 + 8);
    }
    if ( !*(_QWORD *)v5 )
      break;
    v4 = (__int64 **)v5;
    v5 = *(_QWORD *)v5;
  }
  v4 = (__int64 **)v5;
LABEL_11:
  v6 = *v4;
  if ( !*v4 )
  {
LABEL_12:
    v8 = (char *)operator new(0x60u);
    *((_DWORD *)v8 + 15) = 1;
    *(_QWORD *)(v8 + 49) = *(_QWORD *)&v15[1];
    *(_QWORD *)(v8 + 44) = 0;
    v8[59] = v14;
    *((_DWORD *)v8 + 8) = a2;
    *((_DWORD *)v8 + 10) = a2;
    *((_QWORD *)v8 + 1) = 0;
    *((_QWORD *)v8 + 2) = v5;
    *((_WORD *)v8 + 32) = 0;
    *(_QWORD *)v8 = 0;
    *((_QWORD *)v8 + 10) = 0;
    *((_QWORD *)v8 + 11) = 0;
    *((_QWORD *)v8 + 9) = 0;
    *(_WORD *)(v8 + 57) = v13;
    *((_WORD *)v8 + 35) = 0;
    *(_DWORD *)(v8 + 66) = v12;
    *v4 = (__int64 *)v8;
    v6 = (__int64 *)v8;
    v9 = **(_QWORD **)(a1 + 1736);
    if ( v9 )
    {
      *(_QWORD *)(a1 + 1736) = v9;
      v10 = *v4;
    }
    else
    {
      v10 = (__int64 *)v8;
    }
    sub_48ED8(*(__int64 **)(a1 + 1744), v10);
    ++*(_QWORD *)(a1 + 1752);
  }
LABEL_16:
  sub_3D568(a1, (__int64)(v6 + 9), a2);
  return v6 + 5;
}
// 3D3C8: variable 'v14' is possibly undefined
// 3D3EC: variable 'v13' is possibly undefined
// 3D33C: variable 'v12' is possibly undefined

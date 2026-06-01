__int64 __fastcall sub_1606D30(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  char v11; // si
  __int64 v12; // rax
  unsigned int v13; // [rsp+0h] [rbp-28h]
  unsigned int v14; // [rsp+4h] [rbp-24h]

  if ( !a5 )
  {
    v14 = a4;
    v13 = a3;
    v10 = sub_15F1540((__int64)a2, 0);
    a5 = 0;
    a4 = v14;
    v11 = *(_BYTE *)(v10 + 8);
    v12 = v10 - 72;
    a3 = v13;
    if ( (v11 & 0x7Fu) - 34 < 6 )
      a5 = v12;
  }
  v6 = a2[29];
  if ( *(_DWORD *)(v6 + 64) )
  {
    v7 = a2[95];
    if ( (*(_BYTE *)(v6 + 68) & 8) != 0 )
      sub_1AF3080(a1, v7);
    else
      sub_1AF2D50(a1, v7);
    return a1;
  }
  else if ( (*(_BYTE *)(v6 + 60) & 0x10) != 0 )
  {
    v9 = a2[83];
    if ( (*(_BYTE *)(v6 + 89) & 4) != 0 )
      sub_178F5D0(a1, v9);
    else
      sub_178F6C0(a1, v9);
    return a1;
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 96) & 0x10) != 0 )
      sub_1C73F00(a1, a2[100]);
    else
      sub_1606AE0(a1, 1u, a3, a4, a5, (__int64)a2);
    return a1;
  }
}

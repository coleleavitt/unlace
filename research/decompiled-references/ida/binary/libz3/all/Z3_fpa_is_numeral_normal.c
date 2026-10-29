__int64 __fastcall Z3_fpa_is_numeral_normal(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char v6; // r12
  unsigned int v7; // ebp
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // [rsp+0h] [rbp-58h]
  _BYTE v13[8]; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v14[72]; // [rsp+10h] [rbp-48h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_2A1A60();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 > 1
    && (unsigned __int8)sub_15C5180(*(_QWORD *)(a1 + 376), a2, a3, a4, a5, a6) )
  {
    v12 = *(_QWORD *)(a1 + 376) + 24LL;
    sub_181A6B0(v13);
    v7 = sub_15C4FC0(*(_QWORD *)(a1 + 376), a2, (unsigned int)v13, v9, v10, v11);
    if ( (_BYTE)v7 )
      v7 = sub_181BF40(*(_QWORD *)(a1 + 376) + 24LL, v13);
    sub_182EF00(*(_QWORD *)(v12 + 728), v14);
    if ( !v6 )
      return v7;
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    v7 = 0;
    if ( !v6 )
      return v7;
  }
  byte_1C7EBA0 = 1;
  return v7;
}


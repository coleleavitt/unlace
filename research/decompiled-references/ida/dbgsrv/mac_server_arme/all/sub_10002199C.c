/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002199C
// Address: 0x000000010002199C

//----- (000000010002199C) ----------------------------------------------------
__int64 __fastcall sub_10002199C(__int64 a1, __int64 a2)
{
  __int128 v3; // q0
  __int64 v4; // x20
  __int64 v5; // x8
  _BYTE v7[24]; // [xsp+8h] [xbp-38h] BYREF
  char v8; // [xsp+27h] [xbp-19h] BYREF

  v3 = 0u;
  memset(v7, 0, sizeof(v7));
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 < 1 )
  {
    v5 = 0;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 8);
    sub_10001BE58((_QWORD **)v7, v4 + 1, &v8);
    *(_BYTE *)(*(_QWORD *)v7 + v4) = 0;
    v5 = *(_QWORD *)v7;
    v3 = *(_OWORD *)&v7[8];
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v5;
  *(_OWORD *)(a2 + 16) = v3;
  return 0;
}

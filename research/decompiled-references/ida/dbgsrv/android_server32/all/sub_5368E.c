/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5368E
// Address: 0x0005368E

//----- (0005368E) --------------------------------------------------------
__int64 __fastcall sub_5368E(int a1, int a2)
{
  unsigned __int64 v3; // r2
  unsigned __int64 v4; // r0
  __int64 result; // r0
  unsigned __int64 v6; // r2
  __int64 v7; // t0
  __int64 v8; // r2
  __int64 v9; // r0
  __int64 v10; // t0

  if ( *(_BYTE *)a1 || *(_BYTE *)a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = *(_QWORD *)(a1 + 8);
    v7 = v4 / v3;
    v6 = v4 % v3;
    result = v7;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = *(_QWORD *)(a1 + 8);
    v10 = v9 / v8;
    v6 = v9 % v8;
    result = v10;
  }
  *(_QWORD *)(a1 + 8) = v6;
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D4CC
// Address: 0x000000010002D4CC

//----- (000000010002D4CC) ----------------------------------------------------
void __fastcall sub_10002D4CC(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // x8
  __int64 v4; // x8
  unsigned __int64 v5; // [xsp+0h] [xbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 && (v4 = *(_QWORD *)(a1 + 112) + 8 * v3, *(_DWORD *)(v4 - 8) == a2) )
  {
    *(_DWORD *)(v4 - 4) = a3;
  }
  else
  {
    v5 = __PAIR64__(a3, a2);
    sub_10002D544((__int64 **)(a1 + 112), (__int64 *)&v5);
  }
}

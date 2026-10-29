/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C6E4
// Address: 0x000000000007C6E4

//----- (000000000007C6E4) ----------------------------------------------------
void __fastcall sub_7C6E4(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x10
  __int64 v3; // x9
  __int64 v4; // x11

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_QWORD *)(a1 + 64);
  v3 = v2 - 1;
  v4 = v1 + 56 * (v2 - 1);
  *(_QWORD *)a1 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(v4 + 32);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(v4 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 64) = v3;
    sub_39570(v1 + 56 * v3);
  }
}

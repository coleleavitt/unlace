/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C728
// Address: 0x000000000007C728

//----- (000000000007C728) ----------------------------------------------------
void __fastcall sub_7C728(__int64 a1)
{
  __int64 i; // x8
  __int64 v3; // x8
  __int64 v4; // x0
  int v5; // w9

  for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
  {
    v3 = i - 1;
    v4 = *(_QWORD *)(a1 + 56) + 56 * v3;
    *(_QWORD *)a1 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v4 + 32);
    v5 = *(_DWORD *)(v4 + 48);
    *(_QWORD *)(a1 + 64) = v3;
    *(_DWORD *)(a1 + 80) = v5;
    sub_39570(v4);
  }
}

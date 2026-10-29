/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F630
// Address: 0x000000000045F630

//----- (000000000045F630) ----------------------------------------------------
__int64 __fastcall sub_45F630(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // x3
  char v7; // w0

  v6 = (_QWORD *)(a1 + 8);
  v7 = 1;
  if ( !a2 && (_QWORD *)a3 != v6 )
    v7 = *(_DWORD *)(a4 + 32) < *(_DWORD *)(a3 + 32);
  sub_49F830(v7, a4, (_QWORD *)a3, v6);
  ++*(_QWORD *)(a1 + 40);
  return a4;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_GetGR
// Address: 0x00000000000EDC88

//----- (00000000000EDC88) ----------------------------------------------------
__int64 __fastcall Unwind_GetGR(__int64 a1, int a2)
{
  __int64 v2; // x2
  __int64 v3; // x1

  if ( a2 > 97 )
LABEL_2:
    abort();
  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8LL * a2);
  if ( (*(_QWORD *)(a1 + 832) & 0x4000000000000000LL) != 0 && *(_BYTE *)(a1 + v2 + 856) )
    return v3;
  if ( byte_169340[v2] != 8 )
    goto LABEL_2;
  return *(_QWORD *)v3;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A1D30
// Address: 0x00000000000A1D30

//----- (00000000000A1D30) ----------------------------------------------------
__int64 __fastcall sub_A1D30(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // r15d
  int v4; // edx

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  if ( v3 > 0 )
  {
    while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, 0xFFFFFFFFLL) )
      ;
    v4 = *(_DWORD *)(a2 + 4);
    if ( v2 != v4 )
    {
      v3 = -1;
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
        sub_391F0(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v4, v2);
    }
  }
  return (unsigned int)v3;
}

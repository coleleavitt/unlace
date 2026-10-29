/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D9A0
// Address: 0x000000000045D9A0

//----- (000000000045D9A0) ----------------------------------------------------
__int64 __fastcall sub_45D9A0(__int64 a1, __int64 a2)
{
  int v4; // w22
  int v5; // w21
  int v6; // w2

  v4 = *(_DWORD *)(a2 + 4);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  if ( v5 > 0 )
  {
    while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, 0xFFFFFFFFLL) )
      ;
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 != v4 )
    {
      v5 = -1;
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
        sub_40AAF0(a1, (__int64)"unexpected event from thread %d arrived (expected thread %d)\n", v6, v4);
    }
  }
  return (unsigned int)v5;
}

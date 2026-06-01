/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B990
// Address: 0x000000000009B990

//----- (000000000009B990) ----------------------------------------------------
__int64 __fastcall sub_9B990(__int64 a1, __int64 a2)
{
  int v2; // w19
  int v5; // w21
  int v6; // w2

  v2 = *(_DWORD *)(a2 + 4);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  if ( v5 >= 1 )
  {
    while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, 0xFFFFFFFFLL) )
      ;
    v6 = *(_DWORD *)(a2 + 4);
    if ( v2 != v6 )
    {
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
        sub_3A0D8(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v6, v2);
      return (unsigned int)-1;
    }
  }
  return (unsigned int)v5;
}

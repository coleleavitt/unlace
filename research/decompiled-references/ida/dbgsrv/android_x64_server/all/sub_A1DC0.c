/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A1DC0
// Address: 0x00000000000A1DC0

//----- (00000000000A1DC0) ----------------------------------------------------
__int64 __fastcall sub_A1DC0(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // r15d
  int v4; // r14d
  int v5; // edx

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 216LL))(a1, *(unsigned int *)(a2 + 4), 1);
  if ( v2 <= 0 )
  {
    return (unsigned int)v2;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 4);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
    if ( v4 > 0 )
    {
      while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, 0xFFFFFFFFLL) )
        ;
      v5 = *(_DWORD *)(a2 + 4);
      if ( v3 != v5 )
      {
        v4 = -1;
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
          sub_391F0(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v5, v3);
      }
    }
  }
  return (unsigned int)v4;
}

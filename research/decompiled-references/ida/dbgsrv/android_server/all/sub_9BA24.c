/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BA24
// Address: 0x000000000009BA24

//----- (000000000009BA24) ----------------------------------------------------
__int64 __fastcall sub_9BA24(__int64 a1, __int64 a2)
{
  int v4; // w0
  int v5; // w22
  int v6; // w21
  int v7; // w2

  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 216LL))(a1, *(unsigned int *)(a2 + 4), 1);
  if ( v4 < 1 )
  {
    return (unsigned int)v4;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 4);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
    if ( v6 >= 1 )
    {
      while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, 0xFFFFFFFFLL) )
        ;
      v7 = *(_DWORD *)(a2 + 4);
      if ( v5 != v7 )
      {
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
          sub_3A0D8(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v7, v5);
        return (unsigned int)-1;
      }
    }
  }
  return (unsigned int)v6;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E3B4
// Address: 0x000000010004E3B4

//----- (000000010004E3B4) ----------------------------------------------------
__int64 __fastcall sub_10004E3B4(__int64 a1)
{
  __darwin_time_t v2; // x0
  unsigned __int64 v3; // x20

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 160LL))(*(_QWORD *)(a1 + 440), 0);
  v2 = qtime64();
  v3 = ((v2 & 0xFFFFFFFF00000000LL) + 0x500000000LL) | (int)v2;
  while ( qtime64() < v3 )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 440) + 136LL))(
           *(_QWORD *)(a1 + 440),
           a1 + 296,
           100) >= 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 168LL))(*(_QWORD *)(a1 + 440), a1 + 296);
      if ( (*(_DWORD *)(a1 + 316) & 0xFFFFFFF) == 2 )
        return 0;
    }
  }
  return 5;
}

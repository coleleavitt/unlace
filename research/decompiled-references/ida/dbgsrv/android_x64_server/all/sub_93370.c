/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93370
// Address: 0x0000000000093370

//----- (0000000000093370) ----------------------------------------------------
__int64 __fastcall sub_93370(__int64 a1)
{
  __time_t v1; // rax
  unsigned __int64 v2; // r15
  unsigned int v3; // r14d

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 160LL))(*(_QWORD *)(a1 + 440), 0);
  v1 = qtime64();
  v2 = (v1 + 0x500000000LL) & 0xFFFFFFFF00000000LL | (int)v1;
  v3 = 5;
  if ( qtime64() < v2 )
  {
    while ( 1 )
    {
      if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 440) + 136LL))(
             *(_QWORD *)(a1 + 440),
             a1 + 296,
             100) > 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 168LL))(*(_QWORD *)(a1 + 440), a1 + 296);
        if ( (*(_DWORD *)(a1 + 316) & 0xFFFFFFF) == 2 )
          break;
      }
      if ( qtime64() >= v2 )
        return v3;
    }
    return 0;
  }
  return v3;
}

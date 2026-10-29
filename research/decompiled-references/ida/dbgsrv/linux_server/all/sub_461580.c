/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461580
// Address: 0x0000000000461580

//----- (0000000000461580) ----------------------------------------------------
__int64 __fastcall sub_461580(__int64 a1)
{
  __time_t v1; // rax
  unsigned __int64 v2; // rbp

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 160LL))(*(_QWORD *)(a1 + 440), 0);
  v1 = sub_481E10();
  v2 = (int)v1 | ((unsigned __int64)(unsigned int)(HIDWORD(v1) + 5) << 32);
  while ( 1 )
  {
    if ( sub_481E10() >= v2 )
      return 5;
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 440) + 136LL))(
           *(_QWORD *)(a1 + 440),
           a1 + 296,
           100) > 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 168LL))(*(_QWORD *)(a1 + 440), a1 + 296);
      if ( (*(_DWORD *)(a1 + 316) & 0xFFFFFFF) == 2 )
        break;
    }
  }
  return 0;
}

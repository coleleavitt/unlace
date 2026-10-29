/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466A98
// Address: 0x0000000000466A98

//----- (0000000000466A98) ----------------------------------------------------
__int64 __fastcall sub_466A98(__int64 a1)
{
  __int64 v2; // x21
  __time_t v3; // x0
  unsigned __int64 v4; // x19

  v2 = a1 + 296;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 160LL))(*(_QWORD *)(a1 + 440), 0);
  v3 = sub_4926B8();
  v4 = (int)v3 | ((unsigned __int64)(unsigned int)(HIDWORD(v3) + 5) << 32);
  while ( 1 )
  {
    if ( v4 <= sub_4926B8() )
      return 5;
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 440) + 136LL))(
           *(_QWORD *)(a1 + 440),
           v2,
           100) > 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 168LL))(*(_QWORD *)(a1 + 440), v2);
      if ( (*(_DWORD *)(a1 + 316) & 0xFFFFFFF) == 2 )
        break;
    }
  }
  return 0;
}

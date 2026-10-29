/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063400
// Address: 0x0000000140063400

//----- (0000000140063400) ----------------------------------------------------
__int64 __fastcall sub_140063400(__int64 a1)
{
  _BYTE v3[560]; // [rsp+20h] [rbp-248h] BYREF

  while ( !(unsigned int)common_find_next_wide<_wfinddata64_t>(*(_QWORD *)(a1 + 584), v3) )
  {
    sub_140063480(a1, (__int64)v3);
    if ( (*(_BYTE *)(a1 + 592) & 0x10) != 0 || (*(_BYTE *)a1 & 0x10) == 0 )
      return 0;
  }
  return 0xFFFFFFFFLL;
}
// 14007F3F8: using guessed type __int64 __fastcall common_find_next_wide<_wfinddata64_t>(_QWORD, _QWORD);

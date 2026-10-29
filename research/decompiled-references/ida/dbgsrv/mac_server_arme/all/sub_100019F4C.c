/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019F4C
// Address: 0x0000000100019F4C

//----- (0000000100019F4C) ----------------------------------------------------
__int64 __fastcall sub_100019F4C(__int64 a1)
{
  void *v2; // x0

  *(_QWORD *)a1 = off_10009D548;
  if ( *(_BYTE *)(a1 + 48) == 1 )
    close_linput(*(void **)(a1 + 32));
  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  return a1;
}
// 10009D548: using guessed type void (__fastcall __noreturn *off_10009D548[2])();

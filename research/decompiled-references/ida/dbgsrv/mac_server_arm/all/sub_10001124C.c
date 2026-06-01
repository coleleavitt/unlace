/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001124C
// Address: 0x000000010001124C

//----- (000000010001124C) ----------------------------------------------------
__int64 __fastcall sub_10001124C(__int64 a1)
{
  void *v2; // x0

  *(_QWORD *)a1 = off_100099508;
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
// 100099508: using guessed type void (__fastcall __noreturn *off_100099508[2])();

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B270
// Address: 0x000000010001B270

//----- (000000010001B270) ----------------------------------------------------
void __fastcall sub_10001B270(__int64 a1)
{
  void *v2; // rdi

  *(_QWORD *)a1 = off_1000A7DB8;
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
}
// 1000A7DB8: using guessed type void (__fastcall __noreturn *off_1000A7DB8[2])();

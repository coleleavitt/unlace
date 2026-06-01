/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008BCC
// Address: 0x0000000100008BCC

//----- (0000000100008BCC) ----------------------------------------------------
__int64 __fastcall sub_100008BCC(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0

  *(_QWORD *)a1 = off_100098FC8;
  v2 = *(void **)(a1 + 184);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 200) = 0;
  }
  v3 = *(void **)(a1 + 144);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  *(_QWORD *)a1 = off_100098F88;
  sub_100008C50(a1 + 32, *(_QWORD **)(a1 + 40));
  return a1;
}
// 100098F88: using guessed type __int64 (__fastcall *off_100098F88[6])();
// 100098FC8: using guessed type __int64 (__fastcall *off_100098FC8[6])();

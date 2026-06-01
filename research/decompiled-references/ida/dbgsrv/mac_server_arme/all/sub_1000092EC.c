/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000092EC
// Address: 0x00000001000092EC

//----- (00000001000092EC) ----------------------------------------------------
__int64 __fastcall sub_1000092EC(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0

  *(_QWORD *)a1 = off_10009D008;
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
  *(_QWORD *)a1 = off_10009CFC8;
  sub_10000938C(a1 + 32, *(_QWORD **)(a1 + 40));
  return a1;
}
// 10009CFC8: using guessed type __int64 (__fastcall *off_10009CFC8[6])();
// 10009D008: using guessed type __int64 (__fastcall *off_10009D008[6])();

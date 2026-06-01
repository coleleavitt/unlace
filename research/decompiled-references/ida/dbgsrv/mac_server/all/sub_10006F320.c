/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F320
// Address: 0x000000010006F320

//----- (000000010006F320) ----------------------------------------------------
void __fastcall sub_10006F320(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi

  *a1 = &off_1000AA818;
  a1[8] = 0;
  a1[10] = 0;
  v2 = a1[11];
  if ( v2 )
  {
    if ( a1[12] )
    {
      (*(void (__fastcall **)(_QWORD))(xmmword_1000AE410 + 344))(a1[12]);
      v2 = a1[11];
    }
    (*(void (__fastcall **)(__int64))(xmmword_1000AE410 + 224))(v2);
    a1[11] = 0;
  }
  sub_10006AB40(a1 + 4);
  v3 = (void *)a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
    a1[5] = 0;
    a1[7] = 0;
  }
}
// 1000AA818: using guessed type __int64 (__fastcall *off_1000AA818)();
// 1000AE410: using guessed type __int128 xmmword_1000AE410;

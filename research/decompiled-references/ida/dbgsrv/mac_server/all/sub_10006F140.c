/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F140
// Address: 0x000000010006F140

//----- (000000010006F140) ----------------------------------------------------
__int64 __fastcall sub_10006F140(_QWORD *a1, int a2)
{
  __int64 v3; // rdi

  v3 = a1[11];
  if ( v3 )
  {
    if ( a1[12] )
    {
      (*(void (__fastcall **)(_QWORD))(xmmword_1000AE410 + 344))(a1[12]);
      v3 = a1[11];
    }
    if ( a2 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(xmmword_1000AE410 + 296))(v3);
      v3 = a1[11];
    }
    (*(void (__fastcall **)(__int64))(xmmword_1000AE410 + 224))(v3);
    a1[11] = 0;
  }
  return sub_10006AB40(a1 + 4);
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;

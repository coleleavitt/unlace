/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474F80
// Address: 0x0000000000474F80

//----- (0000000000474F80) ----------------------------------------------------
__int64 __fastcall sub_474F80(_QWORD *a1, int a2)
{
  __int64 v3; // rdi

  v3 = a1[11];
  if ( v3 )
  {
    if ( a1[12] )
    {
      (*(void (__fastcall **)(_QWORD))(qword_4C83E0 + 344))(a1[12]);
      v3 = a1[11];
    }
    if ( a2 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(qword_4C83E0 + 296))(v3);
      v3 = a1[11];
    }
    (*(void (__fastcall **)(__int64))(qword_4C83E0 + 224))(v3);
    a1[11] = 0;
  }
  return sub_46F0A0(a1 + 4);
}
// 4C83E0: using guessed type __int64 qword_4C83E0;

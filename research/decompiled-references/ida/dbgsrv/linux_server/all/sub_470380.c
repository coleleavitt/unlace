/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470380
// Address: 0x0000000000470380

//----- (0000000000470380) ----------------------------------------------------
__int64 __fastcall sub_470380(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx

  v2 = a1 + 16;
  if ( a2 != qword_491808 && !sub_488F60((__int64)a2) )
    return 0;
  return v2;
}
// 491808: using guessed type __int64 qword_491808[3];

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D370
// Address: 0x000000000043D370

//----- (000000000043D370) ----------------------------------------------------
__int64 __fastcall sub_43D370(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x19

  v4 = (unsigned int)sub_43D310(a1, a2);
  return v4 + (sub_43D310(a1, a2 + 4) << 32);
}

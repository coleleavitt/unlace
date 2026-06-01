/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D298
// Address: 0x000000000043D298

//----- (000000000043D298) ----------------------------------------------------
__int64 __fastcall sub_43D298(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 <= 0 )
    sub_406900();
  return *(unsigned __int8 *)(*a1 + a2);
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_498AF8
// Address: 0x0000000000498AF8

//----- (0000000000498AF8) ----------------------------------------------------
bool __fastcall sub_498AF8(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *v2; // x7
  unsigned __int64 **v3; // x9
  _BOOL8 result; // x0
  unsigned __int64 *v5; // x8

  v2 = *(unsigned __int64 **)a2;
  if ( *(_QWORD *)a2 == *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8) )
    return 1;
  v3 = a1;
  do
    result = sub_4963C8(v3, v2);
  while ( result && v2 != v5 );
  return result;
}
// 498B18: variable 'v2' is possibly undefined
// 498B18: variable 'v5' is possibly undefined
// 498B28: variable 'v3' is possibly undefined

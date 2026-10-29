/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D3A8
// Address: 0x000000000043D3A8

//----- (000000000043D3A8) ----------------------------------------------------
unsigned __int64 __fastcall sub_43D3A8(unsigned __int64 result)
{
  unsigned __int64 v1; // x1
  unsigned __int64 v2; // x2

  v1 = *(_QWORD *)(result + 8);
  if ( v1 > 2 )
    goto LABEL_4;
  result = (unsigned __int8)under_debugger;
  if ( !under_debugger )
    sub_492270(278);
  while ( 1 )
  {
    __break(0x3E8u);
LABEL_4:
    v1 -= 2LL;
    v2 = v1 - *(__int16 *)(*(_QWORD *)result + v1);
    *(_QWORD *)(result + 24) = v2;
    if ( v2 && v1 >= v2 )
      break;
    result = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(279);
  }
  return result;
}
// 52451C: using guessed type char under_debugger;

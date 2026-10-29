/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463638
// Address: 0x0000000000463638

//----- (0000000000463638) ----------------------------------------------------
__int64 __fastcall sub_463638(__int64 a1)
{
  __int64 (*v2)(); // x2
  __int64 result; // x0

  v2 = *(__int64 (**)())(**(_QWORD **)(a1 + 440) + 504LL);
  if ( v2 == sub_407190 )
    return sub_463598(a1 + 192, (__int64)"Error preparing debugger server to handle a broken connection\n");
  result = v2();
  if ( !(_BYTE)result )
    return sub_463598(a1 + 192, (__int64)"Error preparing debugger server to handle a broken connection\n");
  return result;
}

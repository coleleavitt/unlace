/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CA30
// Address: 0x000000000008CA30

//----- (000000000008CA30) ----------------------------------------------------
__int64 __fastcall sub_8CA30(__int64 result)
{
  __int64 v1; // x19

  if ( byte_166BF8 )
  {
    v1 = result;
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(result + 440) + 504LL))(*(_QWORD *)(result + 440));
    if ( (result & 1) == 0 )
      return sub_8CA78((_BYTE *)(v1 + 192), "Error preparing debugger server to handle a broken connection\n");
  }
  return result;
}
// 166BF8: using guessed type char byte_166BF8;

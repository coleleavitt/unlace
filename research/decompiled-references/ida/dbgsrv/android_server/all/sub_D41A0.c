/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D41A0
// Address: 0x00000000000D41A0

//----- (00000000000D41A0) ----------------------------------------------------
_QWORD *__fastcall sub_D41A0(_QWORD *result)
{
  __int64 v1; // x8

  if ( result )
  {
    if ( result[18] )
    {
      v1 = result[13];
      if ( v1 && v1 != 0xFFFF && result[16] == v1 )
        return nullptr;
      else
        return (_QWORD *)result[17];
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}

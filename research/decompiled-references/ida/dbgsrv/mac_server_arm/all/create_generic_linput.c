/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_generic_linput
// Address: 0x000000010006C714

//----- (000000010006C714) ----------------------------------------------------
_QWORD *__fastcall create_generic_linput(_QWORD *result)
{
  _QWORD *v1; // x20
  _QWORD *v2; // x19

  if ( result )
  {
    if ( (result[1] & 0x8000000000000000LL) != 0 || (result[2] & 0x80000000) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*result + 16LL))(result);
      return nullptr;
    }
    else
    {
      v1 = result;
      v2 = operator new(0x38u);
      *(_DWORD *)v2 = 4;
      v2[1] = v1;
      sub_10006C3F4((__int64)v2);
      return v2;
    }
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DF80
// Address: 0x0043DF80

//----- (0043DF80) --------------------------------------------------------
_DWORD **__thiscall sub_43DF80(_DWORD *this)
{
  _DWORD **result; // eax
  _DWORD **v3; // edi

  result = (_DWORD **)*this;
  if ( (_DWORD *)*this != this )
  {
    do
    {
      v3 = (_DWORD **)*result;
      *result[1] = *result;
      (*result)[1] = result[1];
      sub_453A20(result);
      --*(this + 2);
      result = v3;
    }
    while ( v3 != this );
  }
  return result;
}

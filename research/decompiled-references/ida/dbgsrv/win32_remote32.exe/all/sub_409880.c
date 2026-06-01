/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409880
// Address: 0x00409880

//----- (00409880) --------------------------------------------------------
_DWORD *__thiscall sub_409880(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  void *v4; // ecx

  result = (_DWORD *)*(this + 1);
  if ( result )
  {
    v3 = result + 14;
    v4 = (void *)result[14];
    if ( v4 )
    {
      result[15] = 0;
      sub_453A20(v4);
      *v3 = 0;
      v3[2] = 0;
      result = (_DWORD *)*(this + 1);
    }
    if ( result )
      return (_DWORD *)sub_4627F2(result);
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E000
// Address: 0x0043E000

//----- (0043E000) --------------------------------------------------------
_DWORD **__thiscall sub_43E000(_DWORD *this)
{
  void *v2; // eax
  void *v3; // eax
  _DWORD *v4; // edi
  _DWORD **result; // eax
  _DWORD **v6; // esi

  *this = &off_48DA6C;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 5) = 0;
  v2 = (void *)*(this + 1038);
  if ( v2 )
  {
    *(this + 1039) = 0;
    sub_453A20(v2);
    *(this + 1038) = 0;
    *(this + 1040) = 0;
  }
  v3 = (void *)*(this + 1035);
  if ( v3 )
  {
    *(this + 1036) = 0;
    sub_453A20(v3);
    *(this + 1035) = 0;
    *(this + 1037) = 0;
  }
  v4 = this + 1031;
  result = (_DWORD **)*(this + 1031);
  if ( result != this + 1031 )
  {
    do
    {
      v6 = (_DWORD **)*result;
      *result[1] = *result;
      (*result)[1] = result[1];
      sub_453A20(result);
      --v4[2];
      result = v6;
    }
    while ( v6 != v4 );
  }
  return result;
}
// 48DA6C: using guessed type _UNKNOWN *off_48DA6C;

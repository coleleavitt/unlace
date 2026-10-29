/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426170
// Address: 0x00426170

//----- (00426170) --------------------------------------------------------
_DWORD *__thiscall sub_426170(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  bool v4; // cf
  _DWORD *result; // eax

  *this = 0;
  *(this + 1) = 0;
  v3 = sub_4627C2(0x38u);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 6) = 257;
  *this = v3;
  *(this + 2) = 1;
  *(this + 3) = a2;
  v4 = *(this + 3) < sub_428030()[11];
  result = this;
  if ( !v4 )
    *(this + 3) = 0;
  return result;
}

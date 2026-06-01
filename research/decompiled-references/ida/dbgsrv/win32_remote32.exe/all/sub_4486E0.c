/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4486E0
// Address: 0x004486E0

//----- (004486E0) --------------------------------------------------------
char __thiscall sub_4486E0(_DWORD *this)
{
  char result; // al
  _BYTE *v3; // edx
  bool v4; // cf
  _BYTE *v5; // ecx

  result = 0;
  v3 = (_BYTE *)*this;
  v4 = *this < *(this + 1);
  if ( *this < *(this + 1) )
    result = *v3;
  v5 = v3 + 1;
  if ( !v4 )
    v5 = v3;
  *this = v5;
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FC10
// Address: 0x0043FC10

//----- (0043FC10) --------------------------------------------------------
void *__thiscall sub_43FC10(void *this, int a2, int a3)
{
  void *result; // eax
  _DWORD *v4; // esi
  void *v5; // edi

  result = this;
  v4 = (_DWORD *)a3;
  if ( !*(_BYTE *)(a3 + 13) )
  {
    do
    {
      sub_43FC10(a2, v4[2]);
      v5 = v4;
      v4 = (_DWORD *)*v4;
      sub_43FCA0(a2, (int)v5 + 16);
      sub_4627F2(v5);
      result = this;
    }
    while ( !*((_BYTE *)v4 + 13) );
  }
  return result;
}

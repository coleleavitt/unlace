/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4089B0
// Address: 0x004089B0

//----- (004089B0) --------------------------------------------------------
void *__thiscall sub_4089B0(void *this, int a2, int *a3)
{
  void *result; // eax
  int *i; // esi
  _DWORD *v5; // edi

  result = this;
  for ( i = a3; !*((_BYTE *)i + 13); result = this )
  {
    sub_4089B0(a2, i[2]);
    v5 = i;
    i = (int *)*i;
    sub_40AD70(v5 + 5);
    sub_4627F2(v5);
  }
  return result;
}

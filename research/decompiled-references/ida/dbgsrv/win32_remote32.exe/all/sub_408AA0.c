/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408AA0
// Address: 0x00408AA0

//----- (00408AA0) --------------------------------------------------------
void *__thiscall sub_408AA0(void *this, int a2, int *a3)
{
  void *result; // eax
  int *i; // edi
  _DWORD *v5; // esi
  void *v6; // eax

  result = this;
  for ( i = a3; !*((_BYTE *)i + 13); result = this )
  {
    sub_408AA0(a2, i[2]);
    v5 = i;
    i = (int *)*i;
    v6 = (void *)v5[14];
    if ( v6 )
    {
      v5[15] = 0;
      sub_453A20(v6);
      v5[14] = 0;
      v5[16] = 0;
    }
    sub_4627F2(v5);
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C2E0
// Address: 0x0041C2E0

//----- (0041C2E0) --------------------------------------------------------
void *__thiscall sub_41C2E0(void *this, int a2, int *a3)
{
  void *result; // eax
  int *i; // edi
  _DWORD *v5; // esi
  void *v6; // eax

  result = this;
  for ( i = a3; !*((_BYTE *)i + 13); result = this )
  {
    sub_41C2E0(a2, i[2]);
    v5 = i;
    i = (int *)*i;
    v6 = (void *)v5[4];
    if ( v6 )
    {
      v5[5] = 0;
      sub_453A20(v6);
      v5[4] = 0;
      v5[6] = 0;
    }
    sub_4627F2(v5);
  }
  return result;
}

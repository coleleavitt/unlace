/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C250
// Address: 0x0041C250

//----- (0041C250) --------------------------------------------------------
void *__thiscall sub_41C250(void *this, int a2, char *a3)
{
  void *result; // eax
  char *i; // esi
  char *v5; // edi

  result = this;
  for ( i = a3; !i[13]; result = this )
  {
    sub_41C250(result, a2, *((char **)i + 2));
    v5 = i;
    i = *(char **)i;
    sub_423B70((int)(v5 + 24));
    sub_4627F2(v5);
  }
  return result;
}

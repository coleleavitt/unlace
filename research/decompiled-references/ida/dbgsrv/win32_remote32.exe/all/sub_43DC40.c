/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DC40
// Address: 0x0043DC40

//----- (0043DC40) --------------------------------------------------------
int *__thiscall sub_43DC40(int *this, int a2)
{
  int *v3; // esi
  void *v4; // eax

  v3 = this + 2;
  if ( *this >= -1 )
  {
    v4 = (void *)*v3;
    if ( *v3 )
    {
      *(this + 3) = 0;
      sub_453A20(v4);
      *v3 = 0;
      v3[2] = 0;
    }
  }
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
  }
  *this = a2;
  if ( a2 < -1 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3216);
  }
  return v3;
}
// 4B70F0: using guessed type char byte_4B70F0;

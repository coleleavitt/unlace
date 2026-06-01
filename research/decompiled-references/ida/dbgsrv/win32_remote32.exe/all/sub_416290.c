/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416290
// Address: 0x00416290

//----- (00416290) --------------------------------------------------------
int __thiscall sub_416290(int *this, unsigned int a2, unsigned int a3, int a4)
{
  void **v5; // esi
  void *v6; // eax
  int result; // eax

  v5 = (void **)(this + 2);
  if ( *this >= -1 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      *(this + 3) = 0;
      sub_453A20(v6);
      *v5 = nullptr;
      v5[2] = nullptr;
    }
    *this = -2;
  }
  if ( v5 )
  {
    *v5 = nullptr;
    v5[1] = nullptr;
    v5[2] = nullptr;
    sub_401600((int)v5, a2, a3);
  }
  result = a4;
  *this = a4;
  if ( a4 < -1 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3214);
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;

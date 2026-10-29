/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416360
// Address: 0x00416360

//----- (00416360) --------------------------------------------------------
int __thiscall sub_416360(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  sub_45B9B0(this, a2);
  v4 = *(this + 4) & 0xFFFFFFF;
  if ( v4 != 2 && v4 != 4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3296);
  }
  *(this + 5) = a3;
  return a3;
}
// 4B70F0: using guessed type char byte_4B70F0;

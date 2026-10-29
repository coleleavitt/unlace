/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AB10
// Address: 0x0040AB10

//----- (0040AB10) --------------------------------------------------------
void __thiscall sub_40AB10(void *this)
{
  void *v2; // eax
  void *v3; // eax

  if ( *((_DWORD *)this + 9) )
  {
    sub_416030((_DWORD *)this + 9, 0);
    sub_453A20(*((void **)this + 9));
    *((_DWORD *)this + 9) = 0;
    *((_DWORD *)this + 11) = 0;
  }
  v2 = *((void **)this + 6);
  if ( v2 )
  {
    *((_DWORD *)this + 7) = 0;
    sub_453A20(v2);
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 8) = 0;
  }
  if ( *((_DWORD *)this + 3) )
  {
    sub_415F90((_DWORD *)this + 3, 0);
    sub_453A20(*((void **)this + 3));
    *((_DWORD *)this + 3) = 0;
    *((_DWORD *)this + 5) = 0;
  }
  v3 = *(void **)this;
  if ( *(_DWORD *)this )
  {
    *((_DWORD *)this + 1) = 0;
    sub_453A20(v3);
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 2) = 0;
  }
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415BB0
// Address: 0x00415BB0

//----- (00415BB0) --------------------------------------------------------
void __thiscall sub_415BB0(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void *v3; // [esp-8h] [ebp-Ch]
  void *v4; // [esp-4h] [ebp-8h]

  v2 = (void (__thiscall ***)(_DWORD, int))*(this + 65);
  if ( v2 )
  {
    (**v2)(v2, 1);
    if ( *(this + 66) )
    {
      v4 = (void *)*(this + 66);
      *(this + 67) = 0;
      sub_453A20(v4);
      *(this + 66) = 0;
      *(this + 68) = 0;
    }
    if ( *(this + 69) )
    {
      sub_415F90(this + 69, 0);
      sub_453A20((void *)*(this + 69));
      *(this + 69) = 0;
      *(this + 71) = 0;
    }
    if ( *(this + 72) )
    {
      v3 = (void *)*(this + 72);
      *(this + 73) = 0;
      sub_453A20(v3);
      *(this + 72) = 0;
      *(this + 74) = 0;
    }
    if ( *(this + 75) )
    {
      sub_416030(this + 75, 0);
      sub_453A20((void *)*(this + 75));
      *(this + 75) = 0;
      *(this + 77) = 0;
    }
    *(this + 65) = 0;
  }
  else
  {
    *(this + 65) = 0;
  }
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441930
// Address: 0x00441930

//----- (00441930) --------------------------------------------------------
void __thiscall sub_441930(char *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  unsigned int v3; // edi
  int v4; // ebx
  void *v5; // [esp-4h] [ebp-8h]

  v2 = *(void (__thiscall ****)(_DWORD, int))this;
  if ( v2 )
  {
    (**v2)(v2, 1);
    *(_DWORD *)this = 0;
  }
  sub_464890((__m128i *)(this + 4), 0, 0x30u);
  if ( *((_DWORD *)this + 13) )
  {
    sub_447000((_DWORD *)this + 13, 0);
    sub_453A20(*((void **)this + 13));
    *((_DWORD *)this + 13) = 0;
    *((_DWORD *)this + 15) = 0;
  }
  v3 = 0;
  if ( *((_DWORD *)this + 36) )
  {
    v4 = 0;
    do
    {
      sub_453A20(*(void **)(*((_DWORD *)this + 35) + v4 + 28));
      ++v3;
      v4 += 40;
    }
    while ( v3 < *((_DWORD *)this + 36) );
  }
  if ( *((_DWORD *)this + 16) )
  {
    v5 = *((void **)this + 16);
    *((_DWORD *)this + 17) = 0;
    sub_453A20(v5);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 18) = 0;
  }
  if ( *((_DWORD *)this + 38) )
  {
    sub_415F90((_DWORD *)this + 38, 0);
    sub_453A20(*((void **)this + 38));
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 40) = 0;
  }
}

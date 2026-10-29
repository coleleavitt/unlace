/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428930
// Address: 0x00428930

//----- (00428930) --------------------------------------------------------
void __thiscall sub_428930(int this, unsigned int a2)
{
  unsigned int v3; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // ebx
  bool v7; // sf
  int v8; // ecx
  int v9; // ebp
  _DWORD *v10; // edx
  _DWORD *v11; // esi

  v3 = *(_DWORD *)(this + 8);
  if ( a2 > v3 )
  {
    v4 = sub_453B00(this, nullptr, a2, 4u);
    v5 = *(_DWORD *)(this + 4);
    v6 = v4;
    v7 = v5 - 1 < 0;
    v8 = v5 - 1;
    v9 = *(_DWORD *)(this + 8);
    v10 = *(_DWORD **)this;
    *(_DWORD *)(this + 8) = v3;
    v11 = v4;
    if ( !v7 )
    {
      do
      {
        --v8;
        *v11++ = *v10++;
      }
      while ( v8 >= 0 );
    }
    sub_453A20(*(void **)this);
    *(_DWORD *)(this + 8) = v9;
    *(_DWORD *)this = v6;
  }
}

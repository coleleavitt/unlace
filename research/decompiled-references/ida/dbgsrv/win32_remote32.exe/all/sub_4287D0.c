/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4287D0
// Address: 0x004287D0

//----- (004287D0) --------------------------------------------------------
unsigned int __thiscall sub_4287D0(int this, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int v4; // esi
  _DWORD *v5; // ebp
  int v6; // ebx
  int v7; // eax
  _DWORD *v8; // ecx
  int *v9; // esi
  int v10; // eax
  int v11; // edx
  int i; // [esp+Ch] [ebp+4h]

  result = a2;
  v4 = *(_DWORD *)(this + 8);
  if ( a2 > v4 )
  {
    v5 = sub_453B00(this, nullptr, a2, 8u);
    v6 = *(_DWORD *)(this + 4) - 1;
    v7 = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = v4;
    v8 = v5;
    v9 = *(int **)this;
    for ( i = v7; v6 >= 0; *(v8 - 1) = v11 )
    {
      --v6;
      v10 = *v9;
      v11 = v9[1];
      v9 += 2;
      *v8 = v10;
      v8 += 2;
    }
    sub_453A20(*(void **)this);
    *(_DWORD *)this = v5;
    *(_DWORD *)(this + 8) = i;
    return i;
  }
  return result;
}

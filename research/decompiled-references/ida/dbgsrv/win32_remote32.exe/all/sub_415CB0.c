/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415CB0
// Address: 0x00415CB0

//----- (00415CB0) --------------------------------------------------------
void __thiscall sub_415CB0(int this, int a2)
{
  unsigned int v3; // edi
  void *v4; // [esp-4h] [ebp-Ch]

  if ( a2 )
  {
    v3 = a2 + 1;
    if ( (unsigned int)(a2 + 1) <= *(_DWORD *)(this + 4) )
    {
      if ( a2 + 1 != *(_DWORD *)(this + 4) && (unsigned int)(a2 + 1) < *(_DWORD *)(this + 4) )
        *(_DWORD *)(this + 4) = v3;
      *(_BYTE *)(a2 + *(_DWORD *)this) = 0;
    }
    else
    {
      if ( v3 > *(_DWORD *)(this + 8) )
        *(_DWORD *)this = sub_453B00(this, *(void **)this, a2 + 1, 1u);
      sub_464890((__m128i *)(*(_DWORD *)(this + 4) + *(_DWORD *)this), 0, v3 - *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = v3;
      *(_BYTE *)(a2 + *(_DWORD *)this) = 0;
    }
  }
  else if ( *(_DWORD *)this )
  {
    v4 = *(void **)this;
    *(_DWORD *)(this + 4) = 0;
    sub_453A20(v4);
    *(_DWORD *)this = 0;
    *(_DWORD *)(this + 8) = 0;
  }
}

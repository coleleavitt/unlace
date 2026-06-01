/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437840
// Address: 0x00437840

//----- (00437840) --------------------------------------------------------
void __thiscall sub_437840(int this, int a2)
{
  signed int v3; // edi
  void *v4; // [esp-4h] [ebp-Ch]

  v3 = *(_DWORD *)(this + 4) - a2;
  if ( v3 > 1 )
  {
    if ( (unsigned int)v3 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, v3, 1u);
    *(_DWORD *)(this + 4) = v3;
    *(_BYTE *)(*(_DWORD *)this + v3 - 1) = 0;
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

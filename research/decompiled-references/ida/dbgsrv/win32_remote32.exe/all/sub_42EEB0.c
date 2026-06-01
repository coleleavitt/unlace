/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EEB0
// Address: 0x0042EEB0

//----- (0042EEB0) --------------------------------------------------------
unsigned int __thiscall sub_42EEB0(int this, unsigned int a2, _OWORD *a3)
{
  unsigned int result; // eax
  int v5; // ecx
  unsigned int v6; // edx

  if ( a2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 0x10u);
  result = *(_DWORD *)(this + 4);
  if ( result < a2 )
  {
    v5 = 16 * result;
    v6 = a2 - result;
    do
    {
      result = *(_DWORD *)this;
      v5 += 16;
      *(_OWORD *)(*(_DWORD *)this + v5 - 16) = *a3;
      --v6;
    }
    while ( v6 );
  }
  *(_DWORD *)(this + 4) = a2;
  return result;
}

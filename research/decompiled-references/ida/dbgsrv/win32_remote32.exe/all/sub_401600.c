/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401600
// Address: 0x00401600

//----- (00401600) --------------------------------------------------------
int __thiscall sub_401600(int this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi

  if ( a3 )
  {
    v4 = *(_DWORD *)(this + 4);
    v5 = v4 + a3;
    if ( v4 + a3 < v4 )
      v5 = 0x7FFFFFFF;
    if ( v5 <= v4 )
    {
      if ( v5 == v4 || v5 >= v4 )
        goto LABEL_11;
    }
    else
    {
      if ( v5 > *(_DWORD *)(this + 8) )
        *(_DWORD *)this = sub_453B00(this, *(void **)this, v5, 1u);
      sub_464890((__m128i *)(*(_DWORD *)(this + 4) + *(_DWORD *)this), 0, v5 - *(_DWORD *)(this + 4));
    }
    *(_DWORD *)(this + 4) = v5;
LABEL_11:
    sub_464310(v4 + *(_DWORD *)this, a2, a3);
  }
  return this;
}

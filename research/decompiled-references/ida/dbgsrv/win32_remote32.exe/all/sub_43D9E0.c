/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D9E0
// Address: 0x0043D9E0

//----- (0043D9E0) --------------------------------------------------------
void __thiscall sub_43D9E0(int this, unsigned int a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // ecx
  unsigned int v8; // [esp+10h] [ebp-10h]

  v4 = a2;
  if ( a2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 0x18u);
  v5 = *(_DWORD *)(this + 4);
  if ( v5 < a2 )
  {
    v6 = 24 * v5;
    v8 = a2 - v5;
    do
    {
      v7 = v6 + *(_DWORD *)this;
      *(_DWORD *)v7 = -2;
      *(_OWORD *)(v7 + 8) = 0;
      sub_43AA50((int *)v7, a3);
      v6 += 24;
      --v8;
    }
    while ( v8 );
    v4 = a2;
  }
  *(_DWORD *)(this + 4) = v4;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423000
// Address: 0x00423000

//----- (00423000) --------------------------------------------------------
void __thiscall sub_423000(int this, unsigned int a2, char *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // [esp-8h] [ebp-28h]
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
      *(_BYTE *)v7 = 2;
      *(_OWORD *)(v7 + 8) = 0;
      sub_423670((char *)v7, a3);
      v6 += 24;
      --v8;
    }
    while ( v8 );
    v4 = a2;
  }
  *(_DWORD *)(this + 4) = v4;
}

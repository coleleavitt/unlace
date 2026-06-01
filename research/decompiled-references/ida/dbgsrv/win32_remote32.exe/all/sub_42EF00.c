/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EF00
// Address: 0x0042EF00

//----- (0042EF00) --------------------------------------------------------
unsigned int __thiscall sub_42EF00(int this, unsigned int a2, unsigned int *a3)
{
  unsigned int result; // eax
  int v5; // edi
  unsigned int v6; // ecx
  _DWORD *v7; // esi
  signed int v8; // eax
  LPVOID v9; // eax
  unsigned int v10; // [esp+10h] [ebp-14h]
  unsigned int v11; // [esp+14h] [ebp-10h]

  if ( a2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 0xCu);
  result = *(_DWORD *)(this + 4);
  if ( result >= a2 )
  {
    *(_DWORD *)(this + 4) = a2;
  }
  else
  {
    v5 = 12 * result;
    v6 = a2 - result;
    v10 = a2 - result;
    do
    {
      v7 = (_DWORD *)(v5 + *(_DWORD *)this);
      *v7 = 0;
      v7[1] = 0;
      v7[2] = 0;
      v8 = a3[1];
      v11 = v8;
      if ( v8 )
      {
        v9 = sub_4539E0(v8);
        v7[2] = v11;
        *v7 = v9;
        sub_464310((unsigned int)v9, *a3, v11);
        v6 = v10;
        v7[1] = v11;
      }
      v5 += 12;
      v10 = --v6;
    }
    while ( v6 );
    *(_DWORD *)(this + 4) = a2;
    return a2;
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4473D0
// Address: 0x004473D0

//----- (004473D0) --------------------------------------------------------
void __thiscall sub_4473D0(int this, unsigned int a2, int a3)
{
  unsigned int v4; // ecx
  int v6; // eax
  unsigned int v7; // edx
  int v8; // esi
  signed int v9; // eax
  LPVOID v10; // eax
  unsigned int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  unsigned int v13; // [esp+30h] [ebp+Ch]

  if ( a2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 0x24u);
  v4 = *(_DWORD *)(this + 4);
  if ( v4 >= a2 )
  {
    *(_DWORD *)(this + 4) = a2;
  }
  else
  {
    v6 = 36 * v4;
    v7 = a2 - v4;
    v12 = 36 * v4;
    v11 = a2 - v4;
    do
    {
      v8 = v6 + *(_DWORD *)this;
      *(_DWORD *)v8 = *(_DWORD *)a3;
      *(_DWORD *)(v8 + 4) = 0;
      *(_DWORD *)(v8 + 8) = 0;
      *(_DWORD *)(v8 + 12) = 0;
      v9 = *(_DWORD *)(a3 + 8);
      v13 = v9;
      if ( v9 )
      {
        v10 = sub_4539E0(v9);
        *(_DWORD *)(v8 + 4) = v10;
        *(_DWORD *)(v8 + 12) = v13;
        sub_464310((unsigned int)v10, *(_DWORD *)(a3 + 4), v13);
        v7 = v11;
        *(_DWORD *)(v8 + 8) = v13;
      }
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(a3 + 16);
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(a3 + 20);
      *(_BYTE *)(v8 + 24) = *(_BYTE *)(a3 + 24);
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(a3 + 28);
      *(_DWORD *)(v8 + 32) = *(_DWORD *)(a3 + 32);
      v6 = v12 + 36;
      --v7;
      v12 += 36;
      v11 = v7;
    }
    while ( v7 );
    *(_DWORD *)(this + 4) = a2;
  }
}

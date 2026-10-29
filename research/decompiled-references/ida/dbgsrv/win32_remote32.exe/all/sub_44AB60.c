/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44AB60
// Address: 0x0044AB60

//----- (0044AB60) --------------------------------------------------------
unsigned int __thiscall sub_44AB60(int this, unsigned int a2, _DWORD *a3)
{
  unsigned int result; // eax
  _DWORD *v5; // edx
  int v6; // ebx
  unsigned int v7; // ecx
  _DWORD *v8; // esi
  signed int v9; // eax
  LPVOID v10; // eax
  unsigned int v11; // [esp+10h] [ebp-14h]
  unsigned int v12; // [esp+14h] [ebp-10h]

  if ( a2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 0x14u);
  result = *(_DWORD *)(this + 4);
  if ( result >= a2 )
  {
    *(_DWORD *)(this + 4) = a2;
  }
  else
  {
    v5 = a3;
    v6 = 20 * result;
    v7 = a2 - result;
    v11 = a2 - result;
    do
    {
      v8 = (_DWORD *)(v6 + *(_DWORD *)this);
      *v8 = *v5;
      v8[1] = v5[1];
      v8[2] = 0;
      v8[3] = 0;
      v8[4] = 0;
      v9 = v5[3];
      v12 = v9;
      if ( v9 )
      {
        v10 = sub_4539E0(v9);
        v8[4] = v12;
        v8[2] = v10;
        sub_464310((unsigned int)v10, a3[2], v12);
        v7 = v11;
        v5 = a3;
        v8[3] = v12;
      }
      v6 += 20;
      v11 = --v7;
    }
    while ( v7 );
    *(_DWORD *)(this + 4) = a2;
    return a2;
  }
  return result;
}

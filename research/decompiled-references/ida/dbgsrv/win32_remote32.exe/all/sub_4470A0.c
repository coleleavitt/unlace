/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4470A0
// Address: 0x004470A0

//----- (004470A0) --------------------------------------------------------
void __thiscall sub_4470A0(int this, unsigned int a2, unsigned int *a3)
{
  _DWORD *v3; // esi
  unsigned int v4; // ecx
  int v6; // eax
  _DWORD *v7; // edi
  unsigned int v8; // esi
  LPVOID v9; // eax
  unsigned int v10; // esi
  LPVOID v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // esi
  LPVOID v14; // eax
  bool v15; // zf
  unsigned int v17; // [esp+18h] [ebp-14h]
  int v18; // [esp+1Ch] [ebp-10h]
  unsigned int v19; // [esp+38h] [ebp+Ch]

  v3 = (_DWORD *)this;
  if ( a2 > *(_DWORD *)(this + 8) )
    *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 0x28u);
  v4 = v3[1];
  if ( v4 >= a2 )
  {
    v3[1] = a2;
  }
  else
  {
    v6 = 40 * v4;
    v18 = 40 * v4;
    v17 = a2 - v4;
    do
    {
      v7 = (_DWORD *)(v6 + *v3);
      *v7 = 0;
      v7[1] = 0;
      v7[2] = 0;
      v8 = a3[1];
      if ( v8 )
      {
        v9 = sub_4539E0(a3[1]);
        *v7 = v9;
        v7[2] = v8;
        sub_464310((unsigned int)v9, *a3, v8);
        v7[1] = v8;
      }
      v7[3] = 0;
      v7[4] = 0;
      v7[5] = 0;
      v10 = a3[4];
      if ( v10 )
      {
        v11 = sub_4539E0(v10);
        v7[3] = v11;
        v7[5] = v10;
        sub_464310((unsigned int)v11, a3[3], v10);
        v7[4] = v10;
      }
      v7[6] = 0;
      v7[7] = 0;
      v7[8] = 0;
      v12 = a3[7];
      v19 = v12;
      if ( v12 )
      {
        v13 = 8 * v12;
        v14 = sub_4539E0(8 * v12);
        v7[6] = v14;
        v7[8] = v19;
        sub_464310((unsigned int)v14, a3[6], v13);
        v7[7] = v19;
      }
      v3 = (_DWORD *)this;
      v7[9] = a3[9];
      v6 = v18 + 40;
      v15 = v17-- == 1;
      v18 += 40;
    }
    while ( !v15 );
    *(_DWORD *)(this + 4) = a2;
  }
}

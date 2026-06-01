/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418250
// Address: 0x00418250

//----- (00418250) --------------------------------------------------------
char __thiscall sub_418250(int this, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // edx
  unsigned int v6; // ecx
  _DWORD *v7; // ebx
  unsigned int *v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  unsigned int *v11; // eax
  unsigned int *v12; // ecx

  v4 = 0;
  v6 = *(_DWORD *)(this + 4);
  v7 = (_DWORD *)(this + 4);
  if ( v6 )
  {
    v8 = *(unsigned int **)this;
    while ( a2 < *v8 || a2 >= v8[1] )
    {
      ++v4;
      v8 += 3;
      if ( v4 >= v6 )
      {
        v7 = (_DWORD *)(this + 4);
        goto LABEL_7;
      }
    }
    return 0;
  }
  else
  {
LABEL_7:
    v9 = v6 + 1;
    if ( v9 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, v9, 0xCu);
    v10 = 3 * *(_DWORD *)(this + 4);
    v11 = *(unsigned int **)this;
    v11[v10] = 0;
    v11[v10 + 1] = 0;
    v11[v10 + 2] = -1;
    ++*v7;
    v12 = &v11[v10];
    *v12 = a2;
    v12[1] = a2 + a3;
    v12[2] = a4;
    return 1;
  }
}

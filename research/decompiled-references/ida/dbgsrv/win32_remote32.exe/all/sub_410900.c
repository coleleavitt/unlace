/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410900
// Address: 0x00410900

//----- (00410900) --------------------------------------------------------
int __thiscall sub_410900(int *this, unsigned int *a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // edx
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int i; // ecx
  int j; // edx
  _DWORD *v15; // esi
  void *v16; // eax
  int v17; // [esp+10h] [ebp-18h]
  int v18; // [esp+10h] [ebp-18h]
  int v20; // [esp+18h] [ebp-10h]

  v2 = *this;
  v3 = *this;
  v20 = *this;
  v4 = *(_DWORD *)(*this + 4);
  v5 = v4;
  v17 = v4;
  if ( !*(_BYTE *)(v4 + 13) )
  {
    v6 = *a2;
    do
    {
      v7 = *(_DWORD *)(v5 + 16);
      if ( v7 >= v6 )
      {
        if ( *(_BYTE *)(v3 + 13) && v6 < v7 )
          v3 = v5;
        v2 = v5;
        v5 = *(_DWORD *)v5;
      }
      else
      {
        v5 = *(_DWORD *)(v5 + 8);
      }
    }
    while ( !*(_BYTE *)(v5 + 13) );
    v4 = v17;
  }
  v8 = v4;
  if ( !*(_BYTE *)(v3 + 13) )
    v8 = *(_DWORD *)v3;
  while ( !*(_BYTE *)(v8 + 13) )
  {
    if ( *a2 >= *(_DWORD *)(v8 + 16) )
    {
      v8 = *(_DWORD *)(v8 + 8);
    }
    else
    {
      v3 = v8;
      v8 = *(_DWORD *)v8;
    }
  }
  v9 = 0;
  v10 = v2;
  v18 = 0;
  if ( v2 != v3 )
  {
    do
    {
      v11 = *(_DWORD *)(v10 + 8);
      ++v9;
      if ( *(_BYTE *)(v11 + 13) )
      {
        for ( i = *(_DWORD *)(v10 + 4); !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
        {
          if ( v10 != *(_DWORD *)(i + 8) )
            break;
          v10 = i;
        }
        v10 = i;
      }
      else
      {
        v10 = *(_DWORD *)(v10 + 8);
        for ( j = *(_DWORD *)v11; !*(_BYTE *)(j + 13); j = *(_DWORD *)j )
          v10 = j;
      }
    }
    while ( v10 != v3 );
    v18 = v9;
  }
  a2 = (unsigned int *)v2;
  if ( v2 == *(_DWORD *)v20 && *(_BYTE *)(v3 + 13) )
  {
    sub_408AA0(this, (int)this, *(int **)(v20 + 4));
    *(_DWORD *)(v20 + 4) = v20;
    *(_DWORD *)v20 = v20;
    *(_DWORD *)(v20 + 8) = v20;
    *(this + 1) = 0;
    return v9;
  }
  if ( v2 == v3 )
    return v9;
  do
  {
    sub_40B5E0((int *)&a2);
    v15 = (_DWORD *)sub_40BA90((int ***)this, v2);
    v16 = (void *)v15[14];
    if ( v16 )
    {
      v15[15] = 0;
      sub_453A20(v16);
      v15[14] = 0;
      v15[16] = 0;
    }
    sub_4627F2(v15);
    v2 = (int)a2;
  }
  while ( a2 != (unsigned int *)v3 );
  return v18;
}

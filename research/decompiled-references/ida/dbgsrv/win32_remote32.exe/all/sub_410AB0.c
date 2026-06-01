/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410AB0
// Address: 0x00410AB0

//----- (00410AB0) --------------------------------------------------------
int __thiscall sub_410AB0(int *this, unsigned int *a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int i; // ecx
  int j; // edx
  void *v14; // eax
  _DWORD *v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]

  v2 = *this;
  v15 = (_DWORD *)*this;
  v3 = *this;
  v4 = *(_DWORD *)(*this + 4);
  v5 = v4;
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
  }
  if ( !*(_BYTE *)(v3 + 13) )
    v4 = *(_DWORD *)v3;
  while ( !*(_BYTE *)(v4 + 13) )
  {
    if ( *a2 >= *(_DWORD *)(v4 + 16) )
    {
      v4 = *(_DWORD *)(v4 + 8);
    }
    else
    {
      v3 = v4;
      v4 = *(_DWORD *)v4;
    }
  }
  v8 = 0;
  v9 = v2;
  v16 = 0;
  if ( v2 != v3 )
  {
    do
    {
      v10 = *(_DWORD *)(v9 + 8);
      ++v8;
      if ( *(_BYTE *)(v10 + 13) )
      {
        for ( i = *(_DWORD *)(v9 + 4); !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
        {
          if ( v9 != *(_DWORD *)(i + 8) )
            break;
          v9 = i;
        }
        v9 = i;
      }
      else
      {
        v9 = *(_DWORD *)(v9 + 8);
        for ( j = *(_DWORD *)v10; !*(_BYTE *)(j + 13); j = *(_DWORD *)j )
          v9 = j;
      }
    }
    while ( v9 != v3 );
    v16 = v8;
  }
  a2 = (unsigned int *)v2;
  if ( v2 == *v15 && *(_BYTE *)(v3 + 13) )
  {
    sub_40D110(this);
    return v8;
  }
  if ( v2 == v3 )
    return v8;
  do
  {
    sub_40B5E0((int *)&a2);
    v14 = (void *)sub_40BA90((int ***)this, v2);
    sub_4627F2(v14);
    v2 = (int)a2;
  }
  while ( a2 != (unsigned int *)v3 );
  return v16;
}

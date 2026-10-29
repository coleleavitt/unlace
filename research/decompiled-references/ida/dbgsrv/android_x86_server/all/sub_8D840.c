/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D840
// Address: 0x0008D840

//----- (0008D840) --------------------------------------------------------
char __cdecl sub_8D840(_DWORD *a1, unsigned int a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int *v5; // esi
  int *v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  int *v9; // edi
  int *v10; // eax
  int *v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  _DWORD *v14; // esi
  int *v15; // ecx
  int **v16; // eax
  int *v18; // ecx
  int v19; // ecx
  bool v20; // zf

  v3 = (*(int (__cdecl **)(_DWORD *))(*a1 + 248))(a1);
  v4 = a1;
  v5 = a1 + 66;
  v6 = (int *)a1[66];
  if ( v6 )
  {
    v7 = a2;
    v8 = a2 & -v3;
    v9 = a1 + 66;
    do
    {
      if ( v6[4] >= v8 )
        v9 = v6;
      v6 = (int *)v6[v6[4] < v8];
    }
    while ( v6 );
    if ( v9 == v5 )
    {
      v9 = a1 + 66;
      v4 = a1;
      if ( v5 == (int *)a1[65] )
      {
LABEL_20:
        v9 = a1 + 66;
        goto LABEL_21;
      }
    }
    else
    {
      v4 = a1;
      if ( v9[4] < a2 + 1 )
        goto LABEL_17;
      if ( v9 == (int *)a1[65] )
        goto LABEL_20;
    }
  }
  else
  {
    v7 = a2;
    v9 = a1 + 66;
    if ( v5 == (int *)a1[65] )
      goto LABEL_20;
  }
  v10 = (int *)*v9;
  if ( *v9 )
  {
    do
    {
      v9 = v10;
      v10 = (int *)v10[1];
    }
    while ( v10 );
  }
  else
  {
    do
    {
      v11 = v9;
      v9 = (int *)v9[2];
    }
    while ( (int *)*v9 == v11 );
  }
LABEL_17:
  v12 = v9[4];
  if ( v12 > v7 )
    goto LABEL_20;
  v13 = v9[8];
  if ( !v13 || v12 + v13 - 1 < v7 )
    goto LABEL_20;
LABEL_21:
  if ( v5 == v9 || v9[5] != v7 || v9[12] != a3 )
    return 0;
  v14 = v4;
  (*(void (__cdecl **)(_DWORD *, int *, _DWORD))(*v4 + 172))(v4, v9, 0);
  v15 = (int *)v9[1];
  if ( v15 )
  {
    do
    {
      v16 = (int **)v15;
      v15 = (int *)*v15;
    }
    while ( v15 );
  }
  else
  {
    v16 = (int **)v9[2];
    if ( *v16 != v9 )
    {
      v18 = v9 + 2;
      do
      {
        v19 = *v18;
        v16 = *(int ***)(v19 + 8);
        v20 = *v16 == (int *)v19;
        v18 = (int *)(v19 + 8);
      }
      while ( !v20 );
    }
  }
  if ( (int *)v14[65] == v9 )
    v14[65] = v16;
  --v14[67];
  sub_2F420((int **)v14[66], (int **)v9);
  operator delete(v9);
  return 1;
}

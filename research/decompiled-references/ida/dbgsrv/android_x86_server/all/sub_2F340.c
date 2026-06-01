/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F340
// Address: 0x0002F340

//----- (0002F340) --------------------------------------------------------
int __cdecl sub_2F340(_DWORD *a1, unsigned int *a2)
{
  int **v2; // edx
  int result; // eax
  _DWORD *v4; // ebx
  unsigned int v5; // edi
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  int *v11; // ecx
  int v12; // ecx
  bool v13; // zf

  v2 = (int **)a1[1];
  result = 0;
  if ( v2 )
  {
    v4 = a1 + 1;
    v5 = *a2;
    v6 = a1 + 1;
    v7 = (_DWORD *)a1[1];
    do
    {
      if ( v7[4] >= v5 )
        v6 = v7;
      v7 = (_DWORD *)v7[v7[4] < v5];
    }
    while ( v7 );
    if ( v6 != v4 && v5 >= v6[4] && v6 != v4 )
    {
      v8 = (_DWORD *)v6[1];
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = (_DWORD *)*v8;
        }
        while ( v8 );
        v10 = a1;
        if ( (_DWORD *)*a1 != v6 )
          goto LABEL_18;
      }
      else
      {
        v9 = (_DWORD *)v6[2];
        v10 = a1;
        if ( (_DWORD *)*v9 != v6 )
        {
          v11 = v6 + 2;
          do
          {
            v12 = *v11;
            v9 = *(_DWORD **)(v12 + 8);
            v13 = *v9 == v12;
            v11 = (int *)(v12 + 8);
          }
          while ( !v13 );
        }
        if ( (_DWORD *)*a1 != v6 )
          goto LABEL_18;
      }
      *v10 = v9;
LABEL_18:
      --v10[2];
      sub_2F420(v2, (int **)v6);
      operator delete(v6);
      return 1;
    }
  }
  return result;
}

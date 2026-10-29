/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92780
// Address: 0x00092780

//----- (00092780) --------------------------------------------------------
int __cdecl sub_92780(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  _DWORD *v9; // ecx
  int v10; // ebx
  int v11; // eax
  bool v12; // zf
  char v14; // dl
  int v15; // eax

  v4 = a2;
  v5 = a1[98];
  if ( v5 == a3 && a1[102] == a2 )
    return 0;
  v6 = 0;
  if ( v5 == -1 )
  {
    v9 = a1 + 98;
    v11 = 0;
  }
  else
  {
    v7 = a1[99];
    if ( v7 == a3 && a1[103] == a2 )
      return 0;
    if ( v7 == -1 )
    {
      v9 = a1 + 99;
      v11 = 1;
    }
    else
    {
      v8 = a1[100];
      if ( v8 == a3 && a1[104] == a2 )
        return 0;
      if ( v8 == -1 )
      {
        v9 = a1 + 100;
        v11 = 2;
      }
      else
      {
        v9 = a1 + 101;
        v10 = a1[101];
        if ( v10 == a3 )
        {
          v4 = a2;
          if ( a3 != -1 )
            return 0;
          v11 = 3;
          if ( a1[105] == a2 )
            return 0;
        }
        else
        {
          v12 = v10 == -1;
          v4 = a2;
          if ( !v12 )
            return 0;
          v11 = 3;
        }
      }
    }
  }
  *v9 = a3;
  a1[v11 + 102] = v4;
  if ( v4 != 8 )
    v6 = v4;
  v14 = v11;
  if ( a4 == 2 )
  {
    v15 = 1;
  }
  else if ( a4 == 4 )
  {
    v15 = 3;
  }
  else
  {
    v15 = 2 * (a4 == 8);
  }
  a1[107] |= (v15 << (4 * v14 + 18)) | (v6 << (4 * v14 + 16)) | (1 << (2 * v14));
  return (*(int (__cdecl **)(_DWORD *))(*a1 + 308))(a1);
}

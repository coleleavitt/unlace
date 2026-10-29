/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80925F0
// Address: 0x080925F0

//----- (080925F0) --------------------------------------------------------
void __cdecl sub_80925F0(_DWORD *a1)
{
  int v1; // edx
  int v2; // edi
  _DWORD *v3; // ecx
  int v4; // edx
  char **v5; // edi
  char *v6; // ecx
  char *v7; // ebp
  char *i; // esi
  char *v9; // edx
  void *v10; // eax

  v1 = a1[8];
  v2 = a1[7];
  v3 = (_DWORD *)(v2 + 28 * v1 - 28);
  *a1 = v3[3];
  a1[1] = v3[4];
  a1[10] = v3[6];
  if ( v1 )
  {
    v4 = v1 - 1;
    a1[8] = v4;
    v5 = (char **)(28 * v4 + v2);
    v6 = *v5;
    if ( *v5 )
    {
      v7 = v5[1];
      if ( v7 )
      {
        for ( i = nullptr; i != v7; ++i )
        {
          v9 = &v6[12 * (_DWORD)i];
          v10 = *(void **)v9;
          if ( *(_DWORD *)v9 )
          {
            *((_DWORD *)v9 + 1) = 0;
            sub_80CF780(v10);
            v6 = *v5;
          }
        }
      }
      v5[1] = nullptr;
      sub_80CF780(v6);
    }
  }
}

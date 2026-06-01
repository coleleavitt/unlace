/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805E990
// Address: 0x0805E990

//----- (0805E990) --------------------------------------------------------
void __cdecl sub_805E990(char **a1)
{
  char *v1; // eax
  char *v2; // ebp
  char *i; // esi
  char *v4; // eax
  void *v5; // edx
  void *v6; // edx
  char *v7; // [esp+0h] [ebp-20h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = nullptr; i != v2; ++i )
      {
        v4 = &v1[40 * (_DWORD)i];
        v5 = *((void **)v4 + 5);
        if ( v5 )
        {
          v7 = v4;
          *((_DWORD *)v4 + 6) = 0;
          sub_80CF780(v5);
          v4 = v7;
        }
        v6 = *((void **)v4 + 2);
        if ( v6 )
        {
          *((_DWORD *)v4 + 3) = 0;
          sub_80CF780(v6);
        }
        v1 = *a1;
      }
    }
    a1[1] = nullptr;
    sub_80CF780(v1);
  }
}

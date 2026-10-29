/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806D670
// Address: 0x0806D670

//----- (0806D670) --------------------------------------------------------
void __cdecl sub_806D670(char **a1)
{
  char *v1; // esi
  char *i; // ebp
  char *v3; // esi
  void *v4; // edx
  void *v5; // edx
  char *v6; // [esp+0h] [ebp-20h]

  v1 = *a1;
  if ( *a1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      for ( i = nullptr; i != v6; ++i )
      {
        v3 = &v1[68 * (_DWORD)i];
        v4 = *((void **)v3 + 3);
        if ( v4 )
        {
          *((_DWORD *)v3 + 4) = 0;
          sub_80CF780(v4);
        }
        v5 = *(void **)v3;
        if ( *(_DWORD *)v3 )
        {
          *((_DWORD *)v3 + 1) = 0;
          sub_80CF780(v5);
        }
        v1 = *a1;
      }
    }
    a1[1] = nullptr;
    sub_80CF780(v1);
  }
}

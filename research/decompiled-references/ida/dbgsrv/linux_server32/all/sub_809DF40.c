/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809DF40
// Address: 0x0809DF40

//----- (0809DF40) --------------------------------------------------------
int __cdecl sub_809DF40(int a1, char **a2)
{
  char *v2; // esi
  char *i; // ebp
  char *v4; // esi
  void *v5; // edx
  void *v6; // edx
  char *v8; // [esp+0h] [ebp-20h]

  v2 = *a2;
  if ( *a2 )
  {
    v8 = a2[1];
    if ( v8 )
    {
      for ( i = nullptr; i != v8; ++i )
      {
        v4 = &v2[32 * (_DWORD)i];
        v5 = *((void **)v4 + 5);
        if ( v5 )
        {
          *((_DWORD *)v4 + 6) = 0;
          sub_80CF780(v5);
        }
        v6 = *((void **)v4 + 1);
        if ( v6 )
        {
          *((_DWORD *)v4 + 2) = 0;
          sub_80CF780(v6);
        }
        v2 = *a2;
      }
    }
    a2[1] = nullptr;
    sub_80CF780(v2);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  return -1;
}

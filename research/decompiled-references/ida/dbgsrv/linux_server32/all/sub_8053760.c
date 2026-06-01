/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8053760
// Address: 0x08053760

//----- (08053760) --------------------------------------------------------
int __cdecl sub_8053760(_DWORD *a1)
{
  char *v1; // eax
  int v2; // ebp
  int i; // esi
  char *v4; // eax
  void *v5; // edx
  void *v6; // edx
  char *v8; // [esp+0h] [ebp-20h]

  v1 = (char *)a1[59];
  if ( v1 )
  {
    v2 = a1[60];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = &v1[40 * i];
        v5 = *((void **)v4 + 5);
        if ( v5 )
        {
          v8 = v4;
          *((_DWORD *)v4 + 6) = 0;
          sub_80CF780(v5);
          v4 = v8;
        }
        v6 = *((void **)v4 + 2);
        if ( v6 )
        {
          *((_DWORD *)v4 + 3) = 0;
          sub_80CF780(v6);
        }
        v1 = (char *)a1[59];
      }
    }
    a1[60] = 0;
    sub_80CF780(v1);
    a1[59] = 0;
    a1[61] = 0;
  }
  return 1;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A24E0
// Address: 0x080A24E0

//----- (080A24E0) --------------------------------------------------------
void __cdecl sub_80A24E0(char **a1)
{
  char *v1; // edx
  char *v2; // ebp
  char *i; // edi
  int *v4; // eax
  void *v5; // ecx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = nullptr; i != v2; ++i )
      {
        v4 = (int *)&v1[16 * (_DWORD)i];
        if ( *v4 >= -1 )
        {
          v5 = (void *)v4[1];
          if ( v5 )
          {
            v4[2] = 0;
            sub_80CF780(v5);
            v1 = *a1;
          }
        }
      }
    }
    a1[1] = nullptr;
    sub_80CF780(v1);
  }
}

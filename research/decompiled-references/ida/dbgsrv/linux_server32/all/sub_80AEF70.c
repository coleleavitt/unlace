/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AEF70
// Address: 0x080AEF70

//----- (080AEF70) --------------------------------------------------------
void __cdecl sub_80AEF70(char **a1)
{
  char *v1; // ecx
  char *v2; // ebp
  char *i; // esi
  char *v4; // edx
  void *v5; // eax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = nullptr; i != v2; ++i )
      {
        v4 = &v1[20 * (_DWORD)i];
        v5 = *((void **)v4 + 2);
        if ( v5 )
        {
          *((_DWORD *)v4 + 3) = 0;
          sub_80CF780(v5);
          v1 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    sub_80CF780(v1);
  }
}

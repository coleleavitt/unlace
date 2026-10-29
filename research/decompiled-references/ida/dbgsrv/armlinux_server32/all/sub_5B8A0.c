/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B8A0
// Address: 0x0005B8A0

//----- (0005B8A0) --------------------------------------------------------
char **__fastcall sub_5B8A0(char **a1)
{
  char *v2; // r0
  char *v3; // r6
  char *i; // r4
  char *v5; // r3
  void *v6; // r0

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[16 * (_DWORD)i];
        v6 = *((void **)v5 + 1);
        if ( v6 )
        {
          *((_DWORD *)v5 + 2) = 0;
          sub_77F70(v6);
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    sub_77F70(v2);
  }
  return a1;
}

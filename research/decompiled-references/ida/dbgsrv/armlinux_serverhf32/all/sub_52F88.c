/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52F88
// Address: 0x00052F88

//----- (00052F88) --------------------------------------------------------
int __fastcall sub_52F88(int a1, char **a2)
{
  char *v2; // r0
  char *v4; // r7
  char *i; // r5
  char *v6; // r4
  void *v7; // r0
  void *v8; // r0

  v2 = *a2;
  if ( !*a2 )
    return -1;
  v4 = a2[1];
  if ( v4 )
  {
    for ( i = nullptr; i != v4; ++i )
    {
      v6 = &v2[32 * (_DWORD)i];
      v7 = *((void **)v6 + 5);
      if ( v7 )
      {
        *((_DWORD *)v6 + 6) = 0;
        sub_77E08(v7);
      }
      v8 = *((void **)v6 + 1);
      if ( v8 )
      {
        *((_DWORD *)v6 + 2) = 0;
        sub_77E08(v8);
      }
      v2 = *a2;
    }
  }
  a2[1] = nullptr;
  sub_77E08(v2);
  *a2 = nullptr;
  a2[2] = nullptr;
  return -1;
}

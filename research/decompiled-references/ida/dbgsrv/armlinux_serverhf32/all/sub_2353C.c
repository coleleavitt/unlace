/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2353C
// Address: 0x0002353C

//----- (0002353C) --------------------------------------------------------
_DWORD *__fastcall sub_2353C(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0
  char *v4; // r0
  int v5; // r7
  int i; // r5
  char *v7; // r4
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0

  v2 = a1[118];
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = (void *)a1[115];
  if ( v3 )
  {
    a1[116] = 0;
    sub_77E08(v3);
  }
  v4 = (char *)a1[54];
  if ( v4 )
  {
    v5 = a1[55];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[68 * i];
        v8 = *((void **)v7 + 3);
        if ( v8 )
        {
          *((_DWORD *)v7 + 4) = 0;
          sub_77E08(v8);
        }
        v9 = *(void **)v7;
        if ( *(_DWORD *)v7 )
        {
          *((_DWORD *)v7 + 1) = 0;
          sub_77E08(v9);
        }
        v4 = (char *)a1[54];
      }
    }
    a1[55] = 0;
    sub_77E08(v4);
  }
  v10 = (void *)a1[14];
  if ( v10 )
  {
    a1[15] = 0;
    sub_77E08(v10);
  }
  v11 = (void *)a1[4];
  if ( v11 )
  {
    a1[5] = 0;
    sub_77E08(v11);
  }
  return a1;
}

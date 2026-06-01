/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_716E8
// Address: 0x00000000000716E8

//----- (00000000000716E8) ----------------------------------------------------
__int64 __fastcall sub_716E8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x25
  __int64 v5; // x23
  const char *v6; // x21
  const char *v7; // x0
  int v8; // w0
  const char *v9; // x1

  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      v5 = a1 + 8;
      v6 = a2[1] ? (const char *)*a2 : &byte_F154B;
      do
      {
        if ( *(_QWORD *)(v4 + 40) )
          v7 = *(const char **)(v4 + 32);
        else
          v7 = &byte_F154B;
        v8 = strcmp(v7, v6);
        if ( v8 >= 0 )
          v5 = v4;
        v4 = *(_QWORD *)(v4 + 8LL * (v8 < 0));
      }
      while ( v4 );
      if ( v5 != a1 + 8 )
      {
        v9 = *(_QWORD *)(v5 + 40) ? *(const char **)(v5 + 32) : &byte_F154B;
        if ( (strcmp(v6, v9) & 0x80000000) == 0 )
          break;
      }
    }
    if ( !*(_QWORD *)(a1 + 24) )
      return 0xFFFFFFFFLL;
    a1 = sub_6A1B0(*(int *)(a1 + 24));
  }
  return *(unsigned int *)(v5 + 56);
}
// F154B: using guessed type char byte_F154B;

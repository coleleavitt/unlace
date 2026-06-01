/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58E8C
// Address: 0x00058E8C

//----- (00058E8C) --------------------------------------------------------
int __fastcall sub_58E8C(int a1)
{
  int v1; // r7
  int i; // r4
  int v3; // r6
  const char *v4; // r0
  const char *v5; // r0
  int v7; // [sp+0h] [bp-14h]
  int v9; // [sp+10h] [bp-4h]

  v7 = (*(int (**)(void))(a1 + 44))();
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 56);
    if ( v9 >= 1 )
    {
      v1 = *(_DWORD *)(a1 + 52) + 12;
      for ( i = 0; i != v9; ++i )
      {
        v3 = *(_DWORD *)(v1 + 4);
        v4 = &byte_B3CBE;
        if ( v3 )
          v4 = *(const char **)v1;
        if ( !strcmp(v4, ".debug_info") )
        {
          *(_DWORD *)(a1 + 100) = i;
        }
        else
        {
          v5 = &byte_B3CBE;
          if ( v3 )
            v5 = *(const char **)v1;
          if ( !strcmp(v5, ".debug_types") )
            *(_DWORD *)(a1 + 104) = i;
        }
        v1 += 104;
      }
    }
  }
  return v7;
}
// B3CBE: using guessed type char byte_B3CBE;

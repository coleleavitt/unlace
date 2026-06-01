/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF3B0
// Address: 0x080CF3B0

//----- (080CF3B0) --------------------------------------------------------
char *__cdecl sub_80CF3B0(char *s, int a2, FILE *stream)
{
  char *v3; // eax
  char *v4; // esi
  char v5; // di
  size_t v6; // eax
  char *v7; // edx
  int v9; // [esp+4h] [ebp-18h]
  int v10; // [esp+8h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-10h]

  if ( a2 < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v9, v10, v11);
    BUG();
  }
  if ( !stream )
  {
    sub_80C7880(1);
    *__errno_location() = 9;
    sub_80C7880(1);
    return nullptr;
  }
  v3 = fgets(s, a2, stream);
  v4 = v3;
  if ( !v3 )
    return nullptr;
  v5 = *v3;
  if ( *v3 )
  {
    v6 = strlen(v3);
    if ( v6 > 1 )
    {
      v7 = &v4[v6 - 2];
      if ( *v7 == 13 && v4[v6 - 1] == 10 )
      {
        *(_WORD *)v7 = 10;
        v5 = *v4;
      }
    }
    if ( v5 == 26 )
      return nullptr;
  }
  return v4;
}
// 80CF47B: variable 'v9' is possibly undefined
// 80CF47B: variable 'v10' is possibly undefined
// 80CF47B: variable 'v11' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;

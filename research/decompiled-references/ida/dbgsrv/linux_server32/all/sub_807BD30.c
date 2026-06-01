/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807BD30
// Address: 0x0807BD30

//----- (0807BD30) --------------------------------------------------------
int __cdecl sub_807BD30(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // edx
  const char *v4; // ecx
  const char *v5; // edi

  if ( a1[30] == 1 )
  {
    v1 = *(_DWORD *)(a1[25] + 24);
    if ( v1 )
    {
      v2 = *(_DWORD *)(*(_DWORD *)(a1[15] + 36) + 4 * v1);
      v3 = *(_DWORD *)(v2 + 36);
      if ( a1[6] )
      {
        v4 = (const char *)a1[5];
        if ( !v3 )
        {
          if ( !*v4 )
            goto LABEL_5;
          return sub_80C7880(1586);
        }
      }
      else
      {
        v4 = (const char *)&dword_80DDFD8;
        if ( !v3 )
        {
LABEL_5:
          v5 = (const char *)&dword_80DDFD8;
          return sub_807BC80(a1, v5);
        }
      }
      v5 = *(const char **)(v2 + 32);
      if ( !strcmp(v5, v4) )
        return sub_807BC80(a1, v5);
    }
    return sub_80C7880(1586);
  }
  return sub_80C7880(47);
}
// 80DDFD8: using guessed type int dword_80DDFD8;

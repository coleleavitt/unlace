/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807BBC0
// Address: 0x0807BBC0

//----- (0807BBC0) --------------------------------------------------------
int __cdecl sub_807BBC0(int a1)
{
  char *v1; // eax
  int v2; // edx
  int v3; // eax
  char *v4; // edx
  char *v6; // edx

  if ( *(_DWORD *)(a1 + 24) )
    v1 = *(char **)(a1 + 20);
  else
    v1 = (char *)&dword_80DDFD8;
  v2 = sub_80809D0(v1);
  v3 = *(_DWORD *)(a1 + 24);
  if ( !v2 )
  {
    if ( v3 )
    {
      v6 = *(char **)(a1 + 20);
      if ( (unsigned int)(v3 - 1) > 0x7F )
      {
        sub_80C7910(0, *(char **)(a1 + 20));
        return sub_80C7880(28);
      }
    }
    else
    {
      v6 = (char *)&dword_80DDFD8;
    }
    return sub_807B6A0(a1, v6);
  }
  v4 = (char *)&dword_80DDFD8;
  if ( v3 )
    v4 = *(char **)(a1 + 20);
  sub_80C7910(0, v4);
  return sub_80C7880(52);
}
// 80DDFD8: using guessed type int dword_80DDFD8;

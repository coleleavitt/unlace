/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DFA0
// Address: 0x0002DFA0

//----- (0002DFA0) --------------------------------------------------------
int __cdecl sub_2DFA0(_DWORD *a1, char *s)
{
  size_t v2; // eax
  char *v3; // edx
  size_t v4; // edi
  void **v5; // ecx
  void *v6; // eax

  if ( s && (v2 = strlen(s), v3 = s, v2) )
  {
    v4 = v2;
    v5 = (void **)(a1 + 2);
    if ( a1[4] >= v2 + 1 )
    {
      v6 = *v5;
    }
    else
    {
      v6 = qvector_reserve((int)v5, *v5, v2 + 1, 1u);
      v3 = s;
      a1[2] = v6;
    }
    a1[3] = v4 + 1;
    memmove(v6, v3, v4);
    *(_BYTE *)(a1[2] + v4) = 0;
  }
  else
  {
    a1[3] = 0;
  }
  return 2;
}

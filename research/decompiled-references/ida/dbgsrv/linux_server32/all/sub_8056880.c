/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8056880
// Address: 0x08056880

//----- (08056880) --------------------------------------------------------
int __cdecl sub_8056880(_DWORD *a1, char *s)
{
  size_t v2; // eax
  size_t v3; // esi
  unsigned int v5; // edx
  void *v6; // eax
  unsigned int v7; // [esp+0h] [ebp-20h]

  if ( s && (v2 = strlen(s), (v3 = v2) != 0) )
  {
    v5 = v2 + 1;
    v6 = (void *)a1[2];
    if ( a1[4] < v5 )
    {
      v7 = v5;
      v6 = sub_80CF920((int)(a1 + 2), v6, v5, 1u);
      v5 = v7;
      a1[2] = v6;
    }
    a1[3] = v5;
    memmove(v6, s, v3);
    *(_BYTE *)(a1[2] + v3) = 0;
    return 2;
  }
  else
  {
    a1[3] = 0;
    return 2;
  }
}

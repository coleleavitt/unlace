/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BA720
// Address: 0x080BA720

//----- (080BA720) --------------------------------------------------------
void __cdecl sub_80BA720(char *s, _DWORD *a2)
{
  size_t v2; // eax
  size_t v3; // esi
  unsigned int v4; // edx
  void *v5; // eax
  unsigned int v6; // [esp+0h] [ebp-20h]

  if ( s && (v2 = strlen(s), (v3 = v2) != 0) )
  {
    v4 = v2 + 1;
    v5 = (void *)a2[7];
    if ( a2[9] < v4 )
    {
      v6 = v4;
      v5 = sub_80CF920((int)(a2 + 7), v5, v4, 1u);
      v4 = v6;
      a2[7] = v5;
    }
    a2[8] = v4;
    memmove(v5, s, v3);
    *(_BYTE *)(a2[7] + v3) = 0;
  }
  else
  {
    a2[8] = 0;
  }
}

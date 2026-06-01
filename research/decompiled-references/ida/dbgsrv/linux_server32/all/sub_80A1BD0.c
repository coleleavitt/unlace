/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A1BD0
// Address: 0x080A1BD0

//----- (080A1BD0) --------------------------------------------------------
void __cdecl sub_80A1BD0(_DWORD *a1, char *s)
{
  size_t v2; // eax
  size_t v3; // esi
  unsigned int v4; // edx
  void *v5; // eax
  unsigned int v6; // [esp+0h] [ebp-20h]

  if ( s && (v2 = strlen(s), (v3 = v2) != 0) )
  {
    v4 = v2 + 1;
    v5 = (void *)a1[37];
    if ( a1[39] < v4 )
    {
      v6 = v4;
      v5 = sub_80CF920((int)(a1 + 37), v5, v4, 1u);
      v4 = v6;
      a1[37] = v5;
    }
    a1[38] = v4;
    memmove(v5, s, v3);
    *(_BYTE *)(a1[37] + v3) = 0;
  }
  else
  {
    a1[38] = 0;
  }
}

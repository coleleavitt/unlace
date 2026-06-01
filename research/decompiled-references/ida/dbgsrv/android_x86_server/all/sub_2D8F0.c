/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D8F0
// Address: 0x0002D8F0

//----- (0002D8F0) --------------------------------------------------------
int __cdecl sub_2D8F0(int a1, char *s)
{
  char *v2; // esi
  _DWORD *v3; // edi
  size_t v4; // eax
  void **v5; // ecx
  size_t v6; // esi
  void *v7; // eax
  int v8; // ecx
  char *v9; // ecx
  size_t v11; // [esp+4h] [ebp-18h]

  v2 = s;
  v3 = *(_DWORD **)(a1 + 12);
  if ( s && (v4 = strlen(s)) != 0 )
  {
    v5 = (void **)(v3 + 11);
    v11 = v4;
    v6 = v4 + 1;
    if ( v3[13] >= v4 + 1 )
    {
      v7 = *v5;
    }
    else
    {
      v7 = qvector_reserve((int)(v3 + 11), *v5, v4 + 1, 1u);
      v3[11] = v7;
    }
    v3[12] = v6;
    v2 = s;
    memmove(v7, s, v11);
    *(_BYTE *)(v3[11] + v11) = 0;
  }
  else
  {
    v3[12] = 0;
  }
  v8 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(v8 + 12) )
    v9 = *(char **)(v8 + 8);
  else
    v9 = byte_EF875;
  sub_8A3F0(*(_DWORD *)(a1 + 8), "Build ID '%s' of '%s'\n", v2, v9);
  return 0;
}

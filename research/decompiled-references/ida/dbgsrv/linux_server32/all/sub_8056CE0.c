/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8056CE0
// Address: 0x08056CE0

//----- (08056CE0) --------------------------------------------------------
int __cdecl sub_8056CE0(int a1, char *s, int a3)
{
  _DWORD *v3; // edi
  size_t v4; // eax
  size_t v5; // ebp
  int v6; // edx
  int *v7; // eax
  unsigned int v9; // ecx
  void *v10; // eax
  unsigned int v11; // [esp+0h] [ebp-20h]

  v3 = *(_DWORD **)(a1 + 12);
  if ( s && (v4 = strlen(s), (v5 = v4) != 0) )
  {
    v9 = v4 + 1;
    v10 = (void *)v3[17];
    if ( v3[19] < v9 )
    {
      v11 = v9;
      v10 = sub_80CF920((int)(v3 + 17), v10, v9, 1u);
      v9 = v11;
      v3[17] = v10;
    }
    v3[18] = v9;
    memmove(v10, s, v5);
    *(_BYTE *)(v3[17] + v5) = 0;
  }
  else
  {
    v3[18] = 0;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 80) = a3;
  v6 = *(_DWORD *)(a1 + 12);
  v7 = &dword_80DDFD8;
  if ( *(_DWORD *)(v6 + 12) )
    v7 = *(int **)(v6 + 8);
  sub_80A03F0(*(_DWORD *)(a1 + 8), "debuglink '%s' of '%s'\n", s, v7);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;

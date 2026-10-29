/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8056C20
// Address: 0x08056C20

//----- (08056C20) --------------------------------------------------------
int __cdecl sub_8056C20(int a1, char *s)
{
  _DWORD *v2; // edi
  size_t v3; // eax
  size_t v4; // ebp
  int v5; // edx
  int *v6; // eax
  unsigned int v8; // ecx
  void *v9; // eax
  unsigned int v10; // [esp+0h] [ebp-20h]

  v2 = *(_DWORD **)(a1 + 12);
  if ( s && (v3 = strlen(s), (v4 = v3) != 0) )
  {
    v8 = v3 + 1;
    v9 = (void *)v2[14];
    if ( v2[16] < v8 )
    {
      v10 = v8;
      v9 = sub_80CF920((int)(v2 + 14), v9, v8, 1u);
      v8 = v10;
      v2[14] = v9;
    }
    v2[15] = v8;
    memmove(v9, s, v4);
    *(_BYTE *)(v2[14] + v4) = 0;
  }
  else
  {
    v2[15] = 0;
  }
  v5 = *(_DWORD *)(a1 + 12);
  v6 = &dword_80DDFD8;
  if ( *(_DWORD *)(v5 + 12) )
    v6 = *(int **)(v5 + 8);
  sub_80A03F0(*(_DWORD *)(a1 + 8), "Build ID '%s' of '%s'\n", s, v6);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;

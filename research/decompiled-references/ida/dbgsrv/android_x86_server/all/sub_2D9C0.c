/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D9C0
// Address: 0x0002D9C0

//----- (0002D9C0) --------------------------------------------------------
int __cdecl sub_2D9C0(int a1, char *s, int a3)
{
  char *v3; // esi
  _DWORD *v4; // edi
  size_t v5; // eax
  void **v6; // ecx
  size_t v7; // esi
  void *v8; // eax
  int v9; // ecx
  char *v10; // ecx
  size_t v12; // [esp+4h] [ebp-18h]

  v3 = s;
  v4 = *(_DWORD **)(a1 + 12);
  if ( s && (v5 = strlen(s)) != 0 )
  {
    v6 = (void **)(v4 + 14);
    v12 = v5;
    v7 = v5 + 1;
    if ( v4[16] >= v5 + 1 )
    {
      v8 = *v6;
    }
    else
    {
      v8 = qvector_reserve((int)(v4 + 14), *v6, v5 + 1, 1u);
      v4[14] = v8;
    }
    v4[15] = v7;
    v3 = s;
    memmove(v8, s, v12);
    *(_BYTE *)(v4[14] + v12) = 0;
  }
  else
  {
    v4[15] = 0;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 68) = a3;
  v9 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(v9 + 12) )
    v10 = *(char **)(v9 + 8);
  else
    v10 = byte_EF875;
  sub_8A3F0(*(_DWORD *)(a1 + 8), "debuglink '%s' of '%s'\n", v3, v10);
  return 0;
}

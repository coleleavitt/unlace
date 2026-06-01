/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F0B8
// Address: 0x0003F0B8

//----- (0003F0B8) --------------------------------------------------------
int __fastcall sub_3F0B8(int a1, const char *a2)
{
  int result; // r0
  int v5; // r7
  char *v6; // r8
  char *v7; // r0
  int v8; // r7
  char *v9; // r4
  size_t v10; // r0
  size_t v11; // r5
  unsigned int v12; // r9
  void *v13; // r0

  if ( !a2 )
    return 0;
  result = sub_3EF08(a1, a2);
  if ( !result )
  {
    v5 = *(_DWORD *)(a1 + 56);
    v6 = *(char **)(a1 + 52);
    if ( (unsigned int)(v5 + 1) > *(_DWORD *)(a1 + 60) )
    {
      v7 = (char *)sub_77EB0(a1 + 52, *(void **)(a1 + 52), v5 + 1, 0x28u);
      v5 = *(_DWORD *)(a1 + 56);
      v6 = v7;
      *(_DWORD *)(a1 + 52) = v7;
    }
    v8 = 40 * v5;
    v9 = &v6[v8];
    *(_DWORD *)&v6[v8] = 0;
    *((_DWORD *)v9 + 1) = 0;
    *((_DWORD *)v9 + 2) = 0;
    *((_DWORD *)v9 + 7) = 0;
    v9[16] = 2;
    *((_DWORD *)v9 + 8) = 0;
    *((_DWORD *)v9 + 9) = 0;
    *((_DWORD *)v9 + 6) = 0;
    ++*(_DWORD *)(a1 + 56);
    v10 = strlen(a2);
    v11 = v10;
    if ( v10 )
    {
      v12 = v10 + 1;
      v13 = *(void **)&v6[v8];
      if ( v12 > *((_DWORD *)v9 + 2) )
      {
        v13 = sub_77EB0((int)&v6[v8], *(void **)&v6[v8], v12, 1u);
        *(_DWORD *)v9 = v13;
      }
      *((_DWORD *)v9 + 1) = v12;
      memmove(v13, a2, v11);
      *(_BYTE *)(*(_DWORD *)v9 + v11) = 0;
    }
    else
    {
      *((_DWORD *)v9 + 1) = 0;
    }
    return (int)(v9 + 16);
  }
  return result;
}

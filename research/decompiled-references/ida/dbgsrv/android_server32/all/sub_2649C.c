/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2649C
// Address: 0x0002649C

//----- (0002649C) --------------------------------------------------------
int __fastcall sub_2649C(int a1, char *s)
{
  _DWORD *v4; // r6
  void **v5; // r7
  size_t v6; // r0
  unsigned int v7; // r2
  void *v8; // r0
  unsigned int v10; // [sp+4h] [bp-8h]
  size_t v11; // [sp+8h] [bp-4h]

  v4 = *(_DWORD **)(a1 + 12);
  v5 = (void **)(v4 + 11);
  if ( s && (v6 = strlen(s)) != 0 )
  {
    v11 = v6;
    v7 = v6 + 1;
    if ( v4[13] >= v6 + 1 )
    {
      v8 = *v5;
    }
    else
    {
      v10 = v6 + 1;
      v8 = qvector_reserve((int)v5, *v5, v7, 1u);
      v7 = v10;
      *v5 = v8;
    }
    v4[12] = v7;
    memmove(v8, s, v11);
    *(_BYTE *)(v4[11] + v11) = 0;
  }
  else
  {
    v4[12] = 0;
  }
  sub_64B30(*(_DWORD *)(a1 + 8), "Build ID '%s' of '%s'\n");
  return 0;
}

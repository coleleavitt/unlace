/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2651C
// Address: 0x0002651C

//----- (0002651C) --------------------------------------------------------
int __fastcall sub_2651C(int a1, const void *a2, int a3)
{
  _DWORD *v5; // r7
  void **v6; // r6
  size_t v7; // r0
  unsigned int v8; // r2
  void *v9; // r0
  unsigned int v11; // [sp+4h] [bp-Ch]
  size_t v12; // [sp+8h] [bp-8h]

  v5 = *(_DWORD **)(a1 + 12);
  v6 = (void **)(v5 + 14);
  if ( a2 && (v7 = strlen((const char *)a2)) != 0 )
  {
    v12 = v7;
    v8 = v7 + 1;
    if ( v5[16] >= v7 + 1 )
    {
      v9 = *v6;
    }
    else
    {
      v11 = v7 + 1;
      v9 = qvector_reserve((int)v6, *v6, v8, 1u);
      v8 = v11;
      *v6 = v9;
    }
    v5[15] = v8;
    memmove(v9, a2, v12);
    *(_BYTE *)(v5[14] + v12) = 0;
  }
  else
  {
    v5[15] = 0;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 68) = a3;
  sub_64B30(*(_DWORD *)(a1 + 8), "debuglink '%s' of '%s'\n");
  return 0;
}

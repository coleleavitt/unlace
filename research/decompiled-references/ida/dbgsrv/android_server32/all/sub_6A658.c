/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A658
// Address: 0x0006A658

//----- (0006A658) --------------------------------------------------------
size_t __fastcall sub_6A658(int a1, int a2, unsigned int a3)
{
  size_t result; // r0
  const char *v5; // r5
  size_t v6; // r2
  int v7; // r0
  int v8; // r5
  size_t v9; // r1
  unsigned int v10; // r7
  _BYTE *v11; // r0
  void *v12; // r0
  size_t v13; // [sp+4h] [bp-Ch]
  size_t v14; // [sp+8h] [bp-8h]
  const char *v15; // [sp+Ch] [bp-4h]

  result = -1;
  if ( (unsigned int)a2 <= 0xC2
    && (a2 > 15 || a3 <= 4)
    && ((unsigned int)(a2 - 93) > 0x1F || a3 <= 4)
    && ((unsigned int)(a2 - 61) > 0x1F || a3 <= 8)
    && ((unsigned int)(a2 - 45) > 0xF || a3 <= 0x10) )
  {
    v5 = off_DA3A0[a2];
    if ( a1 )
    {
      if ( *(_DWORD *)(a1 + 8) <= 0xFu )
        *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, 0x10u, 1u);
      v15 = v5;
      v6 = strlen(v5);
      v7 = *(_DWORD *)(a1 + 4);
      v8 = v7 - 1;
      if ( !v7 )
        v8 = 0;
      v9 = v8 + v6;
      v10 = v8 + v6 + 1;
      if ( *(_DWORD *)(a1 + 8) >= v10 )
      {
        v11 = *(_BYTE **)a1;
      }
      else
      {
        v13 = v8 + v6;
        v14 = v6;
        v11 = qvector_reserve(a1, *(void **)a1, v8 + v6 + 1, 1u);
        v9 = v13;
        v6 = v14;
        *(_DWORD *)a1 = v11;
      }
      *(_DWORD *)(a1 + 4) = v10;
      v11[v9] = 0;
      v12 = (void *)(*(_DWORD *)a1 + v8);
      v5 = v15;
      memmove(v12, v15, v6);
    }
    return strlen(v5);
  }
  return result;
}
// DA3A0: using guessed type char *off_DA3A0[195];

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3891C
// Address: 0x0003891C

//----- (0003891C) --------------------------------------------------------
int __fastcall sub_3891C(int a1, int a2)
{
  unsigned int v3; // r0
  FILE *v4; // r1
  size_t v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r6
  _BYTE *v8; // r1
  _BYTE *v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v13; // [sp+4h] [bp-1Ch]
  size_t v14; // [sp+8h] [bp-18h]
  size_t v15; // [sp+Ch] [bp-14h]
  void *ptr; // [sp+10h] [bp-10h] BYREF
  unsigned int v17; // [sp+14h] [bp-Ch]
  unsigned int v18; // [sp+18h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 8);
  if ( dword_DE33C > v3 && (v4 = *(FILE **)(dword_DE338 + 4 * v3)) != nullptr )
  {
    v17 = 0;
    ptr = nullptr;
    v18 = 0;
    if ( qgetline(&ptr, v4) >= 0 )
    {
      v5 = _strlen_chk("\n", 2);
      v6 = v17 - 1;
      if ( !v17 )
        v6 = 0;
      v15 = v6 + v5;
      v7 = v6 + v5 + 1;
      v8 = ptr;
      if ( v18 < v7 )
      {
        v13 = v6;
        v14 = v5;
        v9 = qvector_reserve((int)&ptr, ptr, v7, 1u);
        v5 = v14;
        v8 = v9;
        ptr = v9;
        v6 = v13;
      }
      v17 = v7;
      v8[v15] = 0;
      memmove((char *)ptr + v6, "\n", v5);
      *(_BYTE *)a2 = 7;
      v10 = v17;
      v11 = v18;
      *(_DWORD *)(a2 + 8) = ptr;
      *(_DWORD *)(a2 + 12) = v10;
      *(_DWORD *)(a2 + 16) = v11;
      v17 = 0;
      ptr = nullptr;
      goto LABEL_12;
    }
    *(_DWORD *)(a2 + 8) = -1;
    if ( ptr )
    {
      v17 = 0;
      qfree(ptr);
      ptr = nullptr;
LABEL_12:
      v18 = 0;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;

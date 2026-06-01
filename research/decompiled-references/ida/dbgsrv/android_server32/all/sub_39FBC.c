/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39FBC
// Address: 0x00039FBC

//----- (00039FBC) --------------------------------------------------------
int __fastcall sub_39FBC(int a1)
{
  int v2; // r4
  char *file_line; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r1
  _BYTE *v8; // r0
  int v9; // r0
  int v11; // [sp+8h] [bp-8h] BYREF

  v2 = 0;
  file_line = (char *)lex_get_file_line(*(_DWORD **)(*(_DWORD *)(a1 + 64) + 16), &v11, nullptr, 0);
  sub_38B2C(a1, file_line, v11);
  *(_DWORD *)(*(_DWORD *)(a1 + 108) + 12) = *(_DWORD *)(a1 + 84);
  v4 = *(_DWORD *)(a1 + 108);
  if ( *(_DWORD *)(a1 + 124) == 2 && *(_DWORD *)(v4 + 12) != 1 )
  {
    v9 = 1585;
    return set_qerrno(v9);
  }
  v5 = *(_DWORD *)(v4 + 36);
  if ( v5 && *(_DWORD *)(a1 + 244) + v5 != *(_DWORD *)(v4 + 12) )
  {
    v9 = 1268;
    return set_qerrno(v9);
  }
  *(_BYTE *)(a1 + 120) = -91;
  v6 = *(_DWORD *)(a1 + 112);
  v7 = *(_DWORD *)(v6 + 4);
  if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_BYTE **)v6;
  }
  else
  {
    v8 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v6, v7 + 1, 1u);
    *(_DWORD *)v6 = v8;
    v7 = *(_DWORD *)(v6 + 4);
  }
  v8[v7] = -91;
  ++*(_DWORD *)(v6 + 4);
  ++*(_DWORD *)(a1 + 116);
  sub_390C4(a1, 0);
  return v2;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48B00
// Address: 0x00048B00

//----- (00048B00) --------------------------------------------------------
int __cdecl sub_48B00(int a1)
{
  char *file_line; // eax
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  _BYTE *v6; // eax
  int v8[6]; // [esp+4h] [ebp-18h] BYREF

  v8[1] = __readgsdword(0x14u);
  file_line = (char *)lex_get_file_line(*(_DWORD **)(*(_DWORD *)(a1 + 60) + 16), v8, nullptr, 0);
  sub_465D0(a1, file_line, v8[0]);
  *(_DWORD *)(*(_DWORD *)(a1 + 104) + 12) = *(_DWORD *)(a1 + 80);
  v2 = *(_DWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 120) == 2 && *(_DWORD *)(v2 + 12) != 1 )
    return set_qerrno(1585);
  v3 = *(_DWORD *)(v2 + 36);
  if ( v3 && *(_DWORD *)(a1 + 240) + v3 != *(_DWORD *)(v2 + 12) )
    return set_qerrno(1268);
  *(_BYTE *)(a1 + 116) = -91;
  v4 = *(_DWORD *)(a1 + 108);
  v5 = *(_DWORD *)(v4 + 4);
  if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
  {
    v6 = *(_BYTE **)v4;
  }
  else
  {
    v6 = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
    *(_DWORD *)v4 = v6;
    v5 = *(_DWORD *)(v4 + 4);
  }
  v6[v5] = -91;
  ++*(_DWORD *)(v4 + 4);
  ++*(_DWORD *)(a1 + 112);
  sub_46F00(a1, 0);
  return 0;
}

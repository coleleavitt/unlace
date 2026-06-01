/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AD90
// Address: 0x0009AD90

//----- (0009AD90) --------------------------------------------------------
char __cdecl sub_9AD90(char *s, int a2)
{
  size_t v2; // eax
  int v3; // ecx
  size_t v4; // edi
  unsigned int v5; // esi
  void *v6; // eax
  int v7; // esi

  LOBYTE(v2) = qisdir(s);
  if ( !(_BYTE)v2 )
  {
    v2 = qmkdir(s, 0x1FFu);
    if ( v2 )
      sub_1DE10("Cannot create directory '%s' for recording conversations into", s);
  }
  v3 = a2;
  if ( s && (v2 = strlen(s), v3 = a2, v2) )
  {
    v4 = v2;
    v5 = v2 + 1;
    v6 = *(void **)(a2 + 96);
    if ( *(_DWORD *)(a2 + 104) < v5 )
    {
      v6 = qvector_reserve(a2 + 96, v6, v5, 1u);
      v3 = a2;
      *(_DWORD *)(a2 + 96) = v6;
    }
    *(_DWORD *)(v3 + 100) = v5;
    v7 = v3;
    memmove(v6, s, v4);
    v2 = *(_DWORD *)(v7 + 96);
    *(_BYTE *)(v2 + v4) = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 100) = 0;
  }
  return v2;
}

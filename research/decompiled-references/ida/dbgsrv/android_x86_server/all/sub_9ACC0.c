/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9ACC0
// Address: 0x0009ACC0

//----- (0009ACC0) --------------------------------------------------------
char __cdecl sub_9ACC0(char *s, int a2)
{
  int v2; // ecx
  char *v3; // esi
  size_t v4; // eax
  size_t v5; // edi
  unsigned int v6; // esi
  void *v7; // eax
  int v8; // eax

  v2 = a2;
  v3 = s;
  if ( s && (v4 = strlen(s), v2 = a2, v4) )
  {
    v5 = v4;
    v6 = v4 + 1;
    v7 = *(void **)(a2 + 72);
    if ( *(_DWORD *)(a2 + 80) < v6 )
    {
      v7 = qvector_reserve(a2 + 72, v7, v6, 1u);
      v2 = a2;
      *(_DWORD *)(a2 + 72) = v7;
    }
    *(_DWORD *)(v2 + 76) = v6;
    v3 = s;
    memmove(v7, s, v5);
    *(_BYTE *)(*(_DWORD *)(a2 + 72) + v5) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 76) = 0;
  }
  LOBYTE(v8) = qisdir(v3);
  if ( !(_BYTE)v8 )
  {
    v8 = qmkdir(v3, 0x1FFu);
    if ( v8 )
      sub_1DE10("Cannot create directory '%s' for bad requests", v3);
  }
  return v8;
}

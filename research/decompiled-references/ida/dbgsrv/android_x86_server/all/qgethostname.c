/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgethostname
// Address: 0x000B1040

//----- (000B1040) --------------------------------------------------------
char __cdecl qgethostname(int a1)
{
  int v2; // eax
  size_t v3; // edi
  unsigned int v4; // esi
  void *v5; // eax
  char name[4096]; // [esp+8h] [ebp-1014h] BYREF
  unsigned int v7; // [esp+1008h] [ebp-14h]

  v7 = __readgsdword(0x14u);
  if ( gethostname(name, 0x1000u) )
    return 0;
  name[4095] = 0;
  v2 = __strlen_chk(name, 4096);
  if ( v2 )
  {
    v3 = v2;
    v4 = v2 + 1;
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v2 + 1) )
    {
      v5 = *(void **)a1;
    }
    else
    {
      v5 = qvector_reserve(a1, *(void **)a1, v4, 1u);
      *(_DWORD *)a1 = v5;
    }
    *(_DWORD *)(a1 + 4) = v4;
    memmove(v5, name, v3);
    *(_BYTE *)(*(_DWORD *)a1 + v3) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  return 1;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);

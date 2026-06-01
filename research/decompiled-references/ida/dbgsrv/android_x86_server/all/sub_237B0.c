/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_237B0
// Address: 0x000237B0

//----- (000237B0) --------------------------------------------------------
bool __cdecl sub_237B0(int a1, int a2)
{
  unsigned int v2; // esi
  int v4; // eax
  _BYTE v5[48]; // [esp+0h] [ebp-5Ch] BYREF
  unsigned int v6[3]; // [esp+30h] [ebp-2Ch] BYREF
  int v7; // [esp+3Ch] [ebp-20h]
  unsigned int v8; // [esp+48h] [ebp-14h]

  v8 = __readgsdword(0x14u);
  ptrace(PTRACE_GETREGS, a2, 0, v5);
  v2 = *(_DWORD *)(a1 + 128);
  if ( sub_21300(a1, a2, v7, v6, v2, 0) != v2 )
  {
    v4 = *(_DWORD *)(a1 + 624);
    if ( v4 == a2 || sub_21300(a1, v4, v7, v6, v2, 0) != v2 )
      return 0;
  }
  v7 += v2;
  return ptrace(PTRACE_SETREGS, a2, 0, v5) == 0;
}

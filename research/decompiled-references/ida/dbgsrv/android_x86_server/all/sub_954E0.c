/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_954E0
// Address: 0x000954E0

//----- (000954E0) --------------------------------------------------------
bool __cdecl sub_954E0(int a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  _DWORD v5[6]; // [esp+4h] [ebp-18h] BYREF

  v5[1] = __readgsdword(0x14u);
  v2 = a2[1];
  v3 = v2 - 1;
  if ( !v2 )
    v3 = 0;
  v5[0] = _byteswap_ulong(v3);
  if ( (*(int (__cdecl **)(int, _DWORD *, int))(*(_DWORD *)a1 + 32))(a1, v5, 4) != 4 )
    return 0;
  if ( v3 )
    return (*(int (__cdecl **)(int, _DWORD, unsigned int))(*(_DWORD *)a1 + 32))(a1, *a2, v3) == v3;
  return 1;
}

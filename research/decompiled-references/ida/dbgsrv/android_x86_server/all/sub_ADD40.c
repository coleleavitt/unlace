/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ADD40
// Address: 0x000ADD40

//----- (000ADD40) --------------------------------------------------------
int __cdecl sub_ADD40(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  _BYTE *v4; // eax
  _BYTE *v5; // ecx

  v3 = a2;
  qustrncpy((unsigned int)(a1 + 1030), a2, 4096);
  v4 = (_BYTE *)__strrchr_chk(a1 + 1030, 47, 4096);
  if ( v4 )
  {
    v5 = v4 + 1;
    *v4 = 0;
  }
  else
  {
    qustrncpy((unsigned int)(a1 + 1030), (int)".", 4096);
    v5 = nullptr;
  }
  a1[1027] = 0;
  a1[1028] = 0;
  if ( v5 )
    v3 = (int)v5;
  qustrncpy((unsigned int)(a1 + 2054), v3, 4096);
  a1[3078] = a3;
  return a3;
}
// 17F90: using guessed type int __cdecl __strrchr_chk(_DWORD, _DWORD, _DWORD);

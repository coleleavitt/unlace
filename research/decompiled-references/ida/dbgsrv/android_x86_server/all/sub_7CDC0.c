/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CDC0
// Address: 0x0007CDC0

//----- (0007CDC0) --------------------------------------------------------
int __cdecl sub_7CDC0(int a1)
{
  __suseconds_t v1; // esi
  int v2; // edx
  int v3; // edi
  unsigned __int64 v4; // rax
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // [esp+4h] [ebp-18h]

  (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 244) + 80))(*(_DWORD *)(a1 + 244), 0);
  v1 = qtime64();
  v3 = (v2 + 5) | (v1 >> 31);
  LODWORD(v4) = qtime64();
  v5 = 5;
  if ( v4 < __PAIR64__(v3, v1) )
  {
    v6 = v3;
    v7 = a1 + 156;
    v10 = __PAIR64__(v6, v1);
    while ( 1 )
    {
      if ( (*(int (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(a1 + 244) + 68))(*(_DWORD *)(a1 + 244), v7, 100) > 0 )
      {
        (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 244) + 84))(*(_DWORD *)(a1 + 244), v7);
        if ( (*(_DWORD *)(a1 + 172) & 0xFFFFFFF) == 2 )
          break;
      }
      LODWORD(v8) = qtime64();
      if ( v8 >= v10 )
        return 5;
    }
    return 0;
  }
  return v5;
}
// 7CDF6: variable 'v2' is possibly undefined
// 7CE0E: variable 'v4' is possibly undefined
// 7CE82: variable 'v8' is possibly undefined

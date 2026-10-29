/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80ABC90
// Address: 0x080ABC90

//----- (080ABC90) --------------------------------------------------------
int __cdecl sub_80ABC90(int a1)
{
  __suseconds_t v1; // esi
  int v2; // edx
  int v3; // edi
  unsigned __int64 v4; // rax
  int v6; // [esp+0h] [ebp-20h]

  (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 244) + 80))(*(_DWORD *)(a1 + 244), 0);
  v1 = sub_80D0330();
  v6 = a1 + 156;
  v3 = (v2 + 5) | (v1 >> 31);
  while ( 1 )
  {
    LODWORD(v4) = sub_80D0330();
    if ( v4 >= __PAIR64__(v3, v1) )
      return 5;
    if ( (*(int (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(a1 + 244) + 68))(*(_DWORD *)(a1 + 244), v6, 100) > 0 )
    {
      (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 244) + 84))(*(_DWORD *)(a1 + 244), v6);
      if ( (*(_DWORD *)(a1 + 172) & 0xFFFFFFF) == 2 )
        break;
    }
  }
  return 0;
}
// 80ABCC0: variable 'v2' is possibly undefined
// 80ABD05: variable 'v4' is possibly undefined

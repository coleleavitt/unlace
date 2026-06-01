/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A5B4
// Address: 0x0005A5B4

//----- (0005A5B4) --------------------------------------------------------
int __fastcall sub_5A5B4(int a1)
{
  int v2; // r1
  unsigned __int64 v3; // r4
  unsigned __int64 v4; // r0

  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 244) + 80))(*(_DWORD *)(a1 + 244), 0);
  LODWORD(v3) = sub_78DE0();
  HIDWORD(v3) = (v2 + 5) | ((int)v3 >> 31);
  while ( 1 )
  {
    LODWORD(v4) = sub_78DE0();
    if ( v4 >= v3 )
      return 5;
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 244) + 68))(*(_DWORD *)(a1 + 244)) > 0 )
    {
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 244) + 84))(*(_DWORD *)(a1 + 244), a1 + 156);
      if ( (*(_DWORD *)(a1 + 172) & 0xFFFFFFF) == 2 )
        break;
    }
  }
  return 0;
}
// 5A5CE: variable 'v2' is possibly undefined
// 5A5F6: variable 'v4' is possibly undefined

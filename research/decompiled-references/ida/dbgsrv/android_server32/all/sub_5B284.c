/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B284
// Address: 0x0005B284

//----- (0005B284) --------------------------------------------------------
int __fastcall sub_5B284(int a1)
{
  __suseconds_t v2; // r6
  int v3; // r1
  int v4; // r5
  _DWORD *v5; // r4
  unsigned __int64 v6; // r0
  int v7; // r7
  unsigned __int64 v8; // r0
  _DWORD *v10; // [sp+8h] [bp-4h]

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 244) + 80))(*(_DWORD *)(a1 + 244));
  v2 = qtime64();
  v4 = (v3 + 5) | (v2 >> 31);
  v5 = (_DWORD *)(a1 + 244);
  LODWORD(v6) = qtime64();
  if ( v6 >= __PAIR64__(v4, v2) )
    return 5;
  v10 = (_DWORD *)(a1 + 172);
  v7 = a1 + 156;
  while ( 1 )
  {
    if ( (*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)*v5 + 68))(*v5, v7, 100) >= 1 )
    {
      (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v5 + 84))(*v5, v7);
      if ( (*v10 & 0xFFFFFFF) == 2 )
        break;
    }
    LODWORD(v8) = qtime64();
    if ( v8 >= __PAIR64__(v4, v2) )
      return 5;
  }
  return 0;
}
// 5B2A0: variable 'v3' is possibly undefined
// 5B2B4: variable 'v6' is possibly undefined
// 5B2EE: variable 'v8' is possibly undefined

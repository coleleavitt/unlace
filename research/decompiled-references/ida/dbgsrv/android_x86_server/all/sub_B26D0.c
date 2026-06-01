/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B26D0
// Address: 0x000B26D0

//----- (000B26D0) --------------------------------------------------------
int __cdecl sub_B26D0(int a1)
{
  _DWORD *v1; // esi
  void *v2; // eax
  int v3; // ecx
  void (*v4)(void); // esi

  while ( 1 )
  {
    v1 = (_DWORD *)dword_13E350;
    if ( !dword_13E350 )
      break;
    v2 = *(void **)dword_13E350;
    v3 = *(_DWORD *)(dword_13E350 + 4);
    if ( !v3 )
    {
      if ( v2 )
      {
        *(_DWORD *)(dword_13E350 + 4) = 0;
        qfree(v2);
        *v1 = 0;
        v1[2] = 0;
      }
      qfree(v1);
      break;
    }
    v4 = *((void (**)(void))v2 + v3 - 1);
    del_qatexit(v4);
    v4();
  }
  dword_13E350 = 0;
  if ( *(_BYTE *)(a1 + 16) )
    exit(*(_DWORD *)(a1 + 12));
  return 0;
}
// B1300: using guessed type _DWORD __cdecl del_qatexit(_DWORD);
// 13E350: using guessed type int dword_13E350;

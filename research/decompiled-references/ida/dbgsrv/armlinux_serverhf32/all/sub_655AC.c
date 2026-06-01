/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_655AC
// Address: 0x000655AC

//----- (000655AC) --------------------------------------------------------
int __fastcall sub_655AC(int a1, int a2, char a3)
{
  int v5; // r2
  __int64 v6; // r0
  void *v7; // r2

  *(_DWORD *)(a1 + 68) = a2;
  v5 = dword_D3920;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v5;
  *(_DWORD *)a1 = dword_D1B20;
  dword_D3920 = v5 + 1;
  LODWORD(v6) = sub_78DE0();
  *(_QWORD *)(a1 + 88) = v6;
  *(_BYTE *)(a1 + 96) = a3;
  if ( !sub_66560(*(_DWORD *)(a1 + 68)) )
  {
    v7 = *(void **)(a1 + 72);
    if ( *(_DWORD *)(a1 + 80) <= 9u )
    {
      v7 = sub_77EB0(a1 + 72, *(void **)(a1 + 72), 0xAu, 1u);
      *(_DWORD *)(a1 + 72) = v7;
    }
    *(_DWORD *)(a1 + 76) = 10;
    qmemcpy(v7, "(unknown)", 9);
    *(_BYTE *)(*(_DWORD *)(a1 + 72) + 9) = 0;
  }
  memset((void *)(a1 + 4), 0, 0x40u);
  return a1;
}
// 655D8: variable 'v6' is possibly undefined
// D1B20: using guessed type int dword_D1B20[2];
// D3920: using guessed type int dword_D3920;

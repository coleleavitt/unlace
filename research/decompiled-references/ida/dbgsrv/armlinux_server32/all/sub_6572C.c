/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6572C
// Address: 0x0006572C

//----- (0006572C) --------------------------------------------------------
int __fastcall sub_6572C(int a1, int a2, char a3)
{
  int v5; // r2
  __int64 v6; // r0
  void *v7; // r2

  *(_DWORD *)(a1 + 68) = a2;
  v5 = dword_D4940;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v5;
  *(_DWORD *)a1 = dword_D2B20;
  dword_D4940 = v5 + 1;
  LODWORD(v6) = sub_78F48();
  *(_QWORD *)(a1 + 88) = v6;
  *(_BYTE *)(a1 + 96) = a3;
  if ( !sub_666E0(*(_DWORD *)(a1 + 68)) )
  {
    v7 = *(void **)(a1 + 72);
    if ( *(_DWORD *)(a1 + 80) <= 9u )
    {
      v7 = sub_78018(a1 + 72, *(void **)(a1 + 72), 0xAu, 1u);
      *(_DWORD *)(a1 + 72) = v7;
    }
    *(_DWORD *)(a1 + 76) = 10;
    qmemcpy(v7, "(unknown)", 9);
    *(_BYTE *)(*(_DWORD *)(a1 + 72) + 9) = 0;
  }
  memset((void *)(a1 + 4), 0, 0x40u);
  return a1;
}
// 65758: variable 'v6' is possibly undefined
// D2B20: using guessed type int dword_D2B20[2];
// D4940: using guessed type int dword_D4940;

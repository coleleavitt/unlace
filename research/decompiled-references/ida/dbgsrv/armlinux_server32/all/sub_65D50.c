/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65D50
// Address: 0x00065D50

//----- (00065D50) --------------------------------------------------------
int __fastcall sub_65D50(int a1, int a2)
{
  __int64 v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  pthread_mutex_t *v7; // r0
  _DWORD *v9; // r0

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = dword_D2B38;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  LODWORD(v4) = sub_78F48();
  *(_QWORD *)(a1 + 48) = v4;
  *(_WORD *)(a1 + 56) = -1;
  *(_BYTE *)(a1 + 58) = 1;
  *(_BYTE *)(a1 + 59) = 0;
  if ( a2 )
  {
    v5 = sub_808A4(0x20u);
    v5[2] = 0;
    v5[3] = 0;
    v5[6] = 0;
    v6 = v5;
    v5[4] = v5 + 2;
    v5[5] = v5 + 2;
    *v5 = &off_D14A4;
    v7 = sub_7A070();
    v6[7] = v7;
    if ( !v7 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(1540);
    }
    *(_DWORD *)(a1 + 44) = v6;
    return a1;
  }
  else
  {
    v9 = sub_808A4(0x1Cu);
    *(_DWORD *)(a1 + 44) = v9;
    v9[4] = v9 + 2;
    v9[5] = v9 + 2;
    *v9 = &off_D1488;
    v9[2] = 0;
    v9[3] = 0;
    v9[6] = 0;
    return a1;
  }
}
// 65D86: variable 'v4' is possibly undefined
// D1488: using guessed type _UNKNOWN *;
// D14A4: using guessed type _UNKNOWN *;
// D2B38: using guessed type int dword_D2B38[2];
// D6C20: using guessed type char under_debugger;

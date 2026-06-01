/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E94
// Address: 0x00042E94

//----- (00042E94) --------------------------------------------------------
_DWORD *__fastcall sub_42E94(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v6; // r6
  int v7; // r0
  const char *v9; // r0
  const char *v10; // r1
  unsigned int v11; // r0
  _DWORD *v12; // [sp+4h] [bp-4h]

  v6 = (_DWORD *)(a1 + 4);
  if ( !a2 && a3 != v6 )
  {
    if ( a4[5] )
    {
      v9 = (const char *)a4[4];
      if ( a3[5] )
      {
LABEL_7:
        v10 = (const char *)a3[4];
LABEL_8:
        v12 = a3;
        v11 = strcmp(v9, v10);
        a3 = v12;
        v7 = v11 >> 31;
        goto LABEL_3;
      }
    }
    else
    {
      v9 = (const char *)&dword_8DB98;
      if ( a3[5] )
        goto LABEL_7;
    }
    v10 = (const char *)&dword_8DB98;
    goto LABEL_8;
  }
  v7 = 1;
LABEL_3:
  sub_814DC((_DWORD *)v7, a4, a3, v6);
  ++*(_DWORD *)(a1 + 20);
  return a4;
}
// 8DB98: using guessed type int dword_8DB98;

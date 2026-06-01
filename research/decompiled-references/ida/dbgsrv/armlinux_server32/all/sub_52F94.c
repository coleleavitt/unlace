/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52F94
// Address: 0x00052F94

//----- (00052F94) --------------------------------------------------------
int __fastcall sub_52F94(int a1, int a2, _BYTE *a3, int a4)
{
  int (*v7)(void); // r3
  _DWORD *v8; // r4
  unsigned __int8 *v9; // r1

  v7 = *(int (**)(void))(*(_DWORD *)a1 + 28);
  if ( (char *)v7 != (char *)sub_52F50 )
  {
    v8 = (_DWORD *)v7();
    if ( v8 )
      goto LABEL_3;
LABEL_7:
    sub_7EBB4(a3, a4, "%08X", a2);
    return (int)v8;
  }
  v8 = sub_52F50(a1, a2);
  if ( !v8 )
    goto LABEL_7;
LABEL_3:
  if ( v8[3] )
    v9 = (unsigned __int8 *)v8[2];
  else
    v9 = (unsigned __int8 *)&dword_8DB98;
  sub_7968C(a3, v9, a4);
  return 1;
}
// 8DB98: using guessed type int dword_8DB98;

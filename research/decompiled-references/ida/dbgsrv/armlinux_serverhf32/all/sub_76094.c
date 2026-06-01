/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76094
// Address: 0x00076094

//----- (00076094) --------------------------------------------------------
int __fastcall sub_76094(_BYTE *a1, unsigned int a2, char *s, unsigned int a4)
{
  unsigned int v4; // r4
  unsigned int v5; // r7
  const char *v7; // r6
  size_t v8; // r0
  _BYTE *v9; // r0
  unsigned int v11; // [sp+4h] [bp-8h]

  v4 = a4;
  v5 = a2 - (_DWORD)a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(1225);
  }
  v7 = s;
  if ( s )
  {
    if ( a4 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v7 = &byte_8DEAC;
  if ( !a4 )
  {
LABEL_4:
    v11 = a2;
    v8 = strlen(v7);
    a2 = v11;
    v4 = v8;
  }
LABEL_5:
  if ( a2 < (unsigned int)&a1[v4] )
    v4 = v5 - 5;
  v9 = sub_75FB0(a1, a2, v4);
  return (int)memcpy(v9, v7, v4) + v4;
}
// 8DEAC: using guessed type char byte_8DEAC;
// D5C00: using guessed type char under_debugger;

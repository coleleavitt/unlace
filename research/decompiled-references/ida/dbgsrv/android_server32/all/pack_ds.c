/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_ds
// Address: 0x0007C8C4

//----- (0007C8C4) --------------------------------------------------------
_BYTE *__fastcall pack_ds(_BYTE *a1, unsigned int a2, char *s, size_t a4)
{
  unsigned int v4; // r7
  const char *v5; // r4
  unsigned int v8; // r7
  _BYTE *v9; // r5

  v4 = a2 - (_DWORD)a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  v5 = s;
  if ( !s )
    v5 = &byte_A0742;
  if ( !a4 )
    a4 = strlen(v5);
  v8 = v4 - 5;
  if ( (unsigned int)&a1[a4] <= a2 )
    v8 = a4;
  v9 = pack_dd(a1, a2, v8);
  qmemcpy(v9, v5, v8);
  return &v9[v8];
}
// A0742: using guessed type char byte_A0742;
// E0550: using guessed type char under_debugger;

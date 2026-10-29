/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_ds
// Address: 0x000AD4D0

//----- (000AD4D0) --------------------------------------------------------
_BYTE *__cdecl pack_ds(_BYTE *a1, unsigned int a2, const char *a3, size_t n)
{
  _BYTE *v4; // edx
  size_t v5; // eax
  const char *v6; // esi
  unsigned int v7; // edi
  _BYTE *v8; // esi
  const char *v10; // [esp+8h] [ebp-14h]

  v4 = a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v5 = n;
  v6 = &byte_DCEE2;
  if ( a3 )
    v6 = a3;
  v10 = v6;
  if ( !n )
  {
    v5 = strlen(v6);
    v4 = a1;
  }
  v7 = a2 - (_DWORD)a1 - 5;
  if ( (unsigned int)&v4[v5] <= a2 )
    v7 = v5;
  v8 = pack_dd(v4, a2, v7);
  memcpy(v8, v10, v7);
  return &v8[v7];
}
// DCEE2: using guessed type char byte_DCEE2;
// 13E34C: using guessed type int under_debugger;

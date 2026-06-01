/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_ds
// Address: 0x00000000000BFF60

//----- (00000000000BFF60) ----------------------------------------------------
_BYTE *__fastcall pack_ds(_BYTE *a1, unsigned __int64 a2, const char *a3, size_t a4)
{
  const char *v4; // r15
  __int64 v5; // r13
  _BYTE *v6; // rbx

  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v4 = &byte_EB522;
  if ( a3 )
    v4 = a3;
  if ( !a4 )
    a4 = strlen(v4);
  v5 = a2 - (_QWORD)a1 - 5;
  if ( (unsigned __int64)&a1[a4] <= a2 )
    v5 = a4;
  v6 = pack_dd(a1, a2, v5);
  memcpy(v6, v4, v5);
  return &v6[v5];
}
// 158B40: using guessed type __int64 under_debugger;

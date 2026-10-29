/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C880
// Address: 0x000000000048C880

//----- (000000000048C880) ----------------------------------------------------
_BYTE *__fastcall sub_48C880(__int64 a1, __off64_t a2, _BYTE *a3, __int64 a4)
{
  __off64_t v8; // x24
  _BYTE *v9; // x22
  _BYTE *v10; // x19
  int v12; // w0

  if ( a4 <= 0 )
    return a3;
  v8 = 0;
  if ( a2 != -1 )
  {
    v8 = sub_48C428(a1, 0, 1);
    sub_48C428(a1, a2, 0);
  }
  v9 = a3;
  v10 = &a3[a4 - 1];
  while ( v9 != v10 )
  {
    v12 = sub_48C6F0(a1);
    if ( v12 == -1 )
      break;
    *v9++ = v12;
    if ( !v12 )
      goto LABEL_7;
  }
  *v9 = 0;
LABEL_7:
  if ( a2 != -1 )
  {
    sub_48C428(a1, v8, 0);
    return a3;
  }
  return a3;
}

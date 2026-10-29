/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_interr_throws
// Address: 0x000000010006773C

//----- (000000010006773C) ----------------------------------------------------
__int64 set_interr_throws()
{
  __int64 v0; // x0
  __int64 v1; // x9
  char v2; // w8

  off_10009D688();
  v1 = *(unsigned __int8 *)(v0 + 252);
  *(_BYTE *)(v0 + 252) = v2;
  return v1;
}
// 100067758: variable 'v0' is possibly undefined
// 10006775C: variable 'v2' is possibly undefined
// 10009D688: using guessed type void (*off_10009D688)(void);

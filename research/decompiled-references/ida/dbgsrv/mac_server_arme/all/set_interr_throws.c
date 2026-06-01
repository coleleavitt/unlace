/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_interr_throws
// Address: 0x000000010006C454

//----- (000000010006C454) ----------------------------------------------------
__int64 set_interr_throws()
{
  __int64 v0; // x0
  __int64 v1; // x9
  char v2; // w8

  off_1000A5688();
  v1 = *(unsigned __int8 *)(v0 + 252);
  *(_BYTE *)(v0 + 252) = v2;
  return v1;
}
// 10006C474: variable 'v0' is possibly undefined
// 10006C478: variable 'v2' is possibly undefined
// 1000A5688: using guessed type void (*off_1000A5688)(void);

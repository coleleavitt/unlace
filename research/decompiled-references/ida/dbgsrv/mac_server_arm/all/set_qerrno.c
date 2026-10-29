/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_qerrno
// Address: 0x000000010006714C

//----- (000000010006714C) ----------------------------------------------------
__int64 set_qerrno()
{
  __int64 v0; // x0
  __int64 v1; // x9

  off_10009D688();
  if ( (_DWORD)v1 == -1 )
    return *(unsigned int *)(v0 + 248);
  *(_DWORD *)(v0 + 248) = v1;
  return v1;
}
// 100067170: variable 'v1' is possibly undefined
// 100067174: variable 'v0' is possibly undefined
// 10009D688: using guessed type void (*off_10009D688)(void);

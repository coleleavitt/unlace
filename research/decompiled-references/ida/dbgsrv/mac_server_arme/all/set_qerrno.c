/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_qerrno
// Address: 0x000000010006BE34

//----- (000000010006BE34) ----------------------------------------------------
__int64 set_qerrno()
{
  __int64 v0; // x0
  __int64 v1; // x9

  off_1000A5688();
  if ( (_DWORD)v1 == -1 )
    return *(unsigned int *)(v0 + 248);
  *(_DWORD *)(v0 + 248) = v1;
  return v1;
}
// 10006BE5C: variable 'v1' is possibly undefined
// 10006BE60: variable 'v0' is possibly undefined
// 1000A5688: using guessed type void (*off_1000A5688)(void);

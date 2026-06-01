/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_qerrno
// Address: 0x00000001000742E0

//----- (00000001000742E0) ----------------------------------------------------
__int64 set_qerrno()
{
  __int64 v0; // rax
  unsigned int v1; // ecx

  off_1000ACFB0();
  if ( v1 == -1 )
    return *(unsigned int *)(v0 + 248);
  else
    *(_DWORD *)(v0 + 248) = v1;
  return v1;
}
// 1000742F2: variable 'v1' is possibly undefined
// 1000742F4: variable 'v0' is possibly undefined
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);

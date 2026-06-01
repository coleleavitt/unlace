/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_create
// Address: 0x00084768

//----- (00084768) --------------------------------------------------------
int __fastcall qpipe_create(_DWORD *a1)
{
  int v2; // r0
  int v4; // r1
  int pipedes[2]; // [sp+4h] [bp-Ch] BYREF

  v2 = pipe(pipedes);
  if ( v2 )
    return *(_DWORD *)_errno(v2);
  v4 = pipedes[1];
  *a1 = pipedes[0];
  a1[1] = v4;
  return 0;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);

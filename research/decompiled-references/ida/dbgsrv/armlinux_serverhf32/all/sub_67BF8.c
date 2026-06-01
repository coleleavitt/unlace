/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67BF8
// Address: 0x00067BF8

//----- (00067BF8) --------------------------------------------------------
int __fastcall sub_67BF8(_DWORD *a1, void *buf, size_t n)
{
  int v5; // r6
  int *v7; // r0
  ssize_t v8; // r0
  int v9; // r4
  _BOOL4 v10; // r5

  v5 = a1[7];
  while ( 1 )
  {
    v8 = recv(v5, buf, n, 0);
    v9 = v8;
    if ( v8 != -1 )
      break;
    v7 = _errno_location();
    if ( *v7 != 4 )
      goto LABEL_10;
  }
  v10 = n != 0;
  if ( v8 )
    v10 = 0;
  if ( v10 )
  {
    a1[12] = 0;
    v9 = -1;
    a1[11] = "connection_closed_by_peer";
    return v9;
  }
  if ( v8 >= 0 )
    return v9;
  v7 = _errno_location();
LABEL_10:
  a1[11] = "recv";
  a1[12] = *v7;
  return v9;
}

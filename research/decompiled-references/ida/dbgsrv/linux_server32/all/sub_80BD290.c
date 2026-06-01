/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD290
// Address: 0x080BD290

//----- (080BD290) --------------------------------------------------------
int __cdecl sub_80BD290(_DWORD *a1, void *buf, size_t n)
{
  int v3; // edi
  ssize_t v4; // eax
  int v5; // ebp

  v3 = a1[7];
  while ( 1 )
  {
    v4 = recv(v3, buf, n, 0);
    v5 = v4;
    if ( v4 != -1 )
      break;
    if ( *__errno_location() != 4 )
      goto LABEL_8;
  }
  if ( !v4 && n )
  {
    v5 = -1;
    a1[11] = "connection_closed_by_peer";
    a1[12] = 0;
    return v5;
  }
  if ( v4 >= 0 )
    return v5;
LABEL_8:
  a1[11] = "recv";
  a1[12] = *__errno_location();
  return v5;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qread
// Address: 0x000AF570

//----- (000AF570) --------------------------------------------------------
ssize_t __cdecl qread(int fd, void *buf, int nbytes)
{
  ssize_t v3; // esi

  if ( nbytes < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v3 = read(fd, buf, nbytes);
  if ( v3 != nbytes )
    set_qerrno(2 * (v3 != -1) + 1);
  return v3;
}
// 13E34C: using guessed type int under_debugger;

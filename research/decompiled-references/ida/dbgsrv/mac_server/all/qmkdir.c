/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmkdir
// Address: 0x000000010007C320

//----- (000000010007C320) ----------------------------------------------------
int __fastcall qmkdir(const char *a1, mode_t a2)
{
  int result; // eax

  result = mkdir(a1, a2);
  if ( result == -1 )
  {
    set_qerrno();
    return -1;
  }
  return result;
}

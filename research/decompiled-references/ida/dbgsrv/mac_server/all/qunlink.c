/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qunlink
// Address: 0x000000010007C760

//----- (000000010007C760) ----------------------------------------------------
int __fastcall qunlink(const char *a1)
{
  int result; // eax
  int v2; // ebx

  result = unlink(a1);
  if ( result )
  {
    v2 = result;
    set_qerrno();
    return v2;
  }
  return result;
}

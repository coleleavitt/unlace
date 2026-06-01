/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfilelength
// Address: 0x00000000000C2270

//----- (00000000000C2270) ----------------------------------------------------
__int64 __fastcall qfilelength(int a1)
{
  __off_t v1; // rax
  __off_t v2; // r14
  __off_t v3; // r15

  v1 = qtell(a1);
  if ( v1 == -1 )
    return -1;
  v2 = v1;
  v3 = qseek(a1, 0, 2);
  qseek(a1, v2, 0);
  return v3;
}

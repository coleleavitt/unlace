/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfilesize
// Address: 0x0007E068

//----- (0007E068) --------------------------------------------------------
int __fastcall qfilesize(const char *a1)
{
  int result; // r0
  int v3; // r1
  _DWORD v4[11]; // [sp+0h] [bp-58h] BYREF

  result = 0;
  if ( a1 )
  {
    v3 = qstat(a1, v4);
    result = 0;
    if ( !v3 )
      return v4[10];
  }
  return result;
}

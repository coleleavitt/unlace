/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfilesize
// Address: 0x00000000000C2220

//----- (00000000000C2220) ----------------------------------------------------
__int64 __fastcall qfilesize(const char *a1)
{
  _QWORD v2[11]; // [rsp+0h] [rbp-58h] BYREF

  v2[10] = __readfsqword(0x28u);
  if ( a1 && !(unsigned int)qstat(a1, (__int64)v2) )
    return v2[5];
  else
    return 0;
}

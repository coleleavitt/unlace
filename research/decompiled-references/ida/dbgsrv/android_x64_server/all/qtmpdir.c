/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpdir
// Address: 0x00000000000C1110

//----- (00000000000C1110) ----------------------------------------------------
unsigned __int64 __fastcall qtmpdir(unsigned __int64 a1, __int64 a2)
{
  const char *v3; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+20h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v6 = 0;
  if ( (unsigned __int8)qgetenv("TMPDIR", (__int64)ptr) )
  {
    if ( ptr[1] )
      v3 = (const char *)ptr[0];
    else
      v3 = s1;
    qustrncpy(a1, (__int64)v3, a2);
  }
  else
  {
    qustrncpy(a1, (__int64)"/tmp", a2);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v6 = 0;
  }
  return a1;
}

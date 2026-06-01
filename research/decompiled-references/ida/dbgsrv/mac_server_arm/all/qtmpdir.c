/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpdir
// Address: 0x000000010006E4E0

//----- (000000010006E4E0) ----------------------------------------------------
unsigned __int64 __fastcall qtmpdir(unsigned __int64 a1, __int64 a2)
{
  char *v4; // x1
  void *v6; // [xsp+0h] [xbp-30h] BYREF
  __int64 v7; // [xsp+8h] [xbp-28h]
  __int64 v8; // [xsp+10h] [xbp-20h]

  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  if ( (unsigned int)qgetenv("TMPDIR", &v6) )
  {
    if ( v7 )
      v4 = (char *)v6;
    else
      v4 = &byte_100075A30;
    qustrncpy(a1, (__int64)v4, a2);
  }
  else
  {
    qustrncpy(a1, (__int64)"/tmp", a2);
  }
  if ( v6 )
  {
    v7 = 0;
    qfree(v6);
  }
  return a1;
}
// 100075A30: using guessed type char byte_100075A30;

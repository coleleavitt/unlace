/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F640
// Address: 0x000000000048F640

//----- (000000000048F640) ----------------------------------------------------
unsigned __int64 __fastcall sub_48F640(unsigned __int64 a1, __int64 a2)
{
  unsigned __int8 *v4; // x1
  void *ptr; // [xsp+20h] [xbp-20h] BYREF
  __int64 v7; // [xsp+28h] [xbp-18h]
  __int64 v8; // [xsp+30h] [xbp-10h]

  ptr = nullptr;
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)sub_4950A8("TMPDIR", (__int64)&ptr) )
  {
    v4 = (unsigned __int8 *)ptr;
    if ( !v7 )
      v4 = (unsigned __int8 *)&qword_4B2D48;
    sub_4860D8(a1, v4, a2);
  }
  else
  {
    sub_4860D8(a1, "/tmp", a2);
  }
  if ( ptr )
  {
    v7 = 0;
    j__free(ptr);
  }
  return a1;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;

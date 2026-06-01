/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpdir
// Address: 0x00000000000BC424

//----- (00000000000BC424) ----------------------------------------------------
unsigned __int64 __fastcall qtmpdir(unsigned __int64 a1, __int64 a2)
{
  char *v4; // x1
  void *ptr; // [xsp+0h] [xbp-40h] BYREF
  __int64 v7; // [xsp+8h] [xbp-38h]
  __int64 v8; // [xsp+10h] [xbp-30h]
  __int64 v9; // [xsp+18h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ptr = nullptr;
  v7 = 0;
  v8 = 0;
  if ( (qgetenv("TMPDIR", (__int64)&ptr) & 1) != 0 )
  {
    if ( v7 )
      v4 = (char *)ptr;
    else
      v4 = &byte_F154B;
    qustrncpy(a1, (__int64)v4, a2);
  }
  else
  {
    qustrncpy(a1, (__int64)"/tmp", a2);
  }
  if ( ptr )
  {
    v7 = 0;
    qfree(ptr);
    ptr = nullptr;
    v8 = 0;
  }
  return a1;
}
// F154B: using guessed type char byte_F154B;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_776D4
// Address: 0x000776D4

//----- (000776D4) --------------------------------------------------------
__int64 __fastcall sub_776D4(int a1)
{
  __int64 v1; // r0
  bool v2; // zf
  __int64 v3; // r4

  if ( !a1 )
  {
    v3 = -1;
    sub_70A2C(1);
    *_errno_location() = 9;
    sub_70A2C(1);
    return v3;
  }
  v1 = ftello64();
  v2 = HIDWORD(v1) == -1;
  LODWORD(v3) = v1;
  if ( HIDWORD(v1) == -1 )
    v2 = (_DWORD)v1 == -1;
  HIDWORD(v3) = HIDWORD(v1);
  if ( !v2 )
    return v3;
  sub_70A2C(1);
  return v3;
}
// 13E58: using guessed type __int64 ftello64(void);

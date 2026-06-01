/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7783C
// Address: 0x0007783C

//----- (0007783C) --------------------------------------------------------
__int64 __fastcall sub_7783C(int a1)
{
  __int64 v1; // r0
  bool v2; // zf
  __int64 v3; // r4

  if ( !a1 )
  {
    v3 = -1;
    sub_70B98(1);
    *_errno_location() = 9;
    sub_70B98(1);
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
  sub_70B98(1);
  return v3;
}
// 13FAC: using guessed type __int64 ftello64(void);

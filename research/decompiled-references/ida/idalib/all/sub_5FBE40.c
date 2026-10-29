__int64 __fastcall sub_5FBE40(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax
  int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = sub_7480F0(&v3, a1);
  result = 3;
  if ( v1 )
  {
    setinf_flag(2, 8, v3 == 0);
    return 0;
  }
  return result;
}

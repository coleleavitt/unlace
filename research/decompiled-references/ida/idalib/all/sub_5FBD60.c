__int64 __fastcall sub_5FBD60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  char v7; // dl
  __int64 result; // rax
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v7 = sub_7480F0(&v9, a1);
  result = 3;
  if ( v7 )
  {
    setinf_flag(a4, a5, v9 != 0);
    return 0;
  }
  return result;
}

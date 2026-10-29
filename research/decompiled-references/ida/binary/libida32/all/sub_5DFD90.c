__int64 __fastcall sub_5DFD90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v5; // dl
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[1] = __readfsqword(0x28u);
  v5 = sub_727DF0(v7, a1, a3, 0x8000000000000000LL, 0x7FFFFFFFFFFFFFFFLL, 0);
  result = 3;
  if ( v5 )
  {
    setinf(a4, v7[0]);
    return 0;
  }
  return result;
}


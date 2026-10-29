__int64 __fastcall sub_5DFD20(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  char v6; // dl
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  v6 = sub_727DF0(v8, a1, a3, 0, a5, 0);
  result = 3;
  if ( v6 )
  {
    setinf(a4, v8[0]);
    return 0;
  }
  return result;
}


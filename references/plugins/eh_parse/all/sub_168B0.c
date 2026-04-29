__int64 __fastcall sub_168B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  __int64 result; // rax
  __int64 v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) - 10 > 1 || (result = sub_1DF80(a1, a2, a3, a5, a6, 1, a8, 0), !(_BYTE)result) )
  {
    result = sub_13780(a1, a4, v13);
    if ( (_BYTE)result )
    {
      result = 0;
      if ( v13[0] != a4 )
        return sub_160D0(a1, a2, a3, v13[0], a5, a6, a7 + 1, a8);
    }
  }
  return result;
}

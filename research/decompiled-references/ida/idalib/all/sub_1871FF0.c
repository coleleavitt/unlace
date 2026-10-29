__int64 __fastcall sub_1871FF0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v9[0] = a2;
  if ( a2 )
  {
    if ( a4 )
    {
      sub_1CB44B0(a1, v9);
      return sub_18717A0(a1, v9[0], a3, a4, v6, v7);
    }
  }
  return result;
}

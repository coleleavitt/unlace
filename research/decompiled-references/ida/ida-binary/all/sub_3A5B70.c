__int64 __fastcall sub_3A5B70(double a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = sub_5083A0((unsigned int)byte_8CF568);
  if ( !(_BYTE)result )
  {
    if ( under_debugger )
      BUG();
    interr(41459, a3, v4, v5, a1);
    return sub_3A5BB0();
  }
  return result;
}

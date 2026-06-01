__int64 __fastcall sub_3A5B30(double a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = sub_5082C0(&qword_8CF560);
  if ( !(_BYTE)result )
  {
    if ( under_debugger )
      BUG();
    interr(41458, a3, v4, v5, a1);
    return sub_3A5B70();
  }
  return result;
}

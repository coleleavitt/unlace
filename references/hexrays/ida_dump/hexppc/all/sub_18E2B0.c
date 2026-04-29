__int64 __fastcall sub_18E2B0(__int64 a1, unsigned __int8 *a2, int a3, char a4)
{
  __int64 result; // rax

  if ( a4 )
    result = sub_123850((unsigned __int64)a2, a1, a3);
  else
    result = sub_123A80(a2, a1, a3, 0);
  if ( !(_BYTE)result )
  {
    if ( !under_debugger )
      sub_37EEE0(52395);
    BUG();
  }
  return result;
}

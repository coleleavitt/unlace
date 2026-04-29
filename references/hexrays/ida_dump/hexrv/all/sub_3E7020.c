__int64 __fastcall sub_3E7020(unsigned __int8 *a1, double a2)
{
  __int64 *v2; // rcx
  int v3; // edx
  __int64 result; // rax
  __int64 v5; // rsi

  v2 = (__int64 *)&unk_40C240;
  v3 = 8;
  while ( 1 )
  {
    result = *((unsigned __int8 *)v2 + 14);
    if ( (_BYTE)result == 0xFF )
    {
      result = a1[80];
    }
    else if ( (_BYTE)result == 0xFE )
    {
      result = a1[692];
    }
    v5 = *v2;
    if ( (_DWORD)result )
      v3 = (v3 + result - 1) & -(int)result;
    *(_DWORD *)&a1[*v2] = v3;
    v3 += result;
    if ( v5 == 624 )
      break;
    v2 += 2;
  }
  if ( (a1[608] & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE11u, 624, a2);
    BUG();
  }
  return result;
}

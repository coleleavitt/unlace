__int64 __fastcall sub_31B930(__int64 a1)
{
  __int64 result; // rax

  result = under_debugger;
  if ( !under_debugger )
    return *(_BYTE *)(a1 + 1337) >> 7;
  return result;
}

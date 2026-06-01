__int64 *__fastcall sub_7971D0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 *result; // rax

  result = *(__int64 **)(a1 + 1544);
  if ( *result )
    return (__int64 *)sub_71C760(*result, a2, 1, a4, a5, a6);
  return result;
}


__int64 __fastcall sub_1A71260(__int64 *a1, char *a2, int a3, __int64 a4, double a5)
{
  __int64 result; // rax

  result = sub_1A70C00(a1, a2, a3, a4, a5);
  if ( !(_BYTE)result )
    return sub_1A70F00(a1, a3, a4, a5);
  return result;
}

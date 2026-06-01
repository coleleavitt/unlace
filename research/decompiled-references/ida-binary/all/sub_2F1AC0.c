__int64 __fastcall sub_2F1AC0(const char *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = sub_2EE840(a1, a2, 2, a3);
  if ( (unsigned int)result <= 3 )
  {
    v4 = *(_QWORD *)a2;
    if ( *(_DWORD *)(a2 + 8) != 49 )
      return 6;
    if ( !v4 )
      return 6;
    result = 2;
    if ( !*(_QWORD *)(v4 + 2392) )
      return 6;
  }
  return result;
}

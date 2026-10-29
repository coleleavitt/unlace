__int64 __fastcall sub_11D83E0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_11D8180(a3);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
      *a2 = 2;
  }
  else
  {
    *a2 = 0;
  }
  return result;
}

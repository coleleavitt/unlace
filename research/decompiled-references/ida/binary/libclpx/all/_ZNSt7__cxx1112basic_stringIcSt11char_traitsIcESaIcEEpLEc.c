__int64 *__fastcall std::string::operator+=(__int64 *a1, char a2)
{
  __int64 *result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx

  result = a1;
  v3 = 15;
  v4 = *a1;
  v5 = a1[1];
  v6 = v5 + 1;
  if ( (__int64 *)*a1 != a1 + 2 )
    v3 = a1[2];
  if ( v6 > v3 )
  {
    std::string::_M_mutate();
    result = a1;
    v4 = *a1;
  }
  *(_BYTE *)(v4 + v5) = a2;
  v7 = *result;
  result[1] = v6;
  *(_BYTE *)(v7 + v5 + 1) = 0;
  return result;
}


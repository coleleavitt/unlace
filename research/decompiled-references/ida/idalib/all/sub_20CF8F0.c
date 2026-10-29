__int64 __fastcall sub_20CF8F0(_BYTE **a1, __int64 *a2)
{
  __int64 result; // rax
  _BYTE *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  *a2 = 0;
  result = 1;
  v3 = *a1;
  if ( *a1 != a1[1] && (unsigned __int8)(*v3 - 48) <= 9u )
  {
    v4 = 0;
    do
    {
      v5 = -48;
      v6 = 10 * v4;
      *a2 = v6;
      if ( a1[1] != v3 )
      {
        *a1 = v3 + 1;
        v5 = (char)*v3 - 48;
      }
      v4 = v5 + v6;
      *a2 = v4;
      v3 = *a1;
    }
    while ( *a1 != a1[1] && (unsigned __int8)(*v3 - 48) <= 9u );
    return 0;
  }
  return result;
}

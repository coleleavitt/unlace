__int64 __fastcall sub_2F5C0(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1[1];
  v3 = a2[1];
  result = 0xFFFFFFFFLL;
  if ( v2 >= v3 )
  {
    result = 1;
    if ( v3 >= v2 )
    {
      result = 0xFFFFFFFFLL;
      if ( *a1 >= *a2 )
        return *a2 < *a1;
    }
  }
  return result;
}


__int64 __fastcall sub_2F500(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( *a1 >= *a2 )
    return *a2 < *a1;
  return result;
}


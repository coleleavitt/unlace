__int64 __fastcall sub_B76A0(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 192);
  if ( !v2 )
    return -1;
  result = 0;
  if ( *a2 != -1 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 184) + 32 * result) != *a2 )
    {
      if ( ++result == v2 )
        return -1;
    }
  }
  return result;
}


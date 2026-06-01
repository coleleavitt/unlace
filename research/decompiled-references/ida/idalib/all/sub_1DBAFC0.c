__int64 __fastcall sub_1DBAFC0(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  while ( 1 )
  {
    result = *(_QWORD *)(a1 + 120);
    if ( result )
      break;
    if ( *(_BYTE *)(a1 + 113) )
    {
      a1 = *(_QWORD *)(a1 + 104);
      if ( a1 )
        continue;
    }
    return result;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(a1 + 128);
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 136);
  return *(_QWORD *)(a1 + 120);
}

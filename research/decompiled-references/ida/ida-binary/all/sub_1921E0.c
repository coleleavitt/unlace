__int64 __fastcall sub_1921E0(__int64 *a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *((_DWORD *)a1 + 2) != a2[2] )
    return 0;
  v3 = *a1;
  if ( (*a1 == 0) != (*(_QWORD *)a2 == 0) )
    return 0;
  if ( !v3 )
    return 1;
  result = 0;
  if ( *(_DWORD *)(v3 + 8) == *(_DWORD *)(*(_QWORD *)a2 + 8LL) )
    return sub_1F0890(a3, v3);
  return result;
}

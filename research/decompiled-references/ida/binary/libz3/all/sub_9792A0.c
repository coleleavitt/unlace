bool __fastcall sub_9792A0(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  char v3; // al
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a3[44] & 8;
  if ( (a2[44] & 8) != 0 )
  {
    if ( !v3 )
      return *(_DWORD *)(*(_QWORD *)a3 + 24LL) == 0;
    return 1;
  }
  v5 = *(unsigned int *)(*(_QWORD *)a2 + 24LL);
  if ( v3 )
    return (_DWORD)v5 == 0;
  result = 0;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 24LL) == (_DWORD)v5 )
  {
    if ( !(_DWORD)v5 )
      return 1;
    v6 = 112;
    while ( *(_QWORD *)(*(_QWORD *)&a3[v6] + 8LL) == *(_QWORD *)(*(_QWORD *)&a2[v6] + 8LL) )
    {
      v6 += 8;
      if ( v6 == 8 * v5 + 112 )
        return 1;
    }
    return 0;
  }
  return result;
}


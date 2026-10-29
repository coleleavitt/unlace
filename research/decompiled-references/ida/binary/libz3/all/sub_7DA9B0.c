__int64 __fastcall sub_7DA9B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  _DWORD *v3; // rax

  v2 = 0;
  if ( *(_WORD *)(*(_QWORD *)a2 + 4LL) )
    return v2;
  v3 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 24LL);
  if ( !v3 )
    return v2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) != *v3 )
    return v2;
  v2 = 1;
  if ( !v3[1] )
    return v2;
  LOBYTE(v2) = v3[1] == 1;
  return v2;
}


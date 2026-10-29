__int64 __fastcall sub_C0F6C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( !*((_BYTE *)a1 + 2200) )
    return 0;
  v2 = *a1;
  if ( !*(_DWORD *)(v2 + 712) )
    return 0;
  if ( !(unsigned __int8)sub_18290A0(v2) )
    return 0;
  v3 = a1[117];
  if ( !v3 )
    return 0;
  v4 = v3 + 24LL * *(unsigned int *)(v3 - 4);
  if ( v4 == v3 )
    return 0;
  while ( *(_QWORD *)(*a1 + 864) != *(_QWORD *)(v3 + 8) )
  {
    v3 += 24;
    if ( v4 == v3 )
      return 0;
  }
  return *(_QWORD *)(v3 + 16);
}


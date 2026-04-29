bool __fastcall sub_1DE00(__int64 *a1, unsigned __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rdi
  int v4; // ecx
  int v5; // eax
  unsigned __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 2) - 1;
  if ( v2 < 0 )
    return 0;
  v3 = *a1;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = v4 + (v2 - v4) / 2;
      v6 = *(_QWORD *)(v3 + 16LL * v5);
      if ( a2 >= v6 )
        break;
      v2 = v5 - 1;
      if ( v4 > v5 - 1 )
        goto LABEL_7;
    }
    if ( v6 >= a2 )
      return v5 != -1 && *(_QWORD *)(v3 + 16LL * v5) == a2;
    v4 = v5 + 1;
  }
  while ( v5 + 1 <= v2 );
LABEL_7:
  v5 = v4 - 1;
  return v5 != -1 && *(_QWORD *)(v3 + 16LL * v5) == a2;
}

__int64 __fastcall sub_56A220(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // rdx
  unsigned int v3; // ecx
  unsigned int v4; // eax

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    sub_55D370(a1);
  v2 = (_DWORD *)(*(_QWORD *)a1 + 48LL * a2);
  v3 = v2[4];
  v4 = *(_DWORD *)(*(_QWORD *)v2 + 220LL);
  if ( v4 >= v3 )
    return v4 - v3;
  v2[4] = v4;
  return 0;
}

bool __fastcall sub_A56CB0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 i; // rcx

  v1 = sub_B8C3D0(a1);
  v2 = *(_QWORD *)v1;
  v3 = *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
  if ( v2 < v3 )
  {
    v4 = v2;
    while ( 1 )
    {
      v2 = v4;
      if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 165 )
        break;
      v4 += 8LL;
      if ( v3 == v4 )
        return 0;
    }
    return v2 != v3;
  }
  if ( v2 == v3 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v3 + 36LL) != 165 )
  {
    for ( i = v3 + 8; ; i += 8LL )
    {
      v3 = i;
      if ( v2 == i )
        break;
      if ( *(_WORD *)(*(_QWORD *)v3 + 36LL) == 165 )
        return v2 != v3;
    }
    return 0;
  }
  return v2 != v3;
}

bool __fastcall sub_1EAAC70(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *a1;
  v3 = *a2;
  if ( !*a1 || !v3 )
    return (v3 != 0) == (v2 != 0);
  do
  {
    v4 = *(_QWORD *)(v2 + 8);
    if ( !v4 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      v2 = 0;
      if ( v5 )
        goto LABEL_7;
      return v2 == 0;
    }
    v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( (v4 & 4) != 0 && v2 );
  while ( 1 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( !v5 )
      break;
LABEL_7:
    v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 4) == 0 || !v3 )
      return v2 == v3;
  }
  return v2 == 0;
}

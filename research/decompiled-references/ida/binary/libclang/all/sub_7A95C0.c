__int64 __fastcall sub_7A95C0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v1 = sub_79A2B0(a1);
  v2 = (_QWORD *)*v1;
  v3 = *v1 + 8LL * *((unsigned int *)v1 + 2);
  if ( (unsigned __int64)v2 >= v3 )
  {
    if ( v2 == (_QWORD *)v3 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 382 )
    {
      v3 += 8LL;
      if ( v2 == (_QWORD *)v3 )
        return 0;
    }
    v4 = v2;
  }
  else
  {
    v4 = v2;
    while ( *(_WORD *)(*v4 + 32LL) != 382 )
    {
      if ( (_QWORD *)v3 == ++v4 )
        return 0;
    }
  }
  if ( v4 == (_QWORD *)v3 )
    return 0;
  v5 = *v2;
  if ( *(_WORD *)(*v2 + 32LL) != 382 )
  {
    v6 = v2 + 1;
    do
      v5 = *v6++;
    while ( *(_WORD *)(v5 + 32) != 382 );
  }
  return v5;
}


__int64 __fastcall sub_F65FA0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx

  if ( (*(_WORD *)(a1 + 18) & 0x3F8) != 0 )
    return 1;
  do
  {
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL);
    v2 = *(unsigned __int8 *)(a1 + 16);
    if ( (unsigned int)(v2 - 35) > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
        return 0;
      v1 = sub_F62E70(a1);
      a1 = v1;
      if ( !v1 || *(_BYTE *)(v1 + 16) == 36 )
        return 0;
    }
    else if ( (_BYTE)v2 == 36 )
    {
      return 0;
    }
  }
  while ( (*(_WORD *)(a1 + 18) & 0x3F8) == 0 );
  return 1;
}

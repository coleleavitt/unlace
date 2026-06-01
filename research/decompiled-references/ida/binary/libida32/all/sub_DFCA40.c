bool __fastcall sub_DFCA40(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  bool result; // al
  __int64 v6; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(v1 + 16);
  if ( (v2 & 4) != 0 )
    return 0;
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v3 )
    return 0;
  v4 = v3 + 72;
  while ( 1 )
  {
    result = sub_B6AE60(v4);
    if ( result )
      break;
    v6 = *(_QWORD *)(sub_B68470(v4) + 16);
    if ( (v6 & 4) != 0 )
    {
      v4 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v4 )
        return 0;
    }
    else
    {
      v4 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v4 )
        return 0;
    }
  }
  return result;
}


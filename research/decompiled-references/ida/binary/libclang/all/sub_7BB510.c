__int64 __fastcall sub_7BB510(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 120);
  if ( !v2 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v2 = *(_QWORD *)(a1 + 120);
  }
  if ( v2 <= 7 )
    return 0;
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v3 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a1);
    v6 = *(_QWORD *)(a1 + 120);
    if ( !v6 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v6 = *(_QWORD *)(a1 + 120);
    }
    if ( v6 <= 7 )
      return 0;
    v3 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v3 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a1);
      v3 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
  }
  result = *(_QWORD *)(v3 + 56);
  if ( !result )
    return 0;
  while ( *(char *)(result + 28) < 0 || (*(_BYTE *)(result + 8) & 6) != 0 )
  {
    result = *(_QWORD *)(result + 128);
    if ( !result )
      return 0;
  }
LABEL_8:
  v5 = *(_QWORD *)(result + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(result + 40) & 7) != 0 )
    v5 = 0;
  if ( a2 != v5 )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(result + 128);
      if ( !result )
        return 0;
      while ( *(char *)(result + 28) >= 0 )
      {
        if ( (*(_BYTE *)(result + 8) & 6) == 0 )
          goto LABEL_8;
        result = *(_QWORD *)(result + 128);
        if ( !result )
          return 0;
      }
    }
  }
  return result;
}


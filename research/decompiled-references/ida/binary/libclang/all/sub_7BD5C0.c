unsigned __int64 __fastcall sub_7BD5C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax

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
    v3 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v4 = *(_QWORD *)(v3 + 56);
  if ( !v4 )
    return 0;
  while ( *(char *)(v4 + 28) < 0 || (*(_BYTE *)(v4 + 8) & 6) != 0 )
  {
    v4 = *(_QWORD *)(v4 + 128);
    if ( !v4 )
      return 0;
  }
LABEL_14:
  v6 = sub_798D40(v4);
  v7 = sub_6C1BC0(v6, v4);
  if ( !v7 || (result = sub_7BD3E0(v7, a2, 1)) == 0 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v4 + 128);
      if ( !v4 )
        return 0;
      if ( *(char *)(v4 + 28) >= 0 && (*(_BYTE *)(v4 + 8) & 6) == 0 )
        goto LABEL_14;
    }
  }
  return result;
}


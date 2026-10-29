__int64 __fastcall sub_7BAE70(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 120);
  v3 = a1;
  if ( !v2 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v2 = *(_QWORD *)(a1 + 120);
  }
  if ( v2 <= 7 )
    return 0;
  if ( (*(_BYTE *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    sub_7B7DB0(a1);
  while ( 1 )
  {
    v4 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v3 + 40) & 7) != 0 )
      v4 = 0;
    if ( a2 == v4 )
      break;
    v3 = sub_7BACE0(v3);
    if ( !v3 )
      return 0;
  }
  return v3;
}


__int64 __fastcall sub_7BB160(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 )
  {
    if ( v1 <= 7 )
      return 0;
  }
  else
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v1 = *(_QWORD *)(a1 + 120);
    if ( v1 <= 7 )
      return 0;
  }
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  v3 = *(_QWORD *)v2;
  if ( !*(_QWORD *)v2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 72) & 1) != 0 )
    sub_7B7DB0(a1);
  v4 = sub_798D40(a1);
  return sub_6C1B40(v4, v3);
}


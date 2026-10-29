__int64 __fastcall sub_7BB1E0(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 120);
  if ( !v1 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v1 = *(_QWORD *)(a1 + 120);
  }
  if ( v1 <= 7 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v2 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a1);
    v2 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  result = *(_QWORD *)(v2 + 56);
  if ( !result )
    return 0;
  while ( *(char *)(result + 28) < 0 || (*(_BYTE *)(result + 8) & 6) != 0 )
  {
    result = *(_QWORD *)(result + 128);
    if ( !result )
      return 0;
  }
  return result;
}


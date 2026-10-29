__int64 __fastcall sub_13F49C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 i; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 || *(_QWORD *)(a2[2] + 8LL) != *(_QWORD *)(v2 + 8) || (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 21LL) & 0x10) == 0 )
    return 0;
  for ( i = a2[1]; i; i = *(_QWORD *)(v5 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v5 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v5 )
      break;
    a2 = (_QWORD *)v5;
  }
  v6 = sub_228AA60(a2 + 4, *a2, 0);
  return sub_13F47D0(v6, v7);
}

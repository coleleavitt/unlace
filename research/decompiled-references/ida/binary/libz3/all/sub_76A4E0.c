__int64 __fastcall sub_76A4E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int i; // r12d
  __int64 v5; // rax
  _BYTE *v6; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( !v2 || *(_DWORD *)(a1 + 64) != *(_DWORD *)v2 || *(_DWORD *)(v2 + 4) )
    return 0;
  for ( i = 0; ; ++i )
  {
    v5 = *(_QWORD *)(v2 + 8);
    if ( !v5 || i >= *(_DWORD *)(v5 - 4) )
      return 1;
    v6 = (_BYTE *)(16LL * i + v5);
    if ( v6[8] != 1 || *(_WORD *)(*(_QWORD *)v6 + 4LL) != 3 || !(unsigned __int8)sub_1673B10(a1 + 40, *(_QWORD *)v6) )
      break;
    v2 = *(_QWORD *)(a2 + 24);
    if ( !v2 )
      return 1;
  }
  return 0;
}


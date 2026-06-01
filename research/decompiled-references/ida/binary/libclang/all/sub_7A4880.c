unsigned __int64 __fastcall sub_7A4880(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  char v4; // si
  __int64 v5; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v10; // rax
  char v11; // si

  v1 = sub_798D40(a1);
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    v3 = v2 & 0xFFFFFFFFFFFFFFF0LL;
    v4 = 0;
  }
  else
  {
    v10 = sub_6E8D60(v1, a1);
    v11 = v10;
    v3 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    v4 = v11 & 7;
  }
  v5 = sub_7921D0(v1 + 17376, *(_QWORD *)(v3 + 8) | v4 & 7);
  for ( i = sub_7A0650(a1 + 64, v5); ; i = *(_QWORD *)(v7 + 8) )
  {
    if ( !i )
      return 0;
    v7 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( (i & 4) == 0 )
      break;
    if ( !v7 )
      BUG();
    v8 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(*(_QWORD *)v7 + 28LL) & 0x7F) == 0x22 && (*(_BYTE *)(v8 + 83) & 0x10) == 0 )
      return v8;
  }
  v8 = 0;
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x22 && (*(_BYTE *)(v7 + 83) & 0x10) == 0 )
    return i & 0xFFFFFFFFFFFFFFF8LL;
  return v8;
}


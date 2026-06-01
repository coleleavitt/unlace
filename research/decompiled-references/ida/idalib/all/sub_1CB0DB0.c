__int64 __fastcall sub_1CB0DB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v6; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( (v2 & 7) != 0 )
    return 0;
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(v3 + 16);
  if ( *(_DWORD *)v4 != 11
    || *(_QWORD *)(v4 + 16) != 0x6B5F74616D726F66LL
    || *(_WORD *)(v4 + 24) != 28265
    || *(_BYTE *)(v4 + 26) != 100 )
  {
    return 0;
  }
  v6 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v6 = (_QWORD *)*v6;
  if ( sub_B8EBA0((__int64)v6) )
    return sub_142E840(a1, 0x134FF98u);
  else
    return 0;
}

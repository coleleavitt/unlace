bool __fastcall sub_C94FB0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx

  v2 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 || (*(_BYTE *)(v2 + 28) & 0x7Fu) - 26 > 0x1A )
    return 0;
  if ( !(unsigned __int8)sub_B79970(v2) )
    return 0;
  v4 = sub_F63270(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v5 = sub_B96F60(v4);
  if ( v5 )
    v5 += 72;
  v6 = (_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
    v6 = (_QWORD *)*v6;
  return v5 == (_QWORD)v6;
}

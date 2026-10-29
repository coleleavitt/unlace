bool __fastcall sub_8C54E0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v3 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( *a2 <= 7u || (*(_BYTE *)(v3 + 28) & 0x7Fu) - 24 > 0x1A || !(unsigned __int8)sub_783910(v3) )
    return 0;
  v5 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v6 = sub_7A3750(v5);
  if ( v6 )
    v6 += 72;
  v7 = (_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
    v7 = (_QWORD *)*v7;
  return v6 == (_QWORD)v7;
}


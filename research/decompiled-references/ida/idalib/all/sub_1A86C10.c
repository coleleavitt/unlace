__int64 __fastcall sub_1A86C10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v2 + 16) != 13 || ((*(_WORD *)(v2 + 18) >> 3) & 0x1FF) != 0x1C1 )
    return 0;
  if ( (*(_BYTE *)(sub_168B6E0(a1) + 2) & 4) != 0 )
    return sub_E93D50(*(_QWORD *)(a1 + 88), a2);
  return 0;
}

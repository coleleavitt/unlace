bool __fastcall sub_F58060(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // rax
  char v3; // dl

  for ( i = *(_QWORD *)(a1 + 8); ; i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
  {
    v2 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v3 = *(_BYTE *)(v2 + 16);
    if ( v3 == 13 )
      return (((*(_WORD *)(v2 + 18) >> 3) + 32) & 0x1FFu) <= 7;
    if ( v3 != 14 )
      break;
  }
  return 0;
}

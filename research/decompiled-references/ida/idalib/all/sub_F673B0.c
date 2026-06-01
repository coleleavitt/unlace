bool __fastcall sub_F673B0(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  if ( *(_BYTE *)(a1 + 16) != 42 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
      return 0;
    a1 = sub_F62E70(a1);
    if ( !a1 )
      return 0;
  }
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v2 = *(_BYTE *)(v1 + 16);
  if ( v2 == 13 )
    return ((*(_WORD *)(v1 + 18) >> 3) & 0x1FF) == 435;
  else
    return v2 == 48;
}

__int64 __fastcall sub_6DAB70(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
LABEL_9:
    v2 = *(_QWORD *)v2;
    goto LABEL_10;
  }
  while ( 1 )
  {
LABEL_10:
    if ( !v2 )
      return 0;
    if ( (*(_BYTE *)(v2 + 8) & 0x7Fu) - 58 <= 4
      && v2 != 64
      && (*(char *)(v2 - 36) < 0 || (unsigned __int8)sub_B8E180(v2) || (*(_BYTE *)(v2 + 10) & 1) == 0) )
    {
      return 1;
    }
    v3 = *(_QWORD *)(sub_B8C1B0(v2) + 16);
    v2 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 4) != 0 )
      goto LABEL_9;
  }
}

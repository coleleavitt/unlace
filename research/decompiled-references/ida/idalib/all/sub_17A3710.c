__int64 __fastcall sub_17A3710(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rdi
  unsigned __int8 v4; // al
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v3 = *(_QWORD *)v3;
  while ( 1 )
  {
    v4 = *(_BYTE *)(v3 + 8) & 0x7F;
    if ( !v4 )
      break;
    while ( 1 )
    {
      if ( (unsigned int)v4 - 58 <= 3 && v3 != 64 && !*(_QWORD *)(v3 - 24) )
      {
        v8 = *(_QWORD *)(v3 + 56);
        if ( (v8 & 4) != 0 || (v8 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return 1;
      }
      v5 = *(_QWORD *)(sub_B8C1B0(v3) + 16);
      if ( (v5 & 4) != 0 )
        break;
      v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      v4 = *(_BYTE *)(v3 + 8) & 0x7F;
      if ( !v4 )
        goto LABEL_9;
    }
    v3 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_9:
  v6 = sub_B81B70(a1);
  if ( !v6 )
    goto LABEL_17;
  if ( v6 > 3u )
  {
    if ( v6 <= 6u )
      return 0;
LABEL_17:
    BUG();
  }
  return 1;
}

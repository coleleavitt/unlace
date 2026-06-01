__int64 __fastcall sub_79C640(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax

  if ( ((*(_BYTE *)(a1 + 8) + 72) & 0x7Fu) > 3 )
    return 0;
  while ( 1 )
  {
    v2 = *(_QWORD *)(sub_79A2E0(a1) + 16);
    v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 4) == 0 )
      break;
    v3 = *(_QWORD *)(v3 + 8);
    if ( ((*(_BYTE *)(v3 + 8) + 72) & 0x7Fu) > 3 )
      return a1 - 64;
LABEL_7:
    a1 = v3;
  }
  if ( ((*(_BYTE *)(v3 + 8) + 72) & 0x7Fu) <= 3 )
    goto LABEL_7;
  return a1 - 64;
}


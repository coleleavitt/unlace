__int64 __fastcall sub_77E340(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 33 <= 3 )
    return sub_7A4F00(a1);
  if ( *(_BYTE *)((*(__int64 (**)(void))(*(_QWORD *)a1 + 32LL))() + 81) >> 5 == 2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    goto LABEL_9;
  while ( (*(_BYTE *)(v2 + 8) & 0x7F) == 0x16 )
  {
    v3 = *(_QWORD *)(v2 - 8);
    if ( v3 <= 7 && !(_DWORD)v3 )
      return 0;
    v4 = *(_QWORD *)(sub_79A2E0(v2) + 16);
    v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 4) != 0 )
LABEL_9:
      v2 = *(_QWORD *)v2;
  }
  return 1;
}


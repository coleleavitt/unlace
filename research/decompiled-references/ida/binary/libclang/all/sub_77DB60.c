char __fastcall sub_77DB60(__int64 a1)
{
  char result; // al
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rax

  if ( (*(_BYTE *)(a1 + 80) & 0x7Fu) - 33 <= 3 )
  {
    v3 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
    v4 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v3 & 4) != 0 )
      v4 = (_QWORD *)*v4;
    if ( v4 )
    {
      v5 = v4[8];
      if ( v5 )
      {
        if ( (*(_BYTE *)(v5 + 10) & 0x20) != 0
          && (*(_DWORD *)(a1 + 40) & 7) == 6
          && *(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL) == 42 )
        {
          goto LABEL_3;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 83) & 2) != 0 )
  {
LABEL_3:
    if ( (*(_BYTE *)(a1 + 84) & 3) != 2 )
      return 1;
  }
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x24 && (*(_BYTE *)(a1 + 87) & 0x20) != 0 )
    return *(_QWORD *)(a1 + 184) != 0;
  v2 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v2 > 7 )
  {
    if ( (v2 & 6) != 0 )
    {
      return (*(_BYTE *)(a1 + 84) & 3) == 1;
    }
    else if ( (*(_BYTE *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 32 > 5 )
    {
      return (*(_BYTE *)(a1 + 84) & 3) == 1;
    }
  }
  return result;
}


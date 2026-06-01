__int64 __fastcall sub_10104F0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi

  if ( a2 > 0x18 )
  {
    v2 = a2 - 25;
    if ( v2 - 270 > 1 )
      goto LABEL_3;
    return 32;
  }
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL * a2);
  if ( v2 - 270 <= 1 )
    return 32;
LABEL_3:
  if ( v2 == 272 )
    return 64;
  else
    return *(unsigned __int8 *)(a1 + 8);
}


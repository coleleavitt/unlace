__int64 __fastcall sub_8929F0(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax
  _QWORD *v4; // r12
  int v5; // eax
  int v6; // eax
  __int64 *v7; // rax

  v2 = a2;
  if ( dword_2C82078 == -1 )
  {
    v7 = (__int64 *)sub_86A9C0(0x20u);
    if ( v7 )
    {
      sub_86AB90(v7);
      dword_2C82078 = 1;
    }
    else
    {
      dword_2C82078 = 0;
    }
  }
  if ( (a2 & 0x200) != 0 )
  {
    if ( a2 == 512 )
    {
      if ( !dword_2C82078 )
        return 4294967248LL;
      return 0;
    }
    return 4294967251LL;
  }
  if ( !a1 )
    return 4294967245LL;
  if ( (a2 & 0xFFFFFEF8) != 0 )
    return 4294967251LL;
  v4 = *(_QWORD **)(a1 + 32);
  if ( (a2 & 0x100) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 96);
    if ( (v5 & 0x4000000) == 0 )
    {
      if ( v4 )
        return 4294967251LL;
      *(_DWORD *)(a1 + 96) = v5 | 0x4000000;
    }
  }
  if ( (*(_BYTE *)(a1 + 106) & 8) != 0 )
    return 0;
  if ( !dword_2C82078 )
    return 4294967248LL;
  v6 = a2;
  if ( (*(_BYTE *)(a1 + 99) & 4) != 0 )
  {
    BYTE1(v6) = BYTE1(a2) | 1;
    v2 = v6;
  }
  if ( (v2 & 1) == 0 )
    goto LABEL_21;
  if ( !v4 || !*v4 )
  {
    result = sub_88F600(a1, v2 & 0xFFFFFFF9);
    if ( (_DWORD)result )
      return result;
LABEL_21:
    if ( (v2 & 2) == 0 )
      goto LABEL_32;
    if ( !v4 )
      goto LABEL_31;
    goto LABEL_23;
  }
  if ( (v2 & 2) == 0 )
    goto LABEL_24;
LABEL_23:
  if ( v4[1] )
  {
LABEL_24:
    if ( (v2 & 4) == 0 )
      return 0;
LABEL_25:
    if ( v4[2] )
      return 0;
    return sub_88F600(a1, v2 & 0xFFFFFFFC);
  }
LABEL_31:
  result = sub_88F600(a1, v2 & 0xFFFFFFFA);
  if ( !(_DWORD)result )
  {
LABEL_32:
    if ( (v2 & 4) == 0 )
      return 0;
    if ( !v4 )
      return sub_88F600(a1, v2 & 0xFFFFFFFC);
    goto LABEL_25;
  }
  return result;
}

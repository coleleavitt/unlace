unsigned __int64 __fastcall sub_3EB890(__int64 a1, __int64 a2, int a3, double a4)
{
  char v4; // al
  unsigned __int16 v6; // dx
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  _DWORD v13[4]; // [rsp+0h] [rbp-48h] BYREF
  _DWORD v14[6]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 52) & 4) == 0 || (v4 = *(_BYTE *)(a1 + 56)) == 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC25u, a2, a4);
LABEL_35:
    BUG();
  }
  if ( v4 == 115 )
  {
    v11 = *(_WORD *)(a1 + 48);
    if ( v11 > 0xA6u )
    {
      if ( (v11 & 0xFFFB) != 0xA8 )
        goto LABEL_15;
    }
    else if ( v11 <= 0xA4u )
    {
      if ( (unsigned __int16)(v11 - 163) > 1u )
        goto LABEL_15;
      v7 = 4;
      goto LABEL_25;
    }
    v7 = 4;
    v8 = 63;
    goto LABEL_11;
  }
  if ( v4 <= 115 )
  {
    if ( v4 != 100 )
    {
      if ( v4 == 108 )
      {
        v6 = *(_WORD *)(a1 + 48);
        v7 = 8;
        if ( v6 <= 0xA6u )
          goto LABEL_8;
        goto LABEL_14;
      }
      goto LABEL_33;
    }
    v12 = *(_WORD *)(a1 + 48);
    if ( v12 > 0xA6u )
    {
      if ( (v12 & 0xFFFB) != 0xA8 )
        goto LABEL_15;
    }
    else if ( v12 <= 0xA4u )
    {
      if ( (unsigned __int16)(v12 - 163) > 1u )
        goto LABEL_15;
      v7 = 8;
LABEL_25:
      v8 = 67;
      goto LABEL_11;
    }
    v7 = 8;
    v8 = 63;
    goto LABEL_11;
  }
  if ( v4 != 119 )
  {
LABEL_33:
    if ( !under_debugger )
      sub_37E160(0xCC26u, a2, a4);
    goto LABEL_35;
  }
  v6 = *(_WORD *)(a1 + 48);
  v7 = 4;
  if ( v6 > 0xA6u )
  {
LABEL_14:
    if ( (v6 & 0xFFFB) == 0xA8 )
      goto LABEL_26;
LABEL_15:
    if ( !under_debugger )
      sub_37E160(0xCC27u, a2, a4);
    goto LABEL_35;
  }
LABEL_8:
  if ( v6 > 0xA4u )
  {
LABEL_26:
    v8 = 4;
    goto LABEL_11;
  }
  if ( (unsigned __int16)(v6 - 163) > 1u )
    goto LABEL_15;
  v8 = 65;
LABEL_11:
  v13[2] = a3;
  v13[0] = 1;
  v13[1] = v7;
  v9 = *(unsigned __int16 *)(a1 + 890);
  v14[2] = a2;
  v14[0] = 1;
  v14[1] = v9;
  sub_3EB6F0((_QWORD *)a1, v8, (unsigned __int8 *)v13, nullptr, (unsigned __int8 *)v14);
  sub_118BA0((__int64)v14);
  sub_118BA0((__int64)v13);
  return v15 - __readfsqword(0x28u);
}

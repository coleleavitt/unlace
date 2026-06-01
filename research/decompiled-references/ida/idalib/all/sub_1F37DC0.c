unsigned __int64 __fastcall sub_1F37DC0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  char v4; // al
  unsigned __int8 v5; // al
  __int64 v6; // rax
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // cl
  unsigned int v10; // eax
  __int64 v11; // rax
  char v12; // al
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a1;
  v3 = a2;
  v4 = *(_BYTE *)(a2 + 28);
  v15[0] = a2;
  v5 = v4 & 0x7F;
  if ( v5 == 83 )
  {
    if ( *(char *)(a2 + 29) >= 0 )
      return 1;
    goto LABEL_5;
  }
  if ( (unsigned int)v5 - 40 <= 6 )
  {
    v3 = v15[0];
    if ( (sub_B740B0(a2) & 0xFFFFFFFD) != 0 || *(char *)(v15[0] + 29) >= 0 )
    {
LABEL_9:
      v5 = *(_BYTE *)(v3 + 28) & 0x7F;
      goto LABEL_10;
    }
LABEL_5:
    if ( (*(_BYTE *)(v3 + 8) & 7) != 0 )
    {
      v6 = sub_B8C660(v3);
      v3 = v15[0];
      if ( v6 )
      {
        if ( !*(_DWORD *)(v6 + 36) )
        {
          v3 = v15[0];
          if ( (unsigned __int8)sub_A7C0A0(*(_QWORD *)(a1 + 144), v15[0]) )
            return 0;
        }
      }
    }
    goto LABEL_9;
  }
LABEL_10:
  if ( v5 == 1 || v5 == 87 || v5 == 19 || v5 == 83 || ((v5 + 118) & 0x7Fu) <= 1 || (unsigned int)v5 - 21 <= 1 )
    return 1;
  if ( ((v5 + 113) & 0x7Fu) <= 2 || ((v5 + 102) & 0x7Fu) <= 1 )
  {
    v8 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
      v8 = *(_QWORD *)v8;
    v9 = *(_BYTE *)(v8 + 8) & 0x7F;
    if ( v9 > 0x12u )
      LOBYTE(v2) = ((v9 + 94) & 0x7Fu) <= 5;
    else
      LOBYTE(v2) = ((1LL << v9) & 0x40182) != 0;
    v2 ^= 1u;
    return v2;
  }
  if ( (unsigned int)v5 - 40 > 6 )
  {
    if ( (unsigned int)v5 - 34 <= 5 )
    {
      v12 = *(_BYTE *)(v3 + 83);
      if ( ((v12 & 8) != 0 || (*(_BYTE *)(v3 + 128) & 1) == 0 && !*(_QWORD *)(v3 + 128)) && (v12 & 0x40) == 0 )
      {
        LOBYTE(v13) = sub_1F37C20(a1 + 4064, v15);
        return v13;
      }
      return 1;
    }
    v14 = *(_QWORD *)(sub_B8C330(v3) + 18360);
    if ( v14 )
    {
      LOBYTE(v2) = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 120LL))(v14, v3) == 1;
      return v2;
    }
    return 0;
  }
  LOBYTE(v10) = sub_A5EB90(v3);
  v2 = v10;
  if ( (_BYTE)v10 )
  {
    v11 = sub_B8C330(v3);
    if ( (unsigned int)sub_B74100(v3, v11) != 2 )
      return sub_B06290((_BYTE *)v3) >> 32;
  }
  return v2;
}

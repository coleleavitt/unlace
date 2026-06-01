char __fastcall sub_1532E00(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rdi
  unsigned __int8 v5; // dl
  int v6; // eax
  __int64 v7; // rax
  __int16 v8; // cx

  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_2;
  v4 = **(_QWORD **)(a2 + 16);
  if ( !v4 )
    goto LABEL_2;
  v5 = *(_BYTE *)(v4 + 28) & 0x7F;
  v6 = v5;
  if ( ((v5 + 52) & 0x7Fu) <= 1 || (unsigned int)v5 - 53 <= 1 )
  {
    v7 = sub_B72ED0(v4);
    if ( v7 )
    {
      v5 = *(_BYTE *)(v7 + 28) & 0x7F;
      v6 = v5;
      goto LABEL_9;
    }
LABEL_2:
    if ( *(_WORD *)(a1 + 48) == 64 )
      return 0;
    return sub_1A37D70(a1, a2);
  }
LABEL_9:
  if ( (unsigned int)(v6 - 49) <= 2 )
    return v5 == 50 || *(_QWORD *)(a2 + 8) == 0;
  v8 = *(_WORD *)(a1 + 48);
  if ( v8 == 64 )
    return (unsigned int)(v6 - 40) <= 6;
  if ( v8 != 26 )
    return sub_1A37D70(a1, a2);
  result = 0;
  if ( v5 != 24 )
    return sub_1A37D70(a1, a2);
  return result;
}

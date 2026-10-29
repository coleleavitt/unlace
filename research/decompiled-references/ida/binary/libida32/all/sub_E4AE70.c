__int64 __fastcall sub_E4AE70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  char v12; // al

  v2 = *(_QWORD *)(a1 + 17448);
  if ( (unsigned int)(*(_DWORD *)(v2 + 248) - 55) > 1
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 > 5
    || !(unsigned __int8)sub_B5DF50(a2)
    || (unsigned int)sub_B52330(a2, a2, v3, v4) != 2 )
  {
    if ( !*(_BYTE *)(v2 + 344) )
      return 0;
    v5 = *(_QWORD *)(a1 + 2320);
    v6 = *(_BYTE *)(a2 + 28) & 0x7F;
    v7 = v6 - 34;
    if ( (*(_BYTE *)(v5 + 1) & 8) == 0 )
    {
      if ( v7 <= 5 )
        goto LABEL_7;
      return 0;
    }
    if ( v7 <= 5 )
    {
      v12 = sub_B5E4E0(a2);
    }
    else
    {
      if ( (unsigned int)(v6 - 40) > 6 )
        goto LABEL_13;
      v12 = sub_B5E420(a2);
    }
    if ( v12 )
    {
LABEL_17:
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
      {
LABEL_7:
        v8 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v9 = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 25;
        if ( (unsigned int)v9 > 1 )
          v8 = sub_F3F310(v8, a2, v9, v5);
        v10 = ((*(_WORD *)(v8 + 20) >> 2) & 0x3F) - 1;
        if ( v10 <= 3u )
          return dword_23D2860[v10];
      }
      return 0;
    }
LABEL_13:
    if ( *(_DWORD *)(v2 + 340) == 10 )
      return 0;
    goto LABEL_17;
  }
  return 5;
}


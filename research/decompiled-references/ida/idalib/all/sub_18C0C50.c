bool __fastcall sub_18C0C50(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  bool result; // al
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // dl

  if ( *(_BYTE *)(a1 + 3060) )
  {
    v7 = *(_QWORD **)(a1 + 3040);
    v8 = &v7[*(unsigned int *)(a1 + 3052)];
    if ( v7 != v8 )
    {
      while ( a2 != *v7 )
      {
        if ( v8 == ++v7 )
          goto LABEL_9;
      }
      return 0;
    }
  }
  else if ( sub_2236570(a1 + 3040, a2) )
  {
    return 0;
  }
LABEL_9:
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v10 - 34 > 5 )
  {
    if ( !a3 )
      return v10 != 57;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 82) & 0x40) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) == 0 )
    goto LABEL_12;
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 25;
  if ( (unsigned int)v16 > 1 )
    v15 = sub_F63050(v15, a2, v16, v11);
  v17 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v17
    || (*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0
    || (*(_BYTE *)(v17 + 17) & 4) != 0
    || (v18 = sub_1D3EC30(a1, a2, 0, 0), result = 0, !v18) )
  {
LABEL_12:
    if ( !a3 )
    {
LABEL_13:
      v10 = *(_BYTE *)(a2 + 28) & 0x7F;
      return v10 != 57;
    }
    if ( (unsigned __int8)sub_19A3C90(a1, a2) )
      return 0;
LABEL_16:
    if ( (unsigned int)sub_B90D60(a2, nullptr, nullptr, 0, 0, a6) == 3 )
    {
      v12 = sub_B8C1B0(*(_QWORD *)(a1 + 544));
      v14 = sub_B90D60(v12, nullptr, nullptr, 0, 0, v13);
      result = 0;
      if ( v14 != 3 )
        return result;
    }
    goto LABEL_13;
  }
  return result;
}

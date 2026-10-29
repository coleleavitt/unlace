__int64 __fastcall sub_1CFD0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char *v4; // rbx
  unsigned int v5; // ebx
  unsigned __int64 v7; // rbp
  int v9; // eax
  int v10; // edx
  char *v11; // rsi
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  char v19; // al
  int v20; // eax

  if ( a3 <= 0x6F )
  {
    sub_5860((__int64)"too short to be a valid .dex\n");
    return 0;
  }
  v4 = (char *)a2;
  if ( *(_BYTE *)a2 != 100
    || *(_BYTE *)(a2 + 1) != 101
    || (unsigned __int8)(*(_BYTE *)(a2 + 2) - 120) > 1u
    || *(_BYTE *)(a2 + 3) != 10
    || (unsigned __int8)(*(_BYTE *)(a2 + 4) - 48) > 9u
    || (unsigned __int8)(*(_BYTE *)(a2 + 5) - 48) > 9u
    || (unsigned __int8)(*(_BYTE *)(a2 + 6) - 48) > 9u
    || *(_BYTE *)(a2 + 7) )
  {
    return 0;
  }
  v7 = a3;
  v9 = strtoul((const char *)(a2 + 4), nullptr, 10);
  *(_DWORD *)(a1 + 120) = v9;
  v10 = v9;
  if ( *(_BYTE *)(a2 + 2) == 121 )
  {
    if ( (unsigned int)(v9 - 35) > 1
      && (unsigned int)sub_73B0(
                         0,
                         (__int64)"HIDECANCEL\nUnsupported optimized DEX version %s.\nDo you want to continue loading?",
                         (const char *)(a2 + 4)) != 1 )
    {
      return 0;
    }
    *(_QWORD *)(a1 + 24) = a2;
    v15 = *(unsigned int *)(a2 + 8);
    if ( v15 < v7 )
    {
      v16 = v7;
      v7 = *(unsigned int *)(a2 + 12);
      v17 = a2 + v15;
      v18 = v16 - v15;
      if ( v18 < v7 )
      {
        sub_5860((__int64)"File truncated? stored len=%u, remaining len=%zu\n", v7, v18);
      }
      else if ( *(_BYTE *)v17 == 100 && *(_BYTE *)(v17 + 1) == 101 )
      {
        v19 = *(_BYTE *)(v17 + 2);
        if ( (unsigned __int8)(v19 - 120) <= 1u
          && *(_BYTE *)(v17 + 3) == 10
          && (unsigned __int8)(*(_BYTE *)(v17 + 4) - 48) <= 9u
          && (unsigned __int8)(*(_BYTE *)(v17 + 5) - 48) <= 9u
          && (unsigned __int8)(*(_BYTE *)(v17 + 6) - 48) <= 9u
          && !*(_BYTE *)(v17 + 7)
          && v19 != 121 )
        {
          v4 = (char *)v17;
          v20 = strtoul((const char *)(v17 + 4), nullptr, 10);
          *(_DWORD *)(a1 + 120) = v20;
          v10 = v20;
          goto LABEL_13;
        }
      }
    }
LABEL_26:
    sub_72E0((__int64)"Corrupted DEX file");
    return 0;
  }
LABEL_13:
  if ( (unsigned int)(v10 - 35) > 4
    && (unsigned int)sub_73B0(
                       0,
                       (__int64)"HIDECANCEL\nUnsupported DEX version %s.\nDo you want to continue loading?",
                       v4 + 4) != 1 )
  {
    return 0;
  }
  v11 = v4;
  v5 = sub_1CB80((_QWORD *)a1, (unsigned int *)v4, v7);
  if ( !(_BYTE)v5 )
    goto LABEL_26;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(unsigned int *)(v12 + 32);
  v14 = v13;
  if ( v7 < v13 )
  {
    sub_72E0((__int64)"File is truncated (length %zu, expected %u)", v7, v13);
  }
  else if ( a4 == 1
         || v13 >= v7
         || (v11 = (char *)&unk_21D30, (unsigned int)sub_73B0(1u, (__int64)&unk_21D30, v7, (unsigned int)v13) == 1) )
  {
    if ( *(_DWORD *)(v12 + 96) )
      return v5;
    sub_5860((__int64)"DEX file has no classes in it, failing\n", v11, v14);
  }
  return 0;
}


__int64 __fastcall sub_155FDB0(__int64 a1, char a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int16 v5; // ax
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  int v12; // eax
  __int64 *v13; // rdi
  int v14; // eax
  __int64 *v15; // rdi
  _WORD v16[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  if ( *(_WORD *)(a1 + 32) == 23 )
  {
LABEL_26:
    v4 = 2;
    goto LABEL_4;
  }
  v3 = sub_1560700(a1, 0, 0, 0);
  v4 = v3;
  if ( v3 == 2 )
  {
    if ( *(_WORD *)(a1 + 32) != 23 )
      return 1;
    goto LABEL_26;
  }
  if ( (v3 & 0xFFFFFFFD) == 1 )
    return v4;
LABEL_4:
  v16[0] = 23;
  if ( (unsigned __int8)sub_15680D0(a1, v16, 1, 1) )
  {
    v5 = *(_WORD *)(a1 + 32);
    if ( v5 == 328 || v5 == 80 || v5 == 109 || v5 == 156 )
    {
      do
      {
        do
        {
          v6 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v6, (int *)(a1 + 16));
          v5 = *(_WORD *)(a1 + 32);
        }
        while ( v5 == 328 || v5 == 80 || v5 == 109 );
      }
      while ( v5 == 156 );
    }
    if ( (unsigned __int16)(v5 - 28) <= 1u )
    {
      v7 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v7, (int *)(a1 + 16));
      v5 = *(_WORD *)(a1 + 32);
    }
    if ( v5 == 148 )
    {
      v10 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v10, (int *)(a1 + 16));
      if ( *(_WORD *)(a1 + 32) != 22 )
        return 3;
      v14 = *(_DWORD *)(a1 + 16);
      ++*(_WORD *)(a1 + 88);
      v15 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v14;
      sub_14634E0(v15, (int *)(a1 + 16));
      v16[0] = 23;
      if ( !(unsigned __int8)sub_15680D0(a1, v16, 1, 1) )
        return 3;
      v5 = *(_WORD *)(a1 + 32);
    }
    if ( v5 != 164
      || (v11 = *(__int64 **)(a1 + 8),
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16),
          sub_14634E0(v11, (int *)(a1 + 16)),
          *(_WORD *)(a1 + 32) != 22)
      || (v12 = *(_DWORD *)(a1 + 16),
          ++*(_WORD *)(a1 + 88),
          v13 = *(__int64 **)(a1 + 8),
          *(_DWORD *)(a1 + 40) = v12,
          sub_14634E0(v13, (int *)(a1 + 16)),
          v16[0] = 23,
          (unsigned __int8)sub_15680D0(a1, v16, 1, 1)) )
    {
      if ( (unsigned __int8)sub_155CC80(a1) && *(_WORD *)(a1 + 32) == 37 && a2 )
      {
        if ( !v4 )
          return 0;
        v9 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v9, (int *)(a1 + 16));
        if ( *(_WORD *)(a1 + 32) == 5 && (unsigned __int8)sub_155FC30(a1) )
          return 1;
        if ( (unsigned __int8)sub_15612F0(a1, 3, v16) )
          return 0;
      }
      return 2;
    }
  }
  return 3;
}

bool __fastcall sub_17A3530(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx

  v4 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( *(char *)(a2 + 29) >= 0 )
  {
    if ( v4 )
    {
      v5 = *(_QWORD *)(a2 - 8);
      v6 = *(_QWORD *)(a3 + 8) & 7LL;
      if ( *(char *)(a3 + 29) >= 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
    v10 = *(_QWORD *)(a3 + 8) & 7LL;
    if ( *(char *)(a3 + 29) >= 0 )
    {
      if ( !v10 )
        return 1;
      v7 = *(_QWORD *)(a3 - 8);
      goto LABEL_8;
    }
LABEL_34:
    if ( !v10 )
      return 1;
    v7 = sub_B8C660(a3);
    goto LABEL_8;
  }
  if ( !v4 )
  {
    v10 = *(_QWORD *)(a3 + 8) & 7LL;
    if ( *(char *)(a3 + 29) >= 0 )
    {
      if ( !v10 )
        return 1;
      v5 = 0;
      goto LABEL_5;
    }
    goto LABEL_34;
  }
  v5 = sub_B8C660(a2);
  v6 = *(_QWORD *)(a3 + 8) & 7LL;
  if ( *(char *)(a3 + 29) >= 0 )
  {
LABEL_4:
    if ( v6 )
    {
LABEL_5:
      v7 = *(_QWORD *)(a3 - 8);
      goto LABEL_6;
    }
LABEL_28:
    if ( !v5 || *(_DWORD *)(v5 + 36) <= 1u )
      return 1;
    goto LABEL_24;
  }
LABEL_13:
  if ( !v6 )
    goto LABEL_28;
  v7 = sub_B8C660(a3);
LABEL_6:
  if ( !v5 || *(_DWORD *)(v5 + 36) <= 1u )
  {
LABEL_8:
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 36);
      if ( v8 > 1 && (v8 > 7 || ((1LL << v8) & 0xBC) == 0) )
      {
        v11 = 0;
        return v11 == sub_FEEE40(v7);
      }
    }
    return 1;
  }
  if ( v7 && *(_DWORD *)(v7 + 36) > 1u )
  {
    v13 = *(_DWORD *)(v5 + 36);
    if ( v13 > 7 || ((1LL << v13) & 0xBC) == 0 )
    {
      v14 = *(_DWORD *)(v7 + 36);
      if ( v14 > 7 || ((1LL << v14) & 0xBC) == 0 )
      {
        v11 = sub_FEEE40(v5);
        return v11 == sub_FEEE40(v7);
      }
    }
    return 1;
  }
LABEL_24:
  v12 = *(_DWORD *)(v5 + 36);
  if ( v12 <= 7 && ((1LL << v12) & 0xBC) != 0 )
    return 1;
  return sub_FEEE40(v5) == 0;
}

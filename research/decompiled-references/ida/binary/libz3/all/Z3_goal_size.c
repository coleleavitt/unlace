__int64 __fastcall Z3_goal_size(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rdx
  char v6; // al
  unsigned int v7; // r13d
  int v9; // r13d

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29C610();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || (v3 = *(_QWORD *)(a2 + 24)) == 0 )
    BUG();
  v4 = *(_DWORD *)(v3 + 32);
  v5 = *(_QWORD *)(v3 + 72);
  *(_DWORD *)(v3 + 32) = v4 + 1;
  if ( !v5 )
  {
    v7 = 0;
    goto LABEL_10;
  }
  v6 = *(_BYTE *)(v5 + 3) >> 6;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
LABEL_8:
      if ( v6 == 2 )
        v7 = *(_DWORD *)(v5 + 4) - 1;
      else
        v7 = *(_DWORD *)(v5 + 4);
LABEL_10:
      *(_DWORD *)(v3 + 32) = v4;
      if ( v4 )
        goto LABEL_11;
LABEL_16:
      sub_ED44E0(v3);
      sub_186B220((void *)v3);
      if ( !v2 )
        return v7;
      goto LABEL_17;
    }
  }
  else
  {
    do
    {
      v5 = *(_QWORD *)(v5 + 16);
      v6 = *(_BYTE *)(v5 + 3) >> 6;
    }
    while ( !v6 );
    if ( v6 != 1 )
      goto LABEL_8;
  }
  v9 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v3 + 32) = v4;
  v7 = v9 + 1;
  if ( !v4 )
    goto LABEL_16;
LABEL_11:
  if ( !v2 )
    return v7;
LABEL_17:
  byte_1C7EBA0 = 1;
  return v7;
}


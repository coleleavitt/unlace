char __fastcall sub_1189A80(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  char v7; // cl
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]
  char v11[9]; // [rsp+1Fh] [rbp-9h] BYREF

  v9 = a1;
  v10 = a2;
  v11[0] = 44;
  v2 = sub_2246AB0(&v9, v11, 1, 0);
  switch ( v2 )
  {
    case 0xFFFFFFFFFFFFFFFFLL:
      v5 = v9;
      v2 = v10;
      v4 = 0;
      v6 = 0;
      break;
    case 0uLL:
      goto LABEL_19;
    case 4uLL:
      if ( *(_DWORD *)v5 != 1701143913 )
        goto LABEL_12;
LABEL_19:
      v7 = 0;
      goto LABEL_20;
    default:
      v3 = v2 + 1;
      if ( v2 + 1 > v10 )
      {
        v3 = v10;
        v4 = 0;
      }
      else
      {
        v4 = v10 - v3;
      }
      v5 = v9;
      v6 = v9 + v3;
      if ( v2 > v10 )
        v2 = v10;
      break;
  }
  if ( v2 != 13 )
  {
    if ( v2 == 7 && *(_DWORD *)v5 == 1634629988 && *(_WORD *)(v5 + 4) == 26989 && *(_BYTE *)(v5 + 6) == 99 )
    {
      v7 = 3;
      goto LABEL_20;
    }
LABEL_12:
    v7 = -1;
    if ( !v4 )
      return v7;
    goto LABEL_13;
  }
  if ( *(_QWORD *)v5 != 0x6576726573657270LL
    || *(_DWORD *)(v5 + 8) != 1734964013
    || (v7 = 1, *(_BYTE *)(v5 + 12) != 110) )
  {
    if ( *(_QWORD *)v5 != 0x6576697469736F70LL )
      goto LABEL_12;
    if ( *(_DWORD *)(v5 + 8) != 1919253037 )
      goto LABEL_12;
    v7 = 2;
    if ( *(_BYTE *)(v5 + 12) != 111 )
      goto LABEL_12;
  }
LABEL_20:
  if ( !v4 )
    return v7;
LABEL_13:
  if ( v4 != 4 )
  {
    if ( v4 == 13 )
    {
      if ( *(_QWORD *)v6 == 0x6576726573657270LL && *(_DWORD *)(v6 + 8) == 1734964013 && *(_BYTE *)(v6 + 12) == 110
        || *(_QWORD *)v6 == 0x6576697469736F70LL && *(_DWORD *)(v6 + 8) == 1919253037 && *(_BYTE *)(v6 + 12) == 111 )
      {
        return v7;
      }
    }
    else if ( v4 == 7 && *(_DWORD *)v6 == 1634629988 && *(_WORD *)(v6 + 4) == 26989 && *(_BYTE *)(v6 + 6) == 99 )
    {
      return v7;
    }
    return v7;
  }
  return v7;
}

__int64 __fastcall sub_4E3940(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  __int64 i; // rdi
  unsigned int v12; // edi
  __int64 v13; // rsi
  unsigned int v14; // edi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  if ( !v2 )
    return v3;
  v4 = *a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v2 + 32);
      if ( v7 < v4 )
      {
LABEL_9:
        v2 = *(_QWORD *)(v2 + 24);
        goto LABEL_10;
      }
      if ( v4 >= v7 )
        break;
LABEL_7:
      v3 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        return v3;
    }
    v5 = *(_DWORD *)(v2 + 36);
    v6 = a2[1];
    if ( v5 != 0x10000 )
      break;
    if ( v6 == 0x10000 )
      goto LABEL_34;
    v2 = *(_QWORD *)(v2 + 24);
LABEL_10:
    if ( !v2 )
      return v3;
  }
  if ( v5 < v6 )
  {
    if ( v6 != 0x10000 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( v6 == 0x10000 || v6 < v5 )
    goto LABEL_7;
LABEL_34:
  v13 = *(_QWORD *)(v2 + 16);
  for ( i = *(_QWORD *)(v2 + 24); i; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(i + 32);
      if ( v4 < v9 )
        break;
      if ( v9 >= v4 )
      {
        v10 = *(_DWORD *)(i + 36);
        if ( v6 == 0x10000 )
        {
          if ( v10 != 0x10000 )
            break;
        }
        else if ( v10 != 0x10000 && v6 < v10 )
        {
          break;
        }
      }
      i = *(_QWORD *)(i + 24);
      if ( !i )
        goto LABEL_22;
    }
  }
LABEL_22:
  if ( v13 )
  {
    while ( 2 )
    {
      v14 = *(_DWORD *)(v13 + 32);
      if ( v14 < v4 )
        goto LABEL_31;
      if ( v4 < v14 )
      {
LABEL_28:
        v2 = v13;
        v13 = *(_QWORD *)(v13 + 16);
      }
      else
      {
        v12 = *(_DWORD *)(v13 + 36);
        if ( v12 == 0x10000 )
        {
          if ( v6 == 0x10000 )
            goto LABEL_28;
          v13 = *(_QWORD *)(v13 + 24);
        }
        else
        {
          if ( v12 >= v6 || v6 == 0x10000 )
            goto LABEL_28;
LABEL_31:
          v13 = *(_QWORD *)(v13 + 24);
        }
      }
      if ( !v13 )
        return v2;
      continue;
    }
  }
  return v2;
}


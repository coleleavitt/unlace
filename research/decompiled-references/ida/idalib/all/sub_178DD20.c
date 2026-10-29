__int64 __fastcall sub_178DD20(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  char v7; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  char v12; // r13
  __int64 **v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rdi
  bool v19; // dl
  unsigned __int64 v20; // r12

  v6 = (unsigned __int8)a2;
  v7 = a2;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
  {
LABEL_2:
    if ( sub_178D980(a1, v6, (__int64)a3, a4, a5, a6) )
      return 2;
    if ( (*(_BYTE *)(a1 + 29) & 2) == 0 )
    {
      v20 = sub_B7D580(a1, 1, v9, v10);
      if ( !v20 )
        v20 = a1;
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 32LL))(v20) + 82) & 0x40) == 0
        && (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 32LL))(v20) + 83) & 2) == 0 )
      {
        return 2;
      }
    }
    if ( v7 )
      return 2;
    return 3;
  }
  v12 = a2;
  v13 = (__int64 **)sub_B8C3D0(a1, a2, (__int64)a3, a4, a5, a6);
  a3 = *v13;
  v14 = 8LL * *((unsigned int *)v13 + 2);
  v15 = &a3[(unsigned __int64)v14 / 8];
  a4 = v14 >> 3;
  v16 = v14 >> 5;
  if ( v16 )
  {
    v17 = &a3[4 * v16];
    while ( 1 )
    {
      a4 = *a3;
      if ( *(_WORD *)(*a3 + 36) == 160 )
        break;
      a4 = a3[1];
      if ( *(_WORD *)(a4 + 36) == 160 )
      {
        v18 = a3 + 1;
        if ( !v12 )
          goto LABEL_23;
LABEL_41:
        if ( (*(_BYTE *)(a4 + 38) & 4) == 0 )
          goto LABEL_23;
        a4 = a3[2];
        if ( *(_WORD *)(a4 + 36) == 160 )
          goto LABEL_43;
        goto LABEL_12;
      }
      a4 = a3[2];
      if ( *(_WORD *)(a4 + 36) == 160 )
      {
        v18 = a3 + 2;
        if ( !v12 )
          goto LABEL_23;
        goto LABEL_44;
      }
LABEL_12:
      a4 = a3[3];
      if ( *(_WORD *)(a4 + 36) != 160 )
        goto LABEL_13;
      v18 = a3 + 3;
      if ( !v12 )
      {
LABEL_23:
        a3 = v18;
        goto LABEL_24;
      }
LABEL_38:
      if ( (*(_BYTE *)(a4 + 38) & 4) == 0 )
        goto LABEL_23;
LABEL_13:
      a3 += 4;
      if ( v17 == a3 )
      {
        a4 = v15 - a3;
        goto LABEL_15;
      }
    }
    if ( !v12 || (*(_BYTE *)(a4 + 38) & 4) == 0 )
      goto LABEL_24;
    a4 = a3[1];
    v18 = a3 + 1;
    if ( *(_WORD *)(a4 + 36) != 160 )
    {
      a4 = a3[2];
      if ( *(_WORD *)(a4 + 36) != 160 )
      {
LABEL_36:
        a4 = a3[3];
        if ( *(_WORD *)(a4 + 36) != 160 )
          goto LABEL_13;
        v18 = a3 + 3;
        goto LABEL_38;
      }
LABEL_43:
      v18 = a3 + 2;
LABEL_44:
      if ( (*(_BYTE *)(a4 + 38) & 4) == 0 )
        goto LABEL_23;
      goto LABEL_36;
    }
    goto LABEL_41;
  }
LABEL_15:
  if ( a4 == 2 )
  {
LABEL_50:
    if ( *(_WORD *)(*a3 + 36) == 160 && (!v7 || (*(_BYTE *)(*a3 + 38) & 4) == 0) )
      goto LABEL_24;
    ++a3;
    goto LABEL_18;
  }
  if ( a4 == 3 )
  {
    if ( *(_WORD *)(*a3 + 36) == 160 && (!v7 || (*(_BYTE *)(*a3 + 38) & 4) == 0) )
      goto LABEL_24;
    ++a3;
    goto LABEL_50;
  }
  if ( a4 != 1 )
    goto LABEL_2;
LABEL_18:
  if ( *(_WORD *)(*a3 + 36) != 160 || v7 && (*(_BYTE *)(*a3 + 38) & 4) != 0 )
    goto LABEL_2;
LABEL_24:
  if ( v15 == a3 )
    goto LABEL_2;
  v19 = sub_178D980(a1, v6, (__int64)a3, a4, a5, a6);
  result = 0;
  if ( v19 )
    return 3;
  return result;
}

__int64 __fastcall sub_A56D40(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // r12d
  unsigned __int8 v3; // al
  __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax

  v3 = sub_B81B70(a2);
  if ( !v3 )
    goto LABEL_51;
  if ( v3 <= 3u )
    return 0;
  if ( v3 > 6u )
LABEL_51:
    BUG();
  v5 = sub_B7D580(a2, 1);
  if ( !v5 )
    v5 = (__int64)a2;
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) + 82) & 0x40) == 0
    && (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) + 83) & 2) == 0 )
  {
    v6 = sub_B77D20(a2);
    switch ( v6 )
    {
      case 0u:
      case 2u:
        v2 = 3;
        break;
      case 1u:
        v2 = 2;
        break;
      case 3u:
        return 1;
      case 4u:
        return v6;
      default:
        break;
    }
    if ( (a2[82] & 1) == 0 )
      return v2;
    v11 = a2[29] & 1;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 8) == 0 && *(_DWORD *)(*(_QWORD *)(a1 + 17448) + 340LL) != 10 )
    {
      if ( !v11 )
        goto LABEL_28;
      v7 = sub_B8C3D0(a2);
      v8 = *(_QWORD *)v7;
      v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
      if ( *(_QWORD *)v7 >= v9 )
      {
        if ( v8 == v9 )
        {
LABEL_28:
          if ( !(unsigned __int8)sub_B80B70(a2) )
            return 1;
          return v2;
        }
        while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 195 )
        {
          v9 += 8LL;
          if ( v8 == v9 )
            goto LABEL_28;
        }
      }
      else
      {
        v10 = *(_QWORD *)v7;
        while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 195 )
        {
          v10 += 8;
          if ( v9 == v10 )
            goto LABEL_28;
        }
        if ( v9 == v10 )
          goto LABEL_28;
      }
      v11 = a2[29] & 1;
    }
    if ( v11 )
    {
      v12 = sub_B8C3D0(a2);
      v13 = *(_QWORD *)v12;
      v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
      if ( *(_QWORD *)v12 >= v14 )
      {
        if ( v13 != v14 )
        {
          while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 221 )
          {
            v14 += 8LL;
            if ( v13 == v14 )
              goto LABEL_18;
          }
          goto LABEL_28;
        }
      }
      else
      {
        v15 = *(_QWORD *)v12;
        while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 221 )
        {
          v15 += 8;
          if ( v14 == v15 )
            goto LABEL_18;
        }
        if ( v14 != v15 )
          goto LABEL_28;
      }
    }
LABEL_18:
    v2 = 4;
    if ( (unsigned __int8)sub_B808C0(a2) )
      return v2;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 17448) + 340LL) == 10 && (a2[28] & 0x7F) == 0x26 )
    {
      v2 = 0;
      if ( (a2[87] & 0x20) != 0 )
        return v2;
    }
  }
  return 2;
}

__int64 __fastcall sub_664F0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  int v11; // r15d
  __int64 v14; // rbp
  __int64 v15; // rdx
  int i; // ebx
  __int64 v17; // rdi
  char v18; // al
  __int64 v19; // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int16 v23; // cx
  char v24; // r9
  __int16 v25; // si
  unsigned __int16 v26; // r10
  char v27; // di
  __int64 v28; // rdi
  char v29; // al
  int v30; // eax
  __int16 v31; // ax
  __int16 v32; // ax
  __int64 v33; // rdx
  __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  char v38; // [rsp+13h] [rbp-45h]
  __int16 v39; // [rsp+14h] [rbp-44h]
  int v40; // [rsp+18h] [rbp-40h]
  unsigned __int16 v41; // [rsp+1Ch] [rbp-3Ch]

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(unsigned __int16 *)(a2 + 24);
  v9 = *(_DWORD *)(v7 + 104);
  if ( v8 < v9 )
    return 0;
  if ( v8 >= *(_DWORD *)(v7 + 108) )
    return 0;
  v11 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v8 - v9) + 8);
  if ( !v11 )
    return 0;
  v14 = a2 + 41;
  v15 = a2 + 361;
  for ( i = (a5 << 8) | (4 * a4); ; i *= 2 )
  {
    if ( (i & v11) == 0 )
      goto LABEL_8;
    if ( *(_BYTE *)v14 == 1 )
    {
      v34 = v15;
      v17 = *(unsigned __int16 *)(v14 + 5);
      goto LABEL_12;
    }
    if ( (unsigned __int8)(*(_BYTE *)v14 - 2) > 2u || !a5 )
      goto LABEL_8;
    v35 = v15;
    if ( (unsigned __int8)sub_720E0(*(unsigned __int16 *)(v14 + 5), a3) )
      return 1;
    if ( !*(_BYTE *)(v14 + 31) )
      break;
    if ( *(_BYTE *)v14 == 2 )
    {
      v19 = 0xFFFFFFFFLL;
    }
    else
    {
      v19 = *(_BYTE *)(v14 + 32) & 7;
      if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 1) != 0 )
        v19 = *(_BYTE *)(v14 + 32) & 7 | 8u;
    }
LABEL_21:
    if ( (unsigned __int8)sub_720E0(v19, a3) )
      return 1;
    v21 = *(_DWORD *)(a2 + 28);
    v22 = v35;
    if ( !*(_BYTE *)(v14 + 31) )
    {
      v30 = *(_DWORD *)(a2 + 28) & 0x1018;
      if ( v30 == 4096 || v30 == 8 )
      {
        switch ( *(_WORD *)(v14 + 5) )
        {
          case 0:
          case 2:
            v28 = 6;
            goto LABEL_35;
          case 1:
          case 3:
            v28 = 7;
            goto LABEL_35;
          default:
            if ( (unsigned __int16)(*(_WORD *)(v14 + 5) - 4) <= 3u )
              goto LABEL_36;
            sub_63090(v19, a3, v35);
            break;
        }
        goto LABEL_71;
      }
      goto LABEL_36;
    }
    v23 = (*(char *)(v14 + 32) >> 3) & 7;
    v24 = (*(char *)(v14 + 32) >> 3) & 7;
    v25 = v23;
    if ( (v21 & 0x10) != 0 )
    {
      v25 = v24 | 8;
      if ( (*(_BYTE *)(a2 + 33) & 2) == 0 )
        v25 = (*(char *)(v14 + 32) >> 3) & 7;
    }
    v26 = *(_WORD *)(a2 + 24);
    if ( v26 > 0x5C0u )
    {
      if ( v26 > 0x5F1u )
      {
        if ( (unsigned __int16)(v26 - 1532) <= 0xFu )
          goto LABEL_48;
      }
      else if ( v26 > 0x5EDu )
      {
        goto LABEL_48;
      }
      if ( v25 != 4 )
      {
        if ( (v21 & 0x10) == 0 )
          goto LABEL_66;
        goto LABEL_53;
      }
    }
    else
    {
      if ( v26 > 0x5BCu )
        goto LABEL_48;
      if ( v26 > 0x378u )
      {
        if ( (unsigned __int16)(v26 - 993) <= 3u )
        {
LABEL_48:
          v41 = *(_WORD *)(a2 + 24);
          if ( (*(_BYTE *)(a2 + 273) & 0x10) != 0 )
            v25 |= 0x10u;
          v40 = *(_DWORD *)(a2 + 28) & 0x10;
          v39 = (*(char *)(v14 + 32) >> 3) & 7;
          v38 = (*(char *)(v14 + 32) >> 3) & 7;
          v31 = sub_22710(a2, v25);
          v22 = v35;
          if ( v31 != 4 )
          {
            v24 = v38;
            v23 = v39;
            v26 = v41;
            if ( v31 != -1 )
            {
              if ( v40 )
                goto LABEL_53;
LABEL_71:
              if ( v26 <= 0x5C0u )
              {
LABEL_72:
                if ( v26 > 0x5BCu )
                  goto LABEL_57;
                if ( v26 <= 0x378u )
                {
                  if ( v26 > 0x374u )
                    goto LABEL_57;
                }
                else if ( (unsigned __int16)(v26 - 993) <= 3u )
                {
                  goto LABEL_57;
                }
LABEL_60:
                v28 = (unsigned int)v23;
                if ( v23 == 4 )
                  v28 = 0xFFFFFFFFLL;
LABEL_35:
                v36 = v22;
                v29 = sub_720E0(v28, a3);
                v22 = v36;
                if ( v29 )
                  return 1;
                goto LABEL_36;
              }
LABEL_66:
              if ( v26 <= 0x5F1u )
              {
                if ( v26 > 0x5EDu )
                  goto LABEL_57;
                goto LABEL_60;
              }
              if ( (unsigned __int16)(v26 - 1532) > 0xFu )
                goto LABEL_60;
LABEL_57:
              v37 = v22;
              if ( (*(_BYTE *)(a2 + 273) & 0x10) != 0 )
                v23 |= 0x10u;
              v32 = sub_22710(a2, v23);
              v22 = v37;
              v23 = v32;
              goto LABEL_60;
            }
          }
          goto LABEL_36;
        }
        if ( v25 != 4 )
        {
          if ( (v21 & 0x10) == 0 )
            goto LABEL_72;
LABEL_53:
          if ( (*(_BYTE *)(a2 + 33) & 2) == 0 )
            goto LABEL_71;
          v27 = v24 | 8;
          v23 = v24 | 8;
          if ( v26 <= 0x5C0u )
          {
            if ( v26 > 0x5BCu || v26 <= 0x378u || (unsigned __int16)(v26 - 993) <= 3u )
              goto LABEL_57;
          }
          else if ( v26 > 0x5F1u )
          {
            if ( (unsigned __int16)(v26 - 1532) <= 0xFu )
              goto LABEL_57;
          }
          else if ( v26 > 0x5EDu )
          {
            goto LABEL_57;
          }
LABEL_34:
          v28 = (unsigned int)v27;
          goto LABEL_35;
        }
      }
      else
      {
        if ( v26 > 0x374u )
          goto LABEL_48;
        if ( v25 != 4 )
        {
          if ( (v21 & 0x10) == 0 || (*(_BYTE *)(a2 + 33) & 2) == 0 )
            goto LABEL_60;
          v27 = v24 | 8;
          goto LABEL_34;
        }
      }
    }
LABEL_36:
    v34 = v22;
    v17 = *(unsigned __int16 *)(v14 + 25);
LABEL_12:
    v18 = sub_720E0(v17, a3);
    v15 = v34;
    if ( v18 )
      return 1;
LABEL_8:
    v14 += 40;
    if ( v14 == v15 )
      return 0;
  }
  v19 = *(unsigned __int16 *)(v14 + 5);
  v20 = *(_DWORD *)(a2 + 28) & 0x1018;
  if ( v20 != 4096 && v20 != 8 )
    goto LABEL_21;
  if ( (_WORD)v19 == 0xFFFF )
  {
    v19 = 4;
    goto LABEL_21;
  }
  if ( (unsigned __int16)v19 <= 7u )
  {
    v19 = dword_974E0[v19];
    goto LABEL_21;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_669E0(10259, a3, v33);
}

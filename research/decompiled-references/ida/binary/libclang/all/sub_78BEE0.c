__int64 __fastcall sub_78BEE0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  _BYTE *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  _DWORD **v8; // rdi
  _DWORD **v9; // rbp
  _DWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rax
  char v22; // al
  _QWORD *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = a1;
  v2 = sub_798D40(a1);
  v3 = *(_BYTE **)(v2 + 2160);
  if ( (*v3 & 0x20) != 0 )
  {
    if ( (unsigned __int8)sub_78B990((_QWORD *)a1, v25) )
    {
      LODWORD(v5) = *(_BYTE *)(v25[0] + 82) & 1;
      if ( (*(_BYTE *)(v25[0] + 82) & 1) != 0 && *(_BYTE *)(a1 + 81) >> 5 == 1 )
      {
        v23 = sub_78B230((__int64 *)(a1 + 104));
        if ( !v23 )
          return (unsigned int)v5;
        while ( (*((_BYTE *)v23 + 29) & 2) != 0 || *((_BYTE *)v23 + 81) >> 5 != 1 )
        {
          v24 = v23[13];
          if ( (v24 & 1) == 0 && (v24 & 2) == 0 )
          {
            v23 = sub_787D60(v23 + 13, (__int64)v23);
            if ( v23 )
              continue;
          }
          return (unsigned int)v5;
        }
      }
    }
    v3 = *(_BYTE **)(v2 + 2160);
  }
  if ( (v3[1] & 8) == 0 )
  {
    if ( (v3[45] & 1) != 0 )
    {
LABEL_4:
      if ( (*(_BYTE *)(a1 + 82) & 2) != 0 && *(_BYTE *)(a1 + 81) >> 5 != 1 )
      {
        v4 = *(_QWORD *)(a1 + 104);
        v5 = *(_QWORD *)(v1 + 104) & 1LL;
        if ( (*(_QWORD *)(v1 + 104) & 1) == 0 )
        {
          while ( 1 )
          {
            v6 = v4 >> 1;
            if ( (v4 & 2) != 0 )
              return (unsigned int)v5;
            if ( (v4 & 1) != 0 )
            {
              LOBYTE(v7) = v4 & 0xFE;
            }
            else
            {
              if ( (v4 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
                return (unsigned int)v5;
              v14 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v6 & 1) == 0 )
              {
                v1 = (__int64)v14;
                goto LABEL_26;
              }
              v15 = sub_6D4E90(v14, v1);
              v4 = v15 | 1;
              *(_QWORD *)(v1 + 104) = v15 | 1;
              v7 = v15 & 0xFFFFFFFFFFFFFFFELL;
              if ( !v7 )
                return (unsigned int)v5;
            }
            v8 = (_DWORD **)(v4 & 0xFFFFFFFFFFFFFFF8LL);
            v9 = v8;
            if ( (v7 & 4) != 0 )
            {
              if ( !v8 )
                return (unsigned int)v5;
              v10 = *v8;
              v11 = v10[3];
              if ( *((_DWORD *)v9 + 2) != v11 )
              {
                *((_DWORD *)v9 + 2) = v11;
                (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v10 + 144LL))(v10, v1);
              }
              v1 = (__int64)v9[2];
            }
            else
            {
              v1 = (__int64)v8;
            }
            if ( !v1 )
              return (unsigned int)v5;
LABEL_26:
            v16 = *(_BYTE *)(v1 + 83);
            if ( (v16 & 8) != 0 )
            {
              if ( (v16 & 0x40) != 0 )
              {
                LODWORD(v5) = 1;
                goto LABEL_29;
              }
            }
            else
            {
              if ( (*(_BYTE *)(v1 + 128) & 1) != 0 )
              {
                LODWORD(v5) = *(_BYTE *)(v1 + 128) & 1;
LABEL_29:
                if ( (*(_BYTE *)(v1 + 82) & 2) == 0 )
                  goto LABEL_19;
LABEL_30:
                if ( *(_BYTE *)(v1 + 81) >> 5 != 1 )
                  goto LABEL_19;
                goto LABEL_31;
              }
              if ( *(_QWORD *)(v1 + 128) )
                LODWORD(v5) = 1;
              else
                LODWORD(v5) = ((v16 & 0x40) != 0) | (unsigned int)v5;
              if ( *(_QWORD *)(v1 + 128) || (v16 & 0x40) != 0 )
                goto LABEL_29;
            }
            if ( (*(_BYTE *)(v1 + 82) & 2) != 0 )
              goto LABEL_30;
LABEL_31:
            v4 = *(_QWORD *)(v1 + 104);
            if ( (v4 & 1) != 0 )
              return (unsigned int)v5;
          }
        }
      }
      goto LABEL_19;
    }
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v17 = sub_79A2B0(a1);
      v18 = *(_QWORD *)v17;
      v19 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
      if ( v18 < v19 )
      {
        while ( *(_WORD *)(*(_QWORD *)v18 + 32LL) != 215 )
        {
          v18 += 8LL;
          if ( v19 == v18 )
            goto LABEL_16;
        }
      }
      else
      {
        if ( v18 == v19 )
          goto LABEL_16;
        while ( *(_WORD *)(*(_QWORD *)v19 + 32LL) != 215 )
        {
          v19 += 8LL;
          if ( v18 == v19 )
            goto LABEL_16;
        }
      }
      if ( v18 != v19 )
        goto LABEL_4;
    }
LABEL_16:
    if ( (*(_BYTE *)(a1 + 82) & 2) != 0 && *(_BYTE *)(a1 + 81) >> 5 != 1 )
      goto LABEL_19;
    v12 = *(_QWORD *)(a1 + 104);
    LODWORD(v5) = v12 & 1;
    if ( (v12 & 1) != 0 )
      goto LABEL_19;
    while ( 1 )
    {
      if ( (v12 & 2) != 0 )
        return (unsigned int)v5;
      v21 = sub_787D60((__int64 *)(v1 + 104), v1);
      v1 = (__int64)v21;
      if ( !v21 )
        return (unsigned int)v5;
      v22 = *((_BYTE *)v21 + 83);
      if ( (v22 & 8) != 0 )
        goto LABEL_72;
      if ( (*(_BYTE *)(v1 + 128) & 1) == 0 )
        break;
      LODWORD(v5) = *(_BYTE *)(v1 + 128) & 1;
LABEL_62:
      v20 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
        v20 = *(_QWORD *)(v20 + 8);
      if ( (*(_BYTE *)(v20 + 8) & 0x7F) == 0
        && (*(_BYTE *)(v1 + 29) & 2) == 0
        && ((*(_BYTE *)(v1 + 82) & 2) == 0 || *(_BYTE *)(v1 + 81) >> 5 == 1) )
      {
        goto LABEL_19;
      }
      v12 = *(_QWORD *)(v1 + 104);
      if ( (v12 & 1) != 0 )
        return (unsigned int)v5;
    }
    if ( *(_QWORD *)(v1 + 128) )
    {
      LODWORD(v5) = 1;
      goto LABEL_62;
    }
LABEL_72:
    LODWORD(v5) = ((v22 & 0x40) != 0) | (unsigned int)v5;
    goto LABEL_62;
  }
LABEL_19:
  LODWORD(v5) = 0;
  return (unsigned int)v5;
}


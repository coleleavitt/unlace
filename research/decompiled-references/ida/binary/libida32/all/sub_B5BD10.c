__int64 __fastcall sub_B5BD10(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  _BYTE *v7; // rax
  unsigned int v8; // ebp
  _QWORD *v9; // rax
  char v10; // al
  _QWORD *v12; // rax
  char v13; // al
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD v20[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = a1;
  v6 = sub_B685F0(a1);
  v7 = *(_BYTE **)(v6 + 2320);
  if ( (*v7 & 0x20) != 0 )
  {
    v8 = sub_B5B8B0((_QWORD *)a1, v20, v2, v3, v4, v5);
    if ( (_BYTE)v8 && (*(_BYTE *)(v20[0] + 82LL) & 1) != 0 && *(_BYTE *)(a1 + 81) >> 5 == 1 )
    {
      v18 = *(_QWORD *)(a1 + 104);
      if ( (((unsigned __int8)v18 | (unsigned __int8)(v18 >> 1)) & 1) != 0 )
        return v8;
      v19 = sub_6E4ED0((__int64 *)(a1 + 104), a1, v18, v3, v4, v5);
      if ( !v19 )
        return v8;
      while ( 1 )
      {
        if ( (*((_BYTE *)v19 + 29) & 2) == 0 )
        {
          v2 = *((unsigned __int8 *)v19 + 81);
          LOBYTE(v2) = (unsigned __int8)v2 >> 5;
          if ( (_BYTE)v2 == 1 )
            break;
        }
        if ( (v19[13] & 3) == 0 )
        {
          v19 = sub_6E4ED0(v19 + 13, (__int64)v19, v2, v3, v4, v5);
          if ( v19 )
            continue;
        }
        return v8;
      }
    }
    v7 = *(_BYTE **)(v6 + 2320);
  }
  if ( (v7[1] & 8) != 0 )
    return 0;
  if ( (v7[45] & 1) != 0 )
    goto LABEL_4;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v15 = sub_B68690(a1);
    v2 = *(_QWORD *)v15;
    v3 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
    if ( *(_QWORD *)v15 >= v3 )
    {
      if ( v2 != v3 )
      {
        if ( *(_WORD *)(*(_QWORD *)v3 + 36LL) == 221 )
          goto LABEL_4;
        v17 = (unsigned __int64 *)(v3 + 8);
        while ( 1 )
        {
          v3 = (unsigned __int64)v17;
          if ( v17 == (unsigned __int64 *)v2 )
            break;
          v3 = *v17++;
          if ( *(_WORD *)(v3 + 36) == 221 )
            goto LABEL_4;
        }
      }
    }
    else
    {
      v16 = *(unsigned __int64 **)v15;
      while ( 1 )
      {
        v2 = *v16;
        if ( *(_WORD *)(*v16 + 36) == 221 )
          break;
        if ( (unsigned __int64 *)v3 == ++v16 )
          goto LABEL_19;
      }
      if ( (unsigned __int64 *)v3 != v16 )
      {
LABEL_4:
        if ( (*(_BYTE *)(a1 + 82) & 2) != 0 && *(_BYTE *)(a1 + 81) >> 5 != 1 )
        {
          v8 = 0;
          while ( 1 )
          {
            if ( (*(_BYTE *)(v1 + 104) & 3) != 0 )
              return v8;
            v9 = sub_6E4ED0((__int64 *)(v1 + 104), v1, v2, v3, v4, v5);
            v1 = (__int64)v9;
            if ( !v9 )
              return v8;
            v10 = *((_BYTE *)v9 + 83);
            if ( (v10 & 8) != 0 )
            {
              v14 = v10 & 0x40;
              LOBYTE(v2) = v14 != 0;
              v8 |= v2;
            }
            else
            {
              if ( (*(_BYTE *)(v1 + 128) & 1) != 0 )
              {
                v8 = 1;
LABEL_14:
                if ( (*(_BYTE *)(v1 + 82) & 2) == 0 )
                  return 0;
                goto LABEL_15;
              }
              v2 = v1 + 128;
              if ( *(_QWORD *)(v1 + 128) )
              {
                v8 = 1;
              }
              else
              {
                v3 = (v10 & 0x40) != 0;
                v8 |= v3;
              }
              if ( *(_QWORD *)v2 )
                goto LABEL_14;
              LOBYTE(v14) = v10 & 0x40;
            }
            if ( (_BYTE)v14 )
              goto LABEL_14;
            if ( (*(_BYTE *)(v1 + 82) & 2) != 0 )
            {
LABEL_15:
              if ( *(_BYTE *)(v1 + 81) >> 5 != 1 )
                return 0;
            }
          }
        }
        return 0;
      }
    }
  }
LABEL_19:
  if ( (*(_BYTE *)(a1 + 82) & 2) != 0 && *(_BYTE *)(a1 + 81) >> 5 != 1 )
    return 0;
  v8 = 0;
  while ( (*(_BYTE *)(v1 + 104) & 3) == 0 )
  {
    v12 = sub_6E4ED0((__int64 *)(v1 + 104), v1, v2, v3, v4, v5);
    v1 = (__int64)v12;
    if ( !v12 )
      break;
    v13 = *((_BYTE *)v12 + 83);
    if ( (v13 & 8) == 0 && ((*(_BYTE *)(v1 + 128) & 1) != 0 || *(_QWORD *)(v1 + 128)) )
      v8 = 1;
    else
      v8 |= (v13 & 0x40) != 0;
    v2 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
      v2 = *(_QWORD *)(v2 + 8);
    if ( (*(_BYTE *)(v2 + 8) & 0x7F) == 0
      && (*(_BYTE *)(v1 + 29) & 2) == 0
      && ((*(_BYTE *)(v1 + 82) & 2) == 0 || *(_BYTE *)(v1 + 81) >> 5 == 1) )
    {
      return 0;
    }
  }
  return v8;
}


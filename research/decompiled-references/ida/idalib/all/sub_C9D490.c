__int64 __fastcall sub_C9D490(int *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  int v6; // ebp
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rbx
  char v12; // al
  unsigned __int64 v13; // rdx
  char v14; // cl
  unsigned __int64 v15; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int8 v33; // [rsp+Fh] [rbp-69h]

  v5 = *a1;
  if ( *a1 == 1 )
    return 0;
  v6 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 1 )
    return 0;
  if ( !v6 || !v5 )
    return 1;
  v8 = *((_QWORD *)a1 + 1);
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(unsigned __int8 *)(a3 + 24);
  if ( *((_BYTE *)a1 + 24) )
    goto LABEL_23;
  if ( v5 == 2 )
  {
    v17 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    a3 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_BYTE *)(*(_QWORD *)a3 + 16LL) == 42 )
    {
      v33 = v10;
      v18 = sub_F68450(v17, a2, a3, v10, a5);
      v10 = v33;
      v8 = v18;
LABEL_23:
      if ( (_BYTE)v10 )
      {
        if ( v6 != 2 )
        {
          if ( v5 != 2 )
            return v5 == v6;
          return 0;
        }
        if ( v5 != 2 )
          return 0;
      }
      else
      {
        if ( v6 != 2 )
          return 0;
        v19 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
          return 0;
        v9 = sub_F68450(*v19, a2, a3, v10, a5);
        if ( v5 != 2 )
          return 0;
        LOBYTE(v10) = 1;
      }
LABEL_32:
      v15 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v9) & 7;
      v13 = *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v8) & 7;
      if ( v15 != v13 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                                    + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v20 + 16) != 13 )
          return 0;
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                                    + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v21 + 16) != 13 )
          return 0;
        if ( v20 != v21 )
        {
          if ( (_BYTE)v10 )
            return 0;
          if ( (((*(_WORD *)(v20 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            return 0;
          v14 = 1;
          if ( (((*(_WORD *)(v21 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            return 0;
          return sub_C9C020(a2, v15, v13, v14);
        }
      }
      return 1;
    }
  }
  if ( (_BYTE)v10 )
    return 0;
  if ( v6 == 2 )
  {
    v22 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      sub_F68450(v22, a2, a3, v10, a5);
      return 0;
    }
    if ( v5 == 2 )
      goto LABEL_32;
    if ( v5 != 5 )
      goto LABEL_12;
    goto LABEL_43;
  }
  if ( v5 == 2 )
  {
    if ( v6 != 5 )
    {
      v5 = v6;
      v9 = v8;
LABEL_12:
      if ( v5 != 8 )
        return 0;
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v12 = *(_BYTE *)(v11 + 16);
      switch ( v12 )
      {
        case 13:
          if ( (((*(_WORD *)(v11 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            return 0;
          break;
        case 47:
          v29 = sub_F60F10(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                  a2,
                  a3,
                  v10,
                  a5);
          if ( (*(_BYTE *)(v29 + 74) & 1) == 0 && (*(_QWORD *)(v29 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
            || *(char *)(sub_F60F10(v11, a2, v30, v31, v32) + 76) < 0 )
          {
            return 0;
          }
          break;
        case 10:
          break;
        default:
          return 0;
      }
      v13 = *(_QWORD *)(a2 + 18672);
      v14 = 1;
      goto LABEL_16;
    }
    v9 = v8;
LABEL_43:
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v24 = *(_BYTE *)(v23 + 16);
    switch ( v24 )
    {
      case 13:
        if ( (((*(_WORD *)(v23 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
          return 0;
        break;
      case 47:
        v25 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                a2,
                a3,
                v10,
                a5);
        if ( (*(_BYTE *)(v25 + 74) & 1) == 0 && (*(_QWORD *)(v25 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
          || *(char *)(sub_F60F10(v23, a2, v26, v27, v28) + 76) < 0 )
        {
          return 0;
        }
        break;
      case 10:
        break;
      default:
        return 0;
    }
    v13 = *(_QWORD *)(a2 + 18648);
    v14 = 0;
LABEL_16:
    v15 = v9;
    return sub_C9C020(a2, v15, v13, v14);
  }
  return v5 == v6;
}

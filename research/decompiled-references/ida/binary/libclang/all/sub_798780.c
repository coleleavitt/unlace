bool __fastcall sub_798780(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int8 v12; // al
  bool result; // al
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  void **v18; // rsi
  void *v19; // rsi
  _QWORD *v20; // r12
  unsigned int v21; // r13d
  int v22; // eax
  unsigned __int8 v23; // al
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned int v26; // ebp
  unsigned __int64 *v27; // r12
  unsigned __int64 v28; // r13
  unsigned __int64 i; // rbp
  unsigned __int64 v30; // rax
  _WORD *v31; // rdi
  unsigned __int8 v32; // dl
  unsigned __int64 *v33; // rdx
  int v34; // eax
  bool v35; // [rsp+8h] [rbp-50h]
  void *v36; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+18h] [rbp-40h]

  v9 = sub_6D9A50(a1, a3);
  if ( !v9 || (v10 = v9, (unsigned __int8)(*(_BYTE *)(v9 + 16) - 2) > 1u) )
  {
    v11 = sub_6D9A50(a1, a3);
    if ( !v11 || *(_BYTE *)(v11 + 16) != 5 )
      return 0;
    v10 = 0;
    goto LABEL_6;
  }
  v17 = *(_BYTE *)(v9 + 19);
  v18 = *(void ***)(v10 + 40);
  if ( (v17 & 2) == 0 )
  {
    v37 = 8 * ((v17 >> 2) & 0x1F);
    if ( (int)v37 <= 64 )
    {
      v36 = v18;
      v20 = v18;
      if ( a4 == 3 )
        return 0;
      goto LABEL_27;
    }
    sub_2585A50(&v36, v18, 0);
LABEL_30:
    v21 = v37;
    if ( a4 == 3 )
    {
      if ( v37 <= 0x40 )
        return 0;
      v20 = v36;
      goto LABEL_85;
    }
    v20 = v36;
    if ( v37 > 0x40 )
    {
      v22 = sub_2587400(&v36);
      if ( v21 == v22 )
      {
        result = 1;
        goto LABEL_72;
      }
      if ( a4 == 2 )
      {
        if ( v21 - v22 <= 0x40 )
        {
          if ( !*v20 )
            goto LABEL_36;
          goto LABEL_82;
        }
      }
      else
      {
        if ( a4 != 1 )
        {
          if ( !v20 )
            goto LABEL_6;
LABEL_36:
          operator delete[](v20);
          goto LABEL_6;
        }
        if ( v21 - v22 <= 0x40 )
        {
          if ( *v20 <= 1u )
            goto LABEL_36;
LABEL_82:
          result = 0;
          goto LABEL_73;
        }
      }
LABEL_85:
      result = 0;
LABEL_72:
      if ( !v20 )
        return result;
LABEL_73:
      v35 = result;
      operator delete[](v20);
      return v35;
    }
LABEL_27:
    if ( !v20 )
      return 1;
    goto LABEL_21;
  }
  v37 = *((_DWORD *)v18 + 2);
  if ( v37 > 0x40 )
  {
    sub_2585B30(&v36);
    goto LABEL_30;
  }
  v19 = *v18;
  v36 = v19;
  if ( a4 == 3 )
    return 0;
  v20 = v19;
  if ( !v19 )
    return 1;
LABEL_21:
  if ( a4 == 2 || a4 == 1 && v20 != (_QWORD *)((char *)&dword_0 + 1) )
    return 0;
LABEL_6:
  if ( !a2 )
    return 0;
  v12 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v12 == 48 )
    return *(_QWORD *)(a2 + 80) == 0;
  if ( (unsigned int)v12 - 47 > 2 )
    return 0;
  if ( !v10 )
    goto LABEL_50;
  v23 = *(_BYTE *)(v10 + 19);
  v24 = *(_QWORD *)(v10 + 40);
  if ( (v23 & 2) != 0 )
  {
    v37 = *(_DWORD *)(v24 + 8);
    if ( v37 > 0x40 )
      sub_2585B30(&v36);
    else
      v36 = *(void **)v24;
  }
  else
  {
    v37 = 8 * ((v23 >> 2) & 0x1F);
    if ( (int)v37 > 64 )
      sub_2585A50(&v36, v24, 0);
    else
      v36 = (void *)v24;
  }
  v25 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v25 = *(_QWORD *)v25;
  if ( (*(_BYTE *)(v25 + 8) & 0x7Fu) - 56 > 3 )
    BUG();
  v26 = v37;
  if ( *(_BYTE *)(v25 + 9) >> 5 == 2 )
  {
    if ( v37 <= 0x40 )
    {
      if ( (unsigned __int64)v36 <= 1 )
        return 1;
      goto LABEL_50;
    }
    v34 = sub_2587400(&v36);
    if ( v34 == v26 || v34 == v26 - 1 )
    {
      if ( v36 )
        operator delete[](v36);
      return 1;
    }
  }
  else if ( v37 <= 0x40 )
  {
    goto LABEL_50;
  }
  if ( v36 )
    operator delete[](v36);
LABEL_50:
  if ( !a5 )
    goto LABEL_10;
  v27 = (unsigned __int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v27 = (unsigned __int64 *)v27[4];
  while ( 2 )
  {
    if ( !v27 )
      goto LABEL_10;
LABEL_54:
    v28 = *v27;
    for ( i = *v27; ; i = *(_QWORD *)(i + 24) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = i;
          if ( (i & 7) != 0 || (i & 8) != 0 )
            goto LABEL_56;
          v32 = *(_BYTE *)(*(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          switch ( v32 )
          {
            case 0x34u:
              goto LABEL_90;
            case 0x27u:
              goto LABEL_69;
            case 8u:
              goto LABEL_78;
            case 9u:
            case 0x1Bu:
LABEL_69:
              if ( !i )
                goto LABEL_90;
              goto LABEL_70;
          }
          if ( v32 != 24 )
            break;
LABEL_78:
          if ( !i )
            goto LABEL_90;
          sub_B1AFD0(*(_QWORD *)(i + 40));
          i = *(_QWORD *)(i + 40);
        }
        if ( v32 > 1u )
          break;
        if ( !i )
        {
          v30 = 0;
          goto LABEL_91;
        }
LABEL_70:
        sub_B1AFD0(*(_QWORD *)(i + 32));
        i = *(_QWORD *)(i + 32);
      }
      if ( v32 != 29 )
        goto LABEL_90;
      if ( !i )
        break;
      sub_B1AFD0(*(_QWORD *)(i + 24));
    }
    v30 = 0;
LABEL_90:
    if ( (i & 8) != 0 )
    {
LABEL_56:
      if ( (v28 & 7) != 0 )
        goto LABEL_10;
      if ( (v28 & 8) != 0 )
        goto LABEL_10;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2 > 1 )
        goto LABEL_10;
      if ( !v28 )
        goto LABEL_10;
      v31 = (_WORD *)v27[2];
      if ( v31 )
      {
        if ( (*v31 & 0x1FF) == 0x35 && (int)sub_8124E0() >= 0 )
          goto LABEL_10;
      }
      return 0;
    }
LABEL_91:
    if ( *(_BYTE *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 52 || !i )
      goto LABEL_56;
    v33 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(i + 32) + 80LL) & 0xFFFFFFFFFFFFFFF8LL);
    v27 = v33;
    if ( (*(_QWORD *)(*(_QWORD *)(i + 32) + 80LL) & 4) == 0 )
      continue;
    break;
  }
  v27 = (unsigned __int64 *)*v33;
  if ( *v33 )
    goto LABEL_54;
LABEL_10:
  while ( 1 )
  {
    v14 = *(_QWORD *)(a2 + 8);
    v15 = (*(_BYTE *)(a2 + 28) & 0x7F) - 47;
    a2 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 <= 2 )
      break;
    if ( v14 <= 7 )
      BUG();
  }
  if ( v14 <= 7 )
    return 1;
  while ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 47 > 2 )
  {
    v16 = *(_QWORD *)(a2 + 8);
    a2 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v16 <= 7 )
      return 1;
  }
  return 0;
}


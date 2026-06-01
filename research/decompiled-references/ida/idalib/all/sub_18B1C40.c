__int64 __fastcall sub_18B1C40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  unsigned int v8; // r13d
  unsigned __int64 v9; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  unsigned int v14; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 **v18; // rax
  __int64 *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 *i; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // [rsp+8h] [rbp-30h]

  v8 = a4;
  v9 = a2;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) == 0 || !a2 || ((*(_WORD *)a2 + 423) & 0x1FFu) > 4 )
      return 2;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 34 > 5 || (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
LABEL_4:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) == 0 || !a2 || ((*(_WORD *)a2 + 423) & 0x1FFu) > 4 )
    {
      if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 26 > 0x1A )
        return 2;
      goto LABEL_6;
    }
LABEL_14:
    v9 = *(_QWORD *)(a2 + 32);
    v11 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v12 = *(_QWORD *)v11;
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) != 13 )
      goto LABEL_7;
    if ( ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) != 0x1F3 )
    {
      v13 = *(_BYTE *)(v12 + 16);
      if ( v13 == 26 )
      {
        if ( v8 )
          goto LABEL_9;
        goto LABEL_30;
      }
      if ( v13 == 42 )
        goto LABEL_24;
      goto LABEL_48;
    }
    v9 = sub_BFBAE0(v9);
    a3 = *(_QWORD *)(v9 + 24);
    if ( ((*(_WORD *)v9 + 394) & 0x1FFu) <= 1 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v17 + 16) != 33 )
        v17 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
      v11 = *(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v12 = *(_QWORD *)v11;
LABEL_7:
      v13 = *(_BYTE *)(v12 + 16);
      if ( v13 == 26 )
      {
LABEL_8:
        if ( v8 )
        {
LABEL_9:
          v14 = v8;
          goto LABEL_10;
        }
        if ( !v9 )
          return sub_F63060(v12);
LABEL_30:
        v14 = sub_EEB7E0(v9, a2, a7);
LABEL_10:
        v12 = sub_18B0530(a1, v14, v12, a7, a8);
        if ( v12 )
          return sub_F63060(v12);
        return 2;
      }
      a3 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(a3 + 16) == 26 )
      {
        v12 = sub_F63050(v12, a2, a3, a4);
        if ( v12 )
          goto LABEL_8;
        v12 = *(_QWORD *)v11;
        v13 = *(_BYTE *)(*(_QWORD *)v11 + 16LL);
      }
      if ( v13 == 42 )
        goto LABEL_24;
      v23 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v23 + 16) == 42 )
      {
        v12 = sub_F63050(v12, a2, v23, a4);
        if ( v12 )
          goto LABEL_24;
        v12 = *(_QWORD *)v11;
        v13 = *(_BYTE *)(*(_QWORD *)v11 + 16LL);
      }
LABEL_48:
      a3 = (unsigned int)v13 - 43;
      if ( (unsigned int)a3 <= 1 )
        goto LABEL_49;
      a3 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
      if ( (unsigned int)a3 <= 1 )
      {
        v12 = sub_F63050(v12, a2, a3, a4);
        if ( v12 )
        {
LABEL_49:
          while ( 1 )
          {
            v24 = (*(_BYTE *)(v12 + 18) & 0x10) == 0;
            v12 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            if ( v24 )
              break;
            if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43 > 1 )
              v12 = sub_F63050(v12, a2, a3, a4);
          }
LABEL_25:
          if ( *(_BYTE *)(v12 + 16) == 26 )
            goto LABEL_8;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
          {
            v12 = sub_F63050(v12, a2, a3, a4);
            if ( v12 )
              goto LABEL_8;
          }
          return 2;
        }
        v12 = *(_QWORD *)v11;
        v13 = *(_BYTE *)(*(_QWORD *)v11 + 16LL);
      }
      if ( v13 != 33 )
      {
        a3 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(a3 + 16) != 33 )
        {
LABEL_64:
          if ( v13 != 11 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11 )
              return 2;
            v12 = sub_F63050(v12, a2, a3, a4);
            if ( !v12 )
              return 2;
          }
          goto LABEL_24;
        }
        v12 = sub_F63050(v12, a2, a3, a4);
        if ( !v12 )
        {
          v12 = *(_QWORD *)v11;
          v13 = *(_BYTE *)(*(_QWORD *)v11 + 16LL);
          goto LABEL_64;
        }
      }
LABEL_24:
      v12 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_25;
    }
LABEL_6:
    v11 = *(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v12 = *(_QWORD *)v11;
    goto LABEL_7;
  }
  v25 = a3;
  v18 = (__int64 **)sub_B8C3D0(a3, a2, a3, a4, a5, a6);
  a3 = v25;
  v19 = *v18;
  v20 = (unsigned __int64)&(*v18)[*((unsigned int *)v18 + 2)];
  if ( (unsigned __int64)v19 < v20 )
  {
    while ( 1 )
    {
      a4 = *v19;
      if ( *(_WORD *)(*v19 + 36) == 286 )
        break;
      if ( (__int64 *)v20 == ++v19 )
        goto LABEL_4;
    }
    if ( (__int64 *)v20 == v19 )
      goto LABEL_4;
  }
  else
  {
    if ( v19 == (__int64 *)v20 )
      goto LABEL_4;
    if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 286 )
    {
      for ( i = (__int64 *)(v20 + 8); ; ++i )
      {
        a4 = (__int64)i;
        if ( v19 == i )
          break;
        v22 = *i;
        if ( *(_WORD *)(v22 + 36) == 286 )
          return 0;
      }
      goto LABEL_4;
    }
  }
  return 0;
}

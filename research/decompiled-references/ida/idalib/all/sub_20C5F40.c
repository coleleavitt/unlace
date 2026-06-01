__int64 __fastcall sub_20C5F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 *v18; // r14
  __int64 *v19; // r15
  unsigned __int8 v20; // bl
  __int64 v21; // rdi
  unsigned __int8 v22; // al
  char v23; // al
  _QWORD *v24; // rax
  char v25; // al
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rcx
  char v31; // [rsp+1Fh] [rbp-79h]
  void *ptr[2]; // [rsp+20h] [rbp-78h] BYREF
  int v33; // [rsp+30h] [rbp-68h]
  unsigned __int8 v34; // [rsp+34h] [rbp-64h]
  char v35; // [rsp+38h] [rbp-60h] BYREF

  v6 = 1;
  if ( (*(_DWORD *)(a1 + 8) & 0x800) != 0 )
    return v6;
  if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
    return 0;
  if ( a2 )
  {
    v6 = *(unsigned __int8 *)(a2 + 20);
    if ( (_BYTE)v6 )
    {
      v8 = *(_QWORD **)a2;
      v9 = *(unsigned int *)(a2 + 12);
      v10 = (_QWORD *)(*(_QWORD *)a2 + 8 * v9);
      if ( *(_QWORD **)a2 != v10 )
      {
        a4 = *(_QWORD *)a2;
        if ( a1 == *v8 )
        {
LABEL_76:
          v6 = 0;
          goto LABEL_77;
        }
        while ( 1 )
        {
          a4 += 8;
          if ( v10 == (_QWORD *)a4 )
            break;
          if ( a1 == *(_QWORD *)a4 )
            goto LABEL_76;
        }
      }
      if ( (unsigned int)v9 < *(_DWORD *)(a2 + 8) )
      {
        *(_DWORD *)(a2 + 12) = v9 + 1;
        *v10 = a1;
        v8 = *(_QWORD **)a2;
        a4 = *(_QWORD *)a2 + 8 * v9;
        goto LABEL_77;
      }
    }
    v11 = sub_2236760(a2, a1);
    v6 = v12;
    a4 = v11;
    v8 = *(_QWORD **)a2;
    if ( !*(_BYTE *)(a2 + 20) )
    {
      a3 = (__int64)&v8[*(unsigned int *)(a2 + 8)];
LABEL_13:
      if ( a3 != a4 && *(_QWORD *)a4 >= 0xFFFFFFFFFFFFFFFELL )
      {
        a4 += 8;
        do
        {
          v13 = (_QWORD *)a4;
          if ( a3 == a4 )
            break;
          a4 += 8;
        }
        while ( *v13 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( !(_BYTE)v6 )
        return v6;
      goto LABEL_19;
    }
LABEL_77:
    a3 = (__int64)&v8[*(unsigned int *)(a2 + 12)];
    goto LABEL_13;
  }
LABEL_19:
  v14 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v14
    || (v15 = *(_QWORD *)(a1 + 16),
        v16 = 8 * v14,
        v17 = *(_QWORD *)v15,
        v18 = (__int64 *)(v15 + v16),
        v19 = (__int64 *)(v15 + 8),
        v20 = *(_BYTE *)(*(_QWORD *)v15 + 8LL),
        v20 == 18)
    && (v16 == 8 || !memcmp((const void *)(v15 + 8), (const void *)v15, v16 - 8)) )
  {
LABEL_68:
    *(_DWORD *)(a1 + 8) |= 0x800u;
    return 1;
  }
  while ( 1 )
  {
    ptr[0] = &v35;
    ptr[1] = &byte_4;
    v33 = 0;
    v34 = 1;
    if ( v20 == 16 )
    {
      v21 = v17;
      do
      {
        v21 = *(_QWORD *)(v21 + 24);
        v22 = *(_BYTE *)(v21 + 8);
      }
      while ( v22 == 16 );
    }
    else
    {
      v22 = v20;
      v21 = v17;
    }
    if ( v22 == 15 )
    {
      v15 = (__int64)ptr;
      v23 = sub_20C5D10(v21, (__int64)ptr, a3, a4, a5, a6);
      if ( !v34 )
      {
        v31 = v23;
        free(ptr[0]);
        v23 = v31;
      }
      if ( v23 )
        return 0;
LABEL_28:
      v20 = *(_BYTE *)(v17 + 8);
      goto LABEL_29;
    }
    if ( v22 == 18 )
      return 0;
    if ( v22 == 20 )
      break;
LABEL_29:
    a4 = v20;
    if ( v20 == 12 || v20 <= 5u && ((1LL << v20) & 0x2F) != 0 || (v20 & 0xFD) == 4 || (v20 & 0xFB) == 0xA )
      goto LABEL_34;
    if ( (unsigned __int8)(v20 - 15) > 3u && v20 != 20 )
      return 0;
    if ( v20 == 16 )
    {
      v27 = *(_QWORD *)(v17 + 24);
      v28 = *(unsigned __int8 *)(v27 + 8);
      a4 = *(unsigned __int8 *)(v27 + 8);
      if ( v28 == 12 )
        goto LABEL_34;
      if ( (unsigned __int8)v28 <= 5u )
      {
        a3 = (1LL << a4) & 0x2F;
        if ( ((1LL << a4) & 0x2F) != 0 )
          goto LABEL_34;
      }
      a3 = (unsigned int)a4 & 0xFFFFFFFB;
      if ( (a4 & 0xFB) == 0xA )
        goto LABEL_34;
      a3 = (unsigned int)a4 & 0xFFFFFFFD;
      if ( (a4 & 0xFD) == 4 )
        goto LABEL_34;
    }
    else
    {
      v29 = (unsigned int)v20 - 17;
      if ( (unsigned int)v29 > 1 )
      {
        if ( v20 == 20 )
        {
          v24 = sub_20C5940(v17, v15, a3, v29, a5, a6);
          a3 = *((unsigned __int8 *)v24 + 8);
          a4 = a3;
          if ( (_DWORD)a3 == 12 )
            goto LABEL_34;
          if ( (unsigned __int8)a3 <= 5u )
          {
            v15 = (1LL << a3) & 0x2F;
            if ( ((1LL << a3) & 0x2F) != 0 )
              goto LABEL_34;
          }
          v15 = (unsigned int)a3 & 0xFFFFFFFB;
          if ( (a3 & 0xFB) == 0xA )
            goto LABEL_34;
          v15 = (unsigned int)a3 & 0xFFFFFFFD;
          if ( (a3 & 0xFD) == 4 )
            goto LABEL_34;
          if ( (unsigned __int8)(a3 - 15) > 3u && (_DWORD)a3 != 20 )
            return 0;
          v15 = a2;
          v25 = sub_20C6390(v24, a2);
        }
        else
        {
          v15 = a2;
          v25 = sub_20C5F40(v17, a2);
        }
        goto LABEL_45;
      }
      v27 = *(_QWORD *)(v17 + 24);
      v28 = *(unsigned __int8 *)(v27 + 8);
      a4 = *(unsigned __int8 *)(v27 + 8);
      if ( v28 == 12 )
        goto LABEL_34;
      if ( (unsigned __int8)v28 <= 5u )
      {
        a3 = (1LL << a4) & 0x2F;
        if ( ((1LL << a4) & 0x2F) != 0 )
          goto LABEL_34;
      }
      a3 = (unsigned int)a4 & 0xFFFFFFFD;
      if ( (a4 & 0xFD) == 4 )
        goto LABEL_34;
      a3 = (unsigned int)a4 & 0xFFFFFFFB;
      if ( (a4 & 0xFB) == 0xA )
        goto LABEL_34;
    }
    if ( (unsigned __int8)(a4 - 15) > 3u && v28 != 20 )
      return 0;
    v15 = a2;
    v25 = sub_20C6390(v27, a2);
LABEL_45:
    if ( !v25 )
      return 0;
LABEL_34:
    if ( v18 == v19 )
      goto LABEL_68;
    v17 = *v19++;
    v20 = *(_BYTE *)(v17 + 8);
  }
  if ( *((_BYTE *)sub_20C5940(v21, v15, a3, a4, a5, a6) + 8) != 18 )
  {
    if ( v34 )
      goto LABEL_28;
    free(ptr[0]);
    v20 = *(_BYTE *)(v17 + 8);
    goto LABEL_29;
  }
  v6 = v34;
  if ( !v34 )
  {
    free(ptr[0]);
    return v6;
  }
  return 0;
}

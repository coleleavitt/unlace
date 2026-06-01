unsigned __int64 __fastcall sub_1AF0970(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int8 v10; // bp
  _QWORD *v11; // r15
  __int64 *v12; // r12
  __int64 v13; // rdx
  char v14; // r14
  unsigned __int64 result; // rax
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int v31; // [rsp+Ch] [rbp-3Ch]

  v10 = a5;
  v11 = (_QWORD *)a9;
  v12 = (__int64 *)a10;
  v31 = a4;
  v13 = (*(_BYTE *)(a9 + 1) >> 3) & 7;
  if ( a10 )
  {
    if ( (unsigned int)(a2 - 37) <= 1 )
    {
      if ( (_BYTE)v13 != 3 )
      {
        if ( ((*(_BYTE *)(a10 + 1) >> 3) & 7) != 3 )
        {
          v14 = sub_1741750(*(_QWORD *)(*(_QWORD *)(a9 + 8) & 0xFFFFFFFFFFFFFFF0LL));
          if ( v14 )
            goto LABEL_26;
          v14 = 1;
          goto LABEL_14;
        }
        v14 = 1;
LABEL_38:
        v27 = sub_1907C70(*a1, (_QWORD *)a10, (__m128i)a7, a8, v13, a4, a5, a6);
        if ( v27 == 1 )
          return 1;
        v12 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_6;
      }
      v14 = 1;
      goto LABEL_35;
    }
    if ( (_BYTE)v13 != 3 )
    {
      v14 = 0;
LABEL_5:
      if ( ((*(_BYTE *)(a10 + 1) >> 3) & 7) != 3 )
        goto LABEL_6;
      goto LABEL_38;
    }
LABEL_34:
    v14 = 0;
LABEL_35:
    v22 = sub_BFAB60(a2);
    v26 = v22 - 21;
    if ( (unsigned int)v26 <= 0xA )
      return sub_1C214B0(*(_QWORD *)(*a1 + 776), 0, a3, v22, a9, a10);
    v28 = sub_1907C70(*a1, (_QWORD *)a9, (__m128i)a7, a8, v23, v26, v24, v25);
    if ( v28 == 1 )
      return 1;
    v11 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL);
    if ( !a10 )
    {
LABEL_6:
      if ( a2 != 43 )
        goto LABEL_7;
LABEL_17:
      if ( !sub_1741750(*(_QWORD *)(v11[1] & 0xFFFFFFFFFFFFFFF0LL))
        && !sub_1741750(*(_QWORD *)(v12[1] & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        return sub_191AF90(*a1, v11, v31, v12, a3, v18, a7, a8);
      }
      if ( v12 && !v14 )
        goto LABEL_21;
      goto LABEL_26;
    }
    goto LABEL_5;
  }
  if ( (_BYTE)v13 == 3 )
    goto LABEL_34;
  v14 = 0;
  if ( a2 == 43 )
    goto LABEL_17;
LABEL_7:
  if ( a2 != 41 )
  {
    if ( v12 && !v14 )
    {
      if ( (*(_DWORD *)v11 & 0x10000) == 0
        && (*(_DWORD *)v12 & 0x10000) == 0
        && !sub_1741750(*(_QWORD *)(v11[1] & 0xFFFFFFFFFFFFFFF0LL))
        && !sub_1741750(*(_QWORD *)(v12[1] & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        v21 = sub_BFAB60(a2);
        return sub_1928110(*a1, a3, v21, (unsigned __int64)v11, (unsigned __int64)v12, 0, a7, a8);
      }
LABEL_21:
      v19 = sub_BFAB60(a2);
      result = sub_1C07820(*a1, a3, v19, a6, (_DWORD)v11, (_DWORD)v12, v10, 1, 0);
      if ( result == 1 )
        return 1;
      return result;
    }
    if ( sub_1741750(*(_QWORD *)(v11[1] & 0xFFFFFFFFFFFFFFF0LL))
      && (a2 != 11 || !(unsigned __int8)sub_18C3500(*a1, (__int64)v11)) )
    {
LABEL_26:
      v20 = sub_BF9700(a2, v14);
      return sub_1C09DA0(*a1, a3, v20, a6, v11, v10);
    }
LABEL_14:
    v16 = sub_BF9700(a2, v14);
    return sub_19249E0(*a1, a3, v16, (unsigned __int64)v11, 0, v17, a7, a8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v11[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  return sub_1C042D0(*a1, 0, v11, a3, 0);
}

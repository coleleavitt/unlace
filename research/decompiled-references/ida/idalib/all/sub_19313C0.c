unsigned __int64 __fastcall sub_19313C0(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  int v10; // r13d
  unsigned __int8 v11; // bl
  _QWORD *v12; // r15
  __int64 *v13; // r12
  __int64 v14; // rdx
  char v15; // r14
  unsigned __int64 result; // rax
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned int v32; // [rsp+Ch] [rbp-3Ch]

  v10 = a2;
  v11 = a5;
  v12 = (_QWORD *)a9;
  v13 = (__int64 *)a10;
  v32 = a4;
  v14 = (*(_BYTE *)(a9 + 1) >> 3) & 7;
  if ( a10 )
  {
    if ( (unsigned int)(a2 - 37) <= 1 )
    {
      if ( (_BYTE)v14 != 3 )
      {
        if ( ((*(_BYTE *)(a10 + 1) >> 3) & 7) != 3 )
        {
          v15 = sub_1741750(*(_QWORD *)(*(_QWORD *)(a9 + 8) & 0xFFFFFFFFFFFFFFF0LL));
          if ( v15 )
            goto LABEL_26;
          v15 = 1;
          goto LABEL_14;
        }
        v15 = 1;
LABEL_38:
        a2 = a10;
        v28 = sub_1907C70(*a1, (_QWORD *)a10, (__m128i)a7, a8, v14, a4, a5, a6);
        if ( v28 == 1 )
          return 1;
        v13 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_6;
      }
      v15 = 1;
      goto LABEL_35;
    }
    if ( (_BYTE)v14 != 3 )
    {
      v15 = 0;
LABEL_5:
      if ( ((*(_BYTE *)(a10 + 1) >> 3) & 7) != 3 )
        goto LABEL_6;
      goto LABEL_38;
    }
LABEL_34:
    v15 = 0;
LABEL_35:
    v23 = sub_BFAB60(a2);
    v27 = v23 - 21;
    if ( (unsigned int)v27 <= 0xA )
      return sub_1C214B0(*(_QWORD *)(*a1 + 776), 0, a3, v23, a9, a10);
    a2 = a9;
    v29 = sub_1907C70(*a1, (_QWORD *)a9, (__m128i)a7, a8, v24, v27, v25, v26);
    if ( v29 == 1 )
      return 1;
    v12 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL);
    if ( !a10 )
    {
LABEL_6:
      if ( v10 != 43 )
        goto LABEL_7;
LABEL_17:
      if ( !sub_1741750(*(_QWORD *)(v12[1] & 0xFFFFFFFFFFFFFFF0LL))
        && !sub_1741750(*(_QWORD *)(v13[1] & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        return sub_191AF90(*a1, v12, v32, v13, a3, v19, a7, a8);
      }
      if ( v13 && !v15 )
        goto LABEL_21;
      goto LABEL_26;
    }
    goto LABEL_5;
  }
  if ( (_BYTE)v14 == 3 )
    goto LABEL_34;
  v15 = 0;
  if ( (_DWORD)a2 == 43 )
    goto LABEL_17;
LABEL_7:
  if ( v10 != 41 )
  {
    if ( v13 && !v15 )
    {
      if ( (*(_DWORD *)v12 & 0x10000) == 0
        && (*(_DWORD *)v13 & 0x10000) == 0
        && !sub_1741750(*(_QWORD *)(v12[1] & 0xFFFFFFFFFFFFFFF0LL))
        && !sub_1741750(*(_QWORD *)(v13[1] & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        v22 = sub_BFAB60(v10);
        return sub_1928110(*a1, a3, v22, (unsigned __int64)v12, (unsigned __int64)v13, 0, a7, a8);
      }
LABEL_21:
      v20 = sub_BFAB60(v10);
      result = sub_1C07820(*a1, a3, v20, a6, (_DWORD)v12, (_DWORD)v13, v11, 1, 0);
      if ( result == 1 )
        return 1;
      return result;
    }
    if ( sub_1741750(*(_QWORD *)(v12[1] & 0xFFFFFFFFFFFFFFF0LL))
      && (v10 != 11 || !(unsigned __int8)sub_18BD5E0((__int64)v12, a2)) )
    {
LABEL_26:
      v21 = sub_BF9700(v10, v15);
      return sub_1C09DA0(*a1, a3, v21, a6, v12, v11);
    }
LABEL_14:
    v17 = sub_BF9700(v10, v15);
    return sub_19249E0(*a1, a3, v17, (unsigned __int64)v12, 0, v18, a7, a8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v12[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  return sub_1C042D0(*a1, 0, v12, a3, 0);
}

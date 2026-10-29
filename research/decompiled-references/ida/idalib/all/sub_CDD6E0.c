__int64 __fastcall sub_CDD6E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // r12d
  bool v13; // zf
  __int64 v14; // rax
  _BOOL8 v15; // rdx
  unsigned __int64 v16; // rsi
  char v18; // al
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD *v30; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v31[12]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *(_QWORD *)a2;
  v30 = a1;
  if ( (v6 & 0x4000) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( v7 )
    {
      if ( !(unsigned __int8)sub_CDCBC0((__int64)a1, v7, a3, a4, a5) )
        return 0;
      v6 = *(_QWORD *)a2;
    }
  }
  if ( (v6 & 0x2000) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 8LL * ((v6 & 0x4000) != 0) + 16);
    if ( v8 )
    {
      if ( !(unsigned __int8)sub_CD9F60((__int64)a1, v8, 0) )
        return 0;
      v6 = *(_QWORD *)a2;
    }
  }
  v9 = sub_CAE9C0(*(_WORD **)(a2 + 8LL * (((v6 & 0x4000) != 0) + ((v6 & 0x2000) != 0)) + 16));
  v11 = HIBYTE(v9);
  v12 = HIBYTE(v9);
  if ( !HIBYTE(v9) )
  {
    v18 = (*(_BYTE *)(a2 + 1) >> 1) & 7;
    if ( v18 == 2 )
    {
      *(_QWORD *)v31 = a2 | 4;
      if ( !(unsigned __int8)sub_D06DC0(a1, v31) )
        return 0;
    }
    else if ( v18 == 3 )
    {
      *(_QWORD *)v31 = a2 | 4;
      if ( !(unsigned __int8)sub_D06DC0(a1, v31) )
        return 0;
      *(_QWORD *)v31 = a2 | 4;
      if ( !(unsigned __int8)sub_D069E0(a1, v31) )
        return 0;
    }
    else if ( !(unsigned __int8)sub_CB59F0(
                                  a1,
                                  *(_QWORD *)(a2
                                            + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + ((*(_QWORD *)a2 & 0x2000) != 0))
                                            + 16)) )
    {
      return 0;
    }
    v19 = sub_EEDE70(a2);
    if ( (unsigned __int8)sub_CD9CA0((__int64)a1, v19) )
    {
      if ( (*(_QWORD *)a2 & 0x1000LL) != 0
        && (v20 = *(_QWORD *)(a2
                            + 8LL
                            * (((*(_QWORD *)a2 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x2000) != 0) + 2)
                            + 16)) != 0 )
      {
        v29 = sub_CFF2B0(a1);
        v31[0] = sub_CFF2B0(a1);
        if ( !(unsigned __int8)sub_CFF640(a1, &v29) )
          return v12;
        if ( !(unsigned __int8)sub_CDD640(
                                 (__int64 *)&v30,
                                 *(_QWORD *)(a2
                                           + 8LL
                                           * (((*(_QWORD *)a2 & 0x4000) != 0)
                                            + (unsigned int)((*(_QWORD *)a2 & 0x2000) != 0)
                                            + 1)
                                           + 16),
                                 (*(_QWORD *)a2 & 0x4000) != 0,
                                 v21,
                                 v22) )
          return v12;
        if ( !(unsigned __int8)sub_CFF6B0(a1, v31) )
          return v12;
        sub_CFF2A0(a1, v29);
        v26 = sub_CDD640((__int64 *)&v30, v20, v23, v24, v25);
        if ( !(_BYTE)v26 )
          return v12;
      }
      else
      {
        v31[0] = sub_CFF2B0(a1);
        if ( !(unsigned __int8)sub_CFF640(a1, v31) )
          return v12;
        v26 = sub_CDD640(
                (__int64 *)&v30,
                *(_QWORD *)(a2
                          + 8LL * (((*(_QWORD *)a2 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x2000) != 0) + 1)
                          + 16),
                (*(_QWORD *)a2 & 0x4000) != 0,
                v27,
                v28);
        if ( !(_BYTE)v26 )
          return v12;
      }
      v12 = v26;
      sub_CFF2A0(a1, v31[0]);
      return v12;
    }
    return 0;
  }
  v13 = (_BYTE)v9 == 0;
  v14 = *(_QWORD *)a2;
  if ( v13 )
  {
    if ( (v14 & 0x1000) != 0 )
    {
      v15 = (v14 & 0x4000) != 0;
      v16 = *(_QWORD *)(a2 + 8LL * ((unsigned int)v15 + ((v14 & 0x2000) != 0) + 2) + 16);
      if ( v16 )
        return (unsigned int)sub_CDD640((__int64 *)&v30, v16, v15, v11, v10);
    }
    return v12;
  }
  return (unsigned int)sub_CDD640(
                         (__int64 *)&v30,
                         *(_QWORD *)(a2 + 8LL * (((v14 & 0x4000) != 0) + (unsigned int)((v14 & 0x2000) != 0) + 1) + 16),
                         (v14 & 0x4000) != 0,
                         v11,
                         v10);
}

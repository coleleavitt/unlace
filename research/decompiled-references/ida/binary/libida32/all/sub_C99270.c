__int64 __fastcall sub_C99270(_BYTE *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned int v5; // r13d
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // r13
  _QWORD *v13; // rdx
  _QWORD *v14; // r13
  _QWORD *v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-58h]
  int v22; // [rsp+14h] [rbp-44h] BYREF
  __int64 v23[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 != 214 )
  {
    v3 = a3 - 206;
    if ( (unsigned int)v3 <= 0x13 )
    {
      v7 = 528385;
      if ( _bittest64(&v7, v3) )
      {
LABEL_4:
        if ( !a1[1360] )
        {
          v23[0] = a2 | 2;
          return (unsigned int)sub_C92180((__int64)a1, (__int64)v23, a2);
        }
        return 1;
      }
    }
    else if ( a3 == 1063 )
    {
      goto LABEL_4;
    }
    v8 = *(_QWORD *)(a2 + 8);
    v21 = v8;
    v9 = sub_C90F00((__int64)a1, a2);
    v10 = v9;
    if ( !a1[1362] )
    {
      v5 = HIDWORD(v9);
      if ( !BYTE4(v9) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1B3 )
        {
          v23[0] = a2 | 2;
          v20 = sub_C99000((__int64)a1, v23, 0, 0, 1, 0);
          if ( !BYTE4(v20) )
            return v5;
          v23[0] = a2 | 4;
          if ( !(unsigned __int8)sub_CDB9E0(a1, (unsigned int)v20, v23) )
            return v5;
        }
      }
    }
    if ( (unsigned __int8)sub_CC29F0(a3)
      || (v11 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32,
          v12 = v11 + 8LL * *(unsigned int *)(a2 + 16),
          v13 = (_QWORD *)(a2 + v11),
          v14 = (_QWORD *)(a2 + v12),
          v14 == v13) )
    {
LABEL_26:
      v23[0] = a2 | 4;
      if ( (unsigned __int8)sub_CDBF60(a1, a2, a3, v23) )
      {
        if ( a1[1360] )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v18 + 16) != 13 || ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1B3 )
          {
            v23[0] = a2 | 4;
            return (unsigned int)sub_D014C0(a1, v10, v23);
          }
        }
        return 1;
      }
    }
    else
    {
      v15 = v13;
      while ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *v15) )
      {
        if ( v14 == ++v15 )
          goto LABEL_26;
      }
    }
    return 0;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32)
                                                      + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 8LL)
                  & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( !a1[1360] )
      return (unsigned int)sub_C94A10((__int64)a1, 0, a2);
    return 1;
  }
  v23[0] = a2 | 4;
  if ( !(unsigned __int8)sub_CE45E0(a1, v23) )
    return 0;
  v22 = sub_CDB570(a1);
  if ( !(unsigned __int8)sub_D017F0(a1, a2, &v22) )
    return 0;
  sub_CDB9A0(a1, &v22);
  v23[0] = a2 | 4;
  if ( !(unsigned __int8)sub_CDCF50(a1, v23) )
    return 0;
  if ( !a1[1360] )
    return 1;
  v23[0] = a2 | 4;
  v17 = sub_C90F00((__int64)a1, a2);
  if ( BYTE4(v17) )
    return (unsigned int)sub_D014C0(a1, (unsigned int)v17, v23);
  return sub_C995E0();
}


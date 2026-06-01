__int64 __fastcall sub_C98940(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned int v5; // r13d
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // r13
  _QWORD *v13; // rdx
  _QWORD *v14; // r13
  _QWORD *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-58h]
  int v27; // [rsp+14h] [rbp-44h] BYREF
  __int64 v28[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 != 214 )
  {
    v3 = a3 - 206;
    if ( (unsigned int)v3 <= 0x13 )
    {
      v7 = 528385;
      if ( _bittest64(&v7, v3) )
      {
LABEL_4:
        if ( !*(_BYTE *)(a1 + 584) )
        {
          v28[0] = a2 | 2;
          return (unsigned int)sub_C8E900(a1, (__int64)v28, a2);
        }
        return 1;
      }
    }
    else if ( a3 == 1063 )
    {
      goto LABEL_4;
    }
    v8 = *(_QWORD *)(a2 + 8);
    v26 = v8;
    v9 = sub_C8D6A0(a1, a2);
    v10 = v9;
    if ( !*(_BYTE *)(a1 + 586) )
    {
      v5 = HIDWORD(v9);
      if ( !BYTE4(v9) )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v24 + 16) != 13 || ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) != 0x1B3 )
        {
          v28[0] = a2 | 2;
          v25 = sub_C986D0(a1, v28, 0, 0, 1, 0);
          if ( !BYTE4(v25) )
            return v5;
          v28[0] = a2 | 4;
          if ( !(unsigned __int8)sub_C80E60(a1, v25, v28) )
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
      v28[0] = a2 | 4;
      if ( (unsigned __int8)sub_C83AA0((_QWORD *)a1, a2, a3, v28) )
      {
        if ( *(_BYTE *)(a1 + 584) )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v23 + 16) != 13 || ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) != 0x1B3 )
          {
            v28[0] = a2 | 4;
            return (unsigned int)sub_C7EAD0(a1, v10, v28);
          }
        }
        return 1;
      }
    }
    else
    {
      v15 = v13;
      while ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, *v15) )
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
    if ( !*(_BYTE *)(a1 + 584) )
      return (unsigned int)sub_C93830(a1, 0, a2);
    return 1;
  }
  v28[0] = a2 | 4;
  if ( !(unsigned __int8)sub_C7F8B0(a1, v28) )
    return 0;
  v17 = *(_DWORD *)(a1 + 384) + 1;
  *(_DWORD *)(a1 + 384) = v17;
  v27 = v17;
  if ( !(unsigned __int8)sub_C88EB0((__int64 *)a1, a2, &v27) )
    return 0;
  sub_C8A710(a1, &v27, v18, v19, v20, v21);
  v28[0] = a2 | 4;
  if ( !(unsigned __int8)sub_C88120(a1, v28) )
    return 0;
  if ( !*(_BYTE *)(a1 + 584) )
    return 1;
  v28[0] = a2 | 4;
  v22 = sub_C8D6A0(a1, a2);
  if ( BYTE4(v22) )
    return (unsigned int)sub_C7EAD0(a1, v22, v28);
  return sub_C98CC0();
}


__int64 __fastcall sub_7F6E90(__int64 *a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  __int64 *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // r14
  __int64 *v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a1;
  v20[0] = *(_QWORD *)(a2 + 48);
  if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v20[0], v20[0], v20, a1, v3) )
    return 0;
  if ( *(_QWORD *)(a2 + 72) <= 7u || (*(_QWORD *)(a2 + 72) & 6LL) == 2 )
    goto LABEL_11;
  if ( !(_BYTE)qword_4AD2108 && __cxa_guard_acquire(&qword_4AD2108) )
  {
    LODWORD(qword_4AD2120[0]) = 0;
    qword_4AD2120[1] = 0;
    qword_4AD2120[3] = 0;
    __cxa_guard_release(&qword_4AD2108);
  }
  v8 = *(_QWORD *)(a2 + 72);
  if ( v8 <= 7 )
  {
    v9 = qword_4AD2120;
    goto LABEL_10;
  }
  v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  v10 = *(_QWORD *)(a2 + 72) & 6LL;
  if ( v10 != 2 )
  {
    if ( v10 != 4 )
      goto LABEL_10;
    goto LABEL_30;
  }
  v19 = v9[9];
  v9 = nullptr;
  if ( v19 )
  {
    v9 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v19 & 6) == 4 )
    {
      if ( v9 )
LABEL_30:
        v9 = (__int64 *)v9[1];
    }
  }
LABEL_10:
  if ( !(unsigned __int8)sub_7EF520(a1, (__int64)v9, v4, v5, v6, v7) )
    return 0;
LABEL_11:
  if ( !(unsigned __int8)sub_7ECC20(a1, *(_QWORD *)(a2 + 56)) )
    return 0;
  v13 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v13 = sub_79AC10(a2);
  v11 = sub_7E1600(a1, v13);
  if ( !(_BYTE)v11 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v14 = sub_79A2B0(a2);
    v15 = *v14 + 8LL * *((unsigned int *)v14 + 2);
    v16 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v16 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v15 != v16 )
    {
      v17 = v16;
      while ( 1 )
      {
        v18 = *a1;
        v20[0] = *v17;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v20[0], v20[0], v20, a1, v18) )
          break;
        if ( (__int64 *)v15 == ++v17 )
          return v11;
      }
      return 0;
    }
  }
  return v11;
}


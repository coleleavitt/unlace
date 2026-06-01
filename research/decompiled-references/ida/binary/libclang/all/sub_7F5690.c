__int64 __fastcall sub_7F5690(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // r13d
  __int64 *v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 && !(unsigned __int8)sub_7EDF40(a1, v7 & 0xFFFFFFFFFFFFFFF0LL) )
    return 0;
  if ( (*(_BYTE *)(a2 + 60) & 4) == 0 )
  {
LABEL_6:
    v9 = *(_QWORD *)(a2 + 72);
    if ( v9 <= 7 )
      goto LABEL_15;
    goto LABEL_7;
  }
  v8 = *(_QWORD *)(a2 + 80);
  if ( v8 )
  {
    if ( !(unsigned __int8)sub_7EBA80(a1, v8) )
      return 0;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_7F1B90(a1, *(_QWORD *)(a2 + 88), a3, a4, a5, a6) )
    return 0;
  v9 = *(_QWORD *)(a2 + 72);
  if ( v9 > 7 )
  {
LABEL_7:
    if ( (v9 & 6) == 2 )
      goto LABEL_15;
    if ( !(_BYTE)qword_4AD2180 && __cxa_guard_acquire(&qword_4AD2180) )
    {
      LODWORD(qword_4AD21A0[0]) = 0;
      qword_4AD21A0[1] = 0;
      qword_4AD21A0[3] = 0;
      __cxa_guard_release(&qword_4AD2180);
    }
    v10 = *(_QWORD *)(a2 + 72);
    if ( v10 <= 7 )
    {
      v11 = qword_4AD21A0;
      goto LABEL_14;
    }
    v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    v12 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( v12 == 2 )
    {
      v20 = v11[9];
      v11 = nullptr;
      if ( !v20 || (v11 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF8LL), (v20 & 6) != 4) || !v11 )
      {
LABEL_14:
        if ( (unsigned __int8)sub_7EF520(a1, (__int64)v11, a3, a4, a5, a6) )
          goto LABEL_15;
        return 0;
      }
    }
    else if ( v12 != 4 )
    {
      goto LABEL_14;
    }
    v11 = (__int64 *)v11[1];
    goto LABEL_14;
  }
LABEL_15:
  v13 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v13 = sub_79AC10(a2);
  v14 = sub_7E1600(a1, v13);
  if ( !(_BYTE)v14 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v16 = nullptr;
    v17 = sub_79A2B0(a2);
    v18 = *v17 + 8LL * *((unsigned int *)v17 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v16 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v18 != v16 )
    {
      while ( 1 )
      {
        v19 = *a1;
        v21[0] = *v16;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v21[0], v21[0], v21, a1, v19) )
          break;
        if ( (__int64 *)v18 == ++v16 )
          return v14;
      }
      return 0;
    }
  }
  return v14;
}


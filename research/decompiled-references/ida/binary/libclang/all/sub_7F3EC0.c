__int64 __fastcall sub_7F3EC0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // r12d
  __int64 *v17; // rbp
  _QWORD *v18; // rax
  __int64 v19; // r13
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7F0190(a1, a2, a3, a4, a5, a6) )
    return 0;
  if ( *(_QWORD *)(a2 + 72) > 7u && (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
    {
      LODWORD(qword_4AD2160[0]) = 0;
      qword_4AD2160[1] = 0;
      qword_4AD2160[3] = 0;
      __cxa_guard_release(&qword_4AD2140);
    }
    v11 = *(_QWORD *)(a2 + 72);
    if ( v11 <= 7 )
    {
      v12 = qword_4AD2160;
      goto LABEL_10;
    }
    v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    v13 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( v13 == 2 )
    {
      v21 = v12[9];
      v12 = nullptr;
      if ( !v21 || (v12 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL), (v21 & 6) != 4) || !v12 )
      {
LABEL_10:
        if ( (unsigned __int8)sub_7EF520(a1, (__int64)v12, v7, v8, v9, v10) )
          goto LABEL_11;
        return 0;
      }
    }
    else if ( v13 != 4 )
    {
      goto LABEL_10;
    }
    v12 = (__int64 *)v12[1];
    goto LABEL_10;
  }
LABEL_11:
  v14 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v14 = sub_79AC10(a2);
  v15 = sub_7E1600(a1, v14);
  if ( !(_BYTE)v15 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v17 = nullptr;
    v18 = sub_79A2B0(a2);
    v19 = *v18 + 8LL * *((unsigned int *)v18 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v17 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v19 != v17 )
    {
      while ( 1 )
      {
        v20 = *a1;
        v22[0] = *v17;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v22[0], v22[0], v22, a1, v20) )
          break;
        if ( (__int64 *)v19 == ++v17 )
          return v15;
      }
      return 0;
    }
  }
  return v15;
}


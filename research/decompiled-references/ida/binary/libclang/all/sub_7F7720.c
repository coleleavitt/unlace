__int64 __fastcall sub_7F7720(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int v10; // r13d
  __int64 *v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  bool v19; // zf
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a2 + 40);
  if ( v4 )
  {
    v5 = v4 >> 2;
    if ( (v4 & 4) != 0 )
    {
      v7 = 0;
      v16 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v16 )
      {
        if ( !(unsigned __int8)sub_7EEDC0((__int64)a1, *v16, (__int64)(v16 + 1)) )
          return 0;
        v17 = *(_QWORD *)(a2 + 40);
        if ( !v17 )
          BUG();
        v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        v19 = (v17 & 4) == 0;
        v20 = nullptr;
        if ( !v19 )
          v20 = (_QWORD *)v18;
        v21 = *v20 & 0xFFFFFFFFFFFFFFF0LL;
        v22 = *(_QWORD *)v21;
        if ( *(_BYTE *)(*(_QWORD *)v21 + 16LL) == 24
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24
          && (v22 = sub_B0D320(v22)) != 0 )
        {
          v23 = 0;
          if ( (*(_BYTE *)(v22 + 19) & 8) != 0 )
            v23 = *(_QWORD *)(v22 + 48);
          v24 = *a1;
          v25[0] = v23;
          if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v23, v23, v25, a1, v24) )
            return 0;
        }
        goto LABEL_6;
      }
    }
    else
    {
      v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      v7 = 0;
      if ( (v5 & 1) == 0 )
        v7 = v6;
    }
  }
  else
  {
    v7 = 0;
  }
  v8 = *a1;
  v25[0] = v7;
  if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v7, v7, v25, a1, v8) )
    return 0;
LABEL_6:
  v9 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v9 = sub_79AC10(a2);
  v10 = sub_7E1600(a1, v9);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v11 = nullptr;
    v12 = sub_79A2B0(a2);
    v13 = *v12 + 8LL * *((unsigned int *)v12 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v11 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v13 != v11 )
    {
      while ( 1 )
      {
        v14 = *a1;
        v25[0] = *v11;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v25[0], v25[0], v25, a1, v14) )
          break;
        if ( (__int64 *)v13 == ++v11 )
          return v10;
      }
      return 0;
    }
  }
  return v10;
}


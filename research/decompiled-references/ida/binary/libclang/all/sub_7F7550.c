__int64 __fastcall sub_7F7550(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rbp
  __int64 v13; // r9
  unsigned int v14; // ebp
  __int64 *v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // r13
  __int64 *v20; // rax
  __int64 *v21; // r12
  __int64 v22; // r9
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  if ( v3 )
  {
    v4 = v3 >> 2;
    if ( (v3 & 4) != 0 )
    {
      v6 = 0;
      v16 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v16 )
      {
        if ( !(unsigned __int8)sub_7EEDC0((__int64)a1, *v16, (__int64)(v16 + 1)) )
          return 0;
        goto LABEL_6;
      }
    }
    else
    {
      v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      v6 = 0;
      if ( (v4 & 1) == 0 )
        v6 = v5;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = *a1;
  v24[0] = v6;
  if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v6, v6, v24, a1, v7) )
    return 0;
LABEL_6:
  v8 = *(unsigned int *)(a2 + 36);
  v9 = 0;
  v23 = 8 * v8;
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v9);
      v11 = (__int64 *)(v10 + 24);
      v12 = v10 + (unsigned int)(8 * *(_DWORD *)(v10 + 20)) + 24;
      if ( 8 * *(_DWORD *)(v10 + 20) )
        break;
LABEL_16:
      v9 += 8;
      if ( v9 == v23 )
        goto LABEL_17;
    }
    while ( 1 )
    {
      v13 = *a1;
      v24[0] = *v11;
      if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v24[0], v24[0], v24, a1, v13) )
        return 0;
      if ( ++v11 == (__int64 *)v12 )
        goto LABEL_16;
    }
  }
LABEL_17:
  v17 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v17 = sub_79AC10(a2);
  v14 = sub_7E1600(a1, v17);
  if ( !(_BYTE)v14 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v18 = sub_79A2B0(a2);
    v19 = *v18 + 8LL * *((unsigned int *)v18 + 2);
    v20 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v20 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v19 != v20 )
    {
      v21 = v20;
      while ( 1 )
      {
        v22 = *a1;
        v24[0] = *v21;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v24[0], v24[0], v24, a1, v22) )
          break;
        if ( (__int64 *)v19 == ++v21 )
          return v14;
      }
      return 0;
    }
  }
  return v14;
}


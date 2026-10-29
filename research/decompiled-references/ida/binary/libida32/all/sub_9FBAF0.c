_QWORD *__fastcall sub_9FBAF0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r15
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r15
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rbx
  _QWORD *result; // rax
  _WORD *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  _WORD v23[29]; // [rsp+2Dh] [rbp-3Bh] BYREF

  v5 = a2 & 7;
  v6 = a2 >> 3;
  v7 = sub_9FB9F0(a1);
  if ( v6 >= v7 )
  {
    result = *(_QWORD **)(a1 + 24);
    v19 = (_WORD *)(v6 - v7 + *result);
    if ( v5 )
      return (_QWORD *)sub_9FAE60(v19, a3, v5);
    *(_BYTE *)v19 = a3;
    return result;
  }
  v8 = *(_QWORD **)(a1 + 32);
  if ( !v8 || !(unsigned __int8)sub_2259B60(*(_QWORD *)(a1 + 32)) )
    BUG();
  v9 = *(__int64 (__fastcall **)(__int64))(*v8 + 80LL);
  if ( v9 == sub_9FAD20 )
    v10 = v8[11];
  else
    v10 = v9((__int64)v8);
  v21 = v8[4] - v8[2] + v10;
  if ( v5 )
  {
    v20 = 1;
    v11 = v7 - v6;
    if ( v11 != 1 )
    {
      v20 = 0;
      v11 = 2;
    }
    v12 = *(_QWORD *)(a1 + 32);
    if ( !v12 || !(unsigned __int8)sub_2259B60(*(_QWORD *)(a1 + 32)) )
      v12 = 0;
    sub_22597F0(v12, v6);
    if ( !*(_QWORD *)(a1 + 32) || (v22 = *(_QWORD *)(a1 + 32), v13 = sub_2259B60(v22), v14 = v22, !v13) )
      v14 = 0;
    sub_2259B10(v14, v23, v11);
    if ( v20 )
      *((_BYTE *)v23 + v11) = ***(_BYTE ***)(a1 + 24);
    sub_9FAE60(v23, a3, v5);
    v15 = *(_QWORD *)(a1 + 32);
    if ( v15 )
    {
LABEL_16:
      if ( (unsigned __int8)sub_2259B60(v15) )
        goto LABEL_17;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 32);
    LOBYTE(v23[0]) = a3;
    v11 = 1;
    v20 = 0;
    if ( v15 )
      goto LABEL_16;
  }
  v15 = 0;
LABEL_17:
  sub_22597F0(v15, v6);
  v16 = *(_QWORD *)(a1 + 32);
  if ( !v16 || !(unsigned __int8)sub_2259B60(*(_QWORD *)(a1 + 32)) )
    v16 = 0;
  sub_22581D0(v16, v23, v11);
  if ( v20 )
    ***(_BYTE ***)(a1 + 24) = *((_BYTE *)v23 + v11);
  v17 = *(_QWORD *)(a1 + 32);
  if ( !v17 || !(unsigned __int8)sub_2259B60(v17) )
    v17 = 0;
  return (_QWORD *)sub_22597F0(v17, v21);
}


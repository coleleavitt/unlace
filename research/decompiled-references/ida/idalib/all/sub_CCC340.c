__int64 __fastcall sub_CCC340(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // al
  __int64 result; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64); // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24[4]; // [rsp+8h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(v5 + 16) - 25;
  if ( (unsigned int)v6 > 1 )
    v5 = sub_F63050(v5, a2, v6, a4);
  v7 = *(__int64 **)(v5 + 24);
  v8 = sub_CE6180(a1[61], v7);
  a1[93] = a2;
  *(_QWORD *)((char *)a1 + 668) = v8;
  v12 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v12 == 38 )
    return sub_CCB710((__int64)a1, a2);
  if ( v12 == 36 )
    return sub_CCC0A0(a1, a2);
  if ( (unsigned int)v12 - 35 > 3 )
    goto LABEL_14;
  v14 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v14 & 4) != 0 )
    v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v15 )
    BUG();
  if ( *(_BYTE *)(v15 + 9) >> 5 == 2 && (sub_B98230((_QWORD *)a2, (__int64)v7) || sub_B98360((_QWORD *)a2, (__int64)v7)) )
    return sub_CBE3C0((__int64)a1, a2);
  if ( (unsigned __int8)sub_B98950(a2) )
    return sub_CBDAC0((__int64)a1, a2);
LABEL_14:
  v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v16 == sub_6EF210 )
  {
    v7 = v24;
    v17 = sub_B7F750((_QWORD *)a2, v24, (__int64)sub_6EF210, v9, v10, v11);
  }
  else
  {
    v17 = v16(a2);
  }
  if ( !v17 || (v7 = (__int64 *)v17, result = sub_CC99A0((__int64)a1, v17, v18, v19, v20), (_BYTE)result) )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v22 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 25;
    if ( (unsigned int)v22 > 1 )
      v21 = sub_F63050(v21, v7, v22, v19);
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v23 + 16) == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      v24[0] = 0;
      return sub_CA2B30((__int64)a1, v24);
    }
    else
    {
      v24[0] = 0;
      return sub_CA27E0((__int64)a1, v24);
    }
  }
  return result;
}

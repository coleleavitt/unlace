__int64 __fastcall sub_C99AF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rbp
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  int v20; // esi
  int v21; // r8d
  bool v22; // zf
  __int64 v23; // [rsp+0h] [rbp-68h]
  __int64 *v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  __m128 v27[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(sub_B68470(a2 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
    v4 -= 64LL;
  v26 = sub_B73220(v4);
  v5 = sub_C90DD0(a1);
  v25 = v5;
  if ( !v5 )
    return 0;
  v6 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  if ( (*(_BYTE *)(v5 + 504) & 8) != 0 )
  {
    v27[0].m128_u64[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
    if ( !(unsigned __int8)sub_CE43A0(a1, v27) )
      return 0;
  }
  v27[0].m128_u64[0] = a2 & 0xFFFFFFFFFFFFFFFBLL;
  if ( !(unsigned __int8)sub_CE3560(a1, 0, 0, v27) )
    return 0;
  v9 = *(__int64 **)(a2 + 120);
  v23 = a1 + 8;
  v24 = &v9[(unsigned int)sub_B52330(a2, 0, v7, v8)];
  if ( v24 != v9 )
  {
    while ( 1 )
    {
      v17 = *(unsigned int *)(a1 + 24);
      v18 = *v9;
      v19 = *(_QWORD *)(a1 + 8);
      if ( (_DWORD)v17 )
      {
        v10 = (v17 - 1) & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
        v11 = (__int64 *)(v19 + 16LL * v10);
        v12 = *v11;
        if ( v18 == *v11 )
          goto LABEL_11;
        v20 = 1;
        if ( v12 != -4096 )
          break;
      }
LABEL_17:
      sub_C886A0(v27, (_QWORD *)(v19 + 16LL * (unsigned int)v17), (_QWORD *)(v19 + 16LL * (unsigned int)v17), v23, 1);
      v13 = v27[0].m128_u64[0];
LABEL_12:
      v14 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v18 + 48));
      v15 = 13;
      v27[0].m128_u64[0] = v6;
      if ( BYTE4(v14) )
        v15 = (unsigned int)v14;
      result = sub_D64FA0(a1, v15, *(unsigned int *)(v13 + 8), v27);
      if ( !(_BYTE)result )
        return result;
      if ( v24 == ++v9 )
        goto LABEL_26;
    }
    while ( 1 )
    {
      v21 = v20 + 1;
      v10 = (v17 - 1) & (v20 + v10);
      v11 = (__int64 *)(v19 + 16LL * v10);
      if ( v18 == *v11 )
        break;
      if ( *v11 == -4096 )
        goto LABEL_17;
      v20 = v21;
    }
LABEL_11:
    sub_C886A0(v27, v11, (_QWORD *)(16 * v17 + v19), v23, 1);
    v13 = v27[0].m128_u64[0];
    goto LABEL_12;
  }
LABEL_26:
  v27[0].m128_u64[0] = v26 & 0xFFFFFFFFFFFFFFFBLL;
  if ( !(unsigned __int8)sub_CDBF20(a1, v25, 0, v27) )
    return 0;
  sub_C90D20(a1);
  v22 = *(_BYTE *)(a1 + 1448) == 0;
  v27[0].m128_u64[0] = v6;
  if ( v22 )
    return sub_CDB9D0(a1, v27);
  else
    return sub_D27AD0(a1, *(unsigned int *)(a1 + 1444), v27);
}


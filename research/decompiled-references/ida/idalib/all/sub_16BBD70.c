__int64 __fastcall sub_16BBD70(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  char v15; // al
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+8h] [rbp-60h]
  unsigned __int64 v24; // [rsp+10h] [rbp-58h]
  int v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+20h] [rbp-48h]

  v3 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( !v3 || (v7 = (*(_BYTE *)(v3 + 28) & 0x7Fu) - 34, (unsigned int)v7 > 5) )
    BUG();
  v8 = *(_QWORD **)(a1 + 248);
  v9 = **(_QWORD **)(v3 + 120);
  v10 = *(_QWORD *)(v9 + 48);
  if ( (*(_BYTE *)(v8[290] + 107LL) & 4) == 0 || (*(_BYTE *)(v9 + 29) & 1) == 0 )
    goto LABEL_4;
  v18 = sub_B8C3D0(v9, a2, v7, v4, v5, v6);
  v4 = *v18;
  v19 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( *v18 < v19 )
  {
    v20 = *v18;
    while ( 1 )
    {
      v4 = v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 99 )
        goto LABEL_23;
      v20 += 8;
      if ( v19 == v20 )
        goto LABEL_4;
    }
  }
  if ( v4 == v19 )
  {
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 99 )
  {
    v21 = v19 + 8;
    do
    {
      v19 = v21;
      if ( v4 == v21 )
        goto LABEL_4;
      v21 += 8LL;
    }
    while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 99 );
  }
LABEL_23:
  v11 = 4LL * (v4 != v19);
LABEL_5:
  v25 = 0;
  v22 = 1;
  v23 = 0;
  v12 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_QWORD *)(v12 + 8) & 7LL | (*(__int64 *)(v12 + 8) >> 3) & 1;
  if ( v13 )
    v14 = sub_F64F00(v10, v12, v13, v4, v5) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v14 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  v24 = sub_A73320(v8, v14);
  v15 = *(_BYTE *)(a2 + 2);
  v26 = v11 | v9 & 0xFFFFFFFFFFFFFFFBLL;
  v16 = sub_1A24E20(a1, &v22, 0, *(_QWORD *)(a2 + 8 * (((v15 & 8) != 0) + 1LL) + 32), 0, 0);
  result = 1;
  if ( v16 != 1 )
  {
    result = 0;
    *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v16 & 0xFFFFFFFFFFFFFFFELL;
  }
  return result;
}

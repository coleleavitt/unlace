__int64 __fastcall sub_1BCBCC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  unsigned __int64 v8; // rbp
  __int64 v10; // rdi
  __int32 v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r15
  __int32 v16; // r13d
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  __int64 v24; // rax
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-70h]
  int v31; // [rsp+10h] [rbp-68h] BYREF
  __int64 v32; // [rsp+18h] [rbp-60h]
  unsigned __int64 v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+30h] [rbp-48h]

  v8 = a2;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    v24 = sub_F68450(v10, a2, a3, a4, a5);
    v8 = sub_C09D40(*(_QWORD **)(a1 + 248), a2, 5, v24, 1, 0, 0, 0, 0);
  }
  v11 = sub_C00A40(v8, a2, a3, a4, a5);
  v15 = *(_QWORD **)(a1 + 248);
  v16 = v11;
  v17 = **(_QWORD **)(a3 + 120);
  v18 = *(_QWORD *)(v17 + 48);
  if ( (*(_BYTE *)(v15[290] + 107LL) & 4) == 0 || (*(_BYTE *)(v17 + 29) & 1) == 0 )
    goto LABEL_5;
  v30 = *(_QWORD *)(v17 + 48);
  v25 = sub_B8C3D0(v17, a2, v12, v18, v13, v14);
  v18 = v30;
  v26 = *v25;
  v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
  if ( *v25 >= v27 )
  {
    if ( v26 == v27 )
    {
LABEL_5:
      v19 = 0;
      goto LABEL_6;
    }
    if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 99 )
    {
      v29 = v27 + 8;
      do
      {
        v27 = v29;
        if ( v26 == v29 )
          goto LABEL_5;
        v29 += 8LL;
      }
      while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 99 );
    }
  }
  else
  {
    v28 = *v25;
    while ( 1 )
    {
      v26 = v28;
      if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 99 )
        break;
      v28 += 8LL;
      if ( v27 == v28 )
        goto LABEL_5;
    }
  }
  v19 = 4LL * (v26 != v27);
LABEL_6:
  v34 = 0;
  v31 = 1;
  v32 = 0;
  v20 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(_QWORD *)(v20 + 8) & 7LL | (*(__int64 *)(v20 + 8) >> 3) & 1;
  if ( v21 )
    v22 = sub_F64F00(v18, v20, v21, v18, v13) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v22 = v20 & 0xFFFFFFFFFFFFFFF0LL;
  v35 = v19 | v17 & 0xFFFFFFFFFFFFFFFBLL;
  v33 = sub_A73320(v15, v22);
  return sub_1A24E20(a1, (__int64)&v31, v16, v8, 0, 0, a6, a7);
}

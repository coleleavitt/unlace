unsigned __int16 *__fastcall sub_19D7B40(__int64 *a1, __int64 a2, unsigned __int64 a3, __m128 a4, __m128 a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // r13
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // [rsp+Ch] [rbp-7Ch]
  __int64 v38; // [rsp+10h] [rbp-78h]
  __int64 v39; // [rsp+18h] [rbp-70h]
  int v40; // [rsp+20h] [rbp-68h] BYREF
  __int64 v41; // [rsp+28h] [rbp-60h]
  unsigned __int64 v42; // [rsp+30h] [rbp-58h]
  int v43; // [rsp+38h] [rbp-50h]
  unsigned __int64 v44; // [rsp+40h] [rbp-48h]

  v37 = a2;
  v7 = (_QWORD *)sub_168B6C0((__int64)a1);
  v8 = *(_QWORD *)(a3 + 8);
  v9 = v7;
  if ( (*(_WORD *)a3 & 0x1FF) == 0x4E )
  {
    switch ( (*(_BYTE *)(a3 + 2) >> 3) & 7 )
    {
      case 0:
      case 2:
        v8 = v7[2331];
        break;
      case 1:
        v8 = v7[2333];
        break;
      case 3:
        v8 = v7[2336];
        break;
      case 4:
        v8 = v7[2337];
        break;
      default:
        break;
    }
  }
  v38 = sub_EEC8C0(a3, a2, *(double *)a4.m128_u64);
  v10 = sub_19D78D0(a1, a2, v8, 1, v38);
  v14 = v10;
  if ( !v10 )
    return (_WORD *)(&dword_0 + 1);
  v15 = **(_QWORD **)(v10 + 96);
  v16 = *(_QWORD *)(v15 + 48);
  if ( (*(_BYTE *)(v9[290] + 107LL) & 4) == 0 || (*(_BYTE *)(v15 + 29) & 1) == 0 )
    goto LABEL_6;
  v39 = *(_QWORD *)(v15 + 48);
  v32 = sub_B8C3D0(v15, (unsigned int)a2, v11, v16, v12, v13);
  v16 = v39;
  v33 = *v32;
  v34 = *v32 + 8LL * *((unsigned int *)v32 + 2);
  if ( *v32 < v34 )
  {
    v36 = *v32;
    while ( 1 )
    {
      v33 = v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) == 99 )
        break;
      v36 += 8LL;
      if ( v34 == v36 )
        goto LABEL_6;
    }
  }
  else
  {
    if ( v33 == v34 )
    {
LABEL_6:
      v17 = 0;
      goto LABEL_7;
    }
    if ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 99 )
    {
      v35 = v34 + 8;
      do
      {
        v34 = v35;
        if ( v33 == v35 )
          goto LABEL_6;
        v35 += 8LL;
      }
      while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 99 );
    }
  }
  v17 = 4LL * (v33 != v34);
LABEL_7:
  v43 = 0;
  v40 = 1;
  v41 = 0;
  v18 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_QWORD *)(v18 + 8) & 7LL | (*(__int64 *)(v18 + 8) >> 3) & 1;
  if ( v19 )
    v20 = sub_F64F00(v16, v18, v19, v16, v12) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v20 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  v21 = sub_A73320(v9, v20);
  v22 = *a1;
  v42 = v21;
  v44 = v15 & 0xFFFFFFFFFFFFFFFBLL | v17;
  v23 = sub_1A24E20(v22, &v40, 0, a3, 0, 0);
  if ( v23 == 1 )
    return (_WORD *)(&dword_0 + 1);
  v24 = *a1;
  v25 = v23 & 0xFFFFFFFFFFFFFFFELL;
  v26 = a1[14];
  v27 = sub_EEE9A0(40, v9, 8u);
  *(_WORD *)v27 = *(_WORD *)v27 & 0xFE00 | 0x27;
  if ( unk_2CD7484 )
    sub_EE9B50(39);
  *(_WORD *)(v27 + 1) &= 0xF801u;
  *(_QWORD *)(v27 + 8) = v26;
  *(_QWORD *)(v27 + 16) = v25;
  *(_QWORD *)(v27 + 24) = v14;
  *(_DWORD *)(v27 + 36) = HIDWORD(v38);
  *(_DWORD *)(v27 + 32) = v37;
  v28 = sub_B63990(v27);
  *(_BYTE *)(v27 + 1) = ((_BYTE)v28 << 6) | *(_BYTE *)(v27 + 1) & 0x3F;
  v29 = *(_BYTE *)(v27 + 2) & 0xF8;
  *(_BYTE *)(v27 + 2) = *(_BYTE *)(v27 + 2) & 0xF8 | ((unsigned __int8)v28 >> 2) & 7;
  return sub_19A3E40(v24, (unsigned __int16 *)v27, v29, (unsigned int)(v28 << 6), v30, a4, a5);
}

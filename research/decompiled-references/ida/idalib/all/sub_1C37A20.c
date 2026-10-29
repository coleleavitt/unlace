__int64 __fastcall sub_1C37A20(_QWORD *a1, __int64 *a2, int a3, unsigned int a4)
{
  __m128i *v6; // r13
  unsigned __int8 v7; // cl
  int v8; // eax
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  __int64 v22; // r13
  int v23; // [rsp+Ch] [rbp-2Ch]

  v6 = (__m128i *)a1[68];
  while ( 1 )
  {
    v7 = v6->m128i_i8[8] & 0x7F;
    if ( v7 > 0x12u )
      break;
    v8 = v7;
    if ( ((1LL << v7) & 0x40182) != 0 )
      goto LABEL_5;
LABEL_4:
    if ( v8 == 24 || !v8 )
      goto LABEL_5;
LABEL_11:
    v23 = a3;
    v21 = sub_B8C1B0((__int64)v6);
    a3 = v23;
    v22 = *(_QWORD *)(v21 + 16);
    if ( (v22 & 4) != 0 )
      v6 = *(__m128i **)(v22 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v6 = (__m128i *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
  }
  v8 = v7;
  if ( v7 <= 0x21u )
    goto LABEL_4;
  if ( v7 > 0x27u && ((v7 + 70) & 0x7Fu) > 3 )
    goto LABEL_11;
LABEL_5:
  v9 = (_QWORD *)a1[31];
  if ( (*(_BYTE *)(a1[29] + 1LL) & 8) != 0 )
    v10 = sub_B96A60(v9, 0, (__int64)v6, a3, a3, 0, 0, 0);
  else
    v10 = sub_B80350((__int64)v9, 0, (__int64)v6, a3, a3, 0, 0);
  sub_B78D50(v10);
  sub_B94AD0(v6, v10, v11, v12, v13, v14);
  *(_BYTE *)(v10 + 29) |= 2u;
  sub_B809C0(v10);
  v15 = sub_B7A020(a1[31], a1[68], a4);
  *a2 = v15;
  sub_B94AD0(v6, v15, v16, v17, v18, v19);
  return v10;
}

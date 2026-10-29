__int64 __fastcall sub_1496E50(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __m128i a6, __m128 a7)
{
  unsigned __int64 v7; // r15
  __int64 v10; // r12
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // cx
  __int64 v16; // rdi
  __int64 v17; // r15
  int v18; // rax^4
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v38; // [rsp+8h] [rbp-B0h]
  __int128 v39; // [rsp+30h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-78h]
  __int128 v41; // [rsp+50h] [rbp-68h]

  v10 = a2;
  v12 = *(unsigned __int16 *)(a1 + 32);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0
    && ((_WORD)v12 == 163 || (_WORD)v12 == 72 || (_WORD)v12 == 5 || (_WORD)v12 == 418) )
  {
    a2 = (a4 == 6) | (unsigned __int8)(a4 == 1);
    LODWORD(v7) = sub_1566C80(a1, a2);
    if ( (_BYTE)v7 )
    {
      sub_147DEE0(a1);
      return (unsigned int)v7;
    }
    v12 = *(unsigned __int16 *)(a1 + 32);
  }
  if ( (_WORD)v12 == 416 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    v23 = *(_QWORD *)(v22 + 2944);
    if ( *(unsigned int *)(v22 + 2912) > v23 )
    {
      v15 = 416;
      v24 = *(_QWORD *)(v22 + 2904) + 24 * v23;
      v14 = *(unsigned __int16 *)(v24 + 16);
      v25 = *(_QWORD *)(v24 + 8);
      if ( (_WORD)v14 == 418 )
        goto LABEL_26;
      goto LABEL_16;
    }
    a2 = 1;
    v13 = sub_14180A0(v22, 1u);
    v15 = *(_WORD *)(a1 + 32);
    v14 = *(unsigned __int16 *)(v13 + 16);
  }
  else
  {
    v13 = a1 + 16;
    v14 = v12;
    v15 = v12;
  }
  if ( v15 == 151 || v15 == 417 )
  {
LABEL_10:
    v16 = *(_QWORD *)(a1 + 96);
LABEL_11:
    v17 = *(_QWORD *)(a1 + 8);
    v38 = *(_QWORD *)(v16 + 248) + 17464LL;
    *(double *)a6.m128i_i64 = (*(double (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v10 + 8) + 16LL))(
                                *(_QWORD *)(v10 + 8),
                                a2,
                                v14);
    v19 = sub_13DC060(v18, 0, *(__int64 **)(v17 + 88), *(_QWORD *)(v17 + 56), a6, *(double *)a7.m128_u64);
    sub_1564820(&v39, a1, v19, 15);
    v20 = sub_15AC9B0((*(_DWORD *)v10 >> 12) & 0x7F, v38);
    sub_1478320((unsigned __int8 **)&v39, v20);
    sub_AE9DF0((unsigned __int8 **)&v39, 63, 4u);
    sub_AEA040((__int64)&v39);
    *(_DWORD *)v10 &= 0xFFB80FFF;
    LODWORD(v39) = 0;
    *((_QWORD *)&v39 + 1) = 0;
    ptr[0] = nullptr;
    *(_DWORD *)(v10 + 192) = 0;
    sub_1487580(a1, v10, (__int64)&v39, a3, a4, a5, a6, a7, ((1LL << a4) & 0x22DE) != 0);
LABEL_12:
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  v25 = *(_QWORD *)(v13 + 8);
  if ( (_WORD)v14 == 418 )
  {
LABEL_26:
    if ( *(_DWORD *)(v25 + 32) != 2 )
      goto LABEL_12;
    goto LABEL_10;
  }
LABEL_16:
  if ( (_WORD)v14 != 5 )
    goto LABEL_12;
  if ( (_WORD)v12 != 416 )
  {
    v26 = *(_QWORD *)(a1 + 8);
    v27 = *(_QWORD *)(v26 + 2944);
    if ( v27 >= *(unsigned int *)(v26 + 2912) )
    {
      a2 = 1;
      v28 = sub_14180A0(v26, 1u);
    }
    else
    {
      v14 = 3 * v27;
      v28 = *(_QWORD *)(v26 + 2904) + 24 * v27;
    }
    v29 = *(_WORD *)(v28 + 16);
    LOBYTE(v28) = 0;
    if ( v29 <= 0x1Fu )
      v28 = (0xB0000020uLL >> v29) & 1;
    LOBYTE(v14) = v29 == 72;
    LOBYTE(a2) = v29 == 72 || v29 == 416;
    if ( !(_BYTE)a2 && !(_BYTE)v28 )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( v15 == 1
    || (a2 = 1,
        v15 = *(_WORD *)(sub_1479960(*(_QWORD *)(a1 + 8), 1u) + 16),
        LOBYTE(v30) = 0,
        (unsigned __int16)v15 <= 0x1Fu) )
  {
    v7 = 0xB0000020uLL >> v15;
    v30 = (0xB0000020uLL >> v15) & 1;
  }
  v16 = *(_QWORD *)(a1 + 96);
  LOBYTE(v7) = v15 == 72;
  LOBYTE(v14) = v15 == 416;
  LODWORD(v7) = v14 | v7;
  LOBYTE(v7) = v30 | v7;
  if ( (_BYTE)v7 )
    goto LABEL_11;
  v31 = *(unsigned int *)(a1 + 20);
  v32 = *(_DWORD *)(a1 + 16);
  a6 = 0;
  v33 = *(_QWORD *)(a1 + 24);
  if ( !(_DWORD)v31 )
    v31 = v32;
  v39 = 0;
  *(_OWORD *)ptr = 0;
  v41 = 0;
  sub_169D790(v16, v33, (v31 << 32) | v32, &v39);
  sub_1477AB0(5);
  v34 = *(_QWORD *)(a1 + 96);
  a2 = *(_QWORD *)(v34 + 608);
  v35 = sub_1802970(v34, 0);
  if ( v35 > 0xB )
    goto LABEL_38;
  v14 = 1LL << v35;
  v36 = 1LL << v35;
  if ( (v36 & 0x928) != 0 )
  {
    if ( HIDWORD(ptr[1]) )
      free(ptr[0]);
    v16 = *(_QWORD *)(a1 + 96);
    goto LABEL_11;
  }
  if ( (v36 & 2) != 0 )
  {
    sub_147DEE0(a1);
    if ( HIDWORD(ptr[1]) )
      free(ptr[0]);
    LODWORD(v7) = 1;
  }
  else
  {
LABEL_38:
    if ( HIDWORD(ptr[1]) )
      free(ptr[0]);
  }
  return (unsigned int)v7;
}

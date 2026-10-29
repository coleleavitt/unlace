__int64 __fastcall sub_14B1D90(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6, __m128 a7)
{
  __int16 v8; // r12
  int v9; // r13d
  __int16 v10; // di
  unsigned int v13; // r15d
  __int64 result; // rax
  unsigned int v15; // ecx
  unsigned __int16 v16; // si
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 v25; // ax
  int v26; // esi
  unsigned int v27; // eax
  __int64 *v28; // rdi
  __int16 v29; // ax
  int *v30; // r8
  size_t v31; // rax
  __int64 v32; // rdi
  __int64 *v33; // rdi
  size_t v34; // rax
  unsigned int v35; // esi
  __int64 *v36; // rdi
  unsigned int v37; // [rsp+8h] [rbp-100h]
  unsigned int v38; // [rsp+18h] [rbp-F0h]
  unsigned int v39; // [rsp+1Ch] [rbp-ECh]
  __int64 v40; // [rsp+34h] [rbp-D4h]
  _DWORD v41[6]; // [rsp+40h] [rbp-C8h] BYREF
  void *v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 *v44[17]; // [rsp+80h] [rbp-88h] BYREF

  v8 = *(_WORD *)(a1 + 92);
  v9 = *(_DWORD *)(a1 + 88);
  v10 = *(_WORD *)(a1 + 32);
  if ( v10 == 428 )
  {
    sub_1526F60(a1);
    result = 0;
    goto LABEL_9;
  }
  v13 = a4;
  if ( (unsigned __int16)v10 > 0x1ACu )
  {
    if ( v10 == 444 )
    {
      sub_1527D30(a1);
      result = 0;
      goto LABEL_9;
    }
    if ( (unsigned __int16)v10 <= 0x1BCu )
    {
      switch ( v10 )
      {
        case 433:
          sub_1527000(a1);
          result = 0;
          goto LABEL_9;
        case 443:
          sub_1527CF0(a1);
          result = 0;
          goto LABEL_9;
        case 431:
          sub_1527030(a1);
          result = 0;
          goto LABEL_9;
      }
    }
    else if ( (unsigned __int16)v10 > 0x1C0u )
    {
      if ( v10 == 450 )
      {
        result = sub_157D480(a1, a2, a3, a4, a5);
        goto LABEL_9;
      }
    }
    else
    {
      if ( (unsigned __int16)v10 >= 0x1BFu )
      {
        result = sub_151C490(a1, a2, a3, 1, (unsigned int)a4, a5);
        goto LABEL_9;
      }
      if ( v10 == 445 )
      {
        sub_1527D90(a1);
        result = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_23;
  }
  if ( (unsigned __int16)v10 > 0x8Fu )
  {
    if ( (unsigned __int16)v10 >= 0x18Bu )
    {
      if ( (unsigned __int16)v10 <= 0x18Cu )
      {
        sub_14B1980((__m128i *)a1, a4, (__int64 *)a3, a2, *(double *)a6.m128i_i64, a7);
        result = 0;
        goto LABEL_9;
      }
      if ( v10 == 427 )
      {
        sub_1526F20(a1);
        result = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_23;
  }
  if ( (unsigned __int16)v10 >= 0x8Eu )
  {
LABEL_42:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 89LL) & 1) == 0 )
      goto LABEL_43;
    goto LABEL_72;
  }
  if ( v10 == 138 )
  {
    sub_14A0F50(a1, a5, a6, *(double *)a7.m128_u64);
    result = 0;
    goto LABEL_9;
  }
  if ( v10 != 141 )
  {
    if ( v10 == 63 )
    {
      sub_156E1F0(a1, 1, (unsigned int)a4);
      result = 0;
      goto LABEL_9;
    }
LABEL_23:
    if ( sub_10CCDF0(v10) )
    {
      sub_1564820(v44, a1, *(unsigned int *)(a1 + 16), 1867);
      v18 = sub_15AC9B0(v13, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17464LL);
      sub_149E970(v44, v18);
      sub_AEA040((__int64)v44);
      v19 = *(_DWORD *)(a1 + 20);
      v20 = *(__int64 **)(a1 + 8);
      if ( !v19 )
        v19 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v19;
      sub_14634E0(v20, (int *)(a1 + 16));
LABEL_27:
      result = 0;
      goto LABEL_9;
    }
    goto LABEL_69;
  }
  v21 = *(_QWORD *)(a1 + 8);
  v22 = *(_QWORD *)(v21 + 56);
  if ( (*(_BYTE *)(v22 + 47) & 0x20) != 0 )
  {
    v23 = *(_QWORD *)(v21 + 2944);
    if ( v23 >= *(unsigned int *)(v21 + 2912) )
      v24 = sub_14180A0(v21, 1u);
    else
      v24 = *(_QWORD *)(v21 + 2904) + 24 * v23;
    if ( *(_WORD *)(v24 + 16) != 62 )
    {
LABEL_69:
      v35 = *a2;
      LODWORD(v44[0]) = 0;
      v44[1] = nullptr;
      v44[2] = nullptr;
      result = sub_14AF050((__m128i *)a1, v35, (__int64 *)a3, (int *)v44, 0, a6, a7);
      goto LABEL_9;
    }
    goto LABEL_42;
  }
  if ( (*(_BYTE *)(v22 + 89) & 1) != 0 )
  {
LABEL_72:
    sub_1564820(v44, a1, *(unsigned int *)(a1 + 16), 1995);
    sub_AEA040((__int64)v44);
LABEL_43:
    v38 = 3;
    v25 = *(_WORD *)(a1 + 32) - 141;
    if ( v25 > 2u )
      goto LABEL_44;
    goto LABEL_65;
  }
  v25 = 0;
LABEL_65:
  v38 = dword_2617160[v25];
LABEL_44:
  v26 = *(_DWORD *)(a1 + 20);
  *a2 = v38;
  v27 = *(_DWORD *)(a1 + 16);
  v28 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v27;
  v39 = v27;
  sub_14634E0(v28, (int *)(a1 + 16));
  *(_DWORD *)(a3 + 16) = 0;
  sub_15DCED0(*(_QWORD *)(a3 + 40), a3 + 40);
  *(_QWORD *)a3 = 0;
  v29 = *(_WORD *)(a1 + 32);
  *(_DWORD *)(a3 + 56) = 0;
  v30 = (int *)(a1 + 16);
  if ( v29 == 189 )
  {
    sub_1490230((const __m128i *)a1, a3, 0, 0, a6, a7);
    v29 = *(_WORD *)(a1 + 32);
    v30 = (int *)(a1 + 16);
  }
  if ( v29 != 62 )
  {
    if ( v29 == 63 )
    {
      v33 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v33, v30);
      v37 = *(_DWORD *)(a1 + 40);
      sub_1564820(v44, a1, v37, 14);
      sub_AE9DF0(v44, 62, 4u);
      v34 = j__strlen(":");
      LODWORD(v40) = v37;
      HIDWORD(v40) = v37;
      sub_149EFC0((__int64)v41, v40, 1, ":", v34);
      if ( !v41[0] )
        goto LABEL_49;
    }
    else
    {
      v37 = v39 + v26;
      sub_1564820(v44, a1, v39 + v26, 14);
      sub_AE9DF0(v44, 62, 4u);
      v31 = j__strlen(":");
      sub_9EC740((__int64)v41, v39 + v26, ":", v31, 0);
      if ( !v41[0] )
      {
LABEL_49:
        if ( v42 != &v43 )
          operator delete(v42);
        sub_AEA040((__int64)v44);
        goto LABEL_52;
      }
    }
    if ( v41[1] )
      sub_14A2370((__int64 *)v44, (unsigned __int64)v41);
    goto LABEL_49;
  }
  v36 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v36, v30);
  v37 = *(_DWORD *)(a1 + 40);
LABEL_52:
  if ( v13 == 27 && *a2 )
  {
    sub_1564820(v44, a1, v39, 1534);
    sub_AE9DF0(v44, *a2 == 1, 2u);
    sub_AEA040((__int64)v44);
  }
  if ( !(unsigned __int8)sub_183BF40(*(_QWORD *)(a1 + 96), v38, v39, v37, a3) )
    goto LABEL_27;
  v32 = *(_QWORD *)(a3 + 40);
  *(_DWORD *)(a3 + 16) = 0;
  sub_15DCED0(v32, a3 + 40);
  *(_DWORD *)(a3 + 56) = 0;
  result = 0;
  *(_QWORD *)a3 = 0;
LABEL_9:
  v15 = *(_DWORD *)(a1 + 2792);
  if ( v15 )
  {
    v16 = *(_WORD *)(a1 + 88);
    v17 = *(_QWORD *)(a1 + 2784) + 24LL * v15 - 24;
    do
    {
      if ( v16 == *(_WORD *)(v17 + 14) )
      {
        if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_12;
      }
      else if ( v16 > *(_WORD *)(v17 + 14) )
      {
        goto LABEL_12;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v17 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v17 + 18) )
        break;
LABEL_12:
      --v15;
      v17 -= 24;
      *(_DWORD *)(a1 + 2792) = v15;
    }
    while ( v15 );
  }
  *(_DWORD *)(a1 + 88) = v9;
  *(_WORD *)(a1 + 92) = v8;
  return result;
}

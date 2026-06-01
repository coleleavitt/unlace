__m128i *__fastcall sub_1860BE0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 *a5,
        int a6,
        double a7,
        __m128i a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // r12
  __int64 v13; // r15
  __m128i si128; // xmm0
  int v15; // eax
  __int64 v16; // rax
  __m128i *v17; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  unsigned __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // esi
  __int64 v34; // r14
  __m128i *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v46[3]; // [rsp+8h] [rbp-18Ch] BYREF
  __int64 v47; // [rsp+14h] [rbp-180h] BYREF
  __int64 v48[18]; // [rsp+1Ch] [rbp-178h] BYREF
  __int64 v49; // [rsp+ACh] [rbp-E8h] BYREF
  __int64 *v50; // [rsp+B4h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+BCh] [rbp-D8h]
  __int64 v52; // [rsp+C4h] [rbp-D0h] BYREF
  void *v53[2]; // [rsp+104h] [rbp-90h]
  __int64 v54; // [rsp+114h] [rbp-80h]
  __int64 v55; // [rsp+11Ch] [rbp-78h]
  __int64 v56; // [rsp+124h] [rbp-70h]
  int v57; // [rsp+12Ch] [rbp-68h]
  __int64 v58; // [rsp+134h] [rbp-60h] BYREF
  __m128i v59; // [rsp+13Ch] [rbp-58h]
  __int64 v60; // [rsp+14Ch] [rbp-48h]

  v12 = *(_QWORD *)(a2 + 72);
  v13 = a5[1];
  v55 = a1;
  v50 = &v52;
  v46[0] = a6;
  v57 = a6;
  v51 = 0x800000000LL;
  *(_OWORD *)v53 = 0;
  v49 = 0;
  v54 = 0;
  v56 = a9;
  sub_B85890(&v58, a9);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA840);
  v60 = 0x101010000LL;
  v59 = si128;
  sub_1A395A0(&v49);
  sub_1A5D3E0(a1, (unsigned int)&v49, v12, (_DWORD)a5, 0, 0, 0);
  v15 = v49;
  if ( (_DWORD)v49 == 5 )
  {
    v17 = nullptr;
    goto LABEL_10;
  }
  if ( !(_DWORD)v51 )
  {
    LODWORD(v49) = 0;
    if ( v53[0] )
      sub_1A39780(v53[0]);
    si128 = 0;
    BYTE6(v60) = 0;
    *(_OWORD *)v53 = 0;
    if ( (!v13 || (unsigned int)sub_E90000(v13) == 4)
      && (v37 = *(_QWORD *)(a9 + 16), *(_DWORD *)v37 == 3)
      && *(_WORD *)(v37 + 16) == 29811
      && *(_BYTE *)(v37 + 18) == 100 )
    {
      sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), v46[0], 0x165Au, 0);
      sub_15F7200(v48);
      v38 = sub_1847050((_QWORD *)a1);
      v48[0] = v38 | (*(_BYTE *)(v38 + 29) >> 5) & 3;
      sub_1743080((__int64)&v50, v48[0]);
      LODWORD(v49) = 2;
      sub_1A43500(&v49);
    }
    else
    {
      sub_18604E0(a1, (__int64)&v49, v12, a5, a9);
    }
    if ( !(_DWORD)v51 )
    {
      sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), v46[0], 0x12u, 0);
      v16 = *a5;
      v17 = nullptr;
      v47 = v16;
      sub_1587DB0((__int64)v48, &v47);
      sub_15F7200(v48);
      goto LABEL_10;
    }
    v15 = v49;
  }
  v19 = *v50 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v15 == 2 && (v20 = sub_16C47B0(*v50 & 0xFFFFFFFFFFFFFFF8LL), (*(_BYTE *)(v20 + 28) & 0x7F) == 0x18) )
  {
    v21 = v20 + 48;
    sub_18F5260(a1, v19, (unsigned int)v46, 1, 0, 0, 0, 0, 0);
    while ( !(unsigned __int8)sub_B91990(v21, *(_QWORD *)(a1 + 544), v22, v23, v24, v25) )
    {
      v26 = *(_QWORD *)(sub_B8C1B0(v21) + 16);
      if ( (v26 & 4) != 0 )
      {
        v21 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v21 )
          break;
      }
      else
      {
        v21 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v21 )
          break;
      }
    }
  }
  else
  {
    v21 = 0;
    sub_18F5260(a1, v19, (unsigned int)v46, 1, 0, 0, 0, 0, 0);
  }
  v27 = sub_15AB9E0((__int64)a5, *(_QWORD **)(a1 + 248), v22, v23, v24, v25);
  v17 = (__m128i *)sub_B99910(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), a3, a4, v27, v28, v46[0], v19, v21);
  v31 = *(_QWORD *)(a1 + 544);
  v32 = *(_BYTE *)(v31 + 8) & 0x7F;
  if ( (*(_BYTE *)(v31 + 8) & 0x7F) != 0 )
  {
    while ( (_BYTE)v32 == 4 )
    {
      v31 = sub_B72690(v31);
      v32 = *(_BYTE *)(v31 + 8) & 0x7F;
      if ( (*(_BYTE *)(v31 + 8) & 0x7F) == 0 )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    v33 = v46[0];
    v34 = *(_QWORD *)(a1 + 272);
    if ( v46[0] < 0 )
      v33 = sub_10212A0(*(_QWORD *)(a1 + 272), v46[0]);
    if ( !sub_1021600(v34, v33) )
    {
      sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), v46[0], 0x1D7Au, 0);
      sub_15F7200(v48);
    }
  }
  if ( *(char *)(v12 + 8) < 0 )
    goto LABEL_37;
  v35 = *(__m128i **)(v12 + 360);
  if ( !v35 )
    goto LABEL_37;
  v36 = v35->m128i_i8[8] & 0x7F;
  if ( (unsigned __int8)v36 <= 0x12u )
  {
    if ( ((1LL << v36) & 0x40182) == 0 )
      goto LABEL_29;
LABEL_37:
    v39 = *(unsigned int *)(v12 + 376);
    if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(v12 + 380) )
    {
      sub_2237220(v12 + 368, v12 + 384, v39 + 1, 8);
      v39 = *(unsigned int *)(v12 + 376);
    }
    *(_QWORD *)(*(_QWORD *)(v12 + 368) + 8 * v39) = v17;
    ++*(_DWORD *)(v12 + 376);
    goto LABEL_40;
  }
  v36 = ((_BYTE)v36 + 94) & 0x7F;
  if ( (unsigned __int8)v36 <= 5u )
    goto LABEL_37;
LABEL_29:
  sub_B94AD0(v35, (__int64)v17, v32, v36, v29, v30);
LABEL_40:
  if ( v17 )
  {
    LOWORD(v48[0]) = 1;
    sub_1836B60((__int64 *)a1, v12, v17, a10, v48, (__m128)si128, a8);
    sub_167AF90(a1, (__int64)v17, v40, v41, v42, v43, si128, *(double *)a8.m128i_i64);
  }
LABEL_10:
  sub_169D230((__int64)&v49);
  return v17;
}

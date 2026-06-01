__int64 __fastcall sub_1E4CF80(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebp
  __m128i si128; // xmm2
  _QWORD *v18; // rsi
  __m128 v19; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // rbp
  unsigned int v26; // eax
  __int64 v27; // r12
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  int v30; // eax
  char *v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rbp
  __m128i v36; // xmm1
  __int64 v37; // rax
  _DWORD *v38; // rdi
  __m128 v39; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+18h] [rbp-A0h]
  __m128i v41; // [rsp+20h] [rbp-98h] BYREF
  __int64 v42; // [rsp+30h] [rbp-88h]
  void *v43[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v44; // [rsp+50h] [rbp-68h]
  _DWORD v45[9]; // [rsp+58h] [rbp-60h] BYREF
  char v46; // [rsp+7Ch] [rbp-3Ch]

  switch ( a7 & 0x7FFFFFFF )
  {
    case 0LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 9LL:
      *(_QWORD *)a1 &= 0xFFFFFFFE00000000LL;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return a1;
    case 1LL:
      v23 = a10 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (a10 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        v23 = (unsigned __int64)sub_A81910(*(_QWORD **)(a2 + 248), a8, *a3);
      v24 = *(_QWORD *)v23;
      *a3 = *(_DWORD *)(v23 + 8);
      v25 = v23 + 12;
      v26 = sub_F6C520(*(_QWORD *)(v24 + 32));
      v27 = *(_QWORD *)(v24 + 32);
      v28 = v26;
      v29 = (v25 - (v25 != 0)) / v26 + (v25 != 0);
      v30 = *(_DWORD *)(v24 + 20);
      v46 = 0;
      v45[8] = 0;
      *a4 = v30;
      v43[0] = v45;
      v43[1] = &qword_20;
      v44 = 32;
      sub_1EA6360(v43, v27, v28 * v29);
      v31 = (char *)v43[1] - v44;
      v35 = (unsigned __int64)sub_A81BC0(*(_QWORD **)(a2 + 248), v27, LODWORD(v43[1]) - (int)v44, v32, v33, v34);
      memcpy((void *)(v35 + 8), (char *)v43[0] + v44, (size_t)v31);
      sub_F1D250((__int64)&v41, v27, 0, 0);
      v36 = _mm_load_si128(&v41);
      v37 = v42;
      v38 = v43[0];
      *(_QWORD *)(a1 + 24) = v35 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)a1 = v36;
      *(_QWORD *)(a1 + 16) = v37;
      if ( v38 != v45 && v38 )
        operator delete[](v38);
      return a1;
    case 7LL:
      *a3 = *(_DWORD *)((a10 & 0xFFFFFFFFFFFFFFFCLL) + 20);
      *a4 = sub_F1D600((__int64)&a7);
      v14 = a7 & 0x7FFFFFFF;
      v15 = ((unsigned int)a7 & 0x7FFFFFFF) - 6;
      if ( (unsigned int)v15 > 1 )
      {
        v16 = 0;
      }
      else
      {
        v15 = a10 & 0xFFFFFFFFFFFFFFFCLL;
        v16 = *(_DWORD *)((a10 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( v14 == 6 )
        {
LABEL_4:
          v39.m128_u64[0] = *(_QWORD *)(v15 + 8);
          v40 = *(_QWORD *)v15;
          goto LABEL_5;
        }
      }
      v39.m128_u64[0] = 0;
      v40 = 0;
      if ( v14 == 7 )
      {
        v15 = a10 & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_4;
      }
LABEL_5:
      sub_F1DF30((__int64)v43, &a7, v15, v13);
      si128 = _mm_load_si128((const __m128i *)v43);
      v18 = *(_QWORD **)(a2 + 248);
      *(_QWORD *)(a1 + 16) = v44;
      v19 = _mm_loadh_ps((const double *)v39.m128_u64);
      *(__m128i *)a1 = si128;
      v39 = v19;
      sub_F1ECA0((unsigned __int64 *)(a1 + 24), v18, v19.m128_u64[0], v19.m128_u64[1], v16, 0);
      return a1;
    case 8LL:
      v21 = a8;
      *(_DWORD *)a1 = 8;
      v22 = *(_QWORD *)(v21 + 24);
      *a3 = *(_DWORD *)(v21 + 16);
      LODWORD(v21) = *(_DWORD *)(v21 + 20);
      *(_QWORD *)(a1 + 8) = v22;
      *a4 = v21;
      BYTE4(v21) = BYTE4(a7);
      *(_QWORD *)(a1 + 24) = v22 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(_BYTE *)(a1 + 4) = BYTE4(v21) & 1 | *(_BYTE *)(a1 + 4) & 0xFE;
      return a1;
  }
}

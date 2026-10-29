__int64 *__fastcall sub_19CC2F0(
        __m128 *a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        __m128i *a6,
        unsigned int a7,
        __int64 a8,
        const __m128i *a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12)
{
  __m128 v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdx
  _BOOL8 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rbp
  __int64 v24; // rcx
  __int64 v25; // rax
  char v26[12]; // [rsp+4h] [rbp-FCh] BYREF
  __int64 v27; // [rsp+10h] [rbp-F0h] BYREF
  __int64 v28; // [rsp+18h] [rbp-E8h] BYREF
  void *ptr; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+28h] [rbp-D8h]
  _BYTE v31[64]; // [rsp+30h] [rbp-D0h] BYREF
  void *v32[2]; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v34; // [rsp+88h] [rbp-78h]
  __m128 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]

  v26[0] = a5;
  v34 = (unsigned __int64 *)a1;
  v16 = (__m128)_mm_loadu_si128(a9);
  v17 = a9[1].m128i_i64[0];
  ptr = v31;
  v28 = 0;
  v36 = v17;
  v30 = 0x800000000LL;
  *(_OWORD *)v32 = 0;
  v33 = 0;
  v35 = v16;
  v37 = 0;
  v38 = 3;
  v39 = 0x101010000LL;
  sub_1A395A0(&v28);
  v19 = a10 != 0;
  if ( a2 )
  {
    v20 = 0;
    v27 = (__int64)a2;
    if ( a12 )
      v20 = a12[2];
    v21 = sub_19C7D40(
            (__int64 *)a1,
            (__int64)&v28,
            &v27,
            v26,
            a4,
            (unsigned int *)a6,
            (__m128)0LL,
            v16,
            v20,
            a10 != 0,
            a7);
    if ( v27 == 1 || v21 == 1 )
      goto LABEL_23;
    v22 = (__int64 *)v21;
    if ( (v21 & 0xFFFFFFFFFFFFFFFELL) != 0 )
      goto LABEL_24;
    a3 = *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFFELL) + 8);
    a2 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v24 = a3;
    if ( v26[0] )
    {
      v25 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v25 + 16) != 42 )
      {
        v25 = sub_F63050(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), v19, v18, a3);
        LOBYTE(v19) = a10 != 0;
      }
      v24 = *(_QWORD *)(v25 + 32);
    }
    if ( (unsigned __int8)sub_19C4170((__int64)a1, (__int64)&v28, 0, v24, a4, (__int64)a6, 0.0, v19, a7) )
      goto LABEL_23;
  }
  if ( a6->m128i_i32[0] && a6->m128i_i32[1] && !a6->m128i_i64[1] )
  {
LABEL_23:
    v22 = (_QWORD *)(&dword_0 + 1);
LABEL_24:
    if ( !BYTE3(v39) )
      goto LABEL_12;
    goto LABEL_25;
  }
  v22 = sub_19CB370(
          a1,
          a2,
          a3,
          a4,
          (unsigned __int8)v26[0],
          a6,
          (__m128)0LL,
          v16,
          a7,
          a8,
          (__int64)&v28,
          a10,
          a11,
          0,
          a12);
  if ( !BYTE3(v39) )
  {
LABEL_12:
    if ( BYTE4(v39) && (_DWORD)v28 == 5 )
    {
LABEL_32:
      sub_1A445B0(v34, &v28);
      goto LABEL_13;
    }
    goto LABEL_13;
  }
LABEL_25:
  if ( (_DWORD)v28 == 5 )
  {
    if ( !BYTE4(v39) )
      goto LABEL_13;
    goto LABEL_32;
  }
  if ( v32[1] && (*(_BYTE *)(v34[29] + 46) & 0x20) != 0 )
  {
    sub_1663B80(v34, (__int64)&v28);
    goto LABEL_12;
  }
LABEL_13:
  if ( v32[0] )
    sub_1A39780(v32[0]);
  if ( ptr != v31 )
    free(ptr);
  return v22;
}

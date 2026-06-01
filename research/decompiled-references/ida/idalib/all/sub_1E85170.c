unsigned int *__fastcall sub_1E85170(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128 a6,
        double a7,
        double a8,
        __m128i a9,
        __m128 a10)
{
  int v10; // eax
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int64 v17; // r13
  int v18; // eax
  unsigned int *v19; // r13
  __int64 v20; // rdx
  char *v21; // r12
  char *v22; // r15
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v27; // rsi
  unsigned int v28; // r11d
  __int64 v29; // rdx
  unsigned int *v30; // rax
  __int64 v31; // r10
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rax
  bool v37; // al
  double v38[2]; // [rsp+8h] [rbp-160h] BYREF
  void **v39; // [rsp+18h] [rbp-150h] BYREF
  __m128i v40; // [rsp+20h] [rbp-148h] BYREF
  int v41; // [rsp+30h] [rbp-138h]
  void *v42; // [rsp+38h] [rbp-130h]
  __int64 v43; // [rsp+40h] [rbp-128h]
  _BYTE v44[16]; // [rsp+48h] [rbp-120h] BYREF
  void *v45; // [rsp+58h] [rbp-110h]
  __int64 v46; // [rsp+60h] [rbp-108h]
  _BYTE v47[16]; // [rsp+68h] [rbp-100h] BYREF
  void *ptr; // [rsp+78h] [rbp-F0h]
  __int64 v49; // [rsp+80h] [rbp-E8h]
  _BYTE v50[136]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+110h] [rbp-58h]
  __int64 v52; // [rsp+118h] [rbp-50h]
  unsigned int v53; // [rsp+120h] [rbp-48h]
  __int16 v54; // [rsp+128h] [rbp-40h]

  v10 = *(_DWORD *)(a2 + 136);
  *(_QWORD *)&v38[0] = a2;
  v41 = v10;
  v42 = v44;
  v43 = 0x200000000LL;
  v46 = 0x200000000LL;
  v11 = (__m128i)_mm_loadh_ps(v38);
  ptr = v50;
  v49 = 0x800000000LL;
  v45 = v47;
  v40 = v11;
  v50[128] = 1;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v39 = nullptr;
  v14 = sub_1E76E30(&v40, &v39);
  v17 = v14;
  v18 = *(_DWORD *)(a2 + 96);
  if ( ((unsigned int)(v18 - 1) <= 2 || v18 == 18) && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0 )
  {
    v27 = *(unsigned int *)(v40.m128i_i64[1] + 136);
    if ( (_DWORD)v27 )
    {
      v28 = 0;
      v13 = 0;
      LODWORD(v29) = 0;
      v30 = *(unsigned int **)(v40.m128i_i64[1] + 128);
      do
      {
        v12 = *v30;
        v31 = (__int64)v30;
        if ( (unsigned int)v12 <= 7 )
        {
          v32 = 1LL << v12;
          if ( ((1LL << v12) & 0xAC) != 0 )
            goto LABEL_4;
          if ( (v32 & 0x10) != 0 )
          {
            if ( (_DWORD)v13 != 1 )
              goto LABEL_4;
            goto LABEL_29;
          }
          if ( (v32 & 3) != 0 )
          {
            v13 = (unsigned int)(v13 + 1);
            v28 = v29;
          }
        }
        v29 = (unsigned int)(v29 + 1);
        v30 += 36;
      }
      while ( (_DWORD)v27 != (_DWORD)v29 );
      if ( (_DWORD)v13 == 1 )
      {
        v35 = v40.m128i_i64[0];
        if ( (unsigned __int8)sub_F6AE00(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL), v27, v29, v12, v13) )
        {
          v36 = *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v36 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v36 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
          {
            v37 = sub_F68080(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL));
            v17 = sub_A70F20(*(_QWORD *)(v35 + 248), v14, !v37 ? 256LL : 64LL);
          }
        }
        goto LABEL_4;
      }
      if ( (_DWORD)v13 != 2
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 35 > 1 )
      {
        goto LABEL_4;
      }
      LODWORD(v29) = v28;
      v31 = *(_QWORD *)(v40.m128i_i64[1] + 128) + 144LL * v28;
      LODWORD(v12) = *(_DWORD *)v31;
LABEL_29:
      v12 = (unsigned int)v12 & 0xFFFFFFFB;
      if ( !(_DWORD)v12 )
      {
        v33 = *(_QWORD *)(v31 + 24);
        v34 = v33 + 8LL * *(unsigned int *)(v31 + 32);
        if ( v33 == v34 )
        {
LABEL_33:
          sub_1E61D20(v40.m128i_i64, 4, v29);
        }
        else
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(*(_QWORD *)v33 + 72LL);
            if ( *(_WORD *)(v12 + 8) == 271 )
              break;
            v33 += 8;
            if ( v34 == v33 )
              goto LABEL_33;
          }
        }
      }
    }
  }
LABEL_4:
  v19 = sub_1E7D450(v40.m128i_i64, v17, v39, v12, v13, v11, a4, a5, a6, v15, v16, a9, a10);
  if ( (_DWORD)v43 )
  {
    v20 = v40.m128i_i64[1];
    v21 = (char *)v42;
    v22 = (char *)v42 + 8 * (unsigned int)v43;
    *(_DWORD *)(*(_QWORD *)v40.m128i_i64[1] + 48LL) = 0;
    while ( 1 )
    {
      v23 = *(_QWORD *)v20;
      v24 = *(_QWORD *)v21;
      v25 = *(unsigned int *)(*(_QWORD *)v20 + 48LL);
      if ( v25 + 1 <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)v20 + 52LL) )
      {
        v21 += 8;
        *(_QWORD *)(*(_QWORD *)(v23 + 40) + 8 * v25) = v24;
        ++*(_DWORD *)(v23 + 48);
        if ( v22 == v21 )
          break;
      }
      else
      {
        v21 += 8;
        sub_2237220(v23 + 40, v23 + 56, v25 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(v23 + 40) + 8LL * (unsigned int)(*(_DWORD *)(v23 + 48))++) = v24;
        if ( v22 == v21 )
          break;
      }
      v20 = v40.m128i_i64[1];
    }
  }
  operator delete(v51, 16LL * v53, 8);
  if ( ptr != v50 )
    free(ptr);
  if ( v45 != v47 )
    free(v45);
  if ( v42 != v44 )
    free(v42);
  return v19;
}

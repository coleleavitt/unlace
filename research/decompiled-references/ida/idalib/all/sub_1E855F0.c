unsigned int *__fastcall sub_1E855F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128i a6,
        __m128 a7,
        double a8,
        double a9,
        __m128i a10,
        __m128 a11)
{
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int *v18; // r13
  __int64 v19; // rdx
  char *v20; // r12
  char *v21; // r15
  __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned int v26; // r13d
  char v27; // r12
  unsigned int v28; // ebp
  unsigned int v29; // eax
  unsigned int *v30; // rdi
  __int64 v31; // r10
  bool v32; // zf
  __int64 v33; // r14
  __int64 v34; // [rsp+8h] [rbp-160h] BYREF
  void **v35; // [rsp+10h] [rbp-158h] BYREF
  __int64 v36; // [rsp+18h] [rbp-150h] BYREF
  __m128i v37; // [rsp+20h] [rbp-148h] BYREF
  int v38; // [rsp+30h] [rbp-138h]
  void *v39; // [rsp+38h] [rbp-130h]
  __int64 v40; // [rsp+40h] [rbp-128h]
  _BYTE v41[16]; // [rsp+48h] [rbp-120h] BYREF
  void *v42; // [rsp+58h] [rbp-110h]
  __int64 v43; // [rsp+60h] [rbp-108h]
  _BYTE v44[16]; // [rsp+68h] [rbp-100h] BYREF
  void *ptr; // [rsp+78h] [rbp-F0h]
  __int64 v46; // [rsp+80h] [rbp-E8h]
  _BYTE v47[136]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+110h] [rbp-58h]
  __int64 v49; // [rsp+118h] [rbp-50h]
  unsigned int v50; // [rsp+120h] [rbp-48h]
  __int16 v51; // [rsp+128h] [rbp-40h]

  v38 = *(_DWORD *)(a2 + 136);
  v34 = a2;
  v39 = v41;
  v40 = 0x200000000LL;
  v43 = 0x200000000LL;
  v12 = (__m128i)_mm_loadh_ps((const double *)&v34);
  v42 = v44;
  ptr = v47;
  v37 = v12;
  v46 = 0x800000000LL;
  v47[128] = 1;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v35 = nullptr;
  v36 = sub_1E76E30(&v37, &v35);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 4) == 0 )
    goto LABEL_2;
  v26 = sub_A71510(*(_QWORD *)(a1 + 248), a3, v13, v14, v15);
  if ( !v26 )
    goto LABEL_2;
  v15 = *(unsigned int *)(v37.m128i_i64[1] + 136);
  if ( !(_DWORD)v15 )
    goto LABEL_2;
  v27 = 0;
  v28 = -1;
  v29 = 0;
  v30 = *(unsigned int **)(v37.m128i_i64[1] + 128);
  while ( 1 )
  {
    v14 = *v30;
    if ( (unsigned int)v14 <= 7 )
      break;
LABEL_24:
    ++v29;
    v30 += 36;
    if ( (_DWORD)v15 == v29 )
    {
      if ( v28 != -1 )
      {
        v33 = v37.m128i_i64[0];
        if ( *(_DWORD *)(*(_QWORD *)(v37.m128i_i64[1] + 128) + 144LL * v28)
          || (unsigned __int8)sub_F6AE00(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL), 1, 1, v14, v15) )
        {
          sub_1E5EBE0((__int64 *)(v33 + 248), (unsigned __int64 *)&v36, v26, v14, v15);
        }
        else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL)
                                                                           + 8LL)
                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                   + 16LL)
                - 35 <= 1
               && v27 )
        {
          sub_1E61D20(v37.m128i_i64, v26, v28);
        }
      }
      goto LABEL_2;
    }
  }
  v31 = 1LL << v14;
  v14 = v31;
  if ( (v31 & 0xA8) != 0 )
    goto LABEL_2;
  if ( (v31 & 0x10) == 0 )
  {
    v14 = v31 & 7;
    if ( (v31 & 7) != 0 )
    {
      v32 = v28 == -1;
      v28 = v29;
      if ( !v32 )
        v27 = 1;
    }
    goto LABEL_24;
  }
  if ( v28 != -1 )
    sub_1E61D20(v37.m128i_i64, v26, v29);
LABEL_2:
  v18 = sub_1E7D450(v37.m128i_i64, v36, v35, v14, v15, v12, a5, a6, a7, v16, v17, a10, a11);
  if ( (_DWORD)v40 )
  {
    v19 = v37.m128i_i64[1];
    v20 = (char *)v39;
    v21 = (char *)v39 + 8 * (unsigned int)v40;
    *(_DWORD *)(*(_QWORD *)v37.m128i_i64[1] + 48LL) = 0;
    while ( 1 )
    {
      v22 = *(_QWORD *)v19;
      v23 = *(_QWORD *)v20;
      v24 = *(unsigned int *)(*(_QWORD *)v19 + 48LL);
      if ( v24 + 1 <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)v19 + 52LL) )
      {
        v20 += 8;
        *(_QWORD *)(*(_QWORD *)(v22 + 40) + 8 * v24) = v23;
        ++*(_DWORD *)(v22 + 48);
        if ( v21 == v20 )
          break;
      }
      else
      {
        v20 += 8;
        sub_2237220(v22 + 40, v22 + 56, v24 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(v22 + 40) + 8LL * (unsigned int)(*(_DWORD *)(v22 + 48))++) = v23;
        if ( v21 == v20 )
          break;
      }
      v19 = v37.m128i_i64[1];
    }
  }
  operator delete(v48, 16LL * v50, 8);
  if ( ptr != v47 )
    free(ptr);
  if ( v42 != v44 )
    free(v42);
  if ( v39 != v41 )
    free(v39);
  return v18;
}

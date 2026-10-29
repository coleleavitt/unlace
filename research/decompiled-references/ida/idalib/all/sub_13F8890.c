_QWORD *__fastcall sub_13F8890(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, _BYTE *a5)
{
  __int64 v7; // rbp
  unsigned __int8 *v8; // r15
  __m128 v9; // xmm0
  unsigned __int8 *v10; // rdx
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 *v16; // rax
  _QWORD *v17; // r13
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int8 *v21; // rbp
  size_t v22; // rax
  __int64 v23; // r15
  __int64 v24; // r15
  __int64 v25; // rdi
  const void *v26; // r15
  size_t v27; // r14
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rdi
  __m128i v31; // [rsp+0h] [rbp-248h] BYREF
  __m128i v32; // [rsp+10h] [rbp-238h] BYREF
  __m128i v33; // [rsp+20h] [rbp-228h] BYREF
  __int64 v34; // [rsp+30h] [rbp-218h]
  __int64 v35; // [rsp+38h] [rbp-210h]
  _BYTE *v36; // [rsp+40h] [rbp-208h]
  __int64 *v37; // [rsp+48h] [rbp-200h] BYREF
  __m128i v38; // [rsp+50h] [rbp-1F8h] BYREF
  _OWORD v39[2]; // [rsp+60h] [rbp-1E8h] BYREF
  __m128i *v40; // [rsp+80h] [rbp-1C8h]
  _QWORD v41[4]; // [rsp+90h] [rbp-1B8h] BYREF
  __int16 v42; // [rsp+B0h] [rbp-198h]
  _BYTE v43[32]; // [rsp+C0h] [rbp-188h] BYREF
  __int16 v44; // [rsp+E0h] [rbp-168h]
  void *v45[4]; // [rsp+F0h] [rbp-158h] BYREF
  __int16 v46; // [rsp+110h] [rbp-138h]
  unsigned __int8 *v47[4]; // [rsp+120h] [rbp-128h] BYREF
  __int16 v48; // [rsp+140h] [rbp-108h]
  void *ptr; // [rsp+170h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+178h] [rbp-D0h]
  _BYTE v51[192]; // [rsp+188h] [rbp-C0h] BYREF

  v7 = a2[6];
  v31.m128i_i64[0] = a3;
  v8 = (unsigned __int8 *)(v7 + 32);
  v34 = a3;
  v35 = a1;
  v9 = _mm_loadh_ps((const double *)v31.m128i_i64);
  v31.m128i_i64[0] = (__int64)&v37;
  v10 = *(unsigned __int8 **)v7;
  v37 = a2;
  v36 = a5;
  v11 = _mm_loadh_ps((const double *)v31.m128i_i64);
  v31.m128i_i64[0] = a3;
  v33 = (__m128i)v9;
  v32 = (__m128i)v11;
  v12 = _mm_loadh_ps((const double *)v31.m128i_i64);
  ptr = v51;
  v31 = (__m128i)v12;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_A1FE50(&ptr, (_BYTE *)(v7 + 32), &v10[v7 + 32]);
  v13 = _mm_load_si128(&v31);
  v14 = _mm_load_si128(&v32);
  v31.m128i_i64[0] = a3 + 8;
  v15 = _mm_load_si128(&v33);
  v47[0] = (unsigned __int8 *)(a3 + 8);
  v48 = 260;
  v38 = v13;
  v39[0] = v14;
  v39[1] = v15;
  v40 = &v38;
  if ( (unsigned __int8)sub_228B020(v47, 0) )
  {
    a4[1] = 0;
    v25 = 0;
    v26 = *(const void **)(v34 + 8);
    v27 = *(_QWORD *)(v34 + 16);
    if ( v27 > a4[2] )
    {
      sub_2236E10(a4, a4 + 3, *(_QWORD *)(v34 + 16), 1);
      v25 = a4[1];
    }
    if ( v27 )
    {
      memmove((void *)(*a4 + v25), v26, v27);
      v25 = a4[1];
    }
    v28 = v34;
    v29 = v25 + v27;
    v30 = v38.m128i_i64[0];
    a4[1] = v29;
    v17 = sub_13F8240(v30, &v38.m128i_i64[1], *(const void **)(v28 + 8), *(_QWORD *)(v28 + 16));
  }
  else
  {
    v16 = v37;
    if ( v37 )
    {
      while ( (v16[113] & 0x10) == 0 )
      {
        v16 = (__int64 *)v16[5];
        if ( !v16 )
          goto LABEL_10;
      }
      v17 = sub_13F8360((__int64)v39);
    }
    else
    {
LABEL_10:
      v48 = 257;
      v46 = 257;
      v44 = 257;
      v42 = 260;
      v41[0] = v31.m128i_i64[0];
      v31.m128i_i64[0] = (__int64)v45;
      v33.m128i_i64[0] = (__int64)v43;
      v32.m128i_i64[0] = (__int64)v41;
      sub_228A3B0(a4, v41, v43, v45, v47);
      v19 = *a4;
      v42 = 261;
      v41[0] = v19;
      v20 = a4[1];
      v48 = 257;
      v41[1] = v20;
      v46 = 257;
      v44 = 257;
      sub_228A3B0(&ptr, v32.m128i_i64[0], v33.m128i_i64[0], v31.m128i_i64[0], v47);
      v17 = sub_13F8240(v38.m128i_i64[0], &v38.m128i_i64[1], ptr, si128.m128i_u64[0]);
      if ( !v17 )
      {
        v21 = *(unsigned __int8 **)v7;
        v47[0] = v8;
        v47[1] = v21;
        v22 = j__strlen(".framework");
        if ( sub_9EC680(v47, ".framework", v22) )
        {
          si128.m128i_i64[0] = 0;
          sub_A1FE50(&ptr, v8, &v21[(_QWORD)v8]);
          a4[1] = 0;
          if ( sub_13F8360((__int64)v39) )
          {
            v23 = v34;
            sub_FC70B0((__int64)v47, *(_QWORD *)(v35 + 8), *(_DWORD *)(v34 + 4), 1360);
            sub_AEC220(v47, *(_BYTE **)(v23 + 8), *(_QWORD *)(v23 + 16));
            v24 = v31.m128i_i64[0];
            sub_FEEE60(v31.m128i_i64[0], v37, 0);
            sub_AEC220(v47, (_BYTE *)v45[0], (signed __int64)v45[1]);
            if ( v45[0] != (void *)(v24 + 16) )
              operator delete(v45[0]);
            sub_AEA040((__int64)v47);
            *v36 = 1;
          }
          v17 = nullptr;
        }
      }
    }
  }
  if ( ptr != v51 )
    free(ptr);
  return v17;
}

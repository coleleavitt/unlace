__int64 __fastcall sub_10B7FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  __int64 v20; // r14
  __m128 v21; // kr00_16
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _BYTE *v24; // rsi
  void *v25; // rdi
  unsigned __int64 v26; // rax
  char *v27; // rsi
  char v28; // dl
  char v29; // dl
  __m128i v30; // [rsp+0h] [rbp-148h] BYREF
  __m128 v31; // [rsp+10h] [rbp-138h] BYREF
  int v32; // [rsp+20h] [rbp-128h]
  __m128i v33; // [rsp+30h] [rbp-118h] BYREF
  int v34; // [rsp+40h] [rbp-108h]
  void *v35[2]; // [rsp+50h] [rbp-F8h] BYREF
  char v36; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v37[15]; // [rsp+61h] [rbp-E7h] BYREF
  void *v38[2]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v39[200]; // [rsp+80h] [rbp-C8h] BYREF

  v5 = a1 + 16;
  v11 = *(_BYTE **)(a2 + 8);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a1 = v5;
    sub_10B5070((_QWORD *)a1, v11, (__int64)&v11[v12]);
    if ( *(_QWORD *)(a1 + 8) )
      return a1;
  }
  else
  {
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  if ( *(_DWORD *)a2 == 1 )
  {
    v26 = (unsigned int)sub_226D030();
    if ( (_DWORD)v26 )
    {
      v27 = v37;
      do
      {
        --v27;
        v29 = a0123456789abcd_3[v26 & 0xF] | 0x20;
        v26 >>= 4;
        *v27 = v29;
      }
      while ( v26 );
    }
    else
    {
      v36 = 48;
      v27 = &v36;
    }
    v38[0] = v39;
    sub_10B4F90(v38, v27, (__int64)v37);
    sub_9E6D90(a1, v38);
    v25 = v38[0];
    if ( v38[0] == v39 )
      return a1;
LABEL_26:
    operator delete(v25);
    return a1;
  }
  if ( !*(_DWORD *)a2 )
  {
    sub_220E040(v38);
    sub_220E260(v38, a3, a4);
    v14 = *(unsigned int *)(a5 + 16);
    v15 = *(_QWORD *)(a5 + 8);
    v30.m128i_i64[1] = (__int64)&v31;
    v32 = 0;
    v30.m128i_i64[0] = v15 + 8 * v14;
    v31 = _mm_loadh_ps((const double *)v30.m128i_i64);
    sub_10B4AC0(&v31, v30.m128i_i64[0]);
    v16 = *(_QWORD *)(a5 + 8);
    v17 = *(unsigned int *)(a5 + 16);
    v34 = 0;
    v30.m128i_i64[0] = v16 + 8 * v17;
    v18 = _mm_loadl_epi64(&v30);
    v30.m128i_i64[0] = (__int64)&v33;
    v33 = _mm_unpacklo_epi64(v18, v18);
    sub_10B4AC0(&v33, (_QWORD *)(v16 + 8 * v17));
    v19 = (_QWORD *)v31.m128_u64[0];
    if ( v31.m128_u64[0] != v33.m128i_i64[0] )
    {
      do
      {
        while ( 1 )
        {
          v20 = *v19;
          if ( !(unsigned __int8)sub_2195AD0(*v19, 70) )
          {
            sub_21922B0(v35, v20, a5);
            sub_220E260(v38, v35[0], v35[1]);
            if ( v35[0] != &v36 )
              operator delete(v35[0]);
          }
          v21 = v31;
          v19 = (_QWORD *)(v31.m128_u64[0] + 8);
          v31.m128_u64[0] = (unsigned __int64)v19;
          if ( v19 != (_QWORD *)v31.m128_u64[1] && !*(_QWORD *)(v21.m128_u64[0] + 8) )
            break;
          if ( (_QWORD *)v33.m128i_i64[0] == v19 )
            goto LABEL_19;
        }
        v22 = v21.m128_u64[0] + 16;
        do
        {
          v19 = (_QWORD *)v21.m128_u64[0];
          if ( v21.m128_u64[1] == v21.m128_u64[0] )
            break;
          v22 += 8LL;
        }
        while ( !*(_QWORD *)v21.m128_u64[0] );
        v31.m128_u64[0] = v21.m128_u64[0];
      }
      while ( v33.m128i_i64[0] != v21.m128_u64[0] );
    }
LABEL_19:
    sub_220E460(v38, v30.m128i_i64[1]);
    v23 = v31.m128_u64[0];
    if ( v31.m128_u64[0] )
    {
      v24 = (_BYTE *)(v30.m128i_i64[0] + 17);
      do
      {
        --v24;
        v28 = a0123456789abcd_3[v23 & 0xF] | 0x20;
        v23 >>= 4;
        *v24 = v28;
      }
      while ( v23 );
    }
    else
    {
      LOBYTE(v34) = 48;
      v24 = (_BYTE *)(v30.m128i_i64[0] + 16);
    }
    v35[0] = &v36;
    sub_10B4F90(v35, v24, v30.m128i_i64[0] + 17);
    sub_9E6D90(a1, v35);
    v25 = v35[0];
    if ( v35[0] != &v36 )
      goto LABEL_26;
  }
  return a1;
}


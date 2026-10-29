__int64 __fastcall sub_7FB840(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int128 si128; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  _BOOL8 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  const __m128i *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rsi
  __m128i *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  char v25; // al
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128i v31; // xmm0
  __int64 v32; // r12
  __int64 v33; // r14
  __int128 v34; // rax
  __int64 v35; // rdx
  _BYTE *v36; // r13
  __m128i v37; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v38; // [rsp+40h] [rbp-C8h] BYREF
  int v39; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h]
  __int128 v42; // [rsp+80h] [rbp-88h] BYREF
  __int128 v43; // [rsp+90h] [rbp-78h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  _BYTE v45[24]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]

  v5 = *(_QWORD *)a1;
  v37 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL)),
          (__m128i)((*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL) + 8));
  v6 = sub_7214D0(v37.m128i_i64);
  v10 = _mm_load_si128(&v37);
  v39 = v6;
  v40 = v10;
  v11 = v10.m128i_i64[0];
  si128 = (__int128)_mm_load_si128((const __m128i *)&v39);
  v38 = v10;
  v13 = (__int128)_mm_load_si128((const __m128i *)&v40.m128i_u64[1]);
  v44 = v41;
  v42 = si128;
  v43 = v13;
  if ( v11 )
  {
    sub_7DE380(a1, v5 + 24, v11, v7, v8, v9, si128, v13, v41);
    v14 = sub_7214D0(v38.m128i_i64);
    v17 = *(unsigned int *)(a1 + 20);
    v18 = *(_QWORD *)(a1 + 8);
    v19 = (const __m128i *)v45;
    *(_DWORD *)v45 = v14;
    v20 = *(unsigned int *)(a1 + 16);
    v21 = v20 + 1;
    *(__m128i *)&v45[8] = _mm_load_si128(&v38);
    if ( v17 < v20 + 1 )
    {
      if ( (unsigned __int64)v45 < v18 || (unsigned __int64)v45 >= v18 + 40 * v20 )
      {
        sub_25D6060(a1 + 8, a1 + 24, v21, 40);
        v18 = *(_QWORD *)(a1 + 8);
        v20 = *(unsigned int *)(a1 + 16);
      }
      else
      {
        v36 = &v45[-v18];
        sub_25D6060(a1 + 8, a1 + 24, v21, 40);
        v18 = *(_QWORD *)(a1 + 8);
        v20 = *(unsigned int *)(a1 + 16);
        v19 = (const __m128i *)&v36[v18];
      }
    }
    v22 = (__m128i *)(v18 + 40 * v20);
    *v22 = _mm_loadu_si128(v19);
    v23 = v37.m128i_i64[0];
    v22[1] = _mm_loadu_si128(v19 + 1);
    v22[2].m128i_i64[0] = v19[2].m128i_i64[0];
    v24 = v37.m128i_i64[1];
    ++*(_DWORD *)(a1 + 16);
    v25 = sub_7EE840((__int64 *)a1, v23, v24, v17, v15, v16);
    --*(_DWORD *)(a1 + 16);
    if ( !v25 )
      return 0;
  }
  v27 = a2;
  sub_AC4830(v45);
  v31 = _mm_load_si128((const __m128i *)v45);
  v32 = v46;
  v33 = v47;
  *(_QWORD *)&v43 = *(_QWORD *)&v45[16];
  v34 = (__int128)v31;
  v42 = (__int128)v31;
LABEL_6:
  if ( v32 != (_QWORD)v34 )
  {
LABEL_7:
    v35 = BYTE8(v34) & 3;
    if ( (_DWORD)v35 )
      *(_QWORD *)&v34 = sub_ACE280(&v42, v27, v35, v28, v29, v30);
    do
    {
      v27 = *(_QWORD *)v34;
      if ( !(unsigned __int8)sub_7E3C00((__int64 *)a1, *(_QWORD *)v34, a3) )
        return 0;
      *((_QWORD *)&v34 + 1) = *((_QWORD *)&v42 + 1);
      if ( (BYTE8(v42) & 3) != 0 )
      {
        if ( *((_QWORD *)&v42 + 1) <= 3u )
        {
          v27 = 1;
          sub_ACE0F0(&v42, 1);
        }
        else
        {
          sub_ACE150(&v42);
        }
        v34 = v42;
        goto LABEL_6;
      }
      *(_QWORD *)&v34 = v42 + 8;
      *(_QWORD *)&v42 = v34;
    }
    while ( v32 != (_QWORD)v34 );
  }
  if ( v33 != *((_QWORD *)&v34 + 1) )
    goto LABEL_7;
  return 1;
}


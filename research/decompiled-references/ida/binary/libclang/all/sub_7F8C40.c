__int64 __fastcall sub_7F8C40(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // cl
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  _BOOL8 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i v16; // xmm0
  __int64 result; // rax
  __int64 v18; // rcx
  __int128 si128; // xmm1
  __int128 v20; // xmm0
  const __m128i *v21; // rbx
  int v22; // eax
  _BOOL8 v23; // r8
  __int64 v24; // r9
  __m128i v25; // xmm0
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __m128i *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  char *v33; // rbx
  __m128i v34; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v35; // [rsp+40h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v37; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-88h]
  __int128 v39; // [rsp+80h] [rbp-78h]
  __int128 v40; // [rsp+90h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-58h]
  int v42; // [rsp+B0h] [rbp-48h] BYREF
  __m128i v43; // [rsp+B8h] [rbp-40h]

  v4 = *(_BYTE *)(a2 + 16);
  if ( v4 == 26 )
  {
    v5 = 8 * ((*(_WORD *)(a2 + 22) & 0x3C0) != 0) + 15;
LABEL_3:
    v6 = 8 * ((v5 + ((*(_DWORD *)(a2 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
    goto LABEL_4;
  }
  v6 = 16;
  if ( v4 != 25 )
  {
    v5 = 15;
    goto LABEL_3;
  }
LABEL_4:
  v7 = a3 + v6;
  v8 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
  v9 = v7 != 0;
  v10 = v8;
  v11 = v7 - v9;
  v12 = *(_QWORD *)a1;
  v34 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a2 + 24)), (__m128i)(v10 * (v9 + v11 / v10)));
  v13 = sub_7214D0(v34.m128i_i64);
  v16 = _mm_load_si128(&v34);
  v36 = v13;
  result = 1;
  v37 = v16;
  v18 = v16.m128i_i64[0];
  si128 = (__int128)_mm_load_si128((const __m128i *)&v36);
  v35 = v16;
  v20 = (__int128)_mm_load_si128((const __m128i *)&v37.m128i_u64[1]);
  v41 = v38;
  v39 = si128;
  v40 = v20;
  if ( v18 )
  {
    sub_7DE380(a1, v12 + 24, v38, v18, v14, v15, si128, v20, v38);
    v21 = (const __m128i *)&v42;
    v22 = sub_7214D0(v35.m128i_i64);
    v25 = _mm_load_si128(&v35);
    v26 = *(unsigned int *)(a1 + 20);
    v42 = v22;
    v27 = *(unsigned int *)(a1 + 16);
    v28 = *(_QWORD *)(a1 + 8);
    v43 = v25;
    v29 = v27 + 1;
    if ( v26 < v27 + 1 )
    {
      if ( (unsigned __int64)&v42 < v28 || (unsigned __int64)&v42 >= v28 + 40 * v27 )
      {
        sub_25D6060(a1 + 8, a1 + 24, v29, 40);
        v28 = *(_QWORD *)(a1 + 8);
        v27 = *(unsigned int *)(a1 + 16);
      }
      else
      {
        v33 = (char *)&v42 - v28;
        sub_25D6060(a1 + 8, a1 + 24, v29, 40);
        v28 = *(_QWORD *)(a1 + 8);
        v27 = *(unsigned int *)(a1 + 16);
        v21 = (const __m128i *)&v33[v28];
      }
    }
    v30 = (__m128i *)(v28 + 40 * v27);
    *v30 = _mm_loadu_si128(v21);
    v31 = v34.m128i_i64[0];
    v30[1] = _mm_loadu_si128(v21 + 1);
    v30[2].m128i_i64[0] = v21[2].m128i_i64[0];
    v32 = v34.m128i_i64[1];
    ++*(_DWORD *)(a1 + 16);
    result = sub_7EE840((__int64 *)a1, v31, v32, v26, v23, v24);
    --*(_DWORD *)(a1 + 16);
  }
  return result;
}


__int64 __fastcall sub_7F53C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r13
  unsigned int v7; // r13d
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int32 *v11; // r13
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int32 v15; // r15d
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  const __m128i *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  __m128i *v22; // rax
  __int64 *v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // r15
  __int64 v26; // r9
  char *v27; // r15
  __int64 v28; // [rsp+38h] [rbp-B0h]
  __int64 v29; // [rsp+40h] [rbp-A8h]
  __int64 v30; // [rsp+48h] [rbp-A0h]
  __m128i v31; // [rsp+50h] [rbp-98h] BYREF
  __m128i v32; // [rsp+60h] [rbp-88h] BYREF
  __int64 v33; // [rsp+70h] [rbp-78h]
  __int64 v34[2]; // [rsp+80h] [rbp-68h] BYREF
  __int32 v35; // [rsp+90h] [rbp-58h]

  v3 = *(_QWORD *)(a2 + 96);
  if ( v3 )
  {
    v4 = (__int64 *)(v3 + 16);
    v5 = 8LL * *(unsigned int *)(v3 + 8);
    v6 = v3 + v5 + 16;
    if ( v5 )
    {
      while ( (unsigned __int8)sub_7F4BB0((__int64 *)a1, *v4) )
      {
        if ( (__int64 *)v6 == ++v4 )
          goto LABEL_8;
      }
      return 0;
    }
  }
LABEL_8:
  v9 = *(unsigned int *)(a2 + 112);
  v10 = *(__int64 **)(a2 + 104);
  v11 = *(__int32 **)(a2 + 120);
  v12 = (__int64)&v10[v9];
  v13 = (__int64)&v11[v9];
  if ( (__int64 *)v12 != v10 && v11 != (__int32 *)v13 )
  {
    do
    {
      v14 = *v10;
      v30 = v13;
      v29 = v12;
      v16 = *(_QWORD *)a1;
      v32.m128i_i32[0] = *v11;
      v15 = v32.m128i_i32[0];
      v31.m128i_i32[0] = 1043;
      v31.m128i_i64[1] = v14;
      v28 = v14;
      sub_7DE380(a1, v16 + 24, v33, v16, v12, v13, (__int128)_mm_load_si128(&v31), (__int128)_mm_load_si128(&v32), v33);
      v17 = *(unsigned int *)(a1 + 20);
      v35 = v15;
      LODWORD(v34[0]) = 1043;
      v18 = *(_QWORD *)(a1 + 8);
      v19 = (const __m128i *)v34;
      v34[1] = v28;
      v20 = *(unsigned int *)(a1 + 16);
      v12 = v29;
      v13 = v30;
      v21 = v20 + 1;
      if ( v17 < v20 + 1 )
      {
        if ( (unsigned __int64)v34 < v18 )
        {
          sub_25D6060(a1 + 8, a1 + 24, v21, 40);
          v18 = *(_QWORD *)(a1 + 8);
          v20 = *(unsigned int *)(a1 + 16);
          v12 = v29;
          v13 = v30;
        }
        else if ( (unsigned __int64)v34 < v18 + 40 * v20 )
        {
          v27 = (char *)v34 - v18;
          sub_25D6060(a1 + 8, a1 + 24, v21, 40);
          v18 = *(_QWORD *)(a1 + 8);
          v20 = *(unsigned int *)(a1 + 16);
          v12 = v29;
          v13 = v30;
          v19 = (const __m128i *)&v27[v18];
        }
        else
        {
          sub_25D6060(a1 + 8, a1 + 24, v21, 40);
          v18 = *(_QWORD *)(a1 + 8);
          v20 = *(unsigned int *)(a1 + 16);
          v13 = v30;
          v12 = v29;
        }
      }
      ++v11;
      ++v10;
      v22 = (__m128i *)(v18 + 40 * v20);
      *v22 = _mm_loadu_si128(v19);
      v22[1] = _mm_loadu_si128(v19 + 1);
      v22[2].m128i_i64[0] = v19[2].m128i_i64[0];
    }
    while ( (__int32 *)v13 != v11 && (__int64 *)v12 != v10 );
  }
  v7 = sub_7E1600((__int64 *)a1, a2 + 48);
  if ( !(_BYTE)v7 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v23 = nullptr;
    v24 = sub_79A2B0(a2);
    v25 = *v24 + 8LL * *((unsigned int *)v24 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v23 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v25 != v23 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)a1;
        v34[0] = *v23;
        if ( !(unsigned __int8)sub_7F2380(a1, v34[0], v34[0], v34, (__int64 *)a1, v26) )
          break;
        if ( (__int64 *)v25 == ++v23 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}


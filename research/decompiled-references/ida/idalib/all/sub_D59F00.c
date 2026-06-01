__int64 __fastcall sub_D59F00(__int64 a1, __int64 a2)
{
  const __m128i *v2; // r14
  unsigned int v3; // ebp
  int v4; // eax
  void *v5; // r15
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __int64 v8; // r13
  unsigned int v9; // ebx
  __m128i v11; // xmm6
  __m128i v12; // xmm6
  const __m128i *v13; // [rsp+10h] [rbp-168h]
  __int64 v14; // [rsp+18h] [rbp-160h]
  int v15; // [rsp+20h] [rbp-158h]
  __int64 v16; // [rsp+30h] [rbp-148h]
  const __m128i *v17; // [rsp+40h] [rbp-138h]
  const __m128i *v18; // [rsp+58h] [rbp-120h]
  void *v19; // [rsp+60h] [rbp-118h] BYREF
  int v20; // [rsp+68h] [rbp-110h]
  __m128i v21; // [rsp+70h] [rbp-108h] BYREF
  __m128i v22; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+98h] [rbp-E0h]
  __m128i v25; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v26[48]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v27[48]; // [rsp+E0h] [rbp-98h] BYREF
  void *v28[2]; // [rsp+110h] [rbp-68h] BYREF

  sub_D09010((__int64)v26, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v27, *(_QWORD *)(a1 + 176));
  v14 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v28, (__int64)v27, 0);
  v17 = (const __m128i *)sub_D0E1E0((__int64)v28);
  sub_E232A0(v28);
  sub_CFE430((__int64)v28, (__int64)v27, 1);
  v18 = (const __m128i *)sub_D0E1E0((__int64)v28);
  sub_E232A0(v28);
  sub_CFE430((__int64)v28, (__int64)v26, 0);
  v2 = (const __m128i *)sub_D0E1E0((__int64)v28);
  sub_E232A0(v28);
  sub_CFE430((__int64)v28, (__int64)v26, 1);
  v13 = (const __m128i *)sub_D0E1E0((__int64)v28);
  sub_E232A0(v28);
  v3 = v17->m128i_u32[2];
  if ( v3 )
  {
    LODWORD(v28[1]) = v17->m128i_i32[2];
    if ( v3 > 0x40 )
    {
      sub_2205470(v28, 0, 0);
      v4 = (int)v28[1];
      v5 = v28[0];
      if ( LODWORD(v28[1]) > 0x40 )
      {
        if ( v28[0] )
        {
          v15 = (int)v28[1];
          operator delete[](v28[0]);
          v4 = v15;
        }
        goto LABEL_4;
      }
    }
    else
    {
      v28[0] = nullptr;
      v4 = v3;
    }
  }
  else
  {
    v28[0] = nullptr;
    v4 = 32;
  }
  v5 = v28[0];
LABEL_4:
  v19 = v5;
  v20 = v4;
  if ( !(unsigned __int8)sub_D4AAC0((__int64)v2, (__int64)&v19)
    && !(unsigned __int8)sub_D4AAC0((__int64)v13, (__int64)&v19) )
  {
    goto LABEL_15;
  }
  v21.m128i_i64[0] = 0;
  v21.m128i_i32[2] = 0;
  v22.m128i_i64[0] = 0;
  v22.m128i_i32[2] = 0;
  v25 = _mm_loadu_si128(v2);
  *(__m128i *)v28 = _mm_loadu_si128(v2);
  if ( !(unsigned __int8)sub_D596D0(v25.m128i_i64, (__int64 *)v28, v3, (void **)&v21) )
  {
    v25 = _mm_loadu_si128(v13);
    *(__m128i *)v28 = _mm_loadu_si128(v13);
    sub_D596D0(v25.m128i_i64, (__int64 *)v28, v3, (void **)&v22);
  }
  v6 = _mm_load_si128(&v21);
  v7 = _mm_load_si128(&v22);
  v23 = 0;
  LODWORD(v24) = 0;
  v25 = v6;
  *(__m128i *)v28 = v7;
  if ( (unsigned __int8)sub_D52700(v25.m128i_i64, (__int64 *)v28, v3, (void **)&v23) )
    goto LABEL_11;
  if ( (unsigned __int8)sub_D4AAC0((__int64)&v23, (__int64)&v19) )
  {
    sub_CFE430((__int64)v28, v14, 0);
    v8 = sub_D0E1E0((__int64)v28);
    sub_E232A0(v28);
    sub_CFE430((__int64)v28, v14, 1);
    v16 = sub_D0E1E0((__int64)v28);
    sub_E232A0(v28);
    v25 = _mm_loadu_si128(v17);
    *(__m128i *)v28 = _mm_loadu_si128(v2);
    if ( !(unsigned __int8)sub_D596D0(v25.m128i_i64, (__int64 *)v28, v3, (void **)&v21) )
    {
      v25 = _mm_loadu_si128(v18);
      *(__m128i *)v28 = _mm_loadu_si128(v13);
      if ( !(unsigned __int8)sub_D596D0(v25.m128i_i64, (__int64 *)v28, v3, (void **)&v22) )
      {
        v11 = _mm_load_si128(&v22);
        v25 = _mm_load_si128(&v21);
        *(__m128i *)v28 = v11;
        if ( !(unsigned __int8)sub_D52700(v25.m128i_i64, (__int64 *)v28, v3, (void **)v8)
          && !(unsigned __int8)sub_D49F10(*(_QWORD *)v8, *(_QWORD *)(v8 + 8), v23, v24, v3, (void **)v8) )
        {
          sub_CFE430((__int64)v28, v14, 0);
          sub_E24D00(v28);
          sub_E232A0(v28);
          v25 = _mm_loadu_si128(v18);
          *(__m128i *)v28 = _mm_loadu_si128(v2);
          if ( !(unsigned __int8)sub_D596D0(v25.m128i_i64, (__int64 *)v28, v3, (void **)&v21) )
          {
            v25 = _mm_loadu_si128(v17);
            *(__m128i *)v28 = _mm_loadu_si128(v13);
            if ( !(unsigned __int8)sub_D596D0(v25.m128i_i64, (__int64 *)v28, v3, (void **)&v22) )
            {
              v12 = _mm_load_si128(&v22);
              v25 = _mm_load_si128(&v21);
              *(__m128i *)v28 = v12;
              if ( !(unsigned __int8)sub_D59A80(v25.m128i_i64, (__int64 *)v28, v3, (void **)v16)
                && !(unsigned __int8)sub_D49F10(*(_QWORD *)v16, *(_QWORD *)(v16 + 8), v23, v24, v3, (void **)v16) )
              {
                sub_CFE430((__int64)v28, v14, 1);
                sub_E24D00(v28);
                v9 = 1;
                sub_E232A0(v28);
                sub_E24D00(v14);
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
  }
  else
  {
LABEL_15:
    v28[0] = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    sub_E33BA0(a1, v28, 2508, 0);
  }
LABEL_11:
  v9 = 0;
LABEL_12:
  sub_E232A0(v27);
  sub_E232A0(v26);
  return v9;
}

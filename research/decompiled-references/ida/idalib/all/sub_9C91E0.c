char __fastcall sub_9C91E0(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // r15
  __int64 *v3; // rcx
  signed __int64 v4; // rax
  __int64 *v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rbp
  __m128i *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rsi
  __int64 *v13; // [rsp+0h] [rbp-148h]
  __int64 *v14; // [rsp+8h] [rbp-140h]
  __int64 v15; // [rsp+10h] [rbp-138h]
  unsigned __int64 v16; // [rsp+18h] [rbp-130h]
  char v17; // [rsp+2Fh] [rbp-119h] BYREF
  __m128i si128; // [rsp+30h] [rbp-118h]
  __int64 v19; // [rsp+40h] [rbp-108h]
  __m128i v20; // [rsp+50h] [rbp-F8h]
  __int64 v21; // [rsp+60h] [rbp-E8h]
  __m128i v22; // [rsp+70h] [rbp-D8h]
  __int64 v23; // [rsp+80h] [rbp-C8h]
  __m128i v24; // [rsp+90h] [rbp-B8h]
  __int64 v25; // [rsp+A0h] [rbp-A8h]
  __m128i v26; // [rsp+B0h] [rbp-98h]
  __int64 v27; // [rsp+C0h] [rbp-88h]
  __m128i v28; // [rsp+D0h] [rbp-78h]
  __int64 v29; // [rsp+E0h] [rbp-68h]
  __m128i v30; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+100h] [rbp-48h]

  v2 = a2;
  v3 = *(__int64 **)a1;
  v15 = *(unsigned int *)(a1 + 8);
  v19 = a2[1].m128i_i64[0];
  v21 = v19;
  v23 = v19;
  v25 = v19;
  v27 = v19;
  v31 = v19;
  v29 = v19;
  v4 = 0xAAAAAAAAAAAAAAABLL * ((24 * v15) >> 3);
  si128 = _mm_load_si128(a2);
  v20 = si128;
  v16 = (unsigned __int64)v3;
  v13 = &v3[3 * v15];
  v22 = si128;
  v24 = si128;
  v26 = si128;
  v30 = si128;
  v28 = si128;
  if ( !(v4 >> 2) )
  {
    v5 = v3;
LABEL_21:
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        if ( v4 != 1 )
          goto LABEL_13;
        goto LABEL_24;
      }
      LOBYTE(v8) = sub_9C91A0(v30.m128i_i64, v5);
      if ( (_BYTE)v8 )
        goto LABEL_9;
      v5 += 3;
    }
    LOBYTE(v8) = sub_9C91A0(v30.m128i_i64, v5);
    if ( (_BYTE)v8 )
      goto LABEL_9;
    v5 += 3;
LABEL_24:
    LOBYTE(v8) = sub_9C91A0(v30.m128i_i64, v5);
    if ( !(_BYTE)v8 )
      goto LABEL_13;
    goto LABEL_9;
  }
  v5 = v3;
  v6 = v30.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
  v14 = &v3[12 * (v4 >> 2)];
  v7 = (v30.m128i_i64[0] >> 1) & 1;
  while ( 1 )
  {
    if ( ((*v5 >> 1) & 1) == (_BYTE)v7 )
    {
      LOBYTE(v8) = sub_9C8F40((__int64)&v17, v6, *v5 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (_BYTE)v8 )
        break;
    }
    if ( (_BYTE)v7 == ((v5[3] >> 1) & 1) )
    {
      LOBYTE(v8) = sub_9C8F40((__int64)&v17, v6, v5[3] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (_BYTE)v8 )
      {
        v5 += 3;
        break;
      }
    }
    if ( (_BYTE)v7 == ((v5[6] >> 1) & 1) )
    {
      LOBYTE(v8) = sub_9C8F40((__int64)&v17, v6, v5[6] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (_BYTE)v8 )
      {
        v5 += 6;
        break;
      }
    }
    if ( (_BYTE)v7 == ((v5[9] >> 1) & 1) )
    {
      LOBYTE(v8) = sub_9C8F40((__int64)&v17, v6, v5[9] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (_BYTE)v8 )
      {
        if ( v13 != v5 + 9 )
          return (char)v8;
        goto LABEL_13;
      }
    }
    v5 += 12;
    if ( v14 == v5 )
    {
      v4 = 0xAAAAAAAAAAAAAAABLL * (v13 - v5);
      goto LABEL_21;
    }
  }
LABEL_9:
  if ( v13 != v5 )
    return (char)v8;
LABEL_13:
  v9 = v15 + 1;
  if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v11 = a1 + 16;
    if ( v16 <= (unsigned __int64)v2 && v13 > (__int64 *)v2 )
    {
      sub_2237220(a1, v11, v9, 24);
      v10 = *(__int64 **)a1;
      v2 = (const __m128i *)((char *)v2 + *(_QWORD *)a1 - v16);
      goto LABEL_15;
    }
    sub_2237220(a1, v11, v9, 24);
  }
  v10 = *(__int64 **)a1;
LABEL_15:
  v8 = (__m128i *)&v10[3 * *(unsigned int *)(a1 + 8)];
  *v8 = _mm_loadu_si128(v2);
  v8[1].m128i_i64[0] = v2[1].m128i_i64[0];
  ++*(_DWORD *)(a1 + 8);
  return (char)v8;
}

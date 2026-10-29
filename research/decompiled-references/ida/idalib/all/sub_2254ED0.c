__int64 __fastcall sub_2254ED0(
        __int64 a1,
        unsigned int a2,
        char *a3,
        size_t a4,
        unsigned __int8 a5,
        char a6,
        _QWORD *a7,
        __int64 a8)
{
  size_t v10; // rdx
  __int32 v11; // r13d
  int v12; // r9d
  int i; // ecx
  __int64 v14; // r8
  int v15; // r9d
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __int64 v20; // rbp
  __int64 v21; // rax
  char v22; // r12
  __m128i v23; // xmm4
  __m128i v24; // xmm5
  __m128i v25; // xmm6
  __m128i v26; // xmm7
  __m128i v27; // xmm4
  __m128i v28; // xmm7
  __m128i v29; // xmm5
  __m128i v30; // xmm6
  __m128i v31; // xmm7
  int v33; // [rsp+8h] [rbp-D0h]
  __int64 v34; // [rsp+10h] [rbp-C8h]
  char v35[12]; // [rsp+1Ch] [rbp-BCh] BYREF
  size_t v36; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v37; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v38; // [rsp+40h] [rbp-98h] BYREF
  __m128i v39; // [rsp+50h] [rbp-88h] BYREF
  int v40; // [rsp+60h] [rbp-78h] BYREF
  char v41; // [rsp+64h] [rbp-74h]
  char v42; // [rsp+74h] [rbp-64h]
  int v43; // [rsp+78h] [rbp-60h]
  __int64 v44; // [rsp+80h] [rbp-58h]
  __int64 v45; // [rsp+88h] [rbp-50h]

  v35[0] = a6;
  if ( a2 )
  {
    sub_2254B00((__int64)&v37, a2, a8);
    v36 = 0;
    if ( v37.m128i_i8[0] )
    {
      v10 = 0;
    }
    else
    {
      if ( !sub_2254C90(a3, a4, (char *)v38.m128i_i64[1], v39.m128i_u64[0], a5, &v36, v35, 0) )
      {
        v29 = _mm_load_si128(&v37);
        v30 = _mm_load_si128(&v38);
        *(_DWORD *)a1 = 0;
        v31 = _mm_load_si128(&v39);
        *(_BYTE *)(a1 + 4) = 0;
        *(__m128i *)(a1 + 8) = v29;
        *(__m128i *)(a1 + 24) = v30;
        *(__m128i *)(a1 + 40) = v31;
        return a1;
      }
      v10 = v36;
    }
    if ( a4 == v10 && v37.m128i_i32[1] != -1 )
    {
      v26 = _mm_load_si128(&v37);
      v27 = _mm_load_si128(&v39);
      *(_DWORD *)a1 = v37.m128i_i32[1];
      *(_BYTE *)(a1 + 4) = 1;
      *(__m128i *)(a1 + 8) = v26;
      v28 = _mm_load_si128(&v38);
      *(__m128i *)(a1 + 40) = v27;
      *(__m128i *)(a1 + 24) = v28;
      return a1;
    }
  }
  else
  {
    v10 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v37.m128i_i8[0] = 1;
    *(__int64 *)((char *)v37.m128i_i64 + 4) = 0x1FFFFFFFFLL;
    v38.m128i_i32[0] = 1;
    v39 = 0;
  }
  v11 = v37.m128i_i32[2];
  if ( v37.m128i_i32[2] || v37.m128i_i8[0] )
  {
    v12 = v35[0];
    if ( a4 < v10 )
      goto LABEL_9;
LABEL_5:
    for ( i = a4 - v10; ; i = 0 )
    {
      sub_2254ED0((unsigned int)&v40, v11, (_DWORD)a3 + v10, i, a5, v12, (__int64)a7, (__int64)&v37);
      v14 = v44;
      v15 = v40;
      if ( v41 )
        break;
      v11 += v43;
      if ( !v42 )
        goto LABEL_14;
      LODWORD(v10) = v36;
      v12 = v35[0];
      if ( a4 >= v36 )
        goto LABEL_5;
LABEL_9:
      LODWORD(v10) = a4;
    }
    v20 = v44 + v45;
    if ( v44 + v45 != v44 )
    {
      v21 = a7[1];
      do
      {
        while ( 1 )
        {
          v22 = *(_BYTE *)--v20;
          if ( (unsigned __int64)(v21 + 1) > a7[2] )
            break;
          *(_BYTE *)(*a7 + v21) = v22;
          v21 = a7[1] + 1LL;
          a7[1] = v21;
          if ( v20 == v14 )
            goto LABEL_21;
        }
        v34 = v14;
        v33 = v15;
        sub_2236E10((__int64)a7, a7 + 3, v21 + 1, 1);
        v14 = v34;
        v15 = v33;
        *(_BYTE *)(*a7 + a7[1]) = v22;
        v21 = a7[1] + 1LL;
        a7[1] = v21;
      }
      while ( v20 != v34 );
    }
LABEL_21:
    v23 = _mm_load_si128(&v37);
    v24 = _mm_load_si128(&v38);
    *(_DWORD *)a1 = v15;
    v25 = _mm_load_si128(&v39);
    *(_BYTE *)(a1 + 4) = 1;
    *(__m128i *)(a1 + 8) = v23;
    *(__m128i *)(a1 + 24) = v24;
    *(__m128i *)(a1 + 40) = v25;
  }
  else
  {
LABEL_14:
    v16 = _mm_load_si128(&v37);
    v17 = _mm_load_si128(&v38);
    *(_DWORD *)a1 = 0;
    v18 = _mm_load_si128(&v39);
    *(_BYTE *)(a1 + 4) = 0;
    *(__m128i *)(a1 + 8) = v16;
    *(__m128i *)(a1 + 24) = v17;
    *(__m128i *)(a1 + 40) = v18;
  }
  return a1;
}

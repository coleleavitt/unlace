__m128i *__fastcall sub_9B4ED0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 *v20; // r15
  unsigned int v21; // eax
  __m128i v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  unsigned __int32 v25; // eax
  __int64 v26; // rdx
  char v27; // al
  __int32 v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdi
  bool v34; // zf
  __m128i v35; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+10h] [rbp-98h]
  __int32 v37; // [rsp+1Ch] [rbp-8Ch]
  __m128i v38; // [rsp+20h] [rbp-88h] BYREF
  _BYTE *v39[4]; // [rsp+30h] [rbp-78h] BYREF
  __m128 v40; // [rsp+50h] [rbp-58h] BYREF
  __m128i v41[4]; // [rsp+60h] [rbp-48h] BYREF

  v10 = sub_F68450(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  v11 = *(_QWORD *)(a2 + 56);
  v36 = v10;
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v11 & 4) != 0 )
    v12 = (__int64 *)v12[4];
  v13 = *v12;
  v14 = (unsigned __int64)(v12 + 1);
  v15 = *v12;
  v16 = *v12 & 7;
  if ( v16 | (*v12 >> 3) & 1 && v13 )
  {
    v35.m128i_i64[0] = (__int64)(v12 + 1);
    v20 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v21 = sub_F6C520(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *v20;
    v14 = v21 * ((v35.m128i_i64[0] - (unsigned __int64)(v35.m128i_i64[0] != 0)) / v21 + (v35.m128i_i64[0] != 0));
    v15 = *v20;
    v13 = *v20;
    v16 = *v20 & 7;
  }
  else
  {
    v17 = *v12;
  }
  v38 = 0;
  if ( v16 | (v15 >> 3) & 1 )
    goto LABEL_9;
  v18 = *(unsigned __int8 *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v18 > 0x2A )
    goto LABEL_9;
  if ( ((1LL << v18) & 0x76) != 0 )
  {
    v22.m128i_i64[0] = sub_F6C7E0(v17, v14);
  }
  else
  {
    if ( ((1LL << v18) & 0x40000000000LL) == 0 )
    {
LABEL_9:
      a1[2].m128i_i8[0] = 0;
      return a1;
    }
    v35.m128i_i64[0] = v14;
    v40 = _mm_loadh_ps((const double *)v35.m128i_i64);
    v22.m128i_i64[0] = sub_9B4E80((__int64)&v40);
  }
  v35 = v22;
  v38 = _mm_load_si128(&v35);
  if ( !v38.m128i_i64[0] )
    goto LABEL_9;
  v35.m128i_i32[0] = *(_DWORD *)(a2 + 24);
  if ( !v35.m128i_i32[0] )
    goto LABEL_9;
  v37 = sub_F6CE20(&v38);
  v23 = sub_F6CCB0(&v38);
  if ( !v37 )
    goto LABEL_9;
  if ( !v23 )
    goto LABEL_9;
  v24 = sub_F6CE20(&v38);
  v25 = sub_13DC060(v24, 0, a3, a4);
  if ( !v25 )
    goto LABEL_9;
  v26 = v35.m128i_u32[0];
  v37 = v35.m128i_i32[0];
  v35.m128i_i32[0] = v25;
  v27 = sub_10246C0(a3, v25, v26);
  v28 = v35.m128i_i32[0];
  if ( v37 != v35.m128i_i32[0] && v27 != 1 )
    goto LABEL_9;
  v29 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
  v30 = (v29 >> 3) & 1;
  if ( v29 & 7 | v36 & 7 | (v36 >> 3) & 1 )
  {
    v33 = 0;
    if ( !v30 )
      goto LABEL_30;
    goto LABEL_34;
  }
  if ( v30 )
  {
LABEL_34:
    v33 = *(__int64 *)((char *)&qword_18 + (v29 & 0xFFFFFFFFFFFFFFF0LL));
LABEL_30:
    v34 = *(_BYTE *)(a5 + 8) == 0;
    *(_QWORD *)a5 = v33 | ((unsigned __int8)v29 | (unsigned __int8)v36) & 7;
    if ( v34 )
      *(_BYTE *)(a5 + 8) = 1;
  }
  v35.m128i_i32[0] = v28;
  v31 = sub_F6CCB0(&v38);
  sub_9B4C60((__int64)v39, ((unsigned __int64)v35.m128i_u32[0] << 32) | v31, a3, a4);
  if ( v39[0] )
  {
    v40.m128_u64[0] = (unsigned __int64)v41;
    sub_9B4B20(&v40, v39[0], (__int64)&v39[0][(unsigned __int64)v39[1]]);
  }
  else
  {
    v41[0].m128i_i8[0] = 0;
    v40 = (__m128)(unsigned __int64)v41;
  }
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)v40.m128_u64[0] == v41 )
  {
    a1[1] = _mm_load_si128(v41);
  }
  else
  {
    a1->m128i_i64[0] = v40.m128_u64[0];
    a1[1].m128i_i64[0] = v41[0].m128i_i64[0];
  }
  v32 = v40.m128_i64[1];
  a1[2].m128i_i8[0] = 1;
  a1->m128i_i64[1] = v32;
  return a1;
}

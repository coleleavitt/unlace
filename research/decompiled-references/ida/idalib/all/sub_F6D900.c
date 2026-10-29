unsigned __int64 __fastcall sub_F6D900(_QWORD *a1, unsigned int a2, const __m128i *a3)
{
  const __m128i *v5; // rbx
  void **v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int32 v9; // r15d
  _QWORD *v10; // rcx
  void **v11; // rdx
  signed __int64 v12; // rdx
  void **v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // edx
  void *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  __m128i *v19; // r8
  __int64 v20; // r11
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r11
  __m128i *v24; // r10
  __m128i v25; // xmm1
  __int64 v26; // rdx
  const __m128i *v27; // rsi
  __m128i *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v32; // [rsp+8h] [rbp-200h]
  __int64 v33; // [rsp+8h] [rbp-200h]
  unsigned __int64 v34; // [rsp+8h] [rbp-200h]
  __m128i *v35; // [rsp+10h] [rbp-1F8h]
  __m128i *v36; // [rsp+10h] [rbp-1F8h]
  __m128i *v37; // [rsp+18h] [rbp-1F0h]
  __int128 v38; // [rsp+20h] [rbp-1E8h]
  void *v39; // [rsp+30h] [rbp-1D8h]
  __m128i v40; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-1B8h]
  __int64 v42; // [rsp+58h] [rbp-1B0h]
  void *v43; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-1A0h]
  _QWORD v45[8]; // [rsp+70h] [rbp-198h] BYREF
  void *ptr; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-150h]
  _BYTE v48[256]; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v49; // [rsp+1C0h] [rbp-48h]

  v5 = a3 + 3;
  sub_B85890(&ptr, *(_QWORD *)(a3[2].m128i_i64[0] + 40));
  v6 = (void **)v45;
  DWORD2(v38) = a2;
  v7 = *(_QWORD *)(a3[2].m128i_i64[0] + 40);
  v43 = v45;
  *(_QWORD *)&v38 = v7;
  v44 = 0x800000000LL;
  v39 = ptr;
  v8 = a3[1].m128i_u32[1];
  if ( a3[1].m128i_i32[1] )
  {
    v9 = a3[1].m128i_i32[1];
    v10 = v45;
    if ( v8 > 8 )
    {
      v34 = a3[1].m128i_u32[1];
      sub_2237220(&v43, v45, v34, 8);
      v10 = v43;
      v8 = v34;
      v6 = (void **)((char *)v43 + 8 * (unsigned int)v44);
    }
    v11 = (void **)&v10[v8];
    if ( v11 != v6 )
    {
      v12 = (char *)v11 - (char *)v6;
      v13 = v6;
      v14 = ((unsigned __int64)(v12 - 8) >> 3) + 1;
      if ( v12 == 8 )
        goto LABEL_8;
      do
      {
        *(_OWORD *)v13 = 0;
        v13 += 2;
      }
      while ( &v6[2 * (v14 >> 1)] != v13 );
      v6 += v14 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v14 & 0xFFFFFFFFFFFFFFFELL) != v14 )
LABEL_8:
        *v6 = nullptr;
      v10 = v43;
    }
    v15 = a3[1].m128i_i32[1];
    LODWORD(v44) = v9;
    sub_F6D630(a1, (__int64)v5, v15, v10, a2);
    v19 = (__m128i *)v48;
    v49 = 0;
    ptr = v48;
    v47 = 0x800000000LL;
    if ( v9 )
    {
      v20 = (unsigned int)(v9 - 1);
      v17 = 8;
      v21 = 0;
      v22 = 0;
      v23 = 8 * v20;
      v24 = &v40;
      while ( 1 )
      {
        v25 = _mm_loadu_si128(v5);
        v26 = *(_QWORD *)((char *)v43 + v21);
        v41 = v5[1].m128i_i64[0];
        v27 = v24;
        v40 = v25;
        v42 = v26;
        v16 = (void *)(v22 + 1);
        v28 = &v19[2 * v22];
        if ( (unsigned __int64)v16 > v17 )
        {
          if ( v19 > v24 || v28 <= v24 )
          {
            v36 = v24;
            v33 = v23;
            sub_2237220(&ptr, v48, v16, 32);
            v24 = v36;
            v23 = v33;
            v27 = v36;
            v28 = (__m128i *)((char *)ptr + 32 * (unsigned int)v47);
          }
          else
          {
            v37 = v24;
            v35 = v19;
            v32 = v23;
            sub_2237220(&ptr, v48, v16, 32);
            v24 = v37;
            v19 = v35;
            v16 = ptr;
            v23 = v32;
            v27 = (const __m128i *)((char *)ptr + (char *)v37 - (char *)v35);
            v28 = (__m128i *)((char *)ptr + 32 * (unsigned int)v47);
          }
        }
        v5 = (const __m128i *)((char *)v5 + 24);
        *v28 = _mm_loadu_si128(v27);
        v28[1] = _mm_loadu_si128(v27 + 1);
        v22 = (unsigned int)(v47 + 1);
        LODWORD(v47) = v47 + 1;
        if ( v21 == v23 )
          break;
        v17 = HIDWORD(v47);
        v19 = (__m128i *)ptr;
        v21 += 8;
      }
    }
  }
  else
  {
    sub_F6D630(a1, (__int64)v5, 0, v45, a2);
    v49 = 0;
    ptr = v48;
    v47 = 0x800000000LL;
  }
  v29 = sub_F1ED40(a1, (__int64 *)&ptr, (__int64)v16, v17, (__int64)v19, v18);
  v30 = sub_A55700(a1, 0, 0, a2, 0, a3[2].m128i_i64[0], v38, (__int64)v39, v29);
  if ( ptr != v48 )
    free(ptr);
  if ( v43 != v45 )
    free(v43);
  return v30;
}

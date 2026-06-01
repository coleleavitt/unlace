void __fastcall sub_211EF30(__int64 a1, __int8 a2, __int64 a3)
{
  unsigned int v4; // edi
  void (*v5)(); // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // r9d
  bool v10; // r8
  const __m128i *v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 *v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  const __m128i *v19; // rsi
  void *v20; // rax
  _QWORD *v21; // rbp
  _QWORD *v22; // rbx
  _QWORD *v23; // rdi
  void *v24; // rdi
  unsigned __int64 *v25; // rax
  __int64 v26; // rdi
  __m128i v27; // [rsp+0h] [rbp-78h] BYREF
  __m128i v28; // [rsp+10h] [rbp-68h] BYREF
  void *v29; // [rsp+20h] [rbp-58h]
  _QWORD *v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+38h] [rbp-40h]
  __int32 v33; // [rsp+40h] [rbp-38h]
  __int64 v34; // [rsp+48h] [rbp-30h]
  __int8 v35; // [rsp+50h] [rbp-28h]
  __int8 v36; // [rsp+51h] [rbp-27h]
  int v37; // [rsp+54h] [rbp-24h]
  __int16 v38; // [rsp+58h] [rbp-20h]

  v4 = *(_DWORD *)(a1 + 56);
  if ( v4 && *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v4 - 8) == *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8LL) )
  {
    v26 = *(_QWORD *)(a1 + 8);
    LOWORD(v29) = 259;
    v27.m128i_i64[0] = (__int64)"starting new .cfi frame before finishing the previous one";
    sub_2100A30(v26, a3, (__int64)&v27);
  }
  else
  {
    v27 = 0u;
    v38 = 0;
    v5 = *(void (**)())(*(_QWORD *)a1 + 8LL);
    v35 = 0;
    v28 = 0u;
    v29 = nullptr;
    v30 = nullptr;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v37 = 0x7FFFFFFF;
    v36 = a2;
    if ( v5 != nullsub_1427 )
    {
      ((void (__fastcall *)(__int64, __m128i *))v5)(a1, &v27);
      v4 = *(_DWORD *)(a1 + 56);
    }
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 336);
      v8 = *(_QWORD *)(v6 + 344);
      if ( v7 != v8 )
      {
        v9 = v32;
        v10 = 0;
        do
        {
          if ( *(_BYTE *)(v7 + 32) == 7 || (unsigned __int8)(*(_BYTE *)(v7 + 32) - 4) <= 1u )
          {
            v9 = *(_DWORD *)(v7 + 8);
            v10 = *(_BYTE *)(v7 + 32) == 7 || (unsigned __int8)(*(_BYTE *)(v7 + 32) - 4) <= 1u;
          }
          v7 += 104;
        }
        while ( v8 != v7 );
        if ( v10 )
          LODWORD(v32) = v9;
      }
    }
    v11 = *(const __m128i **)(a1 + 32);
    v12 = *(unsigned int *)(a1 + 60);
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8LL);
    v14 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v11->m128i_i64 - *(_QWORD *)(a1 + 24)) >> 5);
    v15 = v4;
    if ( v4 >= v12 )
    {
      if ( v12 < (unsigned __int64)v4 + 1 )
      {
        sub_2237220(a1 + 48, a1 + 64, v4 + 1LL, 16);
        v15 = *(unsigned int *)(a1 + 56);
      }
      v25 = (unsigned __int64 *)(*(_QWORD *)(a1 + 48) + 16 * v15);
      *v25 = v14;
      v25[1] = v13;
      v11 = *(const __m128i **)(a1 + 32);
      ++*(_DWORD *)(a1 + 56);
    }
    else
    {
      v16 = (unsigned __int64 *)(*(_QWORD *)(a1 + 48) + 16LL * v4);
      *v16 = v14;
      v16[1] = v13;
      *(_DWORD *)(a1 + 56) = v4 + 1;
    }
    if ( *(const __m128i **)(a1 + 40) == v11 )
    {
      sub_211EB50(a1 + 24, v11, (__int64)&v27);
      v21 = v30;
      v22 = v29;
      if ( v30 != v29 )
      {
        do
        {
          while ( 1 )
          {
            v23 = (_QWORD *)v22[9];
            if ( v23 != v22 + 11 )
              operator delete(v23);
            v24 = (void *)v22[6];
            if ( !v24 )
              break;
            operator delete(v24);
            v22 += 13;
            if ( v21 == v22 )
              goto LABEL_23;
          }
          v22 += 13;
        }
        while ( v21 != v22 );
LABEL_23:
        v22 = v29;
      }
      if ( v22 )
        operator delete(v22);
    }
    else
    {
      v17 = _mm_load_si128(&v28);
      v18 = _mm_load_si128(&v27);
      v19 = v11 + 6;
      v19[-3].m128i_i64[0] = 0;
      v19[-5] = v17;
      v19[-4] = 0;
      v20 = v29;
      v19[-6] = v18;
      v19[-4].m128i_i64[0] = (__int64)v20;
      v19[-4].m128i_i64[1] = (__int64)v30;
      v19[-3].m128i_i64[0] = v31;
      v19[-3].m128i_i64[1] = v32;
      v19[-2].m128i_i32[0] = v33;
      v19[-2].m128i_i64[1] = v34;
      v19[-1].m128i_i8[0] = v35;
      v19[-1].m128i_i8[1] = v36;
      v19[-1].m128i_i32[1] = v37;
      v19[-1].m128i_i16[4] = v38;
      *(_QWORD *)(a1 + 32) = v19;
    }
  }
}

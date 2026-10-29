__int64 __fastcall sub_154ECC0(__int64 a1, const __m128i *a2, __m128i a3, __m128 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rdi
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __int32 v12; // eax
  __m128i v13; // xmm3
  unsigned __int64 v14; // r13
  __int32 v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rdi
  char *v19; // rax
  __m128i v20; // xmm4
  int v21; // edx
  int v22; // eax
  __m128i v23; // xmm5
  __m128i v24; // xmm7
  __m128i v25; // xmm6
  __int32 v26; // eax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  char *v29; // rdi
  char *v30; // rax
  __int32 v31; // r12d
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int16 v34; // [rsp+2h] [rbp-F6h]
  __int32 v35; // [rsp+4h] [rbp-F4h]
  int v36; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-E0h]
  __int64 v38; // [rsp+20h] [rbp-D8h]
  __int64 v39; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h]
  int v41; // [rsp+3Ch] [rbp-BCh]
  __m128i v42; // [rsp+40h] [rbp-B8h] BYREF
  int v43; // [rsp+50h] [rbp-A8h]
  int v44; // [rsp+54h] [rbp-A4h]
  char v45[8]; // [rsp+60h] [rbp-98h] BYREF
  __m128i v46; // [rsp+68h] [rbp-90h] BYREF
  __m128i v47; // [rsp+78h] [rbp-80h] BYREF
  __int64 v48; // [rsp+88h] [rbp-70h]
  __m128i v49; // [rsp+90h] [rbp-68h] BYREF
  __int32 v50; // [rsp+A0h] [rbp-58h]

  v5 = a2[6].m128i_i64[0];
  sub_18C74E0(v5, 4, 0, 1);
  if ( (unsigned __int8)sub_15612F0(a2, 2, v45) )
  {
    v6 = sub_1496480((__int64)a2, nullptr, 22, 3u, nullptr, 0, a3, a4);
    sub_1CB61F0(a1, a2[6].m128i_i64[0], v6, v7);
  }
  else
  {
    v9 = a2->m128i_i64[1];
    v10 = _mm_loadu_si128(a2 + 3);
    v11 = _mm_loadu_si128(a2 + 4);
    v48 = a2[5].m128i_i64[0];
    v12 = a2[2].m128i_i32[0];
    v13 = _mm_loadu_si128(a2 + 1);
    v46 = v10;
    v14 = a2[169].m128i_u32[2];
    v50 = v12;
    LOWORD(v12) = a2[5].m128i_i16[6];
    v47 = v11;
    v34 = v12;
    v15 = a2[5].m128i_i32[2];
    v49 = v13;
    v35 = v15;
    sub_1418D30(v9, 0);
    sub_154E6D0((__int64)&v36, a2);
    if ( v37 )
    {
      v16 = a2[169].m128i_u32[2];
      if ( v14 != v16 )
      {
        if ( v14 >= v16 )
        {
          if ( v14 > a2[169].m128i_u32[3] )
          {
            sub_2237220(&a2[169], &a2[170], v14, 8);
            v16 = a2[169].m128i_u32[2];
          }
          v17 = a2[169].m128i_i64[0];
          v18 = (char *)(v17 + 8 * v16);
          v19 = (char *)(v17 + 8 * v14);
          if ( v18 != v19 )
            memset(v18, 0, 8 * ((unsigned __int64)(v19 - 8 - v18) >> 3) + 8);
        }
        a2[169].m128i_i32[2] = v14;
      }
      sub_1417B70(a2->m128i_i64[1]);
      *(_DWORD *)a1 = v36;
      *(_QWORD *)(a1 + 8) = v37;
      *(_QWORD *)(a1 + 16) = v38;
      sub_E90750(a1 + 24, &v39);
      v20 = _mm_load_si128(&v42);
      v21 = v41;
      *(_DWORD *)(a1 + 64) = v43;
      v22 = v44;
      *(__m128i *)(a1 + 48) = v20;
      *(_DWORD *)(a1 + 68) = v22;
      if ( v21 )
        free(ptr);
    }
    else
    {
      sub_1417BC0(a2->m128i_i64[1]);
      v23 = _mm_loadu_si128(&v46);
      v24 = _mm_load_si128(&v49);
      v25 = _mm_loadu_si128(&v47);
      a2[5].m128i_i64[0] = v48;
      v26 = v50;
      a2[3] = v23;
      a2[2].m128i_i32[0] = v26;
      v27 = a2[169].m128i_u32[2];
      a2[4] = v25;
      a2[1] = v24;
      if ( v14 != v27 )
      {
        if ( v14 >= v27 )
        {
          if ( v14 > a2[169].m128i_u32[3] )
          {
            sub_2237220(&a2[169], &a2[170], v14, 8);
            v27 = a2[169].m128i_u32[2];
          }
          v28 = a2[169].m128i_i64[0];
          v29 = (char *)(v28 + 8 * v27);
          v30 = (char *)(v28 + 8 * v14);
          if ( v29 != v30 )
            memset(v29, 0, 8 * ((unsigned __int64)(v30 - 8 - v29) >> 3) + 8);
        }
        a2[169].m128i_i32[2] = v14;
      }
      a2[5].m128i_i32[2] = v35;
      a2[5].m128i_i16[6] = v34;
      if ( v41 )
        free(ptr);
      v31 = a2[1].m128i_i32[0];
      if ( (*(_BYTE *)(*(_QWORD *)(a2->m128i_i64[1] + 56) + 1LL) & 0x10) != 0 && a2[2].m128i_i16[0] == 24 )
        v32 = sub_14EE310((__int64)a2, a3);
      else
        v32 = sub_14C4B50(a2, 2u, a3);
      if ( v32 != 1 && (v33 = v32 & 0xFFFFFFFFFFFFFFFELL) != 0 )
      {
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v33;
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 40) = 0;
        *(_QWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 56) = 0;
        *(_DWORD *)(a1 + 64) = v31;
        *(_DWORD *)(a1 + 68) = 0;
      }
      else
      {
        *(_DWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 40) = 0;
        *(_QWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0;
      }
    }
  }
  sub_190D5E0(v5);
  return a1;
}

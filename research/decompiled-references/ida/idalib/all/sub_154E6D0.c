__int64 __fastcall sub_154E6D0(__int64 a1, const __m128i *a2)
{
  __int16 v3; // ax
  __int16 v4; // ax
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __m128i v8; // xmm1
  int v9; // edx
  int v10; // eax
  __int32 v12; // eax
  __int64 v13; // rdx
  unsigned __int32 v14; // r14d
  __int64 *v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rax
  void *v18; // rdx
  __m128i v19; // xmm2
  __int64 *v20; // rdi
  __int64 *v21; // rdi
  unsigned __int32 v22; // r15d
  __m128i v23; // xmm3
  __int32 v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // rdi
  int v27; // eax
  unsigned __int64 v28; // rax
  void *v29; // rdx
  __m128i v30; // xmm5
  __int64 *v31; // rdi
  unsigned __int32 v32; // [rsp+Ch] [rbp-13Ch]
  _BYTE v33[9]; // [rsp+17h] [rbp-131h] BYREF
  int v34; // [rsp+20h] [rbp-128h]
  __int64 v35; // [rsp+28h] [rbp-120h]
  __int32 v36; // [rsp+38h] [rbp-110h]
  __int32 v37; // [rsp+3Ch] [rbp-10Ch]
  __int128 v38; // [rsp+40h] [rbp-108h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-F8h]
  __m128i v40; // [rsp+60h] [rbp-E8h] BYREF
  int v41; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-D0h]
  __int64 v43; // [rsp+80h] [rbp-C8h]
  void *v44[2]; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+98h] [rbp-B0h]
  __m128i v46; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-98h]
  int v48; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-80h]
  __int64 v50; // [rsp+D0h] [rbp-78h]
  char v51[8]; // [rsp+D8h] [rbp-70h] BYREF
  void *v52; // [rsp+E0h] [rbp-68h]
  int v53; // [rsp+ECh] [rbp-5Ch]
  __m128i v54; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+100h] [rbp-48h]

  v3 = a2[2].m128i_i16[0];
  if ( v3 != 5 && v3 != 72 && v3 != 416 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 64) = 0;
    return a1;
  }
  v38 = 0;
  *(_OWORD *)ptr = 0;
  v40 = 0;
  sub_14D0170(a2, (__int64)&v38, 0, 0, 0, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0);
  v4 = a2[2].m128i_i16[0];
  v41 = 0;
  v42 = 0;
  v43 = 0;
  *(_OWORD *)v44 = 0;
  v45 = 0;
  v46 = 0u;
  v47 = 0;
  if ( *((_QWORD *)&v38 + 1) && v4 == 146 )
  {
    v20 = (__int64 *)a2->m128i_i64[1];
    a2[2].m128i_i32[2] = a2[1].m128i_i32[0];
    sub_14634E0(v20, a2[1].m128i_i32);
    if ( a2[2].m128i_i16[0] != 5 )
    {
      v5 = v42;
LABEL_25:
      v6 = v41;
      goto LABEL_8;
    }
    v24 = a2[1].m128i_i32[0];
    v25 = a2[1].m128i_i64[1];
    v14 = 0;
    v26 = (__int64 *)a2->m128i_i64[1];
    v34 = 0;
    a2[2].m128i_i32[2] = v24;
    v37 = v24;
    v36 = v24;
    v35 = v25;
    sub_14634E0(v26, a2[1].m128i_i32);
    v27 = a2[2].m128i_u16[0];
    if ( (_WORD)v27 == 27 )
    {
      v31 = (__int64 *)a2->m128i_i64[1];
      a2[2].m128i_i32[2] = a2[1].m128i_i32[0];
      sub_14634E0(v31, a2[1].m128i_i32);
      v14 = a2[2].m128i_u32[2];
      v27 = a2[2].m128i_u16[0];
    }
    v28 = (unsigned int)(v27 - 52);
    *(_QWORD *)&v33[1] = 0;
    if ( (unsigned __int16)v28 > 0x17u
      || (v29 = &loc_804003, !_bittest64((const __int64 *)&v29, v28))
      || !(unsigned int)sub_1CE5E60(a2[6].m128i_i64[0], 0, (__int64)&v33[1], 0) )
    {
LABEL_18:
      v5 = v42;
      if ( v14 && v42 )
      {
        sub_1E545A0(&v48, a2[6].m128i_i64[0], &v41, v14);
        v41 = v48;
        v42 = v49;
        v43 = v50;
        sub_E907B0((__int64)v44, (__int64)v51);
        v19 = _mm_load_si128(&v54);
        v47 = v55;
        v46 = v19;
        if ( v53 )
          free(v52);
        v6 = v41;
        v5 = v42;
        goto LABEL_8;
      }
      goto LABEL_25;
    }
    v48 = 2;
    v49 = *(_QWORD *)&v33[1];
    v32 = v36;
    v50 = v38;
    sub_E90750((__int64)v51, (__int64 *)&v38 + 1);
    v30 = _mm_load_si128(&v40);
    v55 = v32;
    v54 = v30;
    v41 = v48;
    v42 = v49;
    v43 = v50;
    sub_E907B0((__int64)v44, (__int64)v51);
    v46 = _mm_load_si128(&v54);
LABEL_27:
    v47 = v55;
    if ( v53 )
      free(v52);
    goto LABEL_18;
  }
  if ( v4 == 5 )
  {
    v12 = a2[1].m128i_i32[0];
    v13 = a2[1].m128i_i64[1];
    v14 = 0;
    v15 = (__int64 *)a2->m128i_i64[1];
    *(_QWORD *)&v33[1] = 0;
    a2[2].m128i_i32[2] = v12;
    v37 = v12;
    v36 = v12;
    v34 = 0;
    v35 = v13;
    sub_14634E0(v15, a2[1].m128i_i32);
    v16 = a2[2].m128i_u16[0];
    if ( (_WORD)v16 == 27 )
    {
      v21 = (__int64 *)a2->m128i_i64[1];
      a2[2].m128i_i32[2] = a2[1].m128i_i32[0];
      sub_14634E0(v21, a2[1].m128i_i32);
      v14 = a2[2].m128i_u32[2];
      v16 = a2[2].m128i_u16[0];
    }
    v17 = (unsigned int)(v16 - 52);
    if ( (unsigned __int16)v17 > 0x17u )
      goto LABEL_18;
    v18 = &loc_804003;
    if ( !_bittest64((const __int64 *)&v18, v17)
      || (((unsigned int)sub_1CE58C0(a2[6].m128i_i64[0], 0, (__int64)&v33[1], (__int64)v33, 0) - 2) & 0xFFFFFFFD) != 0 )
    {
      goto LABEL_18;
    }
    v22 = v36;
    v48 = 2;
    v49 = *(_QWORD *)&v33[1];
    v50 = v38;
    sub_E90750((__int64)v51, (__int64 *)&v38 + 1);
    v23 = _mm_load_si128(&v40);
    v55 = v22;
    v41 = v48;
    v54 = v23;
    v42 = v49;
    v43 = v50;
    sub_E907B0((__int64)v44, (__int64)v51);
    v46 = _mm_load_si128(&v54);
    goto LABEL_27;
  }
  v5 = 0;
  v6 = 0;
LABEL_8:
  *(_QWORD *)(a1 + 8) = v5;
  v7 = v43;
  *(_DWORD *)a1 = v6;
  *(_QWORD *)(a1 + 16) = v7;
  sub_E90750(a1 + 24, (__int64 *)v44);
  v8 = _mm_load_si128(&v46);
  v9 = HIDWORD(v45);
  *(_DWORD *)(a1 + 64) = v47;
  v10 = HIDWORD(v47);
  *(__m128i *)(a1 + 48) = v8;
  *(_DWORD *)(a1 + 68) = v10;
  if ( v9 )
    free(v44[1]);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  return a1;
}

void __fastcall sub_AB0320(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm2
  __m128i *v11; // rdx
  __int64 v12; // rdx
  __m128i *v13; // rdi
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm4
  __m128i *v22; // rdx
  __m128i v23; // xmm0
  void (__fastcall *v24)(__m128i *, __m128i *, __int64); // rax
  __int64 v25; // r12
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdi
  void (__fastcall *v33)(__int64, __int64, __int64); // rax
  __int64 v34; // rax
  _BYTE *v35; // rax
  __m128i v37; // [rsp+10h] [rbp-C8h] BYREF
  __m128 v38; // [rsp+20h] [rbp-B8h]
  __int64 v39; // [rsp+30h] [rbp-A8h]
  __m128i v40; // [rsp+38h] [rbp-A0h] BYREF
  void *v41; // [rsp+48h] [rbp-90h] BYREF
  __int64 v42; // [rsp+50h] [rbp-88h]
  __m128i v43; // [rsp+58h] [rbp-80h] BYREF
  __int64 v44; // [rsp+70h] [rbp-68h] BYREF
  __m128i v45; // [rsp+78h] [rbp-60h] BYREF
  void *v46; // [rsp+88h] [rbp-50h]
  __int64 v47; // [rsp+90h] [rbp-48h]
  __m128i v48[4]; // [rsp+98h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    v25 = a4 + 8;
    sub_F06E30(a4 + 8, a5);
    sub_AAE4E0(v25, 0, 0, *(_QWORD *)(a5 + 8), a4, v26);
    v27 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v27 )
    {
      v28 = *(_QWORD *)(a1 + 16);
      v37.m128i_i8[0] = 1;
      v29 = v28 + 32 * v27 - 32;
      if ( !*(_QWORD *)(v29 + 16) )
        goto LABEL_35;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v29 + 24))(v29, &v37);
        v31 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v31;
        v32 = *(_QWORD *)(a1 + 16) + 32 * v31;
        v33 = *(void (__fastcall **)(__int64, __int64, __int64))(v32 + 16);
        if ( v33 )
          v33(v32, v32, 3);
        v34 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v34 )
          break;
        v30 = *(_QWORD *)(a1 + 16);
        v37.m128i_i8[0] = 1;
        v29 = v30 + 32 * v34 - 32;
        if ( !*(_QWORD *)(v29 + 16) )
          goto LABEL_35;
      }
    }
    v35 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v35 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v39 = a1;
  v40.m128i_i64[0] = a4;
  v40.m128i_i64[1] = a5;
  v41 = &v43;
  if ( a2 )
  {
    sub_AA6CE0(&v41, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v14 = *(_BYTE *)(a1 + 1057) == 0;
  v43.m128i_i8[0] = 0;
  v42 = 0;
  if ( v14 )
  {
LABEL_16:
    v15 = *(unsigned int *)(a1 + 24);
    v16 = *(_QWORD *)(a1 + 16);
    LOBYTE(v44) = 0;
    v17 = v16 + 32 * v15 - 32;
    if ( *(_QWORD *)(v17 + 16) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v17 + 24))(v17, &v44);
      v18 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v45 = _mm_loadu_si128(&v40);
      v44 = v39;
      v46 = v48;
      if ( v41 == &v43 )
      {
        v48[0] = _mm_loadu_si128(&v43);
      }
      else
      {
        v46 = v41;
        v48[0].m128i_i64[0] = v43.m128i_i64[0];
      }
      v19 = v42;
      v42 = 0;
      v43.m128i_i8[0] = 0;
      v47 = v19;
      v41 = &v43;
      v38.m128_u64[0] = 0;
      v20 = operator new(0x38u);
      v21 = _mm_loadu_si128(&v45);
      *(_QWORD *)v20 = v44;
      *(_QWORD *)(v20 + 24) = v20 + 40;
      v22 = (__m128i *)v46;
      *(__m128i *)(v20 + 8) = v21;
      if ( v22 == v48 )
      {
        *(__m128i *)(v20 + 40) = _mm_loadu_si128(v48);
      }
      else
      {
        *(_QWORD *)(v20 + 24) = v22;
        *(_QWORD *)(v20 + 40) = v48[0].m128i_i64[0];
      }
      v37.m128i_i64[0] = v20;
      v48[0].m128i_i8[0] = 0;
      v23 = _mm_load_si128(&v37);
      *(_QWORD *)(v20 + 32) = v47;
      v46 = v48;
      v47 = 0;
      v37 = _mm_loadu_si128(v18);
      v24 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v18[1].m128i_i64[0];
      *v18 = v23;
      v38.m128_u64[0] = (unsigned __int64)v24;
      v18[1].m128i_i64[0] = (__int64)sub_AA7210;
      v38.m128_u64[1] = v18[1].m128i_u64[1];
      v18[1].m128i_i64[1] = (__int64)sub_AB26F0;
      if ( v24 )
        v24(&v37, &v37, 3);
      goto LABEL_10;
    }
LABEL_35:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v7 = _mm_loadu_si128(&v40);
  v44 = v39;
  v46 = v48;
  v45 = v7;
  if ( v41 == &v43 )
  {
    v48[0] = _mm_loadu_si128(&v43);
  }
  else
  {
    v46 = v41;
    v48[0].m128i_i64[0] = v43.m128i_i64[0];
  }
  v8 = v42;
  v42 = 0;
  v43.m128i_i8[0] = 0;
  v47 = v8;
  v41 = &v43;
  v38.m128_u64[0] = 0;
  v9 = operator new(0x38u);
  v10 = _mm_loadu_si128(&v45);
  *(_QWORD *)v9 = v44;
  *(_QWORD *)(v9 + 24) = v9 + 40;
  v11 = (__m128i *)v46;
  *(__m128i *)(v9 + 8) = v10;
  if ( v11 == v48 )
  {
    *(__m128i *)(v9 + 40) = _mm_loadu_si128(v48);
  }
  else
  {
    *(_QWORD *)(v9 + 24) = v11;
    *(_QWORD *)(v9 + 40) = v48[0].m128i_i64[0];
  }
  v12 = v47;
  v37.m128i_i64[0] = v9;
  v47 = 0;
  *(_QWORD *)(v9 + 32) = v12;
  v46 = v48;
  v48[0].m128i_i8[0] = 0;
  v38 = _mm_loadh_ps((const double *)off_2C4E758);
  sub_AA95F0(a1 + 16, &v37);
  if ( v38.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v38.m128_u64[0])(&v37, &v37, 3);
LABEL_10:
  if ( v46 != v48 )
    operator delete(v46);
  v13 = (__m128i *)v41;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v13 != &v43 )
    operator delete(v13);
}


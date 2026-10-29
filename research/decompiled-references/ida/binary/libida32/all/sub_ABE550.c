void __fastcall sub_ABE550(char *a1, char *a2, size_t a3, __int64 a4, __int64 a5)
{
  char v8; // al
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i *v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm3
  __int64 v16; // rax
  __m128i v17; // xmm4
  __m128i v18; // xmm0
  __int64 (__fastcall *v19)(__int64 *, __int64 *, int); // rax
  __m128i *v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i si128; // xmm2
  char *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rdi
  void (__fastcall *v37)(__int64, __int64, __int64); // rax
  __int64 v38; // rax
  void *v39[2]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v40[16]; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v41; // [rsp+20h] [rbp-D8h] BYREF
  __int64 (__fastcall *v42)(__int64 *, __int64 *, int); // [rsp+30h] [rbp-C8h]
  __int64 (__fastcall *v43)(); // [rsp+38h] [rbp-C0h]
  char v44; // [rsp+40h] [rbp-B8h]
  char *v45; // [rsp+48h] [rbp-B0h]
  void *v46; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A0h]
  __m128i v48; // [rsp+60h] [rbp-98h] BYREF
  __m128i v49; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v50[8]; // [rsp+80h] [rbp-78h] BYREF
  char *v51; // [rsp+88h] [rbp-70h]
  void *v52; // [rsp+90h] [rbp-68h]
  __int64 v53; // [rsp+98h] [rbp-60h]
  __m128i v54; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v55[4]; // [rsp+B0h] [rbp-48h] BYREF

  if ( a1[1] )
  {
    a1[1] = 0;
    v26 = a1 + 1048;
    sub_2205CB0(a1 + 1048);
    sub_E45C30(a4 + 8, a5);
    if ( a5 )
    {
      sub_ABE310(a4, a5, v27, v28, v29);
      v30 = sub_F473B0(a5);
      if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) != v30 )
        sub_ABF9B0(a4, v30);
    }
    v31 = *((unsigned int *)a1 + 4);
    if ( (_DWORD)v31 )
    {
      v32 = *((_QWORD *)a1 + 1);
      v41.m128i_i8[0] = 1;
      v33 = v32 + 32 * v31 - 32;
      if ( !*(_QWORD *)(v33 + 16) )
        goto LABEL_40;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v33 + 24))(v33, &v41);
        v35 = (unsigned int)(*((_DWORD *)a1 + 4) - 1);
        *((_DWORD *)a1 + 4) = v35;
        v36 = *((_QWORD *)a1 + 1) + 32 * v35;
        v37 = *(void (__fastcall **)(__int64, __int64, __int64))(v36 + 16);
        if ( v37 )
          v37(v36, v36, 3);
        v38 = *((unsigned int *)a1 + 4);
        if ( !(_DWORD)v38 )
          break;
        v34 = *((_QWORD *)a1 + 1);
        v41.m128i_i8[0] = 1;
        v33 = v34 + 32 * v38 - 32;
        if ( !*(_QWORD *)(v33 + 16) )
          goto LABEL_40;
      }
    }
    sub_2205E20(v26);
    a1[1] = 1;
    return;
  }
  if ( !a3 )
  {
    a2 = "inner";
    a3 = j__strlen("inner");
  }
  v39[0] = v40;
  sub_AA6CE0(v39, a2, (__int64)&a2[a3]);
  v8 = *a1;
  v45 = a1;
  v46 = &v48;
  v44 = v8;
  sub_AA6DA0(&v46, (_BYTE *)v39[0], (__int64)v39[0] + (unsigned __int64)v39[1]);
  v9 = *a1 == 0;
  v49.m128i_i64[0] = a4;
  v49.m128i_i64[1] = a5;
  if ( !v9 )
  {
    v50[0] = v44;
    v51 = v45;
    v52 = &v54;
    if ( v46 == &v48 )
    {
      v54 = _mm_load_si128(&v48);
    }
    else
    {
      v52 = v46;
      v54.m128i_i64[0] = v48.m128i_i64[0];
    }
    v21 = v47;
    v22 = _mm_load_si128(&v49);
    v47 = 0;
    v48.m128i_i8[0] = 0;
    v53 = v21;
    v46 = &v48;
    v55[0] = v22;
    v42 = nullptr;
    v23 = operator new(0x40u);
    *(_BYTE *)v23 = v50[0];
    *(_QWORD *)(v23 + 8) = v51;
    *(_QWORD *)(v23 + 16) = v23 + 32;
    if ( v52 == &v54 )
    {
      *(__m128i *)(v23 + 32) = _mm_load_si128(&v54);
    }
    else
    {
      *(_QWORD *)(v23 + 16) = v52;
      *(_QWORD *)(v23 + 32) = v54.m128i_i64[0];
    }
    v24 = v53;
    v41.m128i_i64[0] = v23;
    si128 = _mm_load_si128(v55);
    v53 = 0;
    *(_QWORD *)(v23 + 24) = v24;
    *(__m128i *)(v23 + 48) = si128;
    v52 = &v54;
    v43 = sub_AC0D90;
    v54.m128i_i8[0] = 0;
    v42 = sub_AA75E0;
    sub_AA95F0((__int64)(a1 + 8), &v41);
    if ( v42 )
      v42(v41.m128i_i64, v41.m128i_i64, 3);
    goto LABEL_12;
  }
  v10 = *((unsigned int *)a1 + 4);
  v11 = *((_QWORD *)a1 + 1);
  v50[0] = 0;
  v12 = v11 + 32 * v10 - 32;
  if ( !*(_QWORD *)(v12 + 16) )
LABEL_40:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, _BYTE *))(v12 + 24))(v12, v50);
  v13 = (__m128i *)(*((_QWORD *)a1 + 1) + 32LL * *((unsigned int *)a1 + 4) - 32);
  v50[0] = v44;
  v51 = v45;
  v52 = &v54;
  if ( v46 == &v48 )
  {
    v54 = _mm_load_si128(&v48);
  }
  else
  {
    v52 = v46;
    v54.m128i_i64[0] = v48.m128i_i64[0];
  }
  v14 = v47;
  v15 = _mm_load_si128(&v49);
  v47 = 0;
  v48.m128i_i8[0] = 0;
  v53 = v14;
  v46 = &v48;
  v55[0] = v15;
  v42 = nullptr;
  v16 = operator new(0x40u);
  *(_BYTE *)v16 = v50[0];
  *(_QWORD *)(v16 + 8) = v51;
  *(_QWORD *)(v16 + 16) = v16 + 32;
  if ( v52 == &v54 )
  {
    *(__m128i *)(v16 + 32) = _mm_load_si128(&v54);
  }
  else
  {
    *(_QWORD *)(v16 + 16) = v52;
    *(_QWORD *)(v16 + 32) = v54.m128i_i64[0];
  }
  v41.m128i_i64[0] = v16;
  v17 = _mm_load_si128(v55);
  v54.m128i_i8[0] = 0;
  *(_QWORD *)(v16 + 24) = v53;
  v18 = _mm_load_si128(&v41);
  v52 = &v54;
  *(__m128i *)(v16 + 48) = v17;
  v53 = 0;
  v41 = _mm_loadu_si128(v13);
  v19 = (__int64 (__fastcall *)(__int64 *, __int64 *, int))v13[1].m128i_i64[0];
  *v13 = v18;
  v42 = v19;
  v13[1].m128i_i64[0] = (__int64)sub_AA75E0;
  v43 = (__int64 (__fastcall *)())v13[1].m128i_i64[1];
  v13[1].m128i_i64[1] = (__int64)sub_AC0D90;
  if ( v19 )
    v19(v41.m128i_i64, v41.m128i_i64, 3);
LABEL_12:
  if ( v52 != &v54 )
    operator delete(v52);
  v20 = (__m128i *)v46;
  *a1 = 0;
  if ( v20 != &v48 )
    operator delete(v20);
  if ( v39[0] != v40 )
    operator delete(v39[0]);
}


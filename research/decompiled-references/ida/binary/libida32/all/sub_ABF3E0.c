void __fastcall sub_ABF3E0(char *a1, char *a2, size_t a3, __int64 a4, __int64 a5)
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
  size_t v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdi
  void (__fastcall *v35)(__int64, __int64, __int64); // rax
  __int64 v36; // rax
  void *v37[2]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v38[16]; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v39; // [rsp+20h] [rbp-D8h] BYREF
  __int64 (__fastcall *v40)(__int64 *, __int64 *, int); // [rsp+30h] [rbp-C8h]
  __int64 (__fastcall *v41)(__int64, char *); // [rsp+38h] [rbp-C0h]
  char v42; // [rsp+40h] [rbp-B8h]
  char *v43; // [rsp+48h] [rbp-B0h]
  void *v44; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A0h]
  __m128i v46; // [rsp+60h] [rbp-98h] BYREF
  __m128i v47; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v48[8]; // [rsp+80h] [rbp-78h] BYREF
  char *v49; // [rsp+88h] [rbp-70h]
  void *v50; // [rsp+90h] [rbp-68h]
  __int64 v51; // [rsp+98h] [rbp-60h]
  __m128i v52; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v53[4]; // [rsp+B0h] [rbp-48h] BYREF

  if ( a1[1] )
  {
    a1[1] = 0;
    v26 = a1 + 1048;
    sub_2205CB0(a1 + 1048);
    sub_E42120(a4 + 8, a5);
    v27 = sub_AA6CD0(a4 + 8);
    sub_ABE550((char *)(a4 + 8), (char *)&byte_22CD811, v27, a4, v28);
    v29 = *((unsigned int *)a1 + 4);
    if ( (_DWORD)v29 )
    {
      v30 = *((_QWORD *)a1 + 1);
      v39.m128i_i8[0] = 1;
      v31 = v30 + 32 * v29 - 32;
      if ( !*(_QWORD *)(v31 + 16) )
        goto LABEL_37;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v31 + 24))(v31, &v39);
        v33 = (unsigned int)(*((_DWORD *)a1 + 4) - 1);
        *((_DWORD *)a1 + 4) = v33;
        v34 = *((_QWORD *)a1 + 1) + 32 * v33;
        v35 = *(void (__fastcall **)(__int64, __int64, __int64))(v34 + 16);
        if ( v35 )
          v35(v34, v34, 3);
        v36 = *((unsigned int *)a1 + 4);
        if ( !(_DWORD)v36 )
          break;
        v32 = *((_QWORD *)a1 + 1);
        v39.m128i_i8[0] = 1;
        v31 = v32 + 32 * v36 - 32;
        if ( !*(_QWORD *)(v31 + 16) )
          goto LABEL_37;
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
  v37[0] = v38;
  sub_AA6CE0(v37, a2, (__int64)&a2[a3]);
  v8 = *a1;
  v43 = a1;
  v44 = &v46;
  v42 = v8;
  sub_AA6DA0(&v44, (_BYTE *)v37[0], (__int64)v37[0] + (unsigned __int64)v37[1]);
  v9 = *a1 == 0;
  v47.m128i_i64[0] = a4;
  v47.m128i_i64[1] = a5;
  if ( !v9 )
  {
    v48[0] = v42;
    v49 = v43;
    v50 = &v52;
    if ( v44 == &v46 )
    {
      v52 = _mm_load_si128(&v46);
    }
    else
    {
      v50 = v44;
      v52.m128i_i64[0] = v46.m128i_i64[0];
    }
    v21 = v45;
    v22 = _mm_load_si128(&v47);
    v45 = 0;
    v46.m128i_i8[0] = 0;
    v51 = v21;
    v44 = &v46;
    v53[0] = v22;
    v40 = nullptr;
    v23 = operator new(0x40u);
    *(_BYTE *)v23 = v48[0];
    *(_QWORD *)(v23 + 8) = v49;
    *(_QWORD *)(v23 + 16) = v23 + 32;
    if ( v50 == &v52 )
    {
      *(__m128i *)(v23 + 32) = _mm_load_si128(&v52);
    }
    else
    {
      *(_QWORD *)(v23 + 16) = v50;
      *(_QWORD *)(v23 + 32) = v52.m128i_i64[0];
    }
    v24 = v51;
    v39.m128i_i64[0] = v23;
    si128 = _mm_load_si128(v53);
    v51 = 0;
    *(_QWORD *)(v23 + 24) = v24;
    *(__m128i *)(v23 + 48) = si128;
    v50 = &v52;
    v41 = sub_ABF250;
    v52.m128i_i8[0] = 0;
    v40 = sub_AA7520;
    sub_AA95F0((__int64)(a1 + 8), &v39);
    if ( v40 )
      v40(v39.m128i_i64, v39.m128i_i64, 3);
    goto LABEL_12;
  }
  v10 = *((unsigned int *)a1 + 4);
  v11 = *((_QWORD *)a1 + 1);
  v48[0] = 0;
  v12 = v11 + 32 * v10 - 32;
  if ( !*(_QWORD *)(v12 + 16) )
LABEL_37:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, _BYTE *))(v12 + 24))(v12, v48);
  v13 = (__m128i *)(*((_QWORD *)a1 + 1) + 32LL * *((unsigned int *)a1 + 4) - 32);
  v48[0] = v42;
  v49 = v43;
  v50 = &v52;
  if ( v44 == &v46 )
  {
    v52 = _mm_load_si128(&v46);
  }
  else
  {
    v50 = v44;
    v52.m128i_i64[0] = v46.m128i_i64[0];
  }
  v14 = v45;
  v15 = _mm_load_si128(&v47);
  v45 = 0;
  v46.m128i_i8[0] = 0;
  v51 = v14;
  v44 = &v46;
  v53[0] = v15;
  v40 = nullptr;
  v16 = operator new(0x40u);
  *(_BYTE *)v16 = v48[0];
  *(_QWORD *)(v16 + 8) = v49;
  *(_QWORD *)(v16 + 16) = v16 + 32;
  if ( v50 == &v52 )
  {
    *(__m128i *)(v16 + 32) = _mm_load_si128(&v52);
  }
  else
  {
    *(_QWORD *)(v16 + 16) = v50;
    *(_QWORD *)(v16 + 32) = v52.m128i_i64[0];
  }
  v39.m128i_i64[0] = v16;
  v17 = _mm_load_si128(v53);
  v52.m128i_i8[0] = 0;
  *(_QWORD *)(v16 + 24) = v51;
  v18 = _mm_load_si128(&v39);
  *(__m128i *)(v16 + 48) = v17;
  v50 = &v52;
  v51 = 0;
  v39 = _mm_loadu_si128(v13);
  v19 = (__int64 (__fastcall *)(__int64 *, __int64 *, int))v13[1].m128i_i64[0];
  *v13 = v18;
  v40 = v19;
  v13[1].m128i_i64[0] = (__int64)sub_AA7520;
  v41 = (__int64 (__fastcall *)(__int64, char *))v13[1].m128i_i64[1];
  v13[1].m128i_i64[1] = (__int64)sub_ABF250;
  if ( v19 )
    v19(v39.m128i_i64, v39.m128i_i64, 3);
LABEL_12:
  if ( v50 != &v52 )
    operator delete(v50);
  v20 = (__m128i *)v44;
  *a1 = 0;
  if ( v20 != &v46 )
    operator delete(v20);
  if ( v37[0] != v38 )
    operator delete(v37[0]);
}


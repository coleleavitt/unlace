void __fastcall sub_AE14F0(char *a1, char *a2, size_t a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  char v7; // al
  __m128i v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i *v12; // r14
  __int64 v13; // rax
  __m128i v14; // xmm4
  __int64 v15; // rax
  __m128i v16; // xmm5
  __m128i v17; // xmm0
  __int64 (__fastcall *v18)(__m128i **, __m128i **, int); // rax
  __m128i *v19; // rdi
  __m128i v20; // xmm2
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i si128; // xmm3
  char *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rdi
  void (__fastcall *v32)(__int64, __int64, __int64); // rax
  __int64 v33; // rax
  __m128i v34; // [rsp+0h] [rbp-108h] BYREF
  void *v35[2]; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v36[16]; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v37; // [rsp+30h] [rbp-D8h] BYREF
  __int64 (__fastcall *v38)(__m128i **, __m128i **, int); // [rsp+40h] [rbp-C8h]
  __int64 (__fastcall *v39)(); // [rsp+48h] [rbp-C0h]
  char v40; // [rsp+50h] [rbp-B8h]
  char *v41; // [rsp+58h] [rbp-B0h]
  void *v42; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __m128i v44; // [rsp+70h] [rbp-98h] BYREF
  __m128i v45; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v46[8]; // [rsp+90h] [rbp-78h] BYREF
  char *v47; // [rsp+98h] [rbp-70h]
  void *v48; // [rsp+A0h] [rbp-68h]
  __int64 v49; // [rsp+A8h] [rbp-60h]
  __m128i v50; // [rsp+B0h] [rbp-58h] BYREF
  __m128i v51[4]; // [rsp+C0h] [rbp-48h] BYREF

  v6 = a1[1] == 0;
  v34.m128i_i64[0] = a4;
  v34.m128i_i64[1] = a5;
  if ( !v6 )
  {
    a1[1] = 0;
    v25 = a1 + 1048;
    sub_22299F0(a1 + 1048);
    sub_AE1360(v34.m128i_i64);
    v26 = *((unsigned int *)a1 + 4);
    if ( (_DWORD)v26 )
    {
      v27 = *((_QWORD *)a1 + 1);
      v37.m128i_i8[0] = 1;
      v28 = v27 + 32 * v26 - 32;
      if ( !*(_QWORD *)(v28 + 16) )
        goto LABEL_37;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v28 + 24))(v28, &v37);
        v30 = (unsigned int)(*((_DWORD *)a1 + 4) - 1);
        *((_DWORD *)a1 + 4) = v30;
        v31 = *((_QWORD *)a1 + 1) + 32 * v30;
        v32 = *(void (__fastcall **)(__int64, __int64, __int64))(v31 + 16);
        if ( v32 )
          v32(v31, v31, 3);
        v33 = *((unsigned int *)a1 + 4);
        if ( !(_DWORD)v33 )
          break;
        v29 = *((_QWORD *)a1 + 1);
        v37.m128i_i8[0] = 1;
        v28 = v29 + 32 * v33 - 32;
        if ( !*(_QWORD *)(v28 + 16) )
          goto LABEL_37;
      }
    }
    sub_2229B60(v25);
    a1[1] = 1;
    return;
  }
  if ( !a3 )
  {
    a2 = "inner";
    a3 = j__strlen("inner");
  }
  v35[0] = v36;
  sub_ACAA20(v35, a2, (__int64)&a2[a3]);
  v7 = *a1;
  v41 = a1;
  v42 = &v44;
  v40 = v7;
  sub_ACAAE0(&v42, (_BYTE *)v35[0], (__int64)v35[0] + (unsigned __int64)v35[1]);
  v8 = _mm_load_si128(&v34);
  v6 = *a1 == 0;
  v45 = v8;
  if ( !v6 )
  {
    v46[0] = v40;
    v47 = v41;
    v48 = &v50;
    if ( v42 == &v44 )
    {
      v20 = v8;
      v50 = _mm_load_si128(&v44);
    }
    else
    {
      v48 = v42;
      v20 = v8;
      v50.m128i_i64[0] = v44.m128i_i64[0];
    }
    v21 = v43;
    v43 = 0;
    v44.m128i_i8[0] = 0;
    v49 = v21;
    v42 = &v44;
    v51[0] = v20;
    v38 = nullptr;
    v22 = operator new(0x40u);
    *(_BYTE *)v22 = v46[0];
    *(_QWORD *)(v22 + 8) = v47;
    *(_QWORD *)(v22 + 16) = v22 + 32;
    if ( v48 == &v50 )
    {
      *(__m128i *)(v22 + 32) = _mm_load_si128(&v50);
    }
    else
    {
      *(_QWORD *)(v22 + 16) = v48;
      *(_QWORD *)(v22 + 32) = v50.m128i_i64[0];
    }
    v23 = v49;
    v37.m128i_i64[0] = v22;
    si128 = _mm_load_si128(v51);
    v49 = 0;
    *(_QWORD *)(v22 + 24) = v23;
    *(__m128i *)(v22 + 48) = si128;
    v48 = &v50;
    v39 = sub_AE1AA0;
    v50.m128i_i8[0] = 0;
    v38 = sub_ACABA0;
    sub_ACD330((__int64)(a1 + 8), &v37);
    if ( v38 )
      v38((__m128i **)&v37, (__m128i **)&v37, 3);
    goto LABEL_12;
  }
  v9 = *((unsigned int *)a1 + 4);
  v10 = *((_QWORD *)a1 + 1);
  v46[0] = 0;
  v11 = v10 + 32 * v9 - 32;
  if ( !*(_QWORD *)(v11 + 16) )
LABEL_37:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, _BYTE *))(v11 + 24))(v11, v46);
  v12 = (__m128i *)(*((_QWORD *)a1 + 1) + 32LL * *((unsigned int *)a1 + 4) - 32);
  v46[0] = v40;
  v47 = v41;
  v48 = &v50;
  if ( v42 == &v44 )
  {
    v50 = _mm_load_si128(&v44);
  }
  else
  {
    v48 = v42;
    v50.m128i_i64[0] = v44.m128i_i64[0];
  }
  v13 = v43;
  v44.m128i_i8[0] = 0;
  v14 = _mm_load_si128(&v45);
  v43 = 0;
  v49 = v13;
  v42 = &v44;
  v51[0] = v14;
  v38 = nullptr;
  v15 = operator new(0x40u);
  *(_BYTE *)v15 = v46[0];
  *(_QWORD *)(v15 + 8) = v47;
  *(_QWORD *)(v15 + 16) = v15 + 32;
  if ( v48 == &v50 )
  {
    *(__m128i *)(v15 + 32) = _mm_load_si128(&v50);
  }
  else
  {
    *(_QWORD *)(v15 + 16) = v48;
    *(_QWORD *)(v15 + 32) = v50.m128i_i64[0];
  }
  v37.m128i_i64[0] = v15;
  v16 = _mm_load_si128(v51);
  v50.m128i_i8[0] = 0;
  *(_QWORD *)(v15 + 24) = v49;
  v17 = _mm_load_si128(&v37);
  v48 = &v50;
  *(__m128i *)(v15 + 48) = v16;
  v49 = 0;
  v37 = _mm_loadu_si128(v12);
  v18 = (__int64 (__fastcall *)(__m128i **, __m128i **, int))v12[1].m128i_i64[0];
  *v12 = v17;
  v38 = v18;
  v12[1].m128i_i64[0] = (__int64)sub_ACABA0;
  v39 = (__int64 (__fastcall *)())v12[1].m128i_i64[1];
  v12[1].m128i_i64[1] = (__int64)sub_AE1AA0;
  if ( v18 )
    v18((__m128i **)&v37, (__m128i **)&v37, 3);
LABEL_12:
  if ( v48 != &v50 )
    operator delete(v48);
  v19 = (__m128i *)v42;
  *a1 = 0;
  if ( v19 != &v44 )
    operator delete(v19);
  if ( v35[0] != v36 )
    operator delete(v35[0]);
}

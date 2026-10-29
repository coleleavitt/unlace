void __fastcall sub_AAAF00(char *a1, char *a2, size_t a3, __int64 a4, __int64 a5)
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
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdi
  void (__fastcall *v33)(__int64, __int64, __int64); // rax
  __int64 v34; // rax
  void *v35[2]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v36[16]; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v37; // [rsp+20h] [rbp-D8h] BYREF
  __int64 (__fastcall *v38)(__int64 *, __int64 *, int); // [rsp+30h] [rbp-C8h]
  __int64 (__fastcall *v39)(__int64, char *); // [rsp+38h] [rbp-C0h]
  char v40; // [rsp+40h] [rbp-B8h]
  char *v41; // [rsp+48h] [rbp-B0h]
  void *v42; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A0h]
  __m128i v44; // [rsp+60h] [rbp-98h] BYREF
  __m128i v45; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v46[8]; // [rsp+80h] [rbp-78h] BYREF
  char *v47; // [rsp+88h] [rbp-70h]
  void *v48; // [rsp+90h] [rbp-68h]
  __int64 v49; // [rsp+98h] [rbp-60h]
  __m128i v50; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v51[4]; // [rsp+B0h] [rbp-48h] BYREF

  if ( a1[1] )
  {
    a1[1] = 0;
    v26 = a1 + 1048;
    sub_2205CB0(a1 + 1048);
    sub_E41B90(a4 + 8, a5);
    v27 = *((unsigned int *)a1 + 4);
    if ( (_DWORD)v27 )
    {
      v28 = *((_QWORD *)a1 + 1);
      v37.m128i_i8[0] = 1;
      v29 = v28 + 32 * v27 - 32;
      if ( !*(_QWORD *)(v29 + 16) )
        goto LABEL_37;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v29 + 24))(v29, &v37);
        v31 = (unsigned int)(*((_DWORD *)a1 + 4) - 1);
        *((_DWORD *)a1 + 4) = v31;
        v32 = *((_QWORD *)a1 + 1) + 32 * v31;
        v33 = *(void (__fastcall **)(__int64, __int64, __int64))(v32 + 16);
        if ( v33 )
          v33(v32, v32, 3);
        v34 = *((unsigned int *)a1 + 4);
        if ( !(_DWORD)v34 )
          break;
        v30 = *((_QWORD *)a1 + 1);
        v37.m128i_i8[0] = 1;
        v29 = v30 + 32 * v34 - 32;
        if ( !*(_QWORD *)(v29 + 16) )
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
  v35[0] = v36;
  sub_AA6CE0(v35, a2, (__int64)&a2[a3]);
  v8 = *a1;
  v41 = a1;
  v42 = &v44;
  v40 = v8;
  sub_AA6DA0(&v42, (_BYTE *)v35[0], (__int64)v35[0] + (unsigned __int64)v35[1]);
  v9 = *a1 == 0;
  v45.m128i_i64[0] = a4;
  v45.m128i_i64[1] = a5;
  if ( !v9 )
  {
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
    v21 = v43;
    v22 = _mm_load_si128(&v45);
    v43 = 0;
    v44.m128i_i8[0] = 0;
    v49 = v21;
    v42 = &v44;
    v51[0] = v22;
    v38 = nullptr;
    v23 = operator new(0x40u);
    *(_BYTE *)v23 = v46[0];
    *(_QWORD *)(v23 + 8) = v47;
    *(_QWORD *)(v23 + 16) = v23 + 32;
    if ( v48 == &v50 )
    {
      *(__m128i *)(v23 + 32) = _mm_load_si128(&v50);
    }
    else
    {
      *(_QWORD *)(v23 + 16) = v48;
      *(_QWORD *)(v23 + 32) = v50.m128i_i64[0];
    }
    v24 = v49;
    v37.m128i_i64[0] = v23;
    si128 = _mm_load_si128(v51);
    v49 = 0;
    *(_QWORD *)(v23 + 24) = v24;
    *(__m128i *)(v23 + 48) = si128;
    v48 = &v50;
    v39 = sub_AA65F0;
    v50.m128i_i8[0] = 0;
    v38 = sub_AA8120;
    sub_AA95F0((__int64)(a1 + 8), &v37);
    if ( v38 )
      v38(v37.m128i_i64, v37.m128i_i64, 3);
    goto LABEL_12;
  }
  v10 = *((unsigned int *)a1 + 4);
  v11 = *((_QWORD *)a1 + 1);
  v46[0] = 0;
  v12 = v11 + 32 * v10 - 32;
  if ( !*(_QWORD *)(v12 + 16) )
LABEL_37:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, _BYTE *))(v12 + 24))(v12, v46);
  v13 = (__m128i *)(*((_QWORD *)a1 + 1) + 32LL * *((unsigned int *)a1 + 4) - 32);
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
  v14 = v43;
  v15 = _mm_load_si128(&v45);
  v43 = 0;
  v44.m128i_i8[0] = 0;
  v49 = v14;
  v42 = &v44;
  v51[0] = v15;
  v38 = nullptr;
  v16 = operator new(0x40u);
  *(_BYTE *)v16 = v46[0];
  *(_QWORD *)(v16 + 8) = v47;
  *(_QWORD *)(v16 + 16) = v16 + 32;
  if ( v48 == &v50 )
  {
    *(__m128i *)(v16 + 32) = _mm_load_si128(&v50);
  }
  else
  {
    *(_QWORD *)(v16 + 16) = v48;
    *(_QWORD *)(v16 + 32) = v50.m128i_i64[0];
  }
  v37.m128i_i64[0] = v16;
  v17 = _mm_load_si128(v51);
  v50.m128i_i8[0] = 0;
  *(_QWORD *)(v16 + 24) = v49;
  v18 = _mm_load_si128(&v37);
  v48 = &v50;
  *(__m128i *)(v16 + 48) = v17;
  v49 = 0;
  v37 = _mm_loadu_si128(v13);
  v19 = (__int64 (__fastcall *)(__int64 *, __int64 *, int))v13[1].m128i_i64[0];
  *v13 = v18;
  v38 = v19;
  v13[1].m128i_i64[0] = (__int64)sub_AA8120;
  v39 = (__int64 (__fastcall *)(__int64, char *))v13[1].m128i_i64[1];
  v13[1].m128i_i64[1] = (__int64)sub_AA65F0;
  if ( v19 )
    v19(v37.m128i_i64, v37.m128i_i64, 3);
LABEL_12:
  if ( v48 != &v50 )
    operator delete(v48);
  v20 = (__m128i *)v42;
  *a1 = 0;
  if ( v20 != &v44 )
    operator delete(v20);
  if ( v35[0] != v36 )
    operator delete(v35[0]);
}


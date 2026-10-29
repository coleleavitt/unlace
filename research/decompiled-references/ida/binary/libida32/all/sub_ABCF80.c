void __fastcall sub_ABCF80(char *a1, char *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6, __int128 a7, __int64 a8)
{
  char v9; // al
  bool v10; // zf
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i *v15; // r14
  __int64 v16; // rax
  __m128i v17; // xmm4
  __int64 v18; // rax
  __m128i v19; // xmm5
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__m128i **, __m128i **, int); // rax
  __m128i *v23; // rdi
  __m128i v24; // xmm2
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm3
  __int64 v29; // rdx
  char *v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rdi
  void (__fastcall *v37)(__int64, __int64, __int64); // rax
  __int64 v38; // rax
  void *v39[2]; // [rsp+0h] [rbp-118h] BYREF
  _BYTE v40[16]; // [rsp+10h] [rbp-108h] BYREF
  __m128i v41; // [rsp+20h] [rbp-F8h] BYREF
  __int64 (__fastcall *v42)(__m128i **, __m128i **, int); // [rsp+30h] [rbp-E8h]
  __int64 (__fastcall *v43)(); // [rsp+38h] [rbp-E0h]
  char v44; // [rsp+40h] [rbp-D8h]
  char *v45; // [rsp+48h] [rbp-D0h]
  void *v46; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-C0h]
  __m128i v48; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v49; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+80h] [rbp-98h]
  char v51[8]; // [rsp+90h] [rbp-88h] BYREF
  char *v52; // [rsp+98h] [rbp-80h]
  void *v53; // [rsp+A0h] [rbp-78h]
  __int64 v54; // [rsp+A8h] [rbp-70h]
  __m128i v55; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v56; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-48h]

  if ( a1[1] )
  {
    a1[1] = 0;
    v30 = a1 + 1048;
    sub_2205CB0(a1 + 1048);
    sub_E477C0(a7 + 8, (char *)&a7 + 8);
    if ( a8 )
      sub_ABAAB0(a7 + 8, 0, 0, a8, a7);
    v31 = *((unsigned int *)a1 + 4);
    if ( (_DWORD)v31 )
    {
      v32 = *((_QWORD *)a1 + 1);
      v41.m128i_i8[0] = 1;
      v33 = v32 + 32 * v31 - 32;
      if ( !*(_QWORD *)(v33 + 16) )
        goto LABEL_39;
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
          goto LABEL_39;
      }
    }
    sub_2205E20(v30);
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
  v9 = *a1;
  v45 = a1;
  v46 = &v48;
  v44 = v9;
  sub_AA6DA0(&v46, (_BYTE *)v39[0], (__int64)v39[0] + (unsigned __int64)v39[1]);
  v10 = *a1 == 0;
  v11 = _mm_loadu_si128((const __m128i *)&a7);
  v50 = a8;
  v49 = v11;
  if ( !v10 )
  {
    v51[0] = v44;
    v52 = v45;
    v53 = &v55;
    if ( v46 == &v48 )
    {
      v24 = v11;
      v55 = _mm_load_si128(&v48);
    }
    else
    {
      v53 = v46;
      v24 = v11;
      v55.m128i_i64[0] = v48.m128i_i64[0];
    }
    v25 = v47;
    v47 = 0;
    v48.m128i_i8[0] = 0;
    v54 = v25;
    v46 = &v48;
    v56 = v24;
    v57 = v50;
    v42 = nullptr;
    v26 = operator new(0x48u);
    *(_BYTE *)v26 = v51[0];
    *(_QWORD *)(v26 + 8) = v52;
    *(_QWORD *)(v26 + 16) = v26 + 32;
    if ( v53 == &v55 )
    {
      *(__m128i *)(v26 + 32) = _mm_load_si128(&v55);
    }
    else
    {
      *(_QWORD *)(v26 + 16) = v53;
      *(_QWORD *)(v26 + 32) = v55.m128i_i64[0];
    }
    v27 = v54;
    v41.m128i_i64[0] = v26;
    v28 = _mm_load_si128(&v56);
    v54 = 0;
    *(_QWORD *)(v26 + 24) = v27;
    v53 = &v55;
    v29 = v57;
    *(__m128i *)(v26 + 48) = v28;
    *(_QWORD *)(v26 + 64) = v29;
    v55.m128i_i8[0] = 0;
    v43 = sub_AC10A0;
    v42 = sub_AA78F0;
    sub_AA95F0((__int64)(a1 + 8), &v41);
    if ( v42 )
      v42((__m128i **)&v41, (__m128i **)&v41, 3);
    goto LABEL_12;
  }
  v12 = *((unsigned int *)a1 + 4);
  v13 = *((_QWORD *)a1 + 1);
  v51[0] = 0;
  v14 = v13 + 32 * v12 - 32;
  if ( !*(_QWORD *)(v14 + 16) )
LABEL_39:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, char *))(v14 + 24))(v14, v51);
  v15 = (__m128i *)(*((_QWORD *)a1 + 1) + 32LL * *((unsigned int *)a1 + 4) - 32);
  v51[0] = v44;
  v52 = v45;
  v53 = &v55;
  if ( v46 == &v48 )
  {
    v55 = _mm_load_si128(&v48);
  }
  else
  {
    v53 = v46;
    v55.m128i_i64[0] = v48.m128i_i64[0];
  }
  v16 = v47;
  v17 = _mm_load_si128(&v49);
  v47 = 0;
  v48.m128i_i8[0] = 0;
  v54 = v16;
  v46 = &v48;
  v56 = v17;
  v57 = v50;
  v42 = nullptr;
  v18 = operator new(0x48u);
  *(_BYTE *)v18 = v51[0];
  *(_QWORD *)(v18 + 8) = v52;
  *(_QWORD *)(v18 + 16) = v18 + 32;
  if ( v53 == &v55 )
  {
    *(__m128i *)(v18 + 32) = _mm_load_si128(&v55);
  }
  else
  {
    *(_QWORD *)(v18 + 16) = v53;
    *(_QWORD *)(v18 + 32) = v55.m128i_i64[0];
  }
  v41.m128i_i64[0] = v18;
  v19 = _mm_load_si128(&v56);
  v55.m128i_i8[0] = 0;
  *(_QWORD *)(v18 + 24) = v54;
  v20 = _mm_load_si128(&v41);
  v53 = &v55;
  v21 = v57;
  *(__m128i *)(v18 + 48) = v19;
  *(_QWORD *)(v18 + 64) = v21;
  v54 = 0;
  v41 = _mm_loadu_si128(v15);
  v22 = (__int64 (__fastcall *)(__m128i **, __m128i **, int))v15[1].m128i_i64[0];
  *v15 = v20;
  v42 = v22;
  v15[1].m128i_i64[0] = (__int64)sub_AA78F0;
  v43 = (__int64 (__fastcall *)())v15[1].m128i_i64[1];
  v15[1].m128i_i64[1] = (__int64)sub_AC10A0;
  if ( v22 )
    v22((__m128i **)&v41, (__m128i **)&v41, 3);
LABEL_12:
  if ( v53 != &v55 )
    operator delete(v53);
  v23 = (__m128i *)v46;
  *a1 = 0;
  if ( v23 != &v48 )
    operator delete(v23);
  if ( v39[0] != v40 )
    operator delete(v39[0]);
}


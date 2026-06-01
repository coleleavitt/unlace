void __fastcall sub_AC5130(char *a1, char *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6, __int128 a7, __int64 *a8)
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
  __int64 *v21; // rdx
  __int64 (__fastcall *v22)(__m128i **, __m128i **, int); // rax
  __m128i *v23; // rdi
  __m128i v24; // xmm2
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm3
  __int64 *v29; // rdx
  char *v30; // rbp
  __int64 v31; // r14
  __int64 v32; // rbx
  int v33; // r13d
  __int64 v34; // rdi
  __int64 v35; // rax
  void *v36; // rdx
  int v37; // eax
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rdi
  void (__fastcall *v47)(__int64, __int64, __int64); // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+8h] [rbp-120h] BYREF
  void *v50[2]; // [rsp+10h] [rbp-118h] BYREF
  _BYTE v51[16]; // [rsp+20h] [rbp-108h] BYREF
  __m128i v52; // [rsp+30h] [rbp-F8h] BYREF
  __int64 (__fastcall *v53)(__m128i **, __m128i **, int); // [rsp+40h] [rbp-E8h]
  __int64 (__fastcall *v54)(); // [rsp+48h] [rbp-E0h]
  char v55; // [rsp+50h] [rbp-D8h]
  char *v56; // [rsp+58h] [rbp-D0h]
  void *v57; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+68h] [rbp-C0h]
  __m128i v59; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v60; // [rsp+80h] [rbp-A8h] BYREF
  __int64 *v61; // [rsp+90h] [rbp-98h]
  __int128 v62; // [rsp+A0h] [rbp-88h] BYREF
  void *v63; // [rsp+B0h] [rbp-78h]
  __int64 v64; // [rsp+B8h] [rbp-70h]
  __m128i v65; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v66; // [rsp+D0h] [rbp-58h] BYREF
  __int64 *v67; // [rsp+E0h] [rbp-48h]

  if ( a1[1] )
  {
    a1[1] = 0;
    v30 = a1 + 1048;
    v31 = *((_QWORD *)&a7 + 1);
    sub_2205CB0(a1 + 1048);
    v32 = a7;
    v33 = a7 + 8;
    sub_E41E50(a7 + 8, *((_QWORD *)&a7 + 1), a8);
    if ( v31 )
    {
      sub_AC4E70(v32, *((__int64 *)&a7 + 1), a8);
      v34 = *((_QWORD *)&a7 + 1);
      v35 = sub_F48AA0(*((_QWORD *)&a7 + 1), a8);
      if ( v35 )
      {
        v49 = v35;
        v63 = v36;
        v62 = (__int128)_mm_loadh_ps((const double *)&v49);
        v37 = sub_AA6CD0(v34);
        sub_AC5130(v33, (unsigned int)&byte_22CD811, v37, v38, v39, v40, v62, (__int64)v63);
      }
    }
    v41 = *((unsigned int *)a1 + 4);
    if ( (_DWORD)v41 )
    {
      v42 = *((_QWORD *)a1 + 1);
      v52.m128i_i8[0] = 1;
      v43 = v42 + 32 * v41 - 32;
      if ( !*(_QWORD *)(v43 + 16) )
        goto LABEL_40;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v43 + 24))(v43, &v52);
        v45 = (unsigned int)(*((_DWORD *)a1 + 4) - 1);
        *((_DWORD *)a1 + 4) = v45;
        v46 = *((_QWORD *)a1 + 1) + 32 * v45;
        v47 = *(void (__fastcall **)(__int64, __int64, __int64))(v46 + 16);
        if ( v47 )
          v47(v46, v46, 3);
        v48 = *((unsigned int *)a1 + 4);
        if ( !(_DWORD)v48 )
          break;
        v44 = *((_QWORD *)a1 + 1);
        v52.m128i_i8[0] = 1;
        v43 = v44 + 32 * v48 - 32;
        if ( !*(_QWORD *)(v43 + 16) )
          goto LABEL_40;
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
  v50[0] = v51;
  sub_AA6CE0(v50, a2, (__int64)&a2[a3]);
  v9 = *a1;
  v56 = a1;
  v57 = &v59;
  v55 = v9;
  sub_AA6DA0(&v57, (_BYTE *)v50[0], (__int64)v50[0] + (unsigned __int64)v50[1]);
  v10 = *a1 == 0;
  v11 = _mm_loadu_si128((const __m128i *)&a7);
  v61 = a8;
  v60 = v11;
  if ( !v10 )
  {
    LOBYTE(v62) = v55;
    *((_QWORD *)&v62 + 1) = v56;
    v63 = &v65;
    if ( v57 == &v59 )
    {
      v24 = v11;
      v65 = _mm_load_si128(&v59);
    }
    else
    {
      v63 = v57;
      v24 = v11;
      v65.m128i_i64[0] = v59.m128i_i64[0];
    }
    v25 = v58;
    v58 = 0;
    v59.m128i_i8[0] = 0;
    v64 = v25;
    v57 = &v59;
    v66 = v24;
    v67 = v61;
    v53 = nullptr;
    v26 = operator new(0x48u);
    *(_BYTE *)v26 = v62;
    *(_QWORD *)(v26 + 8) = *((_QWORD *)&v62 + 1);
    *(_QWORD *)(v26 + 16) = v26 + 32;
    if ( v63 == &v65 )
    {
      *(__m128i *)(v26 + 32) = _mm_load_si128(&v65);
    }
    else
    {
      *(_QWORD *)(v26 + 16) = v63;
      *(_QWORD *)(v26 + 32) = v65.m128i_i64[0];
    }
    v27 = v64;
    v52.m128i_i64[0] = v26;
    v28 = _mm_load_si128(&v66);
    v64 = 0;
    *(_QWORD *)(v26 + 24) = v27;
    v63 = &v65;
    v29 = v67;
    *(__m128i *)(v26 + 48) = v28;
    *(_QWORD *)(v26 + 64) = v29;
    v65.m128i_i8[0] = 0;
    v54 = sub_AC5850;
    v53 = sub_AA76A0;
    sub_AA95F0((__int64)(a1 + 8), &v52);
    if ( v53 )
      v53((__m128i **)&v52, (__m128i **)&v52, 3);
    goto LABEL_12;
  }
  v12 = *((unsigned int *)a1 + 4);
  v13 = *((_QWORD *)a1 + 1);
  LOBYTE(v62) = 0;
  v14 = v13 + 32 * v12 - 32;
  if ( !*(_QWORD *)(v14 + 16) )
LABEL_40:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int128 *))(v14 + 24))(v14, &v62);
  v15 = (__m128i *)(*((_QWORD *)a1 + 1) + 32LL * *((unsigned int *)a1 + 4) - 32);
  LOBYTE(v62) = v55;
  *((_QWORD *)&v62 + 1) = v56;
  v63 = &v65;
  if ( v57 == &v59 )
  {
    v65 = _mm_load_si128(&v59);
  }
  else
  {
    v63 = v57;
    v65.m128i_i64[0] = v59.m128i_i64[0];
  }
  v16 = v58;
  v59.m128i_i8[0] = 0;
  v17 = _mm_load_si128(&v60);
  v58 = 0;
  v64 = v16;
  v57 = &v59;
  v66 = v17;
  v67 = v61;
  v53 = nullptr;
  v18 = operator new(0x48u);
  *(_BYTE *)v18 = v62;
  *(_QWORD *)(v18 + 8) = *((_QWORD *)&v62 + 1);
  *(_QWORD *)(v18 + 16) = v18 + 32;
  if ( v63 == &v65 )
  {
    *(__m128i *)(v18 + 32) = _mm_load_si128(&v65);
  }
  else
  {
    *(_QWORD *)(v18 + 16) = v63;
    *(_QWORD *)(v18 + 32) = v65.m128i_i64[0];
  }
  v52.m128i_i64[0] = v18;
  v19 = _mm_load_si128(&v66);
  v65.m128i_i8[0] = 0;
  *(_QWORD *)(v18 + 24) = v64;
  v20 = _mm_load_si128(&v52);
  v63 = &v65;
  v21 = v67;
  *(__m128i *)(v18 + 48) = v19;
  *(_QWORD *)(v18 + 64) = v21;
  v64 = 0;
  v52 = _mm_loadu_si128(v15);
  v22 = (__int64 (__fastcall *)(__m128i **, __m128i **, int))v15[1].m128i_i64[0];
  *v15 = v20;
  v53 = v22;
  v15[1].m128i_i64[0] = (__int64)sub_AA76A0;
  v54 = (__int64 (__fastcall *)())v15[1].m128i_i64[1];
  v15[1].m128i_i64[1] = (__int64)sub_AC5850;
  if ( v22 )
    v22((__m128i **)&v52, (__m128i **)&v52, 3);
LABEL_12:
  if ( v63 != &v65 )
    operator delete(v63);
  v23 = (__m128i *)v57;
  *a1 = 0;
  if ( v23 != &v59 )
    operator delete(v23);
  if ( v50[0] != v51 )
    operator delete(v50[0]);
}


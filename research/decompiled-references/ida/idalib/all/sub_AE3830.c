void __fastcall sub_AE3830(
        char *a1,
        char *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int64 a10)
{
  char v11; // al
  bool v12; // zf
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i *v19; // r14
  __int64 v20; // rax
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  __m128i v23; // xmm7
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(__m128i **, __m128i **, int); // rax
  __m128i *v31; // rdi
  __m128i v32; // xmm4
  __m128i v33; // xmm5
  __m128i v34; // xmm6
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i v37; // xmm7
  __m128i v38; // xmm0
  __m128i v39; // xmm4
  __int64 v40; // rdx
  char *v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rdi
  void (__fastcall *v48)(__int64, __int64, __int64); // rax
  __int64 v49; // rax
  void *v50[2]; // [rsp+0h] [rbp-158h] BYREF
  _BYTE v51[16]; // [rsp+10h] [rbp-148h] BYREF
  __m128i v52; // [rsp+20h] [rbp-138h] BYREF
  __int64 (__fastcall *v53)(__m128i **, __m128i **, int); // [rsp+30h] [rbp-128h]
  __int64 *v54; // [rsp+38h] [rbp-120h]
  char v55; // [rsp+40h] [rbp-118h]
  char *v56; // [rsp+48h] [rbp-110h]
  void *v57; // [rsp+50h] [rbp-108h] BYREF
  __int64 v58; // [rsp+58h] [rbp-100h]
  __m128i v59; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v60; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v61; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v62; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-B8h]
  char v64[8]; // [rsp+B0h] [rbp-A8h] BYREF
  char *v65; // [rsp+B8h] [rbp-A0h]
  void *v66; // [rsp+C0h] [rbp-98h]
  __int64 v67; // [rsp+C8h] [rbp-90h]
  __m128i v68; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v69; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v70; // [rsp+F0h] [rbp-68h] BYREF
  __m128i v71; // [rsp+100h] [rbp-58h] BYREF
  __int64 v72; // [rsp+110h] [rbp-48h]

  if ( a1[1] )
  {
    a1[1] = 0;
    v41 = a1 + 1048;
    sub_22299F0(a1 + 1048);
    sub_AE3760((__int64 *)&a7);
    v42 = *((unsigned int *)a1 + 4);
    if ( (_DWORD)v42 )
    {
      v43 = *((_QWORD *)a1 + 1);
      v52.m128i_i8[0] = 1;
      v44 = v43 + 32 * v42 - 32;
      if ( !*(_QWORD *)(v44 + 16) )
        goto LABEL_37;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v44 + 24))(v44, &v52);
        v46 = (unsigned int)(*((_DWORD *)a1 + 4) - 1);
        *((_DWORD *)a1 + 4) = v46;
        v47 = *((_QWORD *)a1 + 1) + 32 * v46;
        v48 = *(void (__fastcall **)(__int64, __int64, __int64))(v47 + 16);
        if ( v48 )
          v48(v47, v47, 3);
        v49 = *((unsigned int *)a1 + 4);
        if ( !(_DWORD)v49 )
          break;
        v45 = *((_QWORD *)a1 + 1);
        v52.m128i_i8[0] = 1;
        v44 = v45 + 32 * v49 - 32;
        if ( !*(_QWORD *)(v44 + 16) )
          goto LABEL_37;
      }
    }
    sub_2229B60(v41);
    a1[1] = 1;
    return;
  }
  if ( !a3 )
  {
    a2 = "inner";
    a3 = j__strlen("inner");
  }
  v50[0] = v51;
  sub_ACAA20(v50, a2, (__int64)&a2[a3]);
  v11 = *a1;
  v56 = a1;
  v57 = &v59;
  v55 = v11;
  sub_ACAAE0(&v57, (_BYTE *)v50[0], (__int64)v50[0] + (unsigned __int64)v50[1]);
  v12 = *a1 == 0;
  v13 = _mm_loadu_si128((const __m128i *)&a7);
  v14 = _mm_loadu_si128((const __m128i *)&a8);
  v15 = _mm_loadu_si128((const __m128i *)&a9);
  v63 = a10;
  v60 = v13;
  v61 = v14;
  v62 = v15;
  if ( !v12 )
  {
    v64[0] = v55;
    v65 = v56;
    v66 = &v68;
    if ( v57 == &v59 )
    {
      v33 = v14;
      v34 = v15;
      v68 = _mm_load_si128(&v59);
      v32 = v13;
    }
    else
    {
      v66 = v57;
      v32 = v13;
      v33 = v14;
      v34 = v15;
      v68.m128i_i64[0] = v59.m128i_i64[0];
    }
    v35 = v58;
    v58 = 0;
    v59.m128i_i8[0] = 0;
    v67 = v35;
    v57 = &v59;
    v69 = v32;
    v70 = v33;
    v71 = v34;
    v72 = v63;
    v53 = nullptr;
    v36 = operator new(0x68u);
    *(_BYTE *)v36 = v64[0];
    *(_QWORD *)(v36 + 8) = v65;
    *(_QWORD *)(v36 + 16) = v36 + 32;
    if ( v66 == &v68 )
    {
      *(__m128i *)(v36 + 32) = _mm_load_si128(&v68);
    }
    else
    {
      *(_QWORD *)(v36 + 16) = v66;
      *(_QWORD *)(v36 + 32) = v68.m128i_i64[0];
    }
    v52.m128i_i64[0] = v36;
    v37 = _mm_load_si128(&v69);
    v68.m128i_i8[0] = 0;
    v38 = _mm_load_si128(&v70);
    *(_QWORD *)(v36 + 24) = v67;
    v39 = _mm_load_si128(&v71);
    *(__m128i *)(v36 + 48) = v37;
    v66 = &v68;
    v40 = v72;
    *(__m128i *)(v36 + 64) = v38;
    *(__m128i *)(v36 + 80) = v39;
    *(_QWORD *)(v36 + 96) = v40;
    v67 = 0;
    v54 = qword_AE50F0;
    v53 = sub_ACB180;
    sub_ACD330((__int64)(a1 + 8), &v52);
    if ( v53 )
      v53((__m128i **)&v52, (__m128i **)&v52, 3);
    goto LABEL_12;
  }
  v16 = *((unsigned int *)a1 + 4);
  v17 = *((_QWORD *)a1 + 1);
  v64[0] = 0;
  v18 = v17 + 32 * v16 - 32;
  if ( !*(_QWORD *)(v18 + 16) )
LABEL_37:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, char *))(v18 + 24))(v18, v64);
  v19 = (__m128i *)(*((_QWORD *)a1 + 1) + 32LL * *((unsigned int *)a1 + 4) - 32);
  v64[0] = v55;
  v65 = v56;
  v66 = &v68;
  if ( v57 == &v59 )
  {
    v68 = _mm_load_si128(&v59);
  }
  else
  {
    v66 = v57;
    v68.m128i_i64[0] = v59.m128i_i64[0];
  }
  v20 = v58;
  v21 = _mm_load_si128(&v60);
  v58 = 0;
  v22 = _mm_load_si128(&v61);
  v59.m128i_i8[0] = 0;
  v67 = v20;
  v23 = _mm_load_si128(&v62);
  v57 = &v59;
  v69 = v21;
  v70 = v22;
  v71 = v23;
  v72 = v63;
  v53 = nullptr;
  v24 = operator new(0x68u);
  *(_BYTE *)v24 = v64[0];
  *(_QWORD *)(v24 + 8) = v65;
  *(_QWORD *)(v24 + 16) = v24 + 32;
  if ( v66 == &v68 )
  {
    *(__m128i *)(v24 + 32) = _mm_load_si128(&v68);
  }
  else
  {
    *(_QWORD *)(v24 + 16) = v66;
    *(_QWORD *)(v24 + 32) = v68.m128i_i64[0];
  }
  v52.m128i_i64[0] = v24;
  v25 = _mm_load_si128(&v69);
  v68.m128i_i8[0] = 0;
  v26 = _mm_load_si128(&v70);
  *(_QWORD *)(v24 + 24) = v67;
  v27 = _mm_load_si128(&v71);
  *(__m128i *)(v24 + 48) = v25;
  v28 = _mm_load_si128(&v52);
  v66 = &v68;
  v29 = v72;
  *(__m128i *)(v24 + 64) = v26;
  *(_QWORD *)(v24 + 96) = v29;
  *(__m128i *)(v24 + 80) = v27;
  v67 = 0;
  v52 = _mm_loadu_si128(v19);
  v30 = (__int64 (__fastcall *)(__m128i **, __m128i **, int))v19[1].m128i_i64[0];
  *v19 = v28;
  v53 = v30;
  v19[1].m128i_i64[0] = (__int64)sub_ACB180;
  v54 = (__int64 *)v19[1].m128i_i64[1];
  v19[1].m128i_i64[1] = (__int64)qword_AE50F0;
  if ( v30 )
    v30((__m128i **)&v52, (__m128i **)&v52, 3);
LABEL_12:
  if ( v66 != &v68 )
    operator delete(v66);
  v31 = (__m128i *)v57;
  *a1 = 0;
  if ( v31 != &v59 )
    operator delete(v31);
  if ( v50[0] != v51 )
    operator delete(v50[0]);
}

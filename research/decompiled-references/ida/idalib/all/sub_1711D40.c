void __fastcall sub_1711D40(__int64 *a1, _BYTE *a2, __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  char v8; // r13
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbp
  char **v15; // rdi
  char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  char *v23; // rdi
  size_t v24; // rax
  size_t v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rbp
  __int64 v28; // r15
  __int64 *i; // rbp
  size_t v30; // rax
  __int64 *v31; // [rsp+8h] [rbp-180h]
  void *ptr; // [rsp+10h] [rbp-178h] BYREF
  __m128i si128; // [rsp+18h] [rbp-170h]
  _BYTE v34[40]; // [rsp+28h] [rbp-160h] BYREF
  const void **v35; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-130h]
  __m128i v37; // [rsp+60h] [rbp-128h]
  int v38; // [rsp+70h] [rbp-118h]
  __int128 v39; // [rsp+78h] [rbp-110h] BYREF
  __int64 v40; // [rsp+88h] [rbp-100h]
  char v41; // [rsp+90h] [rbp-F8h]
  __int64 v42; // [rsp+98h] [rbp-F0h]
  __int64 v43; // [rsp+A0h] [rbp-E8h]
  __int64 v44; // [rsp+A8h] [rbp-E0h]
  __m128i v45; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-C8h]
  __int64 v47; // [rsp+C8h] [rbp-C0h]
  __int64 v48; // [rsp+D0h] [rbp-B8h]
  __int64 v49; // [rsp+D8h] [rbp-B0h]
  void *v50; // [rsp+E0h] [rbp-A8h]
  __int64 v51; // [rsp+E8h] [rbp-A0h]
  _BYTE v52[64]; // [rsp+F0h] [rbp-98h] BYREF
  void *v53; // [rsp+130h] [rbp-58h]
  __int64 v54; // [rsp+138h] [rbp-50h]
  _BYTE v55[72]; // [rsp+140h] [rbp-48h] BYREF

  v8 = a6;
  v10 = *a1;
  v46 = 0;
  v11 = _mm_loadu_si128((const __m128i *)(v10 + 184));
  v47 = 0;
  v50 = v52;
  v51 = 0x400000000LL;
  v53 = v55;
  v54 = 0x200000000LL;
  v45 = v11;
  v48 = 0;
  v49 = 0;
  ptr = v34;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  if ( a3 )
  {
    sub_A1FE50(&ptr, a2, &a2[a3]);
    v24 = j__strlen("::");
    sub_A1FE50(&ptr, "::", &asc_23178BC[v24 + 2]);
    if ( !v8 )
      goto LABEL_3;
  }
  else if ( !(_BYTE)a6 )
  {
    goto LABEL_3;
  }
  v25 = j__strlen("__");
  sub_A1FE50(&ptr, "__", &aAttribute_3[v25 + 15]);
LABEL_3:
  v12 = si128.m128i_i64[0];
  v13 = a5 + si128.m128i_i64[0];
  if ( a5 + si128.m128i_i64[0] > si128.m128i_i64[1] )
  {
    sub_2236E10(&ptr, v34, v13, 1);
    v12 = si128.m128i_i64[0];
  }
  if ( a5 )
  {
    memcpy((char *)ptr + v12, a4, a5);
    v12 = si128.m128i_i64[0];
  }
  v14 = v12 + a5;
  si128.m128i_i64[0] = v14;
  if ( v8 )
  {
    v30 = j__strlen("__");
    sub_A1FE50(&ptr, "__", &aAttribute_3[v30 + 15]);
    v14 = si128.m128i_i64[0];
  }
  v15 = *(char ***)(*a1 + 184);
  v36 = v14;
  LOWORD(v38) = 261;
  v35 = (const void **)ptr;
  v16 = sub_15A4EB0(v15, &v35, v13, (__int64)a4, a5, a6);
  sub_15A2F70((__int64)&v45, (__int64)v16);
  if ( *(_QWORD *)(a1[1] + 40) )
  {
    sub_15A3210((__int64)&v45, 7, "(");
    v26 = a1[1];
    v27 = *(__int64 **)(v26 + 32);
    v31 = &v27[*(_QWORD *)(v26 + 40)];
    if ( v27 != v31 )
    {
      v28 = *v27;
      for ( i = v27 + 1; ; ++i )
      {
        sub_15A3090((__int64)&v45, v28);
        if ( v31 == i )
          break;
        v28 = *i;
        sub_15A3210((__int64)&v45, 15, ", ");
      }
    }
    v16 = byte_8;
    sub_15A3210((__int64)&v45, 8, ")");
  }
  v21 = *a1;
  v22 = sub_15A5CA0((__int64)&v45, (__int64)v16, v17, v18, v19, v20);
  v35 = nullptr;
  v36 = v22;
  v37 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v23 = *(char **)(v21 + 8);
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = v41 & 0x80 | 0x40;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  if ( v23 == *(char **)(v21 + 16) )
  {
    sub_1706840(v21, v23, (__int64)&v35);
  }
  else
  {
    sub_17048E0((__int64)v23, (__int64)&v35);
    *(_QWORD *)(v21 + 8) += 96LL;
  }
  sub_1705410((__int64)&v39);
  if ( ptr != v34 )
    free(ptr);
  if ( v53 != v55 )
    free(v53);
  if ( v50 != v52 )
    free(v50);
}

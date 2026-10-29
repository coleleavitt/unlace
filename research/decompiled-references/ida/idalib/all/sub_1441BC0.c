__int64 __fastcall sub_1441BC0(__int64 a1, __m128i *a2, __int64 a3, __m128i a4)
{
  char v5; // r12
  unsigned int v6; // r15d
  int v7; // r14d
  __m128i v8; // xmm1
  __int64 v9; // rax
  char *v10; // rax
  size_t v11; // rdx
  unsigned int v12; // r13d
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // r13d
  int v23; // eax
  char *v24; // [rsp+0h] [rbp-238h] BYREF
  size_t v25; // [rsp+8h] [rbp-230h]
  __m128i v26; // [rsp+10h] [rbp-228h] BYREF
  __int64 v27; // [rsp+20h] [rbp-218h]
  void *v28; // [rsp+30h] [rbp-208h] BYREF
  __m128i si128; // [rsp+38h] [rbp-200h]
  _BYTE v30[136]; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned __int8 *v31; // [rsp+D0h] [rbp-168h] BYREF
  unsigned __int64 v32; // [rsp+D8h] [rbp-160h]
  char v33; // [rsp+E0h] [rbp-158h]
  unsigned __int64 v34; // [rsp+F0h] [rbp-148h]
  char v35; // [rsp+F8h] [rbp-140h]
  void *v36; // [rsp+108h] [rbp-130h]
  _BYTE v37[64]; // [rsp+118h] [rbp-120h] BYREF
  void *v38; // [rsp+158h] [rbp-E0h]
  _BYTE v39[64]; // [rsp+168h] [rbp-D0h] BYREF
  void *ptr; // [rsp+1A8h] [rbp-90h]
  _BYTE v41[56]; // [rsp+1B8h] [rbp-80h] BYREF
  int v42; // [rsp+1F0h] [rbp-48h]
  char v43; // [rsp+1F8h] [rbp-40h]

  if ( !*(_BYTE *)(a1 + 546) )
  {
    sub_FC70B0((__int64)&v31, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1107);
    sub_AE9DF0(&v31, a3, 5u);
    sub_AEA040((__int64)&v31);
    a2->m128i_i64[1] = a3;
    return (unsigned int)-1;
  }
  v5 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v5 | 0x20;
  sub_14634E0(a1, a2);
  *(_BYTE *)(a1 + 544) = (32 * ((v5 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  if ( a2[1].m128i_i16[0] != 22 )
  {
    sub_FC70B0((__int64)&v31, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 1120);
    sub_AE9DF0(&v31, a3, 5u);
    sub_AE9DF0(&v31, 22, 4u);
    v21 = -1;
    sub_AEA040((__int64)&v31);
    return v21;
  }
  v6 = a2->m128i_i32[0];
  if ( (unsigned __int8)sub_1464550(a1, a2, 1) )
    return (unsigned int)-1;
  v7 = a2->m128i_i32[0];
  if ( a2[1].m128i_i16[0] != 16 )
  {
    sub_FC70B0((__int64)&v31, *(_QWORD *)(a1 + 48), v7, 1127);
    sub_AEA040((__int64)&v31);
    return (unsigned int)-1;
  }
  v8 = _mm_loadu_si128(a2);
  v9 = a2[1].m128i_i64[0];
  v26 = v8;
  v27 = v9;
  sub_141CB80((__int64)&v31, a1, (unsigned int *)a2, 1);
  if ( !v43 )
    return (unsigned int)-1;
  if ( v42 <= 0 )
  {
    if ( a2[1].m128i_i16[0] != 23 )
    {
      v23 = sub_13DC060(v7, 0, *(__int64 **)(a1 + 88), *(_QWORD *)(a1 + 56), a4, *(double *)v8.m128i_i64);
      sub_FC70B0((__int64)&v28, *(_QWORD *)(a1 + 48), v23, 1120);
      sub_AE9DF0((unsigned __int8 **)&v28, a3, 5u);
      sub_AE9DF0((unsigned __int8 **)&v28, 23, 4u);
      v21 = -1;
      sub_AEA040((__int64)&v28);
      sub_FC70B0((__int64)&v28, *(_QWORD *)(a1 + 48), v6, 109);
      sub_AE9DF0((unsigned __int8 **)&v28, 22, 4u);
      sub_AEA040((__int64)&v28);
      if ( a2[1].m128i_i16[0] != 2 )
        sub_141A820(a1, (unsigned int *)&v28);
LABEL_38:
      if ( !v43 )
        return v21;
      goto LABEL_24;
    }
    v28 = v30;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v10 = (char *)sub_145C740(a1, &v26, &v28, 0);
    v25 = v11;
    v24 = v10;
    v12 = (unsigned __int8)sub_141AD20(a1, v26.m128i_i32[0], &v24);
    v13 = (__int64 *)sub_1436660((_QWORD *)a1);
    if ( v13 )
    {
      v14 = sub_1436660((_QWORD *)a1);
      v13 = (__int64 *)sub_1465F30(v14);
      while ( 1 )
      {
        v15 = v13[1];
        if ( !v15 )
          break;
        v13 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v15 & 4) == 0 || !v13 )
          goto LABEL_13;
      }
      v13 = nullptr;
    }
LABEL_13:
    v16 = sub_141BDA0(a1, v24, v25, v12, 0, v13);
    v17 = *(_QWORD *)(a1 + 1192);
    v18 = v16;
    if ( v17 )
      (*(void (__fastcall **)(__int64, _QWORD, char *, size_t, _QWORD, __int64))(*(_QWORD *)v17 + 280LL))(
        v17,
        v6,
        v24,
        v25,
        v12,
        v16);
    if ( !v18 )
    {
      v21 = 0;
LABEL_45:
      if ( v28 != v30 )
        free(v28);
      goto LABEL_38;
    }
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 8);
      if ( !v19 )
        break;
      v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v19 & 4) == 0 || !v18 )
        goto LABEL_19;
    }
    v18 = 0;
LABEL_19:
    v20 = *(_QWORD *)(v18 + 32);
    if ( v35 )
    {
      if ( v34 > v20 )
      {
        v21 = 2;
        if ( !v33 )
          goto LABEL_45;
        v20 = 0;
        goto LABEL_42;
      }
      v20 -= v34;
    }
    if ( !v33 )
    {
LABEL_44:
      v21 = (v20 == 0) + 1;
      goto LABEL_45;
    }
LABEL_42:
    v21 = 2;
    if ( v32 > v20 )
      goto LABEL_45;
    v20 = v32;
    goto LABEL_44;
  }
  v21 = 0;
LABEL_24:
  if ( v41[48] && ptr != v41 )
    free(ptr);
  if ( v39[48] && v38 != v39 )
    free(v38);
  if ( v37[48] && v36 != v37 )
    free(v36);
  return v21;
}

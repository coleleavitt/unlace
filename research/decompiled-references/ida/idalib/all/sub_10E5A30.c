__int64 __fastcall sub_10E5A30(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  size_t v4; // rax
  _BYTE *v5; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rax
  __int64 v8; // rbx
  size_t v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rax
  _BYTE *v12; // rax
  char *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  void **v17; // rbx
  unsigned __int8 v18; // [rsp+8h] [rbp-1F0h]
  void **v19; // [rsp+10h] [rbp-1E8h]
  void **v20; // [rsp+20h] [rbp-1D8h] BYREF
  void **v21; // [rsp+28h] [rbp-1D0h]
  void *v22; // [rsp+40h] [rbp-1B8h] BYREF
  signed __int64 v23; // [rsp+48h] [rbp-1B0h]
  _BYTE v24[16]; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE *v25; // [rsp+60h] [rbp-198h] BYREF
  signed __int64 v26; // [rsp+68h] [rbp-190h]
  _BYTE *v27; // [rsp+70h] [rbp-188h]
  signed __int64 v28; // [rsp+78h] [rbp-180h]
  _BYTE *v29; // [rsp+80h] [rbp-178h]
  signed __int64 v30; // [rsp+88h] [rbp-170h]
  _BYTE v31[16]; // [rsp+90h] [rbp-168h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-158h]
  _BYTE **v33; // [rsp+B8h] [rbp-140h]
  __int64 v34; // [rsp+C0h] [rbp-138h]
  void *v35; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-120h]
  _BYTE v37[16]; // [rsp+E0h] [rbp-118h] BYREF
  __int16 v38; // [rsp+F0h] [rbp-108h]
  void *ptr; // [rsp+120h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+128h] [rbp-D0h]
  _BYTE v41[192]; // [rsp+138h] [rbp-C0h] BYREF

  sub_2210AB0(v31, a1[141], sub_2213BE0);
  v2 = a1[144];
  v32 = a1[1];
  if ( v2 )
  {
    if ( sub_10DCD30(v2, 0xDEu) )
    {
      v3 = a1[144];
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      ptr = v41;
      v4 = j__strlen(&byte_22F0C30);
      v5 = (_BYTE *)sub_21B7BC0(v3, 222, &byte_22F0C30, v4);
      sub_A1FE50(&ptr, v5, &v5[v6]);
      if ( !si128.m128i_i64[0]
        || (*(unsigned int (__fastcall **)(__int64, void **))(*(_QWORD *)a1[1] + 112LL))(a1[1], &ptr) )
      {
        v7 = (_BYTE *)a1[35];
        a1[36] = 0;
        *v7 = 0;
      }
      else
      {
        v35 = v37;
        sub_10D8DB0(&v35, ptr, (__int64)ptr + si128.m128i_i64[0]);
        sub_A0AAD0((__int64)(a1 + 35), &v35);
        if ( v35 != v37 )
          operator delete(v35);
      }
      if ( ptr != v41 )
        free(ptr);
    }
    if ( sub_10DCD30(a1[144], 0xDFu) )
    {
      v8 = a1[144];
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      ptr = v41;
      v9 = j__strlen(&byte_22F0C30);
      v35 = (void *)sub_21B7BC0(v8, 223, &byte_22F0C30, v9);
      v38 = 261;
      v36 = v10;
      sub_228E480(&v35, &ptr);
      if ( !si128.m128i_i64[0]
        || (*(unsigned int (__fastcall **)(__int64, void **))(*(_QWORD *)a1[1] + 112LL))(a1[1], &ptr) )
      {
        v11 = (_BYTE *)a1[39];
        a1[40] = 0;
        *v11 = 0;
      }
      else
      {
        v35 = v37;
        sub_10D8DB0(&v35, ptr, (__int64)ptr + si128.m128i_i64[0]);
        sub_A0AAD0((__int64)(a1 + 39), &v35);
        if ( v35 != v37 )
          operator delete(v35);
      }
      if ( ptr != v41 )
        free(ptr);
    }
  }
  v12 = (_BYTE *)a1[39];
  v34 = 3;
  v25 = v12;
  v26 = a1[40];
  v27 = (_BYTE *)a1[35];
  v28 = a1[36];
  v29 = (_BYTE *)a1[13];
  v30 = a1[14];
  v33 = &v25;
  v13 = getenv("CLANG_NO_DEFAULT_CONFIG");
  if ( !v13 || !*v13 )
  {
    v14 = a1[144];
    if ( !v14 || !sub_10DCD30(v14, 0xBB9u) )
    {
      result = sub_10E5180((__int64)a1, (__int64)v31);
      if ( (_BYTE)result )
        return result;
    }
  }
  v15 = a1[144];
  ptr = v41;
  result = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( !v15 )
    return result;
  sub_21B7150(&v20, v15, 224);
  v17 = v20;
  v19 = v21;
  if ( v21 == v20 )
  {
LABEL_24:
    sub_9B4A30(&v20);
    result = 0;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v22 = v24;
    sub_10D8CD0(&v22, *v17, (__int64)v17[1] + (_QWORD)*v17);
    v38 = 260;
    v35 = &v22;
    if ( !(unsigned __int8)sub_228ACE0(&v35, 0) )
      break;
    si128.m128i_i64[0] = 0;
    sub_A1FE50(&ptr, v22, (_BYTE *)v22 + v23);
    v38 = 261;
    v35 = ptr;
    v36 = si128.m128i_i64[0];
    if ( (unsigned __int8)sub_228B190(&v35, 0)
      && (*(unsigned int (__fastcall **)(__int64, void **))(*(_QWORD *)a1[1] + 112LL))(a1[1], &ptr) )
    {
      sub_FC70B0((__int64)&v35, *a1, 0, 329);
      sub_AEC220((unsigned __int8 **)&v35, ptr, si128.m128i_i64[0]);
      sub_10D8830((unsigned __int8 **)&v35, (__int64)"cannot get absolute path");
      sub_AEA040((__int64)&v35);
      goto LABEL_34;
    }
LABEL_21:
    if ( (unsigned __int8)sub_10E40E0(a1, ptr, (void *)si128.m128i_i64[0], (__int64)v31) )
      goto LABEL_34;
    if ( v22 == v24 )
    {
      v17 += 4;
      if ( v19 == v17 )
        goto LABEL_24;
    }
    else
    {
      operator delete(v22);
      v17 += 4;
      if ( v19 == v17 )
        goto LABEL_24;
    }
  }
  if ( (unsigned __int8)sub_2214730(v31, v22, v23, &ptr) )
    goto LABEL_21;
  sub_FC70B0((__int64)&v35, *a1, 0, 341);
  sub_AEC220((unsigned __int8 **)&v35, v22, v23);
  sub_AEA040((__int64)&v35);
  if ( v26 )
  {
    sub_FC70B0((__int64)&v35, *a1, 0, 524);
    sub_AEC220((unsigned __int8 **)&v35, v25, v26);
    sub_AEA040((__int64)&v35);
  }
  if ( v28 )
  {
    sub_FC70B0((__int64)&v35, *a1, 0, 524);
    sub_AEC220((unsigned __int8 **)&v35, v27, v28);
    sub_AEA040((__int64)&v35);
  }
  if ( v30 )
  {
    sub_FC70B0((__int64)&v35, *a1, 0, 524);
    sub_AEC220((unsigned __int8 **)&v35, v29, v30);
    sub_AEA040((__int64)&v35);
  }
LABEL_34:
  if ( v22 != v24 )
    operator delete(v22);
  sub_9B4A30(&v20);
  result = 1;
LABEL_37:
  if ( ptr != v41 )
  {
    v18 = result;
    free(ptr);
    return v18;
  }
  return result;
}

_QWORD *__fastcall sub_21611E0(_QWORD *a1, __int64 *a2)
{
  unsigned int *v4; // rcx
  int *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r9
  int v9; // eax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r9
  int *v17; // rdx
  int v18; // eax
  __int64 v19; // r13
  __m128i *v20; // rax
  __m128i si128; // xmm0
  void *v22; // rdi
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r13
  void *v31; // r12
  char *v32; // r12
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // [rsp+8h] [rbp-160h] BYREF
  __int64 v38; // [rsp+10h] [rbp-158h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-150h]
  _QWORD v40[2]; // [rsp+20h] [rbp-148h] BYREF
  __int64 v41; // [rsp+30h] [rbp-138h] BYREF
  __m128i v42[2]; // [rsp+40h] [rbp-128h] BYREF
  __int16 v43; // [rsp+60h] [rbp-108h]
  __m128i v44[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int16 v45; // [rsp+90h] [rbp-D8h]
  __m128i v46; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v48; // [rsp+D0h] [rbp-98h] BYREF
  __m128i *v49; // [rsp+E0h] [rbp-88h]
  __int16 v50; // [rsp+F0h] [rbp-78h]
  void *v51[2]; // [rsp+100h] [rbp-68h] BYREF
  _QWORD v52[2]; // [rsp+110h] [rbp-58h] BYREF
  __int16 v53; // [rsp+120h] [rbp-48h]

  v4 = (unsigned int *)a2[1];
  v5 = *(int **)(*a2 + 224);
  v6 = *(_QWORD *)(*a2 + 72);
  v7 = (unsigned int)v5[1];
  v8 = (__int64)v5 + v7 + 8;
  v9 = *v5;
  v10 = v8 - (_QWORD)v4;
  v11 = -(__int64)(v6 == 0) & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 == 1 )
  {
    if ( v10 >= v11 + 12 )
      goto LABEL_6;
LABEL_12:
    v19 = sub_2195B10(a1, v7, v6, v4);
    v51[0] = v52;
    v20 = (__m128i *)operator new(0x2Bu);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB5D0);
    strcpy(v20[2].m128i_i8, "tions data");
    *v20 = si128;
    v20[1] = _mm_load_si128(xmmword_23AB5E0);
    v51[0] = v20;
    v52[0] = 42;
    v51[1] = &qword_28 + 2;
    sub_22205D0(a1, v51, 3, v19);
    v22 = v51[0];
    if ( v51[0] == v52 )
      return a1;
LABEL_13:
    operator delete(v22);
    return a1;
  }
  v12 = v11 + 24;
  if ( v12 > v10 )
    goto LABEL_12;
  if ( v9 == 2 )
  {
    v13 = *v4;
    v44[0].m128i_i64[0] = v13;
    if ( v13 < v12 || v13 > v10 )
    {
      v48.m128i_i64[0] = (__int64)"Invalid dynamic relocation header size (";
      v49 = v44;
      v51[0] = &v48;
      v53 = 770;
      v50 = 2819;
      v52[0] = ")";
      v24 = sub_2195B10(2819, v7, v6, v4);
      sub_2253560(&v46, v51);
      sub_22205D0(a1, &v46, 3, v24);
      v22 = (void *)v46.m128i_i64[0];
      if ( (__int64 *)v46.m128i_i64[0] == &v47 )
        return a1;
      goto LABEL_13;
    }
  }
LABEL_6:
  v38 = 0;
  v39 = 0;
  sub_2160CC0(a2, &v38);
  v16 = v15 - v14;
  if ( v16 < v39 )
  {
    v37 = v39;
    v50 = 259;
    v48.m128i_i64[0] = (__int64)")";
    v42[0].m128i_i64[0] = (__int64)&v37;
    v45 = 259;
    v43 = 267;
    v44[0].m128i_i64[0] = (__int64)"Too large dynamic relocation size (";
    sub_A41580(&v46, v44, v42, 267, v14, v16);
    sub_A41580((__m128i *)v51, &v46, &v48, v25, v26, v27);
    v30 = sub_2195B10(v51, &v46, v28, v29);
    sub_2253560(v40, v51);
    sub_22205D0(a1, v40, 3, v30);
    v22 = (void *)v40[0];
    if ( (__int64 *)v40[0] == &v41 )
      return a1;
    goto LABEL_13;
  }
  v17 = (int *)a2[1];
  if ( **(_DWORD **)(*a2 + 224) == 1 )
    v18 = *v17;
  else
    v18 = v17[2];
  if ( v18 == 6 )
  {
    v51[0] = nullptr;
    v51[1] = nullptr;
    sub_2160CC0(a2, v51);
    v31 = v51[1];
    v51[1] = nullptr;
    v32 = (char *)v51[0] + (unsigned __int64)v31;
    v51[0] = nullptr;
    sub_2160CC0(a2, v51);
    v35 = (char *)v51[0];
    LODWORD(v51[1]) = 0;
    while ( v32 != v35 || LODWORD(v51[1]) )
    {
      v36 = *a2;
      v48 = _mm_load_si128((const __m128i *)v51);
      sub_2160DC0(&v46, (__int64)&v48, v36, v33, v34);
      if ( v46.m128i_i64[0] )
      {
        *a1 = v46.m128i_i64[0];
        return a1;
      }
      sub_2160D30((__int64 *)v51);
      v35 = (char *)v51[0];
    }
  }
  *a1 = 0;
  return a1;
}

_QWORD *__fastcall sub_11ECE60(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5, int a6)
{
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // rax
  char *v12; // r14
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  size_t v16; // r14
  const void *v17; // r15
  _BYTE *v18; // rsi
  unsigned __int64 v20; // rsi
  signed __int64 v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  char *v25; // rdi
  char *v26; // [rsp+0h] [rbp-1F8h] BYREF
  __int16 v27; // [rsp+20h] [rbp-1D8h]
  char *v28; // [rsp+30h] [rbp-1C8h] BYREF
  __int16 v29; // [rsp+50h] [rbp-1A8h]
  const char *v30; // [rsp+60h] [rbp-198h] BYREF
  __int16 v31; // [rsp+80h] [rbp-178h]
  _QWORD v32[4]; // [rsp+90h] [rbp-168h] BYREF
  __int16 v33; // [rsp+B0h] [rbp-148h]
  void *v34; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-130h]
  unsigned __int64 v36; // [rsp+D0h] [rbp-128h]
  _BYTE v37[72]; // [rsp+D8h] [rbp-120h] BYREF
  void *ptr; // [rsp+120h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+128h] [rbp-D0h]
  _BYTE v40[192]; // [rsp+138h] [rbp-C0h] BYREF

  qmemcpy(v37, "libclang_rt", 11);
  v36 = _mm_load_si128((const __m128i *)&xmmword_23A8D70).m128i_u64[1];
  v34 = v37;
  v35 = 11;
  if ( a5 == 8 && *(_QWORD *)a4 == 0x736E69746C697562LL )
  {
    v9 = 2;
    v12 = ".a";
    if ( a6 == 2 )
      v9 = 14;
    v11 = 11;
    if ( a6 == 2 )
      v12 = "_dynamic.dylib";
  }
  else
  {
    v9 = 14;
    v37[11] = 46;
    v35 = 12;
    sub_A1FE50(&v34, a4, &a4[a5]);
    v10 = a6 == 2;
    v11 = v35;
    if ( a6 != 2 )
      v9 = 2;
    v12 = "_dynamic.dylib";
    if ( !v10 )
      v12 = ".a";
    if ( v36 < v35 + v9 )
    {
      sub_2236E10(&v34, v37, v35 + v9, 1);
      v11 = v35;
    }
  }
  v13 = (char *)v34 + v11;
  if ( (unsigned int)v9 >= 8 )
  {
    v20 = (unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v13 = *(_QWORD *)v12;
    *(_QWORD *)((char *)v13 + (unsigned int)v9 - 8) = *(_QWORD *)&v12[(unsigned int)v9 - 8];
    v21 = v12 - ((char *)v13 - v20);
    if ( (((_DWORD)v9 + (_DWORD)v13 - (_DWORD)v20) & 0xFFFFFFF8) >= 8 )
    {
      v22 = (v9 + (_DWORD)v13 - v20) & 0xFFFFFFF8;
      v23 = 0;
      do
      {
        v24 = v23;
        v23 += 8;
        *(_QWORD *)(v20 + v24) = *(_QWORD *)(v21 + v24);
      }
      while ( v23 < v22 );
    }
  }
  else
  {
    *(_BYTE *)v13 = *v12;
    *(_WORD *)((char *)v13 + (unsigned int)v9 - 2) = *(_WORD *)&v12[(unsigned int)v9 - 2];
  }
  v14 = *(_QWORD *)(a2 + 8);
  v15 = v35 + v9;
  v16 = *(_QWORD *)(v14 + 256);
  v35 = v15;
  v17 = *(const void **)(v14 + 248);
  ptr = v40;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v16 > 0x80 )
  {
    sub_2236E10(&ptr, v40, v16, 1);
    v25 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v16 )
      goto LABEL_13;
    v25 = v40;
  }
  memcpy(v25, v17, v16);
  v15 = v35;
  v16 += si128.m128i_i64[0];
LABEL_13:
  v33 = 261;
  v31 = 259;
  v32[0] = v34;
  v30 = "macho_embedded";
  v28 = "darwin";
  v29 = 259;
  v27 = 259;
  v26 = "lib";
  si128.m128i_i64[0] = v16;
  v32[1] = v15;
  sub_228A3B0(&ptr, &v26, &v28, &v30, v32);
  v18 = ptr;
  *a1 = a1 + 2;
  sub_11E46A0(a1, v18, (__int64)&v18[si128.m128i_i64[0]]);
  if ( ptr != v40 )
    free(ptr);
  if ( v34 != v37 )
    free(v34);
  return a1;
}

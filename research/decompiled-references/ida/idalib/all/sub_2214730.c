__int64 __fastcall sub_2214730(_QWORD *a1, _BYTE *a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r9
  __int64 v5; // r13
  __int64 v6; // rdx
  _BYTE *v7; // rsi
  size_t v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rsi
  void (__fastcall *v11)(void **, __int64, __int64 **); // rcx
  _BYTE *v12; // rbp
  size_t v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rsi
  void (__fastcall *v17)(void **, __int64, __int64 **); // rcx
  int v18; // r12d
  size_t v19; // r12
  __int64 v20; // rax
  void *v21; // r12
  __int64 v22; // rax
  size_t v23; // rbp
  __int64 v24; // [rsp+8h] [rbp-270h]
  int v27; // [rsp+30h] [rbp-248h]
  unsigned __int8 v28; // [rsp+37h] [rbp-241h]
  _QWORD v30[4]; // [rsp+40h] [rbp-238h] BYREF
  __int16 v31; // [rsp+60h] [rbp-218h]
  __int64 *v32; // [rsp+70h] [rbp-208h] BYREF
  size_t v33; // [rsp+78h] [rbp-200h]
  __int16 v34; // [rsp+90h] [rbp-1E8h]
  void *v35[2]; // [rsp+A0h] [rbp-1D8h] BYREF
  _WORD v36[28]; // [rsp+B0h] [rbp-1C8h] BYREF
  int v37; // [rsp+E8h] [rbp-190h]
  char v38; // [rsp+F8h] [rbp-180h]
  void *src; // [rsp+100h] [rbp-178h] BYREF
  size_t n[2]; // [rsp+108h] [rbp-170h]
  _BYTE v41[136]; // [rsp+118h] [rbp-160h] BYREF
  void *ptr; // [rsp+1A0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1A8h] [rbp-D0h]
  __int64 v44; // [rsp+1B8h] [rbp-C0h] BYREF
  __int16 v45; // [rsp+1C0h] [rbp-B8h]

  v45 = 261;
  ptr = a2;
  src = v41;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  si128.m128i_i64[0] = a3;
  v28 = sub_228ACE0(&ptr, 0);
  if ( !v28 )
  {
    v4 = a1[5];
    v24 = v4 + 16LL * a1[6];
    if ( v4 == v24 )
    {
LABEL_16:
      v12 = src;
      goto LABEL_17;
    }
    v5 = a1[5];
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( !v6 )
        goto LABEL_9;
      v7 = *(_BYTE **)v5;
      n[0] = 0;
      sub_A1FE50(&src, v7, &v7[v6]);
      v45 = 257;
      v30[0] = a2;
      v36[8] = 257;
      v30[1] = a3;
      v34 = 257;
      v31 = 261;
      sub_228A3B0(&src, v30, &v32, v35, &ptr);
      sub_228EF50(&src, 0);
      v8 = n[0];
      v9 = &v44;
      ptr = &v44;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( n[0] )
      {
        sub_9C3DB0(&ptr, (const void **)&src);
        v9 = (__int64 *)ptr;
        v8 = si128.m128i_i64[0];
      }
      v10 = a1[2];
      v11 = *(void (__fastcall **)(void **, __int64, __int64 **))(*(_QWORD *)v10 + 40LL);
      v34 = 261;
      v32 = v9;
      v33 = v8;
      v11(v35, v10, &v32);
      if ( (v38 & 1) != 0 )
      {
        if ( ptr == &v44 )
          goto LABEL_9;
        free(ptr);
        v5 += 16;
        if ( v24 == v5 )
          goto LABEL_16;
      }
      else
      {
        v27 = v37;
        if ( v35[0] != v36 )
          operator delete(v35[0]);
        if ( ptr != &v44 )
          free(ptr);
        if ( v27 == 2 )
        {
          v21 = src;
          v22 = 0;
          v23 = n[0];
          a4[1] = 0;
          if ( v23 > a4[2] )
          {
            sub_2236E10(a4, a4 + 3, v23, 1);
            v22 = a4[1];
          }
          if ( v23 )
          {
            memcpy((void *)(*a4 + v22), v21, v23);
            v22 = a4[1];
          }
          v28 = 1;
          a4[1] = v22 + v23;
          v12 = src;
          goto LABEL_17;
        }
LABEL_9:
        v5 += 16;
        if ( v24 == v5 )
          goto LABEL_16;
      }
    }
  }
  n[0] = 0;
  sub_A1FE50(&src, a2, &a2[a3]);
  v45 = 261;
  ptr = a2;
  si128.m128i_i64[0] = a3;
  if ( (unsigned __int8)sub_228B190(&ptr, 0)
    && (*(unsigned int (__fastcall **)(_QWORD, void **))(*(_QWORD *)a1[2] + 112LL))(a1[2], &src) )
  {
LABEL_22:
    v12 = src;
    v28 = 0;
    goto LABEL_17;
  }
  v14 = n[0];
  v15 = &v44;
  ptr = &v44;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( n[0] )
  {
    sub_9C3DB0(&ptr, (const void **)&src);
    v15 = (__int64 *)ptr;
    v14 = si128.m128i_i64[0];
  }
  v16 = a1[2];
  v17 = *(void (__fastcall **)(void **, __int64, __int64 **))(*(_QWORD *)v16 + 40LL);
  v34 = 261;
  v33 = v14;
  v32 = v15;
  v17(v35, v16, &v32);
  if ( (v38 & 1) != 0 )
  {
    if ( ptr != &v44 )
      free(ptr);
    goto LABEL_22;
  }
  v18 = v37;
  if ( v35[0] != v36 )
    operator delete(v35[0]);
  if ( ptr != &v44 )
    free(ptr);
  v12 = src;
  if ( v18 == 2 )
  {
    v19 = n[0];
    v20 = 0;
    a4[1] = 0;
    if ( v19 > a4[2] )
    {
      sub_2236E10(a4, a4 + 3, v19, 1);
      v20 = a4[1];
    }
    if ( v19 )
    {
      memcpy((void *)(*a4 + v20), v12, v19);
      v20 = a4[1];
    }
    v12 = src;
    a4[1] = v20 + v19;
  }
  else
  {
    v28 = 0;
  }
LABEL_17:
  if ( v12 != v41 )
    free(v12);
  return v28;
}

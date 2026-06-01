__int64 __fastcall sub_C14910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // r14d
  _BYTE *v12; // rsi
  char *v13; // rdi
  char *v14; // rdi
  char *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __m128i v19; // xmm1
  __int64 v20; // rax
  __m128i v21; // xmm2
  unsigned __int64 v22; // rcx
  char *v23; // rax
  char *v24; // r8
  _BYTE *v25; // r8
  _BYTE *v26; // r8
  _BYTE *v27; // r8
  _BYTE *v28; // r8
  _BYTE *v29; // r8
  _BYTE *v30; // r8
  _BYTE *v31; // r8
  _BYTE *v32; // r8
  _BYTE *v33; // r8
  _BYTE *v34; // r8
  _BYTE *v35; // r8
  _BYTE *v36; // r8
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx
  _BYTE *v39; // r8
  char v40; // dl
  char *v41; // rax
  char *v43; // rax
  char *v44; // rdx
  char v45; // cl
  char v46; // si
  unsigned int v47; // eax
  char v48; // r15
  unsigned int v49; // eax
  void *v50; // rdx
  __int64 v51; // rax
  char v52; // dl
  __int32 v53; // [rsp+4h] [rbp-74h]
  void *v54; // [rsp+8h] [rbp-70h]
  void *v55; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v56; // [rsp+18h] [rbp-60h]
  char v57; // [rsp+1Ch] [rbp-5Ch]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+28h] [rbp-50h]
  _BYTE v60[64]; // [rsp+38h] [rbp-40h] BYREF

  v8 = *(_DWORD *)(a2 + 8);
  v56 = v8;
  if ( v8 > 0x40 )
  {
    sub_2205510(&v55);
    v8 = v56;
  }
  else
  {
    v55 = *(void **)a2;
  }
  v9 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v57 = *(_BYTE *)(a2 + 12);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    v47 = sub_A97D20(*(_QWORD *)(*(_QWORD *)a1 + 16LL), v9);
    v48 = v57;
    v8 = v47;
    if ( v57 )
      sub_2206CD0(&ptr, &v55, v47);
    else
      sub_2206B70(&ptr, &v55, v47);
    v49 = si128.m128i_i32[0];
    v50 = ptr;
    if ( v56 > 0x40 && v55 )
    {
      v54 = ptr;
      v53 = si128.m128i_i32[0];
      operator delete[](v55);
      v50 = v54;
      v49 = v53;
    }
    v55 = v50;
    v56 = v49;
    v57 = v48;
  }
  v11 = v8 >> 3;
  v12 = v60;
  ptr = v60;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  if ( v11 )
  {
    v13 = v60;
    if ( v11 > 8uLL )
    {
      sub_2236E10(&ptr, v60, v11, 1);
      v12 = ptr;
      v13 = (char *)ptr + si128.m128i_i64[0];
    }
    if ( &v12[v11] != v13 )
    {
      memset(v13, 0, &v12[v11] - v13);
      v12 = ptr;
    }
    si128.m128i_i64[0] = v11;
  }
  sub_220BA60(&v55, v12, v11);
  if ( *(_BYTE *)(a1 + 96) )
  {
LABEL_12:
    v14 = (char *)ptr;
    v15 = (char *)ptr + si128.m128i_i64[0];
    if ( ptr == (char *)ptr + si128.m128i_i64[0] )
      goto LABEL_33;
    goto LABEL_13;
  }
  v43 = (char *)ptr;
  v14 = (char *)ptr + si128.m128i_i64[0];
  if ( ptr == (char *)ptr + si128.m128i_i64[0] )
    goto LABEL_33;
  v44 = v14 - 1;
  if ( ptr < v14 - 1 )
  {
    do
    {
      v45 = *v43;
      v46 = *v44;
      ++v43;
      --v44;
      *(v43 - 1) = v46;
      v44[1] = v45;
    }
    while ( v43 < v44 );
    goto LABEL_12;
  }
  v15 = (char *)ptr + si128.m128i_i64[0];
  v14 = (char *)ptr;
LABEL_13:
  v16 = *(_QWORD *)(a1 + 8);
  v17 = v15 - v14;
  v18 = v16 + 2 * a4;
  if ( ((unsigned __int64)v15 <= v18 || (unsigned __int64)v14 >= v16 + 2 * (&v15[a4] - v14))
    && (unsigned __int64)(v15 - 1 - v14) > 0xE )
  {
    v19 = _mm_load_si128((const __m128i *)&xmmword_23A8EB0);
    v20 = 0;
    do
    {
      v21 = _mm_loadu_si128((const __m128i *)&v14[v20]);
      *(__m128i *)(v18 + 2 * v20 + 16) = _mm_unpackhi_epi8(v21, v19);
      *(__m128i *)(v18 + 2 * v20) = _mm_unpacklo_epi8(v21, v19);
      v20 += 16;
    }
    while ( v20 != (v17 & 0xFFFFFFFFFFFFFFF0LL) );
    v22 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    v23 = &v14[v17 & 0xFFFFFFFFFFFFFFF0LL];
    if ( v17 != (v17 & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v24 = (char *)(v16 + 2 * (a4 + v22));
      *v24 = *v23;
      v24[1] = 1;
      if ( v15 != v23 + 1 )
      {
        v25 = (_BYTE *)(v16 + 2 * (a4 + v22 + 1));
        *v25 = v23[1];
        v25[1] = 1;
        if ( v15 != v23 + 2 )
        {
          v26 = (_BYTE *)(v16 + 2 * (a4 + v22 + 2));
          *v26 = v23[2];
          v26[1] = 1;
          if ( v15 != v23 + 3 )
          {
            v27 = (_BYTE *)(v16 + 2 * (a4 + v22 + 3));
            *v27 = v23[3];
            v27[1] = 1;
            if ( v15 != v23 + 4 )
            {
              v28 = (_BYTE *)(v16 + 2 * (a4 + v22 + 4));
              *v28 = v23[4];
              v28[1] = 1;
              if ( v15 != v23 + 5 )
              {
                v29 = (_BYTE *)(v16 + 2 * (a4 + v22 + 5));
                *v29 = v23[5];
                v29[1] = 1;
                if ( v15 != v23 + 6 )
                {
                  v30 = (_BYTE *)(v16 + 2 * (a4 + v22 + 6));
                  *v30 = v23[6];
                  v30[1] = 1;
                  if ( v15 != v23 + 7 )
                  {
                    v31 = (_BYTE *)(v16 + 2 * (a4 + v22 + 7));
                    *v31 = v23[7];
                    v31[1] = 1;
                    if ( v15 != v23 + 8 )
                    {
                      v32 = (_BYTE *)(v16 + 2 * (a4 + v22 + 8));
                      *v32 = v23[8];
                      v32[1] = 1;
                      if ( v15 != v23 + 9 )
                      {
                        v33 = (_BYTE *)(v16 + 2 * (a4 + v22 + 9));
                        *v33 = v23[9];
                        v33[1] = 1;
                        if ( v15 != v23 + 10 )
                        {
                          v34 = (_BYTE *)(v16 + 2 * (a4 + v22 + 10));
                          *v34 = v23[10];
                          v34[1] = 1;
                          if ( v15 != v23 + 11 )
                          {
                            v35 = (_BYTE *)(v16 + 2 * (a4 + v22 + 11));
                            *v35 = v23[11];
                            v35[1] = 1;
                            if ( v15 != v23 + 12 )
                            {
                              v36 = (_BYTE *)(v16 + 2 * (a4 + v22 + 12));
                              *v36 = v23[12];
                              v36[1] = 1;
                              v37 = v22 + 13;
                              if ( v15 != v23 + 13 )
                              {
                                v38 = v22 + 14;
                                v39 = (_BYTE *)(v16 + 2 * (a4 + v37));
                                *v39 = v23[13];
                                v39[1] = 1;
                                if ( v15 != v23 + 14 )
                                {
                                  v40 = v23[14];
                                  v41 = (char *)(v16 + 2 * (v38 + a4));
                                  *v41 = v40;
                                  v41[1] = 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v51 = 0;
    do
    {
      v52 = v14[v51];
      *(_BYTE *)(v18 + 2 * v51 + 1) = 1;
      *(_BYTE *)(v18 + 2 * v51++) = v52;
    }
    while ( v51 != v17 );
  }
LABEL_33:
  if ( v14 != v60 )
    free(v14);
  if ( v56 > 0x40 && v55 )
    operator delete[](v55);
  return 1;
}

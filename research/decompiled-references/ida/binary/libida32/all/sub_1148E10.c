__m128i **__fastcall sub_1148E10(__m128i **a1, __int64 a2, __int64 a3)
{
  size_t v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  _BYTE *v10; // r13
  __m128i *v11; // rdx
  __m128i *v12; // rax
  _BYTE *v13; // rsi
  __m128i *v14; // rdx
  __m128i *v15; // rax
  __m128i v16; // xmm1
  __int32 v17; // edx
  __int64 v18; // r9
  __m128i *v19; // r8
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  char *v25; // rax
  size_t v26; // r15
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // r12
  __int64 *v30; // r13
  __m128i *v31; // rdx
  __m128i *v32; // rax
  char *v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rax
  __m128i *v37; // rdi
  __int64 v38; // [rsp+0h] [rbp-E8h]
  __m128i *v39; // [rsp+10h] [rbp-D8h]
  char *v40; // [rsp+18h] [rbp-D0h]
  __int64 v41; // [rsp+28h] [rbp-C0h]
  void *ptr; // [rsp+30h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-B0h]
  _QWORD v44[2]; // [rsp+50h] [rbp-98h] BYREF
  char v45; // [rsp+60h] [rbp-88h]
  void *v46; // [rsp+70h] [rbp-78h] BYREF
  __m128i *v47; // [rsp+78h] [rbp-70h]
  __m128i v48; // [rsp+80h] [rbp-68h] BYREF
  void *v49; // [rsp+90h] [rbp-58h] BYREF
  __m128i *v50; // [rsp+98h] [rbp-50h]
  __m128i v51[4]; // [rsp+A0h] [rbp-48h] BYREF

  v5 = j__strlen(&byte_22CD811);
  v6 = sub_2193E80(a3, 2323, &byte_22CD811, v5);
  v8 = v7;
  if ( !v7 )
  {
    memset(a1, 0, 0x70u);
    return a1;
  }
  v10 = (_BYTE *)v6;
  ptr = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
  sub_1007410((__int64)v44, a2 + 16, v6, v7, &ptr);
  if ( v45 )
  {
    if ( v10 )
    {
      v46 = &v48;
      sub_1148360(&v46, v10, (__int64)&v10[v8]);
      v11 = (__m128i *)v46;
      v12 = v47;
      *a1 = (__m128i *)(a1 + 2);
      if ( v11 != &v48 )
      {
        *a1 = v11;
        a1[2] = (__m128i *)v48.m128i_i64[0];
        goto LABEL_8;
      }
    }
    else
    {
      v48.m128i_i8[0] = 0;
      *a1 = (__m128i *)(a1 + 2);
      v12 = nullptr;
    }
    *((__m128i *)a1 + 1) = _mm_load_si128(&v48);
LABEL_8:
    a1[1] = v12;
    v13 = (_BYTE *)v44[0];
    v48.m128i_i8[0] = 0;
    *((_BYTE *)a1 + 32) = 1;
    v46 = &v48;
    v47 = nullptr;
    if ( v13 )
    {
      v49 = v51;
      sub_1148360(&v49, v13, (__int64)&v13[v44[1]]);
      v14 = (__m128i *)v49;
      v15 = v50;
      a1[5] = (__m128i *)(a1 + 7);
      if ( v14 != v51 )
      {
        a1[5] = v14;
        a1[7] = (__m128i *)v51[0].m128i_i64[0];
LABEL_11:
        v16 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
        a1[6] = v15;
        v17 = si128.m128i_i32[1];
        v50 = nullptr;
        v51[0].m128i_i8[0] = 0;
        *((_BYTE *)a1 + 72) = 1;
        v49 = v51;
        a1[10] = nullptr;
        *(__m128i *)(a1 + 11) = v16;
        if ( v17 )
        {
          sub_2220EB0(a1 + 10, si128.m128i_u32[0]);
          v19 = a1[10];
          v20 = (char *)ptr;
          v21 = *((unsigned int *)a1 + 22);
          v22 = 8 * v21 + 8;
          v23 = *(__int64 *)((char *)si128.m128i_i64 + 4);
          v39 = v19;
          v40 = (char *)ptr;
          *(__m128i **)((char *)a1 + 92) = *(__m128i **)((char *)si128.m128i_i64 + 4);
          if ( (_DWORD)v21 )
          {
            v24 = 0;
            v38 = 8LL * (unsigned int)(v21 - 1);
            v25 = v20;
            while ( 1 )
            {
              v29 = *(_QWORD *)&v25[v24];
              v30 = &v19->m128i_i64[v24 / 8];
              if ( v29 == -8 || !v29 )
              {
                *v30 = v29;
              }
              else
              {
                v26 = *(_QWORD *)v29;
                v27 = sub_220C370(*(_QWORD *)v29 + 17LL, 8, v23, v20, v19, v18);
                v18 = v27;
                if ( v26 )
                {
                  v41 = v27;
                  memcpy((void *)(v27 + 16), (const void *)(v29 + 16), v26);
                  v18 = v41;
                }
                *(_BYTE *)(v18 + v26 + 16) = 0;
                v28 = *(_BYTE *)(v29 + 8);
                v20 = (char *)v39;
                *(_QWORD *)v18 = v26;
                *(_BYTE *)(v18 + 8) = v28;
                *v30 = v18;
                *(__int32 *)((char *)v39->m128i_i32 + v22) = *(_DWORD *)&v40[v22];
              }
              v22 += 4;
              if ( v24 == v38 )
                break;
              v25 = (char *)ptr;
              v19 = a1[10];
              v24 += 8LL;
            }
          }
          v37 = (__m128i *)v49;
          *((_BYTE *)a1 + 104) = 1;
          if ( v37 != v51 )
            operator delete(v37);
        }
        else
        {
          *((_BYTE *)a1 + 104) = 1;
        }
        if ( v46 != &v48 )
          operator delete(v46);
        goto LABEL_26;
      }
    }
    else
    {
      v51[0].m128i_i8[0] = 0;
      a1[5] = (__m128i *)(a1 + 7);
      v15 = nullptr;
    }
    *(__m128i *)(a1 + 7) = _mm_load_si128(v51);
    goto LABEL_11;
  }
  memset(a1, 0, 0x70u);
  if ( !v10 )
  {
    v51[0].m128i_i8[0] = 0;
    *a1 = (__m128i *)(a1 + 2);
    v32 = nullptr;
    goto LABEL_39;
  }
  v49 = v51;
  sub_1148360(&v49, v10, (__int64)&v10[v8]);
  v31 = (__m128i *)v49;
  v32 = v50;
  *a1 = (__m128i *)(a1 + 2);
  if ( v31 == v51 )
  {
LABEL_39:
    *((__m128i *)a1 + 1) = _mm_load_si128(v51);
    goto LABEL_25;
  }
  *a1 = v31;
  a1[2] = (__m128i *)v51[0].m128i_i64[0];
LABEL_25:
  a1[1] = v32;
  *((_BYTE *)a1 + 32) = 1;
LABEL_26:
  v33 = (char *)ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v34 = 0;
    v35 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v36 = *(_QWORD *)&v33[v34];
      if ( v36 != -8 && v36 )
      {
        operator delete();
        v33 = (char *)ptr;
      }
      v34 += 8;
    }
    while ( v35 != v34 );
  }
  free(v33);
  return a1;
}


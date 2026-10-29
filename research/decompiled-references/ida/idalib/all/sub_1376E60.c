void __fastcall sub_1376E60(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  _QWORD *v9; // r14
  __int64 v10; // rax
  bool v11; // dl
  int v12; // eax
  char *v13; // rbx
  size_t v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __m128i *v18; // rax
  __m128i *v19; // rdx
  _BYTE *v20; // rdi
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  char v23; // cl
  _QWORD *v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 *v28; // rdi
  __int64 v29; // rcx
  _DWORD *v30; // rax
  _DWORD *v31; // rdx
  _QWORD *v32; // [rsp+0h] [rbp-80h]
  char *s; // [rsp+8h] [rbp-78h] BYREF
  void *v34[2]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v35[72]; // [rsp+38h] [rbp-48h] BYREF

  if ( !a5 )
    return;
  v9 = *(_QWORD **)(a1 + 8);
  LOBYTE(v34[0]) = 0;
  if ( (unsigned int)(a5 + 1) <= 1 )
  {
    v11 = a4 != 3 && a4 != 0;
    goto LABEL_13;
  }
  if ( a5 < 0 )
  {
    v21 = (unsigned int)(-2 - a5);
    v22 = *(_QWORD *)(v9[40] + 8LL * ((unsigned int)(-2 - a5) >> 6));
    if ( _bittest64(&v22, v21) )
    {
      v23 = 0;
      v24 = (_QWORD *)(v9[34] + 8 * ((unsigned __int64)(int)v21 >> 5));
      v25 = *v24;
      if ( !*v24 )
      {
        v28 = (__int64 *)(v9[36] & 0xFFFFFFFFFFFFFFF8LL);
        v29 = *v28;
        v28[10] += 768;
        v30 = (_DWORD *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v28[1] >= (unsigned __int64)(v30 + 192) && v29 )
        {
          *v28 = (__int64)(v30 + 192);
        }
        else
        {
          v32 = v24;
          v30 = (_DWORD *)sub_986170((__int64)v28, 768, 768, 3, (__int64)v24, a6);
          v24 = v32;
        }
        *v24 = v30;
        v31 = v30 + 192;
        do
        {
          *v30 = 0;
          v30 += 6;
          *((_OWORD *)v30 - 1) = 0;
          *((_QWORD *)v30 - 1) = 0;
        }
        while ( v30 != v31 );
        v25 = *v24;
        v23 = (char)v34[0];
      }
      v10 = v25 + 24 * (v21 & 0x1F);
    }
    else
    {
      v10 = sub_101F930((__int64)v9, v21, v34);
      v23 = (char)v34[0];
    }
    v11 = a4 != 3 && a4 != 0;
    if ( v23 )
      goto LABEL_13;
  }
  else
  {
    v10 = v9[23] + 24LL * (unsigned int)a5;
    v11 = a4 != 0 && a4 != 3;
  }
  if ( v10 && *(char *)(v10 + 3) >= 0 )
  {
    if ( !v11 )
      return;
    if ( (*(_DWORD *)v10 & 0x7FFFFFFF) != 0 )
    {
      v12 = sub_1021680((__int64)v9, *(_DWORD *)v10 & 0x7FFFFFFF);
      if ( v12 )
      {
        if ( v12 != 3 )
          return;
      }
    }
    goto LABEL_14;
  }
LABEL_13:
  if ( !v11 )
    return;
LABEL_14:
  sub_1022900((__int64)&s, *(__int64 **)(a1 + 8), a2, 1);
  v13 = s;
  if ( s
    && !a3
    && (strlen(s) != 14
     || *(_QWORD *)v13 != 0x646E616D6D6F633CLL
     || *((_DWORD *)v13 + 2) != 1852402720
     || *((_WORD *)v13 + 6) != 15973) )
  {
    v34[0] = v35;
    v14 = strlen(v13);
    sub_1371340(v34, v13, (__int64)&v13[v14]);
    v15 = *(unsigned int *)(a1 + 40);
    v16 = v15 + 1;
    if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
    {
      v26 = *(_QWORD *)(a1 + 32);
      v27 = a1 + 32;
      if ( v26 > (unsigned __int64)v34 || (unsigned __int64)v34 >= v26 + 32 * v15 )
      {
        sub_A8C1F0(v27, v16);
        v17 = *(_QWORD *)(a1 + 32);
        v15 = *(unsigned int *)(a1 + 40);
        v18 = (__m128i *)v34;
      }
      else
      {
        sub_A8C1F0(v27, v16);
        v17 = *(_QWORD *)(a1 + 32);
        v15 = *(unsigned int *)(a1 + 40);
        v18 = (__m128i *)((char *)v34 + v17 - v26);
      }
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 32);
      v18 = (__m128i *)v34;
    }
    v19 = (__m128i *)(v17 + 32 * v15);
    v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
    if ( (__m128i *)v18->m128i_i64[0] == &v18[1] )
    {
      v19[1] = _mm_loadu_si128(v18 + 1);
    }
    else
    {
      v19->m128i_i64[0] = v18->m128i_i64[0];
      v19[1].m128i_i64[0] = v18[1].m128i_i64[0];
    }
    v19->m128i_i64[1] = v18->m128i_i64[1];
    v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
    v18->m128i_i64[1] = 0;
    v18[1].m128i_i8[0] = 0;
    v20 = v34[0];
    ++*(_DWORD *)(a1 + 40);
    if ( v20 != v35 )
      operator delete(v20);
  }
}

unsigned __int64 __fastcall sub_3B3820(__int64 *a1, int a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  int v5; // eax
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // r13
  int v14; // edx
  unsigned int v15; // ebx
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 result; // rax
  unsigned int v25; // r13d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r9
  size_t v31; // rdx
  const __m128i *v32; // r14
  __m128i *v33; // r8
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm0
  _QWORD *v38; // rax
  char **exception; // r13
  __int64 v40; // rdx
  __int64 v41; // [rsp+0h] [rbp-78h]
  __int64 v42; // [rsp+0h] [rbp-78h]
  size_t v43; // [rsp+0h] [rbp-78h]
  __int64 v44; // [rsp+0h] [rbp-78h]
  __int64 v45; // [rsp+8h] [rbp-70h]
  __int64 v46; // [rsp+8h] [rbp-70h]
  __int64 v47[11]; // [rsp+20h] [rbp-58h] BYREF

  a1[1] = (__int64)a1;
  a1[2] = 0;
  *((_BYTE *)a1 + 24) = 0;
  sub_186A780(a1 + 4, (unsigned int)(2 * a2));
  a1[72] = 0;
  a1[73] = (__int64)(a1 + 4);
  a1[74] = (__int64)(a1 + 4);
  a1[75] = (__int64)(a1 + 4);
  a1[76] = (__int64)(a1 + 4);
  v2 = (_QWORD *)sub_186B270(0x80u);
  v2[1] = 0;
  v2[3] = 0;
  v2[5] = 0;
  v2[7] = 0;
  v2[9] = 0;
  v2[11] = 0;
  v2[13] = 0;
  v2[15] = 0;
  a1[77] = (__int64)v2;
  a1[78] = 8;
  *((_DWORD *)a1 + 158) = 0;
  a1[80] = 0;
  a1[81] = 0;
  v3 = sub_1829AC0(a1 + 4);
  v4 = sub_186B270(0x60u);
  v5 = *((_DWORD *)a1 + 157);
  *(_QWORD *)v4 = a1 + 4;
  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 4), (__m128i)(unsigned __int64)(a1 + 4));
  *(_QWORD *)(v4 + 8) = v3;
  *(_QWORD *)(v4 + 16) = a1;
  *(_QWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 36) = v5;
  *(__m128i *)(v4 + 40) = v6;
  *(__m128i *)(v4 + 56) = v6;
  v7 = (_QWORD *)sub_186B270(0x80u);
  v8 = (_QWORD *)a1[2];
  ++*(_DWORD *)(v4 + 32);
  v7[1] = 0;
  v7[3] = 0;
  v7[5] = 0;
  v7[7] = 0;
  v7[9] = 0;
  v7[11] = 0;
  v7[13] = 0;
  v7[15] = 0;
  *(_QWORD *)(v4 + 72) = v7;
  *(_QWORD *)(v4 + 80) = 8;
  *(_DWORD *)(v4 + 88) = 0;
  *a1 = v4;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v25 = (3 * v9 + 1) >> 1;
      v26 = 8 * v25 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v26 || v9 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C7E7E(v47, "Overflow encountered when expanding vector", v40);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v8 - 1, v26);
      v28 = v27[1];
      v8 = v27 + 2;
      *v27 = v25;
      a1[2] = (__int64)(v27 + 2);
      LODWORD(v27) = v28;
      v12 = &v8[v28];
      v11 = (_DWORD)v27 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v8[v10];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v8 = v38 + 1;
    *v38 = 2;
    v11 = 1;
    a1[2] = (__int64)v8;
    v12 = v8;
  }
  *v12 = v4;
  v13 = *a1;
  *((_DWORD *)v8 - 1) = v11;
  v14 = *((_DWORD *)a1 + 156);
  v15 = 2 * v14;
  if ( 3 * v14 < (unsigned int)(4 * (*((_DWORD *)a1 + 157) + *((_DWORD *)a1 + 158))) )
  {
    v43 = 16LL * v15;
    v29 = sub_186B270(v43);
    v30 = v29;
    v31 = v29 + v43;
    if ( v15 )
    {
      if ( (v43 & 0x10) == 0 || (*(_QWORD *)(v29 + 8) = 0, v29 += 16, v31 != v29) )
      {
        do
        {
          *(_QWORD *)(v29 + 8) = 0;
          v29 += 32;
          *(_QWORD *)(v29 - 8) = 0;
        }
        while ( v31 != v29 );
      }
    }
    v32 = (const __m128i *)a1[77];
    v33 = (__m128i *)&v32[*((unsigned int *)a1 + 156)];
    if ( v32 != v33 )
    {
      do
      {
        while ( v32->m128i_i64[1] <= 1uLL )
        {
          if ( v33 == ++v32 )
            goto LABEL_43;
        }
        v34 = 16LL * (v32->m128i_i32[0] & (v15 - 1));
        v35 = (__m128i *)(v30 + v34);
        if ( v43 == v34 )
        {
LABEL_47:
          if ( (__m128i *)v30 == v35 )
          {
LABEL_52:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v36 = (__m128i *)v30;
          while ( v36->m128i_i64[1] )
          {
            if ( v35 == ++v36 )
              goto LABEL_52;
          }
        }
        else
        {
          v36 = (__m128i *)(v30 + v34);
          while ( v36->m128i_i64[1] )
          {
            if ( (__m128i *)(v30 + v43) == ++v36 )
              goto LABEL_47;
          }
        }
        v37 = _mm_loadu_si128(v32++);
        *v36 = v37;
      }
      while ( v33 != v32 );
LABEL_43:
      v33 = (__m128i *)a1[77];
    }
    if ( v33 )
    {
      v44 = v30;
      sub_186B220(v33);
      v30 = v44;
    }
    a1[77] = v30;
    *((_DWORD *)a1 + 156) = v15;
    *((_DWORD *)a1 + 158) = 0;
  }
  v16 = sub_182A670(a1[75], *(_QWORD *)(v13 + 8));
  v17 = *((unsigned int *)a1 + 156);
  v18 = a1[77];
  v19 = v17 - 1;
  v17 *= 16;
  v20 = v18 + v17;
  v21 = 16LL * (v16 & v19);
  v22 = v18 + v21;
  if ( v21 == v17 )
  {
    v23 = 0;
    while ( 1 )
    {
LABEL_15:
      if ( v22 == v18 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      result = *(_QWORD *)(v18 + 8);
      if ( result > 1 )
      {
        if ( v16 == *(_DWORD *)v18 )
        {
          v46 = v22;
          v42 = v23;
          result = sub_182A660(a1[76], *(_QWORD *)(result + 8), *(_QWORD *)(v13 + 8));
          v23 = v42;
          v22 = v46;
          if ( (_BYTE)result )
            goto LABEL_20;
        }
      }
      else
      {
        if ( !result )
        {
LABEL_23:
          if ( v23 )
            --*((_DWORD *)a1 + 158);
          else
            v23 = v18;
          *(_QWORD *)(v23 + 8) = v13;
          *(_DWORD *)v23 = v16;
          ++*((_DWORD *)a1 + 157);
          return result;
        }
        v23 = v18;
      }
      v18 += 16;
    }
  }
  v18 += v21;
  v23 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(v18 + 8);
      if ( result > 1 )
        break;
      if ( !result )
        goto LABEL_23;
      v23 = v18;
      v18 += 16;
      if ( v20 == v18 )
      {
LABEL_12:
        v18 = a1[77];
        goto LABEL_15;
      }
    }
    if ( v16 == *(_DWORD *)v18 )
    {
      v45 = v22;
      v41 = v23;
      result = sub_182A660(a1[76], *(_QWORD *)(result + 8), *(_QWORD *)(v13 + 8));
      v23 = v41;
      v22 = v45;
      if ( (_BYTE)result )
        break;
    }
    v18 += 16;
    if ( v20 == v18 )
      goto LABEL_12;
  }
LABEL_20:
  *(_QWORD *)(v18 + 8) = v13;
  return result;
}


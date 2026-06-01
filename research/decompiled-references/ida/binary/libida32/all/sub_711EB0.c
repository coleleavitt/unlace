__int64 __fastcall sub_711EB0(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char *v8; // r13
  __int64 v9; // rbx
  char *v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rbx
  __int64 v14; // rdi
  const char **v15; // rbx
  __m128i *v16; // rax
  __m128i si128; // xmm0
  size_t v18; // r15
  const char *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 v27; // rbx
  char *v28; // rax
  void *v29; // rdi
  __int64 v31; // rax
  size_t v32; // r15
  __int64 v33; // [rsp+0h] [rbp-158h]
  unsigned __int64 v34; // [rsp+8h] [rbp-150h]
  void *v36; // [rsp+30h] [rbp-128h] BYREF
  __int128 v37; // [rsp+38h] [rbp-120h]
  void *ptr; // [rsp+50h] [rbp-108h] BYREF
  __int128 v39; // [rsp+58h] [rbp-100h]
  void *v40; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v41; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v42; // [rsp+88h] [rbp-D0h]
  char v43[64]; // [rsp+90h] [rbp-C8h] BYREF
  char s[72]; // [rsp+D0h] [rbp-88h] BYREF
  unsigned __int64 v45; // [rsp+118h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v41 = 0;
  v40 = nullptr;
  v42 = 0;
  sub_710030((__int64 *)&v40, a2, (unsigned __int8)a4, a4, a5, a6);
  v8 = (char *)v40;
  if ( a3 >= v42 )
  {
    v25 = 0;
    goto LABEL_29;
  }
  v9 = 40 * v41;
  v10 = (char *)v40 + 40 * v41;
  if ( v10 == v40 )
    goto LABEL_37;
  v11 = 0xCCCCCCCCCCCCCCCDLL * (v9 >> 3);
  if ( !v11 )
  {
    sub_711400((__int64)v40, (unsigned __int64)v40 + 40 * v41, -2);
    goto LABEL_39;
  }
  _BitScanReverse64(&v12, v11);
  sub_711400((__int64)v40, (unsigned __int64)v40 + 40 * v41, 2LL * (int)v12);
  if ( v9 <= 640 )
  {
LABEL_39:
    sub_710570((__int64)v8, (__int64)v10);
    goto LABEL_7;
  }
  v13 = v8 + 640;
  sub_710570((__int64)v8, (__int64)(v8 + 640));
  do
  {
    v14 = (__int64)v13;
    v13 += 40;
    sub_710410(v14);
  }
  while ( v10 != v13 );
LABEL_7:
  v15 = (const char **)v40;
  v8 = (char *)v40 + 40 * v41;
  if ( v40 == v8 )
  {
LABEL_37:
    v25 = -1;
    goto LABEL_29;
  }
  v33 = 0;
  while ( 1 )
  {
    v19 = haystack;
    if ( v15[1] )
      v19 = *v15;
    if ( !a1 )
      break;
    while ( 1 )
    {
      v20 = a1[1];
      v21 = *a1;
      if ( a1[2] < (unsigned __int64)(v20 + 1) )
      {
        v31 = qvector_reserve(a1, v21, v20 + 1, 24);
        *a1 = v31;
        v20 = a1[1];
        v21 = v31;
      }
      v22 = v21 + 24 * v20;
      *(_QWORD *)v22 = 0;
      *(_OWORD *)(v22 + 8) = 0;
      ++a1[1];
      if ( !(unsigned int)qunlink(v19) )
        break;
      if ( v22 )
      {
        qstrerror(0xFFFFFFFFLL, v21, v23, v24);
        sub_3573A0((char **)v22);
      }
      v15 += 5;
      if ( v8 == (char *)v15 )
        goto LABEL_44;
      v19 = haystack;
      if ( v15[1] )
        v19 = *v15;
    }
    v33 += (__int64)v15[3];
    v37 = 0;
    v36 = nullptr;
    v34 = v42 - v33;
    if ( v42 == v33 )
    {
      v16 = (__m128i *)qvector_reserve(&v36, 0, 19, 1);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23842F0);
      v36 = v16;
      *(_QWORD *)&v37 = 19;
      v16[1].m128i_i16[0] = 31092;
      *v16 = si128;
      *((_BYTE *)v36 + 18) = 0;
    }
    else
    {
      pretty_print_size(v43, 64, v34);
      ptr = nullptr;
      v39 = 0;
      v32 = strlen(v43);
      ptr = (void *)qvector_reserve(&ptr, 0, v32 + 1, 1);
      *(_QWORD *)&v39 = v32 + 1;
      memmove(ptr, v43, v32);
      *((_BYTE *)ptr + v32) = 0;
      sub_3573A0((char **)&v36);
      if ( ptr )
      {
        *(_QWORD *)&v39 = 0;
        qfree(ptr);
      }
    }
    pretty_print_size(s, 64, v15[3]);
    ptr = nullptr;
    v39 = 0;
    v18 = strlen(s);
    ptr = (void *)qvector_reserve(&ptr, 0, v18 + 1, 1);
    *(_QWORD *)&v39 = v18 + 1;
    memmove(ptr, s, v18);
    *((_BYTE *)ptr + v18) = 0;
    sub_3573A0((char **)v22);
    if ( ptr )
    {
      *(_QWORD *)&v39 = 0;
      qfree(ptr);
    }
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( a3 >= v34 )
      goto LABEL_48;
LABEL_16:
    v15 += 5;
    if ( v8 == (char *)v15 )
    {
LABEL_44:
      v8 = (char *)v40;
      v25 = -1;
      goto LABEL_29;
    }
  }
  while ( (unsigned int)qunlink(v19) )
  {
    v15 += 5;
    if ( v8 == (char *)v15 )
      goto LABEL_44;
    v19 = haystack;
    if ( v15[1] )
      v19 = *v15;
  }
  v33 += (__int64)v15[3];
  if ( a3 < v42 - v33 )
    goto LABEL_16;
LABEL_48:
  v25 = v33;
  v8 = (char *)v40;
LABEL_29:
  if ( v8 )
  {
    v26 = v41;
    if ( (_QWORD)v41 )
    {
      v27 = 0;
      do
      {
        v28 = &v8[40 * v27];
        v29 = *(void **)v28;
        if ( *(_QWORD *)v28 )
        {
          *((_QWORD *)v28 + 1) = 0;
          qfree(v29);
          v8 = (char *)v40;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v8);
  }
  return v25;
}


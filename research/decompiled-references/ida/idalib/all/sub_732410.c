__int64 __fastcall sub_732410(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
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
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // rbx
  char *v26; // rax
  void *v27; // rdi
  __int64 v29; // rax
  size_t v30; // r15
  __int64 v31; // [rsp+0h] [rbp-158h]
  unsigned __int64 v32; // [rsp+8h] [rbp-150h]
  void *v34; // [rsp+30h] [rbp-128h] BYREF
  __int128 v35; // [rsp+38h] [rbp-120h]
  void *ptr; // [rsp+50h] [rbp-108h] BYREF
  __int128 v37; // [rsp+58h] [rbp-100h]
  void *v38; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v40; // [rsp+88h] [rbp-D0h]
  char v41[64]; // [rsp+90h] [rbp-C8h] BYREF
  char s[72]; // [rsp+D0h] [rbp-88h] BYREF
  unsigned __int64 v43; // [rsp+118h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v39 = 0;
  v38 = nullptr;
  v40 = 0;
  sub_730590((__int64 *)&v38, a2, (unsigned __int8)a4, a4, a5, a6);
  v8 = (char *)v38;
  if ( a3 >= v40 )
  {
    v23 = 0;
    goto LABEL_29;
  }
  v9 = 40 * v39;
  v10 = (char *)v38 + 40 * v39;
  if ( v10 == v38 )
    goto LABEL_37;
  v11 = 0xCCCCCCCCCCCCCCCDLL * (v9 >> 3);
  if ( !v11 )
  {
    sub_731960((__int64)v38, (unsigned __int64)v38 + 40 * v39, -2);
    goto LABEL_39;
  }
  _BitScanReverse64(&v12, v11);
  sub_731960((__int64)v38, (unsigned __int64)v38 + 40 * v39, 2LL * (int)v12);
  if ( v9 <= 640 )
  {
LABEL_39:
    sub_730AD0((__int64)v8, (__int64)v10);
    goto LABEL_7;
  }
  v13 = v8 + 640;
  sub_730AD0((__int64)v8, (__int64)(v8 + 640));
  do
  {
    v14 = (__int64)v13;
    v13 += 40;
    sub_730970(v14);
  }
  while ( v10 != v13 );
LABEL_7:
  v15 = (const char **)v38;
  v8 = (char *)v38 + 40 * v39;
  if ( v38 == v8 )
  {
LABEL_37:
    v23 = -1;
    goto LABEL_29;
  }
  v31 = 0;
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
        v29 = qvector_reserve(a1, v21, v20 + 1, 24);
        *a1 = v29;
        v20 = a1[1];
        v21 = v29;
      }
      v22 = v21 + 24 * v20;
      *(_QWORD *)v22 = 0;
      *(_OWORD *)(v22 + 8) = 0;
      ++a1[1];
      if ( !(unsigned int)qunlink(v19) )
        break;
      if ( v22 )
      {
        qstrerror(0xFFFFFFFFLL);
        sub_35A790((char **)v22);
      }
      v15 += 5;
      if ( v8 == (char *)v15 )
        goto LABEL_44;
      v19 = haystack;
      if ( v15[1] )
        v19 = *v15;
    }
    v31 += (__int64)v15[3];
    v35 = 0;
    v34 = nullptr;
    v32 = v40 - v31;
    if ( v40 == v31 )
    {
      v16 = (__m128i *)qvector_reserve(&v34, 0, 19, 1);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8320);
      v34 = v16;
      *(_QWORD *)&v35 = 19;
      v16[1].m128i_i16[0] = 31092;
      *v16 = si128;
      *((_BYTE *)v34 + 18) = 0;
    }
    else
    {
      pretty_print_size(v41, 64, v32);
      ptr = nullptr;
      v37 = 0;
      v30 = strlen(v41);
      ptr = (void *)qvector_reserve(&ptr, 0, v30 + 1, 1);
      *(_QWORD *)&v37 = v30 + 1;
      memmove(ptr, v41, v30);
      *((_BYTE *)ptr + v30) = 0;
      sub_35A790((char **)&v34);
      if ( ptr )
      {
        *(_QWORD *)&v37 = 0;
        qfree(ptr);
      }
    }
    pretty_print_size(s, 64, v15[3]);
    ptr = nullptr;
    v37 = 0;
    v18 = strlen(s);
    ptr = (void *)qvector_reserve(&ptr, 0, v18 + 1, 1);
    *(_QWORD *)&v37 = v18 + 1;
    memmove(ptr, s, v18);
    *((_BYTE *)ptr + v18) = 0;
    sub_35A790((char **)v22);
    if ( ptr )
    {
      *(_QWORD *)&v37 = 0;
      qfree(ptr);
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    if ( a3 >= v32 )
      goto LABEL_48;
LABEL_16:
    v15 += 5;
    if ( v8 == (char *)v15 )
    {
LABEL_44:
      v8 = (char *)v38;
      v23 = -1;
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
  v31 += (__int64)v15[3];
  if ( a3 < v40 - v31 )
    goto LABEL_16;
LABEL_48:
  v23 = v31;
  v8 = (char *)v38;
LABEL_29:
  if ( v8 )
  {
    v24 = v39;
    if ( (_QWORD)v39 )
    {
      v25 = 0;
      do
      {
        v26 = &v8[40 * v25];
        v27 = *(void **)v26;
        if ( *(_QWORD *)v26 )
        {
          *((_QWORD *)v26 + 1) = 0;
          qfree(v27);
          v8 = (char *)v38;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v8);
  }
  return v23;
}

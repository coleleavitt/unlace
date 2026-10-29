__int64 __fastcall sub_BC3570(__int64 a1, __int64 a2, __int64 *a3, unsigned int **a4, double a5)
{
  char **exception; // rbp
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v11; // r12d
  __m128i v12; // xmm0
  unsigned int *v13; // rax
  unsigned int *v14; // rsi
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int *v17; // rbx
  __int64 v18; // r14
  bool v19; // zf
  __int64 v20; // rcx
  unsigned __int64 i; // rax
  unsigned int *v22; // rax
  __int64 v23; // rax
  unsigned int *v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // r15d
  size_t v32; // rsi
  unsigned int *v33; // rax
  unsigned int v34; // [rsp+8h] [rbp-70h]
  __int64 v35; // [rsp+18h] [rbp-60h] BYREF
  int v36[2]; // [rsp+20h] [rbp-58h] BYREF
  int v37[2]; // [rsp+28h] [rbp-50h]

  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    v25 = a2 ^ 1;
    if ( (unsigned __int8)sub_186A530(a5) )
    {
      sub_186A4C0(a5);
      v26 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_BB1660(a1, v26, a4, (_QWORD ***)a3);
      v27 = sub_180B150(a1, v26);
      v28 = sub_BB17F0(a1, v27, v25);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v28, "\n");
    }
    else
    {
      v29 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_BB1660(a1, v29, a4, (_QWORD ***)a3);
      v30 = sub_180B150(a1, v29);
      sub_BB17F0(a1, v30, v25);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  result = sub_966740(a1);
  if ( *(_BYTE *)(result + 445) )
  {
    v11 = a2 ^ 1;
    if ( *a4 )
    {
      v12 = _mm_loadl_epi64((const __m128i *)(*a4 - 2));
      v34 = _mm_cvtsi128_si32(v12);
      v13 = (unsigned int *)sub_186B270(4LL * v34 + 8);
      v14 = *a4;
      v15 = v34;
      v16 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v12, 229));
      v17 = v13;
      v18 = (__int64)(v13 + 2);
      v19 = *a4 == nullptr;
      *(_QWORD *)v13 = v12.m128i_i64[0];
      if ( !v19 )
      {
        v20 = 4LL * *(v14 - 1);
        if ( v20 )
        {
          for ( i = 0; i != v20; i += 4LL )
            v17[i / 4 + 2] = v14[i / 4];
          v16 = v17[1];
          v15 = *v17;
        }
      }
      v22 = (unsigned int *)(v18 + 4LL * v16);
      if ( v15 == v16 )
      {
        v31 = (3 * v15 + 1) >> 1;
        v32 = 4 * v31 + 8;
        if ( 4 * v15 + 8 >= (unsigned int)v32 || v15 >= v31 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526((__int64 *)v36, "Overflow encountered when expanding vector", v6);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v17, v32);
        v18 = (__int64)(v33 + 2);
        *v33 = v31;
        v17 = v33;
        v22 = &v33[v33[1] + 2];
      }
    }
    else
    {
      v24 = (unsigned int *)sub_186B270(0x10u);
      v18 = (__int64)(v24 + 2);
      *(_QWORD *)v24 = 2;
      v17 = v24;
      v22 = v24 + 2;
    }
    *v22 = v11;
    v23 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v18 - 4);
    *(_QWORD *)v36 = v23;
    *(_QWORD *)v37 = 0;
    v35 = v18;
    sub_BBE190(a1, a3, (unsigned int **)&v35, (__int64 *)v36);
    sub_2334C0((__int64 *)v36);
    return sub_186B220(v17);
  }
  return result;
}


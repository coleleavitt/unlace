_QWORD *__fastcall sub_55E980(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int *a5, int *a6)
{
  __m128i *exception; // rbx
  char *v7; // rax
  __m128i *v8; // r12
  char *v9; // rax
  __int64 v10; // r13
  _QWORD *v13; // r15
  int *v14; // r13
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  int v17; // edx
  int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v22; // r14d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // rax
  int *v27; // r13
  _DWORD *v28; // rdx
  int v29; // ecx
  int v30; // edi
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-60h]
  _QWORD *v38; // [rsp+10h] [rbp-58h] BYREF
  __int64 v39; // [rsp+18h] [rbp-50h]
  _QWORD v40[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( a1 != *(_QWORD *)(a2 + 8) || a1 != *(_QWORD *)(a3 + 8) )
    return nullptr;
  v10 = a4;
  v13 = (_QWORD *)sub_186B270(0x18u);
  *v13 = &off_1C50DC8;
  v13[1] = 0;
  if ( (_DWORD)v10 )
  {
    v37 = v10;
    v14 = &a5[v10];
    v15 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v15 - 1) = 2;
    v16 = v15;
    v13[1] = v15;
    while ( 1 )
    {
      v17 = *a5++;
      *v15 = v17;
      v18 = *(v16 - 1);
      v19 = (unsigned int)(v18 + 1);
      *(v16 - 1) = v19;
      if ( a5 == v14 )
        break;
      v20 = *(v16 - 2);
      if ( v20 == (_DWORD)v19 )
      {
        v22 = (3 * v20 + 1) >> 1;
        v23 = 4 * v22 + 8;
        if ( 4 * v18 + 12 >= (unsigned int)v23 || v20 >= v22 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v7 = (char *)operator new(0x2Bu);
          strcpy(v7, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v7;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          v39 = 0;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v40[0] = 0;
          v38 = v40;
          sub_233E40((__int64)&v38);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v16 - 2, v23);
        v16 = v24 + 2;
        *v24 = v22;
        v25 = v24[1];
        v13[1] = v16;
        v15 = &v16[v25];
      }
      else
      {
        v15 = &v16[v19];
      }
    }
    v13[2] = 0;
    v26 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v26 - 1) = 2;
    v27 = &a6[v37];
    v28 = v26;
    v13[2] = v26;
    while ( 1 )
    {
      v29 = *a6++;
      *v26 = v29;
      v30 = *(v28 - 1);
      v31 = (unsigned int)(v30 + 1);
      *(v28 - 1) = v31;
      if ( v27 == a6 )
        break;
      v32 = *(v28 - 2);
      if ( v32 == (_DWORD)v31 )
      {
        v33 = (3 * v32 + 1) >> 1;
        v34 = 4 * v33 + 8;
        if ( 4 * v30 + 12 >= (unsigned int)v34 || v32 >= v33 )
        {
          v8 = (__m128i *)__cxa_allocate_exception(0x28u);
          v9 = (char *)operator new(0x2Bu);
          strcpy(v9, "Overflow encountered when expanding vector");
          v8->m128i_i64[1] = (__int64)v9;
          v8->m128i_i64[0] = (__int64)off_1C63128;
          v38 = v40;
          v8[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v39 = 0;
          v40[0] = 0;
          sub_233E40((__int64)&v38);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v28 - 2, v34);
        v28 = v35 + 2;
        *v35 = v33;
        v36 = v35[1];
        v13[2] = v28;
        v26 = &v28[v36];
      }
      else
      {
        v26 = &v28[v31];
      }
    }
  }
  else
  {
    v13[2] = 0;
  }
  return v13;
}


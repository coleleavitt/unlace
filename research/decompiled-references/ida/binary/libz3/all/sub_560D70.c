__int64 __fastcall sub_560D70(__int64 a1, const void *a2)
{
  void *v2; // rax
  void *v3; // r12
  __int64 v4; // rax
  int *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r13
  void *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  int v14; // eax
  _QWORD *v15; // rax
  _DWORD *v16; // rax
  int *v17; // r13
  _DWORD *v18; // rdx
  int v19; // ecx
  int v20; // edi
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r14d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  __int64 result; // rax
  _DWORD *v28; // rbx
  __m128i *exception; // rax
  __m128i *v31; // r12
  char *v32; // rax
  _QWORD v33[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v34[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
         0);
  if ( !v2
    || ((v3 = v2, v4 = sub_186B270(0x40u), v5 = *(int **)(a1 + 8), v6 = v4, !v5)
      ? (v7 = 0)
      : (v7 = (unsigned int)*(v5 - 1)),
        (v8 = __dynamic_cast(
                *((const void **)v3 + 1),
                (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  *(_QWORD *)(v6 + 8) = v8;
  v9 = *((_QWORD *)v3 + 2);
  *(_QWORD *)v6 = &off_1C675A8;
  *(_QWORD *)(v6 + 16) = 0;
  if ( v9 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 8));
    v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    *(_QWORD *)(v6 + 16) = v11 + 1;
    v12 = *((_QWORD **)v3 + 2);
    *v11 = v10.m128i_i64[0];
    if ( v12 )
    {
      v13 = 8LL * *((unsigned int *)v12 - 1);
      if ( v13 <= 8 )
      {
        if ( v13 == 8 )
          v11[1] = *v12;
      }
      else
      {
        memmove(v11 + 1, v12, v13);
      }
    }
  }
  v14 = *((_DWORD *)v3 + 6);
  *(_DWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 40) = 0;
  *(_DWORD *)(v6 + 24) = v14;
  *(_QWORD *)v6 = off_1C50EB8;
  if ( (_DWORD)v7 )
  {
    v15 = (_QWORD *)sub_186B270(0x10u);
    *v15 = 2;
    v16 = v15 + 1;
    v17 = &v5[v7];
    *(_QWORD *)(v6 + 48) = v16;
    v18 = v16;
    while ( 1 )
    {
      v19 = *v5++;
      *v16 = v19;
      v20 = *(v18 - 1);
      v21 = (unsigned int)(v20 + 1);
      *(v18 - 1) = v21;
      if ( v17 == v5 )
        break;
      v22 = *(v18 - 2);
      if ( v22 == (_DWORD)v21 )
      {
        v23 = (3 * v22 + 1) >> 1;
        v24 = 4 * v23 + 8;
        if ( 4 * v20 + 12 >= (unsigned int)v24 || v22 >= v23 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v33[0] = v34;
          v31 = exception;
          v32 = (char *)operator new(0x2Bu);
          strcpy(v32, "Overflow encountered when expanding vector");
          v31->m128i_i64[1] = (__int64)v32;
          v31->m128i_i64[0] = (__int64)off_1C63128;
          v33[0] = v34;
          v31[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v33[1] = 0;
          v34[0] = 0;
          sub_233E40((__int64)v33);
          __cxa_throw(v31, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v18 - 2, v24);
        v18 = v25 + 2;
        *v25 = v23;
        v26 = v25[1];
        *(_QWORD *)(v6 + 48) = v18;
        v16 = &v18[v26];
      }
      else
      {
        v16 = &v18[v21];
      }
    }
  }
  result = *((_QWORD *)v3 + 5);
  *(_QWORD *)(v6 + 56) = result;
  if ( result )
    ++*(_DWORD *)(result + 32);
  v28 = *((_DWORD **)v3 + 5);
  ++*(_DWORD *)(v6 + 32);
  if ( v28 )
  {
    if ( v28[8]-- == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v28 + 8LL))(v28);
      result = sub_186B220(v28);
    }
  }
  *((_QWORD *)v3 + 5) = v6;
  return result;
}


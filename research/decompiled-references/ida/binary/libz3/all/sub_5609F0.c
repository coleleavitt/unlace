__int64 __fastcall sub_5609F0(__int64 a1, const void *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int *v4; // r15
  __int64 v5; // rbx
  _DWORD *v6; // r12
  _QWORD *v7; // r13
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  size_t v11; // rdx
  int v12; // eax
  _QWORD *v13; // rax
  unsigned int *v14; // rax
  unsigned int *v15; // r14
  unsigned int *v16; // rdx
  unsigned int v17; // esi
  int v18; // r9d
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // r10d
  size_t v22; // rsi
  unsigned int *v23; // rax
  _DWORD *v24; // rax
  __m128i v25; // xmm0
  _QWORD *v26; // rax
  __int64 v27; // rdx
  size_t v28; // rdx
  __m128i *exception; // rax
  __m128i *v31; // r12
  char *v32; // rax
  int v33; // [rsp+8h] [rbp-70h]
  const void **v34; // [rsp+10h] [rbp-68h]
  int v35; // [rsp+18h] [rbp-60h]
  _QWORD v36[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v37[9]; // [rsp+30h] [rbp-48h] BYREF

  v34 = (const void **)__dynamic_cast(
                         a2,
                         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
                         0);
  if ( !v34
    || ((v2 = sub_186B270(0x30u), v3 = sub_186B270(0x40u), v4 = *(unsigned int **)(a1 + 24), v5 = v3, !v4)
      ? (v33 = 0)
      : (v33 = *(v4 - 1)),
        (v6 = __dynamic_cast(
                v34[1],
                (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v7 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)v5 = &off_1C675A8;
  *(_QWORD *)(v5 + 16) = 0;
  if ( v7 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(v7 - 1));
    v9 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    v10 = *(_QWORD **)(a1 + 8);
    v7 = v9 + 1;
    *(_QWORD *)(v5 + 16) = v9 + 1;
    *v9 = v8.m128i_i64[0];
    if ( v10 )
    {
      v11 = 8LL * *((unsigned int *)v10 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v9[1] = *v10;
      }
      else
      {
        memmove(v9 + 1, v10, v11);
      }
    }
  }
  v12 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 40) = 0;
  v35 = v12;
  *(_DWORD *)(v5 + 24) = v12;
  *(_QWORD *)v5 = off_1C50E88;
  if ( v33 )
  {
    v13 = (_QWORD *)sub_186B270(0x10u);
    *v13 = 2;
    v14 = (unsigned int *)(v13 + 1);
    *(_QWORD *)(v5 + 48) = v14;
    v15 = &v4[v33];
    v16 = v14;
    while ( 1 )
    {
      v17 = *v4++;
      *v14 = v17;
      v18 = *(v16 - 1);
      v19 = (unsigned int)(v18 + 1);
      *(v16 - 1) = v19;
      if ( v15 == v4 )
        break;
      v20 = *(v16 - 2);
      if ( v20 == (_DWORD)v19 )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 4 * v21 + 8;
        if ( 4 * v18 + 12 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v36[0] = v37;
          v31 = exception;
          v32 = (char *)operator new(0x2Bu);
          strcpy(v32, "Overflow encountered when expanding vector");
          v31->m128i_i64[1] = (__int64)v32;
          v31->m128i_i64[0] = (__int64)off_1C63128;
          v36[0] = v37;
          v31[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v36[1] = 0;
          v37[0] = 0;
          sub_233E40((__int64)v36);
          __cxa_throw(v31, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v16 - 2, v22);
        v16 = v23 + 2;
        *(_QWORD *)(v5 + 48) = v23 + 2;
        *v23 = (3 * v20 + 1) >> 1;
        v14 = &v23[v23[1] + 2];
      }
      else
      {
        v14 = &v16[v19];
      }
    }
  }
  v24 = v34[5];
  *(_QWORD *)(v5 + 56) = v24;
  if ( v24 )
    ++v24[8];
  *(_QWORD *)(v2 + 8) = v6;
  *(_QWORD *)v2 = qword_1C67518;
  *(_QWORD *)(v2 + 16) = 0;
  if ( v7 )
  {
    v25 = _mm_loadl_epi64((const __m128i *)(v7 - 1));
    v26 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v25) + 8);
    *v26 = v25.m128i_i64[0];
    v27 = *((unsigned int *)v7 - 1);
    *(_QWORD *)(v2 + 16) = v26 + 1;
    v28 = 8 * v27;
    if ( v28 <= 8 )
    {
      if ( v28 == 8 )
        v26[1] = *v7;
    }
    else
    {
      memcpy(v26 + 1, v7, v28);
    }
  }
  *(_QWORD *)(v2 + 40) = v5;
  *(_DWORD *)(v5 + 32) = 1;
  *(_DWORD *)(v2 + 24) = v35;
  *(_DWORD *)(v2 + 32) = v6[2];
  *(_QWORD *)v2 = &off_1C675D8;
  return v2;
}


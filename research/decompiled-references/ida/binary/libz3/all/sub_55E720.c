__int64 __fastcall sub_55E720(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __m128i *exception; // r12
  char *v7; // rax
  __m128i *v8; // r12
  char *v9; // rax
  int *v12; // r13
  __int64 v14; // rbx
  _DWORD *v15; // rax
  int *v16; // rbp
  _DWORD *v17; // rdx
  int v18; // esi
  int v19; // r9d
  __int64 v20; // rax
  unsigned int v21; // edi
  unsigned int v23; // r10d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  _DWORD *v27; // rax
  int *v28; // r13
  _DWORD *v29; // rdx
  int v30; // esi
  int v31; // r8d
  __int64 v32; // rax
  unsigned int v33; // edi
  unsigned int v34; // r15d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rax
  __int64 v39; // [rsp+8h] [rbp-70h]
  __int64 v40; // [rsp+10h] [rbp-68h]
  _QWORD *v41; // [rsp+20h] [rbp-58h] BYREF
  __int64 v42; // [rsp+28h] [rbp-50h]
  _QWORD v43[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( a1 != *(_QWORD *)(a2 + 8) || a1 != *(_QWORD *)(a3 + 8) )
    return 0;
  v12 = (int *)a5;
  v14 = sub_186B270(0x28u);
  v39 = a3 + 16;
  v40 = a2 + 16;
  *(_QWORD *)v14 = qword_1C65DA0;
  *(_QWORD *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  if ( a4 )
  {
    v15 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v15 - 1) = 2;
    v16 = &v12[a4];
    v17 = v15;
    *(_QWORD *)(v14 + 24) = v15;
    while ( 1 )
    {
      v18 = *v12++;
      *v15 = v18;
      v19 = *(v17 - 1);
      v20 = (unsigned int)(v19 + 1);
      *(v17 - 1) = v20;
      if ( v12 == v16 )
        break;
      v21 = *(v17 - 2);
      if ( v21 == (_DWORD)v20 )
      {
        v23 = (3 * v21 + 1) >> 1;
        v24 = 4 * v23 + 8;
        if ( 4 * v19 + 12 >= (unsigned int)v24 || v21 >= v23 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v7 = (char *)operator new(0x2Bu);
          strcpy(v7, "Overflow encountered when expanding vector");
          exception->m128i_i64[1] = (__int64)v7;
          exception->m128i_i64[0] = (__int64)off_1C63128;
          v42 = 0;
          exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v43[0] = 0;
          v41 = v43;
          sub_233E40((__int64)&v41);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v17 - 2, v24);
        v17 = v25 + 2;
        *v25 = (3 * v21 + 1) >> 1;
        v26 = v25[1];
        *(_QWORD *)(v14 + 24) = v17;
        v15 = &v17[v26];
      }
      else
      {
        v15 = &v17[v20];
      }
    }
    *(_QWORD *)(v14 + 32) = 0;
    v27 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v28 = (int *)a6;
    *((_QWORD *)v27 - 1) = 2;
    v29 = v27;
    *(_QWORD *)(v14 + 32) = v27;
    while ( 1 )
    {
      v30 = *v28++;
      *v27 = v30;
      v31 = *(v29 - 1);
      v32 = (unsigned int)(v31 + 1);
      *(v29 - 1) = v32;
      if ( (int *)(a6 + 4LL * a4) == v28 )
        break;
      v33 = *(v29 - 2);
      if ( v33 == (_DWORD)v32 )
      {
        v34 = (3 * v33 + 1) >> 1;
        v35 = 4 * v34 + 8;
        if ( 4 * v31 + 12 >= (unsigned int)v35 || v33 >= v34 )
        {
          v8 = (__m128i *)__cxa_allocate_exception(0x28u);
          v9 = (char *)operator new(0x2Bu);
          strcpy(v9, "Overflow encountered when expanding vector");
          v8->m128i_i64[1] = (__int64)v9;
          v8->m128i_i64[0] = (__int64)off_1C63128;
          v41 = v43;
          v8[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v42 = 0;
          v43[0] = 0;
          sub_233E40((__int64)&v41);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v36 = (unsigned int *)sub_186B300(v29 - 2, v35);
        v29 = v36 + 2;
        *v36 = v34;
        v37 = v36[1];
        *(_QWORD *)(v14 + 32) = v29;
        v27 = &v29[v37];
      }
      else
      {
        v27 = &v29[v32];
      }
    }
  }
  else
  {
    *(_QWORD *)(v14 + 32) = 0;
  }
  sub_4D84B0(v40, v39, a4, a5, a6, v14 + 8);
  *(_QWORD *)v14 = &off_1C50CB8;
  return v14;
}


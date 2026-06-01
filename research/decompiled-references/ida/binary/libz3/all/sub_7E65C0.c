__int64 __fastcall sub_7E65C0(__int64 a1, unsigned int a2, unsigned int **a3)
{
  char **v3; // r13
  char **exception; // r13
  unsigned int *v6; // rcx
  unsigned int *v7; // rbx
  unsigned int *v9; // r13
  __m128i v10; // xmm1
  unsigned int *v11; // r14
  unsigned int *v12; // r13
  unsigned int v13; // r15d
  _QWORD *v14; // rax
  unsigned int *v15; // rax
  int v16; // r15d
  unsigned int *v17; // rbx
  int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int *v24; // rdx
  unsigned int v25; // esi
  unsigned int v27; // r14d
  size_t v28; // rsi
  unsigned int *v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // [rsp+8h] [rbp-70h]
  __int64 v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *a3;
  if ( !*a3 )
    goto LABEL_19;
  v7 = &v6[*(v6 - 1)];
  if ( v7 == v6 )
    goto LABEL_19;
  v9 = *a3;
  do
  {
    v10 = _mm_cvtsi32_si128(*v9++);
    v33[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2 ^ 1), v10).m128i_u64[0];
    sub_7E4C70(a1, (unsigned int *)v33, nullptr);
  }
  while ( v7 != v9 );
  v11 = *a3;
  if ( !*a3 || (v12 = &v11[*(v11 - 1)], v11 == v12) )
  {
LABEL_19:
    v30 = (_QWORD *)sub_186B270(0x10u);
    v17 = (unsigned int *)(v30 + 1);
    *v30 = 2;
    v24 = (unsigned int *)(v30 + 1);
  }
  else
  {
    v13 = *v11;
    v14 = (_QWORD *)sub_186B270(0x10u);
    *v14 = 2;
    v15 = (unsigned int *)(v14 + 1);
    v16 = v13 ^ 1;
    v17 = v15;
    while ( 1 )
    {
      *v15 = v16;
      v18 = *(v17 - 1);
      ++v11;
      v19 = (unsigned int)(v18 + 1);
      *(v17 - 1) = v19;
      if ( v12 == v11 )
        break;
      v20 = *(v17 - 2);
      v16 = *v11 ^ 1;
      if ( v20 == (_DWORD)v19 )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 4 * v21 + 8;
        if ( 4 * v18 + 12 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (3 * v20 + 1) >> 1;
        v23 = (unsigned int *)sub_186B300(v17 - 2, v22);
        v17 = v23 + 2;
        *v23 = v31;
        v15 = &v23[v23[1] + 2];
      }
      else
      {
        v15 = &v17[v19];
      }
    }
    v24 = &v17[(unsigned int)v19];
    if ( (_DWORD)v19 == *(v17 - 2) )
    {
      v27 = (unsigned int)(3 * v19 + 1) >> 1;
      v28 = 4 * v27 + 8;
      if ( 4 * v18 + 12 >= (unsigned int)v28 || (unsigned int)v19 >= v27 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v33, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v17 - 2, v28);
      v17 = v29 + 2;
      *v29 = v27;
      v24 = &v29[v29[1] + 2];
    }
  }
  *v24 = a2;
  v25 = *(v17 - 1) + 1;
  *(v17 - 1) = v25;
  sub_7E56B0(a1, v25, v17, nullptr, 0);
  return sub_186B220(v17 - 2);
}


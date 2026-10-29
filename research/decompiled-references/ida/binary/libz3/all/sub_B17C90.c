unsigned int *__fastcall sub_B17C90(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int *v5; // rbx
  unsigned int *v6; // r15
  unsigned int *result; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // rbp
  unsigned int v10; // ecx
  int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  size_t v15; // rsi
  unsigned int v16; // r12d
  unsigned int *v17; // rax
  unsigned int *v18; // rax
  unsigned int *v19; // r14
  __int64 v20; // rbx
  unsigned int v21; // ecx
  int v22; // edi
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // r15d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r12
  char **exception; // rbp
  char **v32; // r12
  __int64 v33; // [rsp+0h] [rbp-68h]
  __int64 *v34; // [rsp+8h] [rbp-60h]
  __int64 v35[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( a2 )
  {
    v5 = a3;
    v33 = a2;
    v6 = &a3[v33];
    result = a3;
    while ( dword_1C7ED24 != *result )
    {
      if ( v6 == ++result )
      {
        *(_QWORD *)(a1 + 24) = _mm_add_epi32(
                                 _mm_loadl_epi64((const __m128i *)(a1 + 24)),
                                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(1u), _mm_cvtsi32_si128(a2))).m128i_u64[0];
        v8 = (unsigned int *)(sub_186B270(0x10u) + 8);
        *((_QWORD *)v8 - 1) = 2;
        v9 = v8;
        while ( 1 )
        {
          v10 = *v5++;
          *v8 = v10;
          v11 = *(v9 - 1);
          v12 = (unsigned int)(v11 + 1);
          *(v9 - 1) = v12;
          if ( v5 == v6 )
            break;
          v13 = *(v9 - 2);
          if ( v13 == (_DWORD)v12 )
          {
            v14 = (3 * v13 + 1) >> 1;
            v15 = 4 * v14 + 8;
            v16 = v14;
            if ( 4 * v11 + 12 >= (unsigned int)v15 || v13 >= v14 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_B035D0(v35, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v35);
              sub_233E40((__int64)v35);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v17 = (unsigned int *)sub_186B300(v9 - 2, v15);
            v9 = v17 + 2;
            *v17 = v16;
            v8 = &v17[v17[1] + 2];
          }
          else
          {
            v8 = &v9[v12];
          }
        }
        v34 = *(__int64 **)(a1 + 8);
        v18 = (unsigned int *)(sub_186B270(0x10u) + 8);
        v19 = v9;
        *((_QWORD *)v18 - 1) = 2;
        v20 = (__int64)v18;
        while ( 1 )
        {
          v21 = *v19++;
          *v18 = v21;
          v22 = *(_DWORD *)(v20 - 4);
          v23 = (unsigned int)(v22 + 1);
          *(_DWORD *)(v20 - 4) = v23;
          if ( v19 == &v9[v33] )
            break;
          v24 = *(_DWORD *)(v20 - 8);
          if ( v24 == (_DWORD)v23 )
          {
            v25 = (3 * v24 + 1) >> 1;
            v26 = 4 * v25 + 8;
            if ( 4 * v22 + 12 >= (unsigned int)v26 || v24 >= v25 )
            {
              v32 = (char **)__cxa_allocate_exception(0x28u);
              sub_B035D0(v35, "Overflow encountered when expanding vector");
              *v32 = (char *)off_1C63128;
              sub_2333C0(v32 + 1, v35);
              sub_233E40((__int64)v35);
              __cxa_throw(v32, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v27 = (unsigned int *)sub_186B300((void *)(v20 - 8), v26);
            v20 = (__int64)(v27 + 2);
            *v27 = v25;
            v18 = &v27[v27[1] + 2];
          }
          else
          {
            v18 = (unsigned int *)(v20 + 4 * v23);
          }
        }
        goto LABEL_21;
      }
    }
  }
  else
  {
    v28 = *(__int64 **)(a1 + 8);
    ++*(_DWORD *)(a1 + 24);
    v9 = nullptr;
    v20 = 0;
    v34 = v28;
LABEL_21:
    v29 = v34[2];
    v30 = *v34;
    v35[0] = v20;
    sub_B0D9D0(v29, v35);
    result = (unsigned int *)sub_B68F30(v30, a2);
    if ( v20 )
      result = (unsigned int *)sub_186B220((void *)(v20 - 8));
    if ( v9 )
      return (unsigned int *)sub_186B220(v9 - 2);
  }
  return result;
}


__int64 __fastcall sub_55DFB0(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __m128i *exception; // rbx
  char *v5; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int *v11; // r14
  _QWORD *v12; // rax
  _DWORD *v13; // rax
  unsigned int *v14; // r13
  _DWORD *v15; // rbx
  int v16; // edx
  int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  _DWORD *v25; // rcx
  unsigned int v26; // r14d
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  size_t v29; // rdx
  __int64 v30; // r8
  unsigned int *v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // [rsp+8h] [rbp-60h]
  unsigned int v34; // [rsp+8h] [rbp-60h]
  _QWORD v36[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v37; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a2 + 8) == a1 )
  {
    v9 = sub_186B270(0x20u);
    *(_QWORD *)(v9 + 8) = 0;
    v10 = v9;
    *(_DWORD *)(v9 + 16) = 0;
    *(_QWORD *)v9 = qword_1C65E70;
    *(_QWORD *)(v9 + 24) = 0;
    if ( a3 )
    {
      v11 = a4;
      v12 = (_QWORD *)sub_186B270(0x10u);
      *v12 = 2;
      v13 = v12 + 1;
      v14 = &a4[a3];
      *(_QWORD *)(v10 + 24) = v13;
      v15 = v13;
      while ( 1 )
      {
        v16 = *v11++;
        *v13 = v16;
        v17 = *(v15 - 1);
        v18 = (unsigned int)(v17 + 1);
        *(v15 - 1) = v18;
        if ( v14 == v11 )
          break;
        v19 = *(v15 - 2);
        if ( v19 == (_DWORD)v18 )
        {
          v20 = (3 * v19 + 1) >> 1;
          v21 = 4 * v20 + 8;
          if ( 4 * v17 + 12 >= (unsigned int)v21 || v19 >= v20 )
          {
            exception = (__m128i *)__cxa_allocate_exception(0x28u);
            v5 = (char *)operator new(0x2Bu);
            strcpy(v5, "Overflow encountered when expanding vector");
            exception->m128i_i64[1] = (__int64)v5;
            exception->m128i_i64[0] = (__int64)off_1C63128;
            v36[0] = &v37;
            exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
            v36[1] = 0;
            v37 = 0;
            sub_233E40((__int64)v36);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = (3 * v19 + 1) >> 1;
          v22 = (unsigned int *)sub_186B300(v15 - 2, v21);
          v15 = v22 + 2;
          *v22 = v33;
          v23 = v22[1];
          *(_QWORD *)(v10 + 24) = v15;
          v13 = &v15[v23];
        }
        else
        {
          v13 = &v15[v18];
        }
      }
      if ( v10 + 8 == a2 + 16 )
      {
        v25 = nullptr;
      }
      else
      {
        v25 = *(_DWORD **)(a2 + 16);
        if ( v25 )
        {
LABEL_14:
          v26 = *(v25 - 1);
          v34 = *(v25 - 2);
          v27 = (_QWORD *)sub_186B270(8LL * v34 + 8);
          v28 = *(_QWORD **)(a2 + 16);
          v25 = v27 + 1;
          *(_QWORD *)(v10 + 8) = v27 + 1;
          *v27 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v26)).m128i_u64[0];
          if ( v28 )
          {
            v29 = 8LL * *((unsigned int *)v28 - 1);
            if ( v29 <= 8 )
            {
              if ( v29 == 8 )
                v27[1] = *v28;
            }
            else
            {
              v25 = memmove(v27 + 1, v28, v29);
            }
          }
        }
      }
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(a2 + 24);
      if ( a3 > 1 )
      {
        v30 = *(_QWORD *)&v25[2 * *a4];
        v31 = a4;
        do
        {
          v32 = v31[1];
          *(_QWORD *)&v25[2 * *v31++] = *(_QWORD *)&v25[2 * v32];
        }
        while ( v31 != &a4[a3 - 1] );
        *(_QWORD *)&v25[2 * a4[a3 - 1]] = v30;
      }
      goto LABEL_21;
    }
    if ( a2 + 16 == v9 + 8 || (v25 = *(_DWORD **)(a2 + 16)) == nullptr )
    {
      *(_DWORD *)(v9 + 16) = *(_DWORD *)(a2 + 24);
LABEL_21:
      *(_QWORD *)v10 = &off_1C50D30;
      return v10;
    }
    goto LABEL_14;
  }
  return 0;
}


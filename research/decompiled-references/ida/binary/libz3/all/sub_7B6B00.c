__int64 *__fastcall sub_7B6B00(__int64 *a1, __int64 a2, __int64 *a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r13
  __int64 v10; // r8
  unsigned int *v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  unsigned int v16; // r9d
  size_t v17; // rdi
  unsigned int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rdi
  _DWORD *v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned int v27; // [rsp+10h] [rbp-68h]
  __int64 v28[11]; // [rsp+20h] [rbp-58h] BYREF

  *a1 = 0;
  v6 = *a3;
  a1[1] = 0;
  if ( v6 )
  {
    v7 = nullptr;
    v8 = 0;
    v9 = 0;
    do
    {
      if ( v8 >= *(_DWORD *)(v6 - 4) )
        break;
      v10 = v8;
      v11 = (unsigned int *)(v6 + 8LL * v8);
      v12 = _mm_cvtsi32_si128(*v11);
      v27 = v11[1] ^ 1;
      if ( v7 )
      {
        v13 = *((unsigned int *)v7 - 1);
        if ( (_DWORD)v13 == *((_DWORD *)v7 - 2) )
        {
          v16 = (unsigned int)(3 * v13 + 1) >> 1;
          v17 = 8 * v16 + 8;
          v18 = v16;
          if ( 8 * (int)v13 + 8 >= (unsigned int)v17 || (unsigned int)v13 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v28, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v28);
            sub_233E40((__int64)v28);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = sub_186B270(v17);
          v20 = *a1;
          v10 = v8;
          v21 = (_DWORD *)v19;
          v7 = (_QWORD *)(v19 + 8);
          v12 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v12));
          if ( *a1 )
          {
            v22 = *(unsigned int *)(v20 - 4);
            *(_DWORD *)(v19 + 4) = v22;
            v23 = 0;
            v24 = 8 * v22;
            if ( v24 )
            {
              do
              {
                *(_QWORD *)&v21[v23 / 4 + 2] = *(_QWORD *)(v20 + v23);
                v23 += 8LL;
              }
              while ( v24 != v23 );
            }
            sub_186B220((void *)(v20 - 8));
            v12 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v12));
            v10 = v8;
            v14 = &v7[v21[1]];
          }
          else
          {
            *(_DWORD *)(v19 + 4) = 0;
            v14 = (_QWORD *)(v19 + 8);
          }
          *a1 = (__int64)v7;
          *v21 = v18;
          v6 = *a3;
        }
        else
        {
          v14 = &v7[v13];
        }
      }
      else
      {
        v25 = (_QWORD *)sub_186B270(0x18u);
        v7 = v25 + 1;
        v12 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v12));
        v10 = v8;
        *v25 = 2;
        *a1 = (__int64)(v25 + 1);
        v14 = v25 + 1;
        v6 = *a3;
      }
      ++v8;
      *v14 = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(v27)).m128i_u64[0];
      ++*((_DWORD *)v7 - 1);
      v9 += *(unsigned int *)(v6 + 8 * v10);
    }
    while ( v6 );
  }
  else
  {
    v9 = 0;
  }
  a1[1] = v9 - a3[1] + 1;
  return a1;
}


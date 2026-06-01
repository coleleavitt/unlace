void __fastcall sub_9CCA20(__int64 a1, int a2, const __m128i *a3)
{
  __int64 v3; // r12
  __m128i *v4; // r15
  const __m128i *v5; // r14
  const __m128i *v6; // rbp
  _QWORD *v7; // rax
  int v8; // eax
  __m128i *v9; // rcx
  __int64 v10; // rcx
  __m128i v11; // xmm0
  unsigned int v12; // eax
  unsigned int v13; // ebx
  size_t v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // r13
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  char **exception; // rbx
  __int64 v22[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( a2 )
  {
    v4 = *(__m128i **)(v3 + 8);
    v5 = a3;
    v6 = &a3[a2];
    if ( v4 )
      goto LABEL_6;
    v7 = (_QWORD *)sub_186B270(0x28u);
    v4 = (__m128i *)(v7 + 1);
    *v7 = 2;
    v8 = 1;
    *(_QWORD *)(v3 + 8) = v4;
    v9 = v4;
    while ( 1 )
    {
      v11 = _mm_loadu_si128(v5++);
      *v9 = v11;
      v4[-1].m128i_i32[3] = v8;
      if ( v6 == v5 )
        break;
LABEL_6:
      v12 = v4[-1].m128i_u32[3];
      if ( v12 == v4[-1].m128i_i32[2] )
      {
        v13 = (3 * v12 + 1) >> 1;
        v14 = 16 * v13 + 8;
        if ( 16 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v22, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v22);
          sub_233E40((__int64)v22);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = sub_186B270(v14);
        v16 = *(_QWORD *)(v3 + 8);
        v17 = (_DWORD *)v15;
        v4 = (__m128i *)(v15 + 8);
        if ( v16 )
        {
          v18 = *(unsigned int *)(v16 - 4);
          *(_DWORD *)(v15 + 4) = v18;
          v19 = 0;
          v20 = 16 * v18;
          if ( v20 )
          {
            do
            {
              *(__m128i *)&v17[v19 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v16 + v19));
              v19 += 16LL;
            }
            while ( v20 != v19 );
          }
          sub_186B220((void *)(v16 - 8));
          v9 = &v4[v17[1]];
          v8 = v17[1] + 1;
        }
        else
        {
          *(_DWORD *)(v15 + 4) = 0;
          v9 = (__m128i *)(v15 + 8);
          v8 = 1;
        }
        *(_QWORD *)(v3 + 8) = v4;
        *v17 = v13;
      }
      else
      {
        v10 = v12;
        v8 = v12 + 1;
        v9 = &v4[v10];
      }
    }
  }
}


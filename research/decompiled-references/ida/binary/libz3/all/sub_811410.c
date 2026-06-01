__int64 __fastcall sub_811410(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 *v11; // rbp
  __int64 *i; // r12
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // r12d
  size_t v16; // rdi
  __int64 v17; // rdi
  _DWORD *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22[9]; // [rsp+2h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 624);
  v4 = a2 >> 1;
  if ( result )
  {
    if ( (unsigned int)v4 < *(_DWORD *)(result - 4) )
    {
      v5 = *(_QWORD *)(result + 8 * v4);
      if ( v5 )
      {
        if ( *(_DWORD *)(a1 + 104) )
        {
          do
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
          while ( (*(_DWORD *)(a1 + 104))-- != 1 );
        }
        v8 = *(_QWORD *)(a1 + 680);
        if ( v8 )
        {
          v9 = *(unsigned int *)(v8 - 4);
          if ( (_DWORD)v9 == *(_DWORD *)(v8 - 8) )
          {
            v15 = (unsigned int)(3 * v9 + 1) >> 1;
            v16 = 16 * v15 + 8;
            if ( 16 * (int)v9 + 8 >= (unsigned int)v16 || (unsigned int)v9 >= v15 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v22, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v22);
              sub_233E40((__int64)v22);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            result = sub_186B270(v16);
            v17 = *(_QWORD *)(a1 + 680);
            v18 = (_DWORD *)result;
            v8 = result + 8;
            if ( v17 )
            {
              v19 = *(unsigned int *)(v17 - 4);
              v20 = 0;
              v18[1] = v19;
              v21 = 16 * v19;
              if ( v21 )
              {
                do
                {
                  *(__m128i *)&v18[v20 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v17 + v20));
                  v20 += 16LL;
                }
                while ( v21 != v20 );
              }
              result = sub_186B220((void *)(v17 - 8));
              v10 = (_QWORD *)(v8 + 16LL * (unsigned int)v18[1]);
            }
            else
            {
              *(_DWORD *)(result + 4) = 0;
              v10 = (_QWORD *)(result + 8);
            }
            *(_QWORD *)(a1 + 680) = v8;
            *v18 = v15;
          }
          else
          {
            result = 16 * v9;
            v10 = (_QWORD *)(v8 + result);
          }
        }
        else
        {
          result = sub_186B270(0x28u);
          v8 = result + 8;
          *(_QWORD *)result = 2;
          *(_QWORD *)(a1 + 680) = result + 8;
          v10 = (_QWORD *)(result + 8);
        }
        v10[1] = v5;
        v11 = *(__int64 **)(v5 + 24);
        *v10 = 0;
        ++*(_DWORD *)(v8 - 4);
        if ( v11 )
        {
          for ( i = &v11[2 * *((unsigned int *)v11 - 1)]; i != v11; result = sub_86D480(a1, v14, v13) )
          {
            v13 = v11[1];
            v14 = *v11;
            v11 += 2;
          }
        }
      }
    }
  }
  return result;
}


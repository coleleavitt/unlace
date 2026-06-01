void __fastcall sub_A75C40(_QWORD *a1, unsigned int a2, unsigned int **a3)
{
  char **exception; // rbx
  int v5; // r12d
  unsigned int v6; // ebx
  unsigned int *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r13
  const __m128i *v10; // rbx
  unsigned int v11; // edx
  __m128i *v12; // rax
  unsigned int v13; // r14d
  size_t v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  char *v23[11]; // [rsp+8h] [rbp-58h] BYREF

  if ( a2 != -1 )
  {
    v5 = *(_DWORD *)(a1[18] + 4LL * a2);
    if ( v5 == 1 )
    {
      v9 = (_QWORD *)a1[107];
      v10 = (const __m128i *)(16LL * a2 + a1[20]);
      if ( v9 )
      {
        v11 = *((_DWORD *)v9 - 1);
        if ( v11 == *((_DWORD *)v9 - 2) )
        {
          v13 = (3 * v11 + 1) >> 1;
          v14 = 16 * v13 + 8;
          if ( 16 * v11 + 8 >= (unsigned int)v14 || v11 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_137C7A(v23);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v23);
            sub_233E40((__int64)v23);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = sub_186B270(v14);
          v16 = a1[107];
          v17 = (_DWORD *)v15;
          v9 = (_QWORD *)(v15 + 8);
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
              while ( v19 != v20 );
            }
            sub_186B220((void *)(v16 - 8));
            v12 = (__m128i *)&v9[2 * (unsigned int)v17[1]];
            v5 = v17[1] + 1;
          }
          else
          {
            *(_DWORD *)(v15 + 4) = 0;
            v12 = (__m128i *)(v15 + 8);
          }
          a1[107] = v9;
          *v17 = v13;
        }
        else
        {
          v5 = v11 + 1;
          v12 = (__m128i *)&v9[2 * v11];
        }
      }
      else
      {
        v21 = (_QWORD *)sub_186B270(0x28u);
        v9 = v21 + 1;
        *v21 = 2;
        a1[107] = v21 + 1;
        v12 = (__m128i *)(v21 + 1);
      }
      *v12 = _mm_loadu_si128(v10);
      *((_DWORD *)v9 - 1) = v5;
    }
    else if ( v5 != 2 )
    {
      if ( v5 )
      {
        sub_1872CE0("");
        sub_1873130(114, 3437);
      }
      v6 = *(_DWORD *)(a1[19] + 4LL * a2);
      v7 = *a3;
      if ( !*a3 || (v8 = *(v7 - 1), (_DWORD)v8 == *(v7 - 2)) )
      {
        sub_692C60(a3);
        v7 = *a3;
        v8 = *(*a3 - 1);
      }
      v7[v8] = v6;
      ++*(v7 - 1);
    }
  }
}


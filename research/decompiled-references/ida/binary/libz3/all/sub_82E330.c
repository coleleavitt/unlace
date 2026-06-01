void __fastcall sub_82E330(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  int v4; // r12d
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r13
  const __m128i *v9; // rbx
  unsigned int v10; // edx
  __m128i *v11; // rax
  unsigned int v12; // r14d
  size_t v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  _DWORD *v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21[11]; // [rsp+2h] [rbp-58h] BYREF

  if ( a2 != -1 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL * a2);
    if ( v4 == 1 )
    {
      v8 = *(_QWORD **)(a1 + 776);
      v9 = (const __m128i *)(16LL * a2 + *(_QWORD *)(a1 + 224));
      if ( v8 )
      {
        v10 = *((_DWORD *)v8 - 1);
        if ( v10 == *((_DWORD *)v8 - 2) )
        {
          v12 = (3 * v10 + 1) >> 1;
          v13 = 16 * v12 + 8;
          if ( 16 * v10 + 8 >= (unsigned int)v13 || v10 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = sub_186B270(v13);
          v15 = *(_QWORD *)(a1 + 776);
          v16 = (_DWORD *)v14;
          v8 = (_QWORD *)(v14 + 8);
          if ( v15 )
          {
            v17 = *(unsigned int *)(v15 - 4);
            *(_DWORD *)(v14 + 4) = v17;
            v18 = 0;
            v19 = 16 * v17;
            if ( v19 )
            {
              do
              {
                *(__m128i *)&v16[v18 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v15 + v18));
                v18 += 16LL;
              }
              while ( v18 != v19 );
            }
            sub_186B220((void *)(v15 - 8));
            v11 = (__m128i *)&v8[2 * (unsigned int)v16[1]];
            v4 = v16[1] + 1;
          }
          else
          {
            *(_DWORD *)(v14 + 4) = 0;
            v11 = (__m128i *)(v14 + 8);
          }
          *(_QWORD *)(a1 + 776) = v8;
          *v16 = v12;
        }
        else
        {
          v4 = v10 + 1;
          v11 = (__m128i *)&v8[2 * v10];
        }
      }
      else
      {
        v20 = (_QWORD *)sub_186B270(0x28u);
        v8 = v20 + 1;
        *v20 = 2;
        *(_QWORD *)(a1 + 776) = v20 + 1;
        v11 = (__m128i *)(v20 + 1);
      }
      *v11 = _mm_loadu_si128(v9);
      *((_DWORD *)v8 - 1) = v4;
    }
    else if ( v4 != 2 )
    {
      if ( v4 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1314);
      }
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL * a2);
      v6 = *(_QWORD *)(a1 + 752);
      if ( !v6 || (v7 = *(unsigned int *)(v6 - 4), (_DWORD)v7 == *(_DWORD *)(v6 - 8)) )
      {
        sub_692C60((unsigned int **)(a1 + 752));
        v6 = *(_QWORD *)(a1 + 752);
        v7 = *(unsigned int *)(v6 - 4);
      }
      *(_DWORD *)(v6 + 4 * v7) = v5;
      ++*(_DWORD *)(v6 - 4);
    }
  }
}


__int64 __fastcall sub_985F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  _QWORD *v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rdx
  unsigned int v13; // ebp
  size_t v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *(_QWORD **)(a1 + 104);
  *(_QWORD *)(a1 + 176) = a4;
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v13 = (3 * v8 + 1) >> 1;
      v14 = 16 * v13 + 8;
      if ( 16 * v8 + 8 >= (unsigned int)v14 || v8 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v22, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v22);
        sub_233E40((__int64)v22);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = sub_186B270(v14);
      v16 = *(_QWORD *)(a1 + 104);
      v17 = (_DWORD *)v15;
      v7 = (_QWORD *)(v15 + 8);
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
        v11 = &v7[2 * (unsigned int)v17[1]];
        v10 = v17[1] + 1;
      }
      else
      {
        *(_DWORD *)(v15 + 4) = 0;
        v11 = (_QWORD *)(v15 + 8);
        v10 = 1;
      }
      *(_QWORD *)(a1 + 104) = v7;
      *v17 = v13;
    }
    else
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = &v7[2 * v9];
    }
  }
  else
  {
    v21 = (_QWORD *)sub_186B270(0x28u);
    v7 = v21 + 1;
    *v21 = 2;
    v10 = 1;
    *(_QWORD *)(a1 + 104) = v7;
    v11 = v7;
  }
  *v11 = a2;
  v11[1] = a3;
  *((_DWORD *)v7 - 1) = v10;
  sub_984990(a1);
  return sub_9827B0(a1, 0);
}


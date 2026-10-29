__int64 __fastcall sub_A82CC0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // ebx
  size_t v11; // rsi
  unsigned int *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _DWORD *v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // r12d
  size_t v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 *v21; // r14
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // r9
  unsigned __int64 v25; // rcx
  __int64 *v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __m128i v29; // xmm0
  unsigned __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // r8
  __int64 *v33; // r13
  void *v34; // rdi
  _QWORD *v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  char **exception; // rbp
  char *v40[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3 )
    goto LABEL_13;
LABEL_2:
  for ( result = *(unsigned int *)(v3 - 4); a2 >= (unsigned int)result; result = *(unsigned int *)(v3 - 4) )
  {
    if ( (_DWORD)result != *(_DWORD *)(v3 - 8) )
    {
      v5 = (unsigned int)result;
      v6 = result + 1;
      v7 = (_QWORD *)(v3 + 8 * v5);
      goto LABEL_5;
    }
    v17 = (unsigned int)(3 * result + 1) >> 1;
    v18 = 8 * v17 + 8;
    if ( 8 * (int)result + 8 >= (unsigned int)v18 || (unsigned int)result >= v17 )
    {
LABEL_38:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_137C7A(v40);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v40);
      sub_233E40((__int64)v40);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v19 = sub_186B270(v18);
    v20 = *(__int64 **)(a1 + 240);
    v21 = (__int64 *)v19;
    v3 = v19 + 8;
    if ( v20 )
    {
      v22 = *((unsigned int *)v20 - 1);
      *(_DWORD *)(v19 + 4) = v22;
      v23 = 8 * v22;
      v24 = &v20[v22];
      if ( v24 != v20 )
      {
        v25 = v23 - 8;
        v26 = v20;
        if ( (unsigned __int64)(v23 - 8) <= 8 || v3 < (unsigned __int64)(v20 + 2) && v20 < v21 + 3 )
        {
          v36 = v3;
          do
          {
            v37 = *v26;
            *v26++ = 0;
            v36 += 8LL;
            *(_QWORD *)(v36 - 8) = v37;
          }
          while ( v24 != v26 );
        }
        else
        {
          v27 = 0;
          v28 = (v25 >> 3) + 1;
          do
          {
            v29 = _mm_loadu_si128((const __m128i *)&v20[v27]);
            *(_OWORD *)&v20[v27] = 0;
            *(__m128i *)&v21[v27 + 1] = v29;
            v27 += 2LL;
          }
          while ( 2 * (v28 >> 1) != v27 );
          if ( (v28 & 1) != 0 )
          {
            v30 = v28 & 0xFFFFFFFFFFFFFFFELL;
            v31 = &v20[v30];
            v32 = *v31;
            *v31 = 0;
            *(_QWORD *)(v3 + 8 * v30) = v32;
          }
        }
      }
      v33 = &v20[v22];
      if ( (_DWORD)v22 )
      {
        do
        {
          while ( *v20 )
          {
            v34 = (void *)(*v20++ - 8);
            sub_186B220(v34);
            if ( v20 == v33 )
              goto LABEL_28;
          }
          ++v20;
        }
        while ( v20 != v33 );
LABEL_28:
        v20 = *(__int64 **)(a1 + 240);
      }
      sub_186B220(v20 - 1);
      v7 = (_QWORD *)(v3 + 8LL * *((unsigned int *)v21 + 1));
      v6 = *((_DWORD *)v21 + 1) + 1;
    }
    else
    {
      *(_DWORD *)(v19 + 4) = 0;
      v7 = (_QWORD *)(v19 + 8);
      v6 = 1;
    }
    *(_QWORD *)(a1 + 240) = v3;
    *(_DWORD *)v21 = v17;
    while ( 1 )
    {
LABEL_5:
      v8 = *(_QWORD *)(a1 + 248);
      *v7 = 0;
      *(_DWORD *)(v3 - 4) = v6;
      if ( !v8 )
      {
        v35 = (_QWORD *)sub_186B270(0x10u);
        v3 = *(_QWORD *)(a1 + 240);
        v13 = v35 + 1;
        *v35 = 2;
        *(_QWORD *)(a1 + 248) = v35 + 1;
        v15 = v35 + 1;
        goto LABEL_12;
      }
      v9 = *(unsigned int *)(v8 - 4);
      if ( (_DWORD)v9 != *(_DWORD *)(v8 - 8) )
        break;
      v10 = (unsigned int)(3 * v9 + 1) >> 1;
      v11 = 4 * v10 + 8;
      if ( 4 * (int)v9 + 8 >= (unsigned int)v11 || (unsigned int)v9 >= v10 )
        goto LABEL_38;
      v12 = (unsigned int *)sub_186B300((void *)(v8 - 8), v11);
      v3 = *(_QWORD *)(a1 + 240);
      v13 = v12 + 2;
      *v12 = v10;
      v14 = v12[1];
      *(_QWORD *)(a1 + 248) = v13;
      v15 = (_DWORD *)v13 + v14;
LABEL_12:
      *v15 = 0;
      ++*((_DWORD *)v13 - 1);
      if ( v3 )
        goto LABEL_2;
LABEL_13:
      v16 = (_QWORD *)sub_186B270(0x18u);
      v3 = (unsigned __int64)(v16 + 1);
      *v16 = 2;
      v7 = (_QWORD *)v3;
      v6 = 1;
      *(_QWORD *)(a1 + 240) = v3;
    }
    *(_DWORD *)(v8 + 4 * v9) = 0;
    ++*(_DWORD *)(v8 - 4);
  }
  return result;
}


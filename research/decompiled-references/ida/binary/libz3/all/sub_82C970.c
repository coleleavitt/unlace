__int64 __fastcall sub_82C970(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  unsigned __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx
  size_t v13; // rsi
  unsigned int *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // r12d
  size_t v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 *v26; // r9
  unsigned __int64 v27; // rcx
  __int64 *v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __m128i v31; // xmm0
  unsigned __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // r8
  __int64 *v35; // r13
  void *v36; // rdi
  _QWORD *v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 320);
  if ( !v5 )
    goto LABEL_13;
LABEL_2:
  for ( result = *(unsigned int *)(v5 - 4); a2 >= (unsigned int)result; result = *(unsigned int *)(v5 - 4) )
  {
    if ( (_DWORD)result != *(_DWORD *)(v5 - 8) )
    {
      v7 = (unsigned int)result;
      v8 = result + 1;
      v9 = (_QWORD *)(v5 + 8 * v7);
      goto LABEL_5;
    }
    v19 = (unsigned int)(3 * result + 1) >> 1;
    v20 = 8 * v19 + 8;
    if ( 8 * (int)result + 8 >= (unsigned int)v20 || (unsigned int)result >= v19 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v41, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v41);
      sub_233E40((__int64)v41);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v21 = sub_186B270(v20);
    v22 = *(__int64 **)(a1 + 320);
    v23 = (__int64 *)v21;
    v5 = v21 + 8;
    if ( v22 )
    {
      v24 = *((unsigned int *)v22 - 1);
      *(_DWORD *)(v21 + 4) = v24;
      v25 = 8 * v24;
      v26 = &v22[v24];
      if ( v26 != v22 )
      {
        v27 = v25 - 8;
        v28 = v22;
        if ( (unsigned __int64)(v25 - 8) <= 8 || v5 < (unsigned __int64)(v22 + 2) && v22 < v23 + 3 )
        {
          v38 = v5;
          do
          {
            v39 = *v28;
            *v28++ = 0;
            v38 += 8LL;
            *(_QWORD *)(v38 - 8) = v39;
          }
          while ( v26 != v28 );
        }
        else
        {
          v29 = 0;
          v30 = (v27 >> 3) + 1;
          do
          {
            v31 = _mm_loadu_si128((const __m128i *)&v22[v29]);
            *(_OWORD *)&v22[v29] = 0;
            *(__m128i *)&v23[v29 + 1] = v31;
            v29 += 2LL;
          }
          while ( 2 * (v30 >> 1) != v29 );
          if ( (v30 & 1) != 0 )
          {
            v32 = v30 & 0xFFFFFFFFFFFFFFFELL;
            v33 = &v22[v32];
            v34 = *v33;
            *v33 = 0;
            *(_QWORD *)(v5 + 8 * v32) = v34;
          }
        }
      }
      v35 = &v22[v24];
      if ( (_DWORD)v24 )
      {
        do
        {
          while ( *v22 )
          {
            v36 = (void *)(*v22++ - 8);
            sub_186B220(v36);
            if ( v22 == v35 )
              goto LABEL_28;
          }
          ++v22;
        }
        while ( v22 != v35 );
LABEL_28:
        v22 = *(__int64 **)(a1 + 320);
      }
      sub_186B220(v22 - 1);
      v9 = (_QWORD *)(v5 + 8LL * *((unsigned int *)v23 + 1));
      v8 = *((_DWORD *)v23 + 1) + 1;
    }
    else
    {
      *(_DWORD *)(v21 + 4) = 0;
      v9 = (_QWORD *)(v21 + 8);
      v8 = 1;
    }
    *(_QWORD *)(a1 + 320) = v5;
    *(_DWORD *)v23 = v19;
    while ( 1 )
    {
LABEL_5:
      v10 = *(_QWORD *)(a1 + 328);
      *v9 = 0;
      *(_DWORD *)(v5 - 4) = v8;
      if ( !v10 )
      {
        v37 = (_QWORD *)sub_186B270(0x10u);
        v5 = *(_QWORD *)(a1 + 320);
        v15 = v37 + 1;
        *v37 = 2;
        *(_QWORD *)(a1 + 328) = v37 + 1;
        v17 = v37 + 1;
        goto LABEL_12;
      }
      v11 = *(unsigned int *)(v10 - 4);
      if ( (_DWORD)v11 != *(_DWORD *)(v10 - 8) )
        break;
      v12 = (unsigned int)(3 * v11 + 1) >> 1;
      v13 = 4 * v12 + 8;
      if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v41, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300((void *)(v10 - 8), v13);
      v5 = *(_QWORD *)(a1 + 320);
      v15 = v14 + 2;
      *v14 = v12;
      v16 = v14[1];
      *(_QWORD *)(a1 + 328) = v15;
      v17 = (_DWORD *)v15 + v16;
LABEL_12:
      *v17 = 0;
      ++*((_DWORD *)v15 - 1);
      if ( v5 )
        goto LABEL_2;
LABEL_13:
      v18 = (_QWORD *)sub_186B270(0x18u);
      v5 = (unsigned __int64)(v18 + 1);
      *v18 = 2;
      v9 = (_QWORD *)v5;
      v8 = 1;
      *(_QWORD *)(a1 + 320) = v5;
    }
    *(_DWORD *)(v10 + 4 * v11) = 0;
    ++*(_DWORD *)(v10 - 4);
  }
  return result;
}


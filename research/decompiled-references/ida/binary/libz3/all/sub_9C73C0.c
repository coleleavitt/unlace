__int64 __fastcall sub_9C73C0(_QWORD *a1, unsigned __int64 *a2, unsigned int *a3)
{
  _DWORD *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 result; // rax
  _QWORD *v10; // rax
  _DWORD *v11; // rcx
  int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r14d
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 *v19; // r14
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // r9
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __m128i v26; // xmm0
  unsigned __int64 v27; // rsi
  __int64 v28; // r9
  void *v29; // rdi
  __int64 *v30; // rax
  unsigned __int64 v31; // rsi
  __int64 v32; // r10
  char **exception; // rbx
  __int64 *v34; // [rsp+0h] [rbp-68h]
  unsigned int v35; // [rsp+Ch] [rbp-5Ch]
  __int64 v36[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = a3;
  v6 = *a2;
  v7 = *a3;
  *a1 = a3;
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 - 4);
    if ( v8 != (_DWORD)v7 )
      goto LABEL_3;
    if ( v8 == *(_DWORD *)(v6 - 8) )
    {
      v15 = (3 * v8 + 1) >> 1;
      v16 = 8 * v15 + 8;
      v35 = v15;
      if ( 8 * v8 + 8 >= (unsigned int)v16 || v8 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = sub_186B270(v16);
      v18 = (__int64 *)*a2;
      v19 = (__int64 *)v17;
      v6 = v17 + 8;
      if ( *a2 )
      {
        v20 = *((unsigned int *)v18 - 1);
        *(_DWORD *)(v17 + 4) = v20;
        v21 = 8 * v20;
        v22 = &v18[v20];
        if ( v22 != v18 )
        {
          v23 = v21 - 8;
          if ( (unsigned __int64)(v21 - 8) <= 8 || v6 < (unsigned __int64)(v18 + 2) && v18 < v19 + 3 )
          {
            v30 = v18;
            v31 = v6;
            do
            {
              v32 = *v30;
              *v30++ = 0;
              v31 += 8LL;
              *(_QWORD *)(v31 - 8) = v32;
            }
            while ( v30 != v22 );
          }
          else
          {
            v24 = 0;
            v25 = (v23 >> 3) + 1;
            do
            {
              v26 = _mm_loadu_si128((const __m128i *)&v18[v24]);
              *(_OWORD *)&v18[v24] = 0;
              *(__m128i *)&v19[v24 + 1] = v26;
              v24 += 2LL;
            }
            while ( 2 * (v25 >> 1) != v24 );
            if ( (v25 & 1) != 0 )
            {
              v27 = v25 & 0xFFFFFFFFFFFFFFFELL;
              v28 = v18[v27];
              v18[v27] = 0;
              v19[v27 + 1] = v28;
            }
          }
        }
        v34 = &v18[v20];
        if ( (_DWORD)v20 )
        {
          do
          {
            while ( *v18 )
            {
              v29 = (void *)(*v18++ - 8);
              sub_186B220(v29);
              if ( v34 == v18 )
                goto LABEL_25;
            }
            ++v18;
          }
          while ( v34 != v18 );
LABEL_25:
          v18 = (__int64 *)*a2;
        }
        sub_186B220(v18 - 1);
        v13 = (_QWORD *)(v6 + 8LL * *((unsigned int *)v19 + 1));
        v12 = *((_DWORD *)v19 + 1) + 1;
      }
      else
      {
        *(_DWORD *)(v17 + 4) = 0;
        v12 = 1;
        v13 = (_QWORD *)(v17 + 8);
      }
      *a2 = v6;
      *(_DWORD *)v19 = v35;
      v11 = (_DWORD *)*a1;
    }
    else
    {
      v14 = v8;
      v11 = v5;
      v12 = v8 + 1;
      v13 = (_QWORD *)(v6 + 8 * v14);
    }
  }
  else
  {
    if ( (_DWORD)v7 )
      goto LABEL_3;
    v10 = (_QWORD *)sub_186B270(0x18u);
    v11 = (_DWORD *)*a1;
    v12 = 1;
    v6 = (unsigned __int64)(v10 + 1);
    *v10 = 2;
    *a2 = (unsigned __int64)(v10 + 1);
    v13 = v10 + 1;
  }
  *v13 = 0;
  *(_DWORD *)(v6 - 4) = v12;
  v7 = (unsigned int)*v5;
  v5 = v11;
LABEL_3:
  result = *(_QWORD *)(v6 + 8 * v7);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  ++*v5;
  return result;
}


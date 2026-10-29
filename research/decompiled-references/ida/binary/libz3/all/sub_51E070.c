__int64 __fastcall sub_51E070(__int64 a1, __int64 a2)
{
  char **exception; // r12
  unsigned int *v4; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r12d
  size_t v8; // rdi
  int v9; // r14d
  int v10; // r15d
  _QWORD *v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v16; // r13d
  size_t v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // r15
  __int64 *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __m128i v27; // xmm0
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // r13
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // edx
  unsigned __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-78h]
  __int64 v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (unsigned int *)sub_186B270(0x18u);
  *((_QWORD *)v4 + 1) = a2;
  v5 = v4;
  *(_QWORD *)v4 = 0x100000002LL;
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    if ( v7 == *(_DWORD *)(v6 - 8) )
    {
      v16 = (3 * v7 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v17 || v7 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = sub_186B270(v17);
      v19 = *(__int64 **)(a1 + 48);
      v20 = (__int64 *)v18;
      v41 = v18 + 8;
      if ( v19 )
      {
        v21 = *((unsigned int *)v19 - 1);
        v22 = 8 * v21;
        *((_DWORD *)v20 + 1) = v21;
        v23 = &v19[v21];
        if ( v23 != v19 )
        {
          v24 = v22 - 8;
          if ( (unsigned __int64)(v22 - 8) <= 8 || v41 < (unsigned __int64)(v19 + 2) && v19 < v20 + 3 )
          {
            v36 = v41;
            v37 = v19;
            do
            {
              v38 = *v37;
              *v37++ = 0;
              v36 += 8LL;
              *(_QWORD *)(v36 - 8) = v38;
            }
            while ( v23 != v37 );
          }
          else
          {
            v25 = 0;
            v26 = (v24 >> 3) + 1;
            do
            {
              v27 = _mm_loadu_si128((const __m128i *)&v19[v25]);
              *(_OWORD *)&v19[v25] = 0;
              *(__m128i *)&v20[v25 + 1] = v27;
              v25 += 2LL;
            }
            while ( 2 * (v26 >> 1) != v25 );
            if ( (v26 & 1) != 0 )
            {
              v28 = v26 & 0xFFFFFFFFFFFFFFFELL;
              v29 = v19[v28];
              v19[v28] = 0;
              v20[v28 + 1] = v29;
            }
          }
        }
        v30 = &v19[v21];
        if ( (_DWORD)v21 )
        {
          do
          {
            while ( *v19 )
            {
              v31 = (void *)(*v19++ - 8);
              sub_186B220(v31);
              if ( v19 == v30 )
                goto LABEL_21;
            }
            ++v19;
          }
          while ( v19 != v30 );
LABEL_21:
          v19 = *(__int64 **)(a1 + 48);
        }
        sub_186B220(v19 - 1);
      }
      else
      {
        *(_DWORD *)(v18 + 4) = 0;
      }
      v10 = v5[1];
      *(_DWORD *)v20 = (3 * v7 + 1) >> 1;
      v32 = *((unsigned int *)v20 + 1);
      *(_QWORD *)(a1 + 48) = v41;
      v11 = (_QWORD *)(v41 + 8 * v32);
      v33 = *v5;
      *v11 = 0;
      v9 = v33;
      v8 = 8 * v33 + 8;
    }
    else
    {
      v8 = 24;
      v9 = 2;
      v10 = 1;
      v11 = (_QWORD *)(v6 + 8LL * v7);
      *v11 = 0;
    }
  }
  else
  {
    v39 = (_QWORD *)sub_186B270(0x18u);
    v11 = v39 + 1;
    *v39 = 2;
    v10 = v5[1];
    v7 = 0;
    v39[1] = 0;
    v40 = *v5;
    *(_QWORD *)(a1 + 48) = v11;
    v9 = v40;
    v8 = 8 * v40 + 8;
  }
  v12 = sub_186B270(v8);
  v13 = v5[1];
  *(_DWORD *)v12 = v9;
  *(_DWORD *)(v12 + 4) = v10;
  v14 = 8 * v13;
  *v11 = v12 + 8;
  if ( v13 <= 1 )
  {
    v34 = *(_QWORD *)(a1 + 48);
    v35 = *(_DWORD *)(v34 - 4) + 1;
    if ( v14 == 8 )
      *(_QWORD *)(v12 + 8) = *((_QWORD *)v5 + 1);
    *(_DWORD *)(v34 - 4) = v35;
  }
  else
  {
    memcpy((void *)(v12 + 8), v5 + 2, 8 * v13);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 48) - 4LL);
  }
  sub_186B220(v5);
  return v7;
}


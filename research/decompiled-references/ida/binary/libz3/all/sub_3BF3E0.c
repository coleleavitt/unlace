__int64 __fastcall sub_3BF3E0(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // r13d
  size_t v10; // rdi
  void **v11; // rdi
  _DWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  void **v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  unsigned __int64 v19; // rdx
  void *v20; // rcx
  void **v21; // rax
  unsigned __int64 v22; // rdx
  void *v23; // rsi
  char **exception; // rbx
  __int64 v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    LODWORD(v5) = *(_DWORD *)(v4 - 4);
    v6 = (_QWORD *)(v4 + 8LL * (unsigned int)v5);
    if ( (_DWORD)v5 == *(_DWORD *)(v4 - 8) )
    {
      v9 = (unsigned int)(3 * v5 + 1) >> 1;
      v10 = 8 * v9 + 8;
      if ( 8 * (int)v5 + 8 >= (unsigned int)v10 || (unsigned int)v5 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3BCB70(v25, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v5 = sub_186B270(v10);
      v11 = (void **)*a1;
      v12 = (_DWORD *)v5;
      v4 = v5 + 8;
      if ( *a1 )
      {
        v13 = *((unsigned int *)v11 - 1);
        v12[1] = v13;
        v14 = v13;
        v15 = &v11[v14];
        if ( v11 != &v11[v14] )
        {
          if ( (unsigned __int64)(v14 * 8 - 8) <= 8 || v4 < (unsigned __int64)(v11 + 2) && v11 < (void **)v12 + 3 )
          {
            v21 = v11;
            v22 = v4;
            do
            {
              v23 = *v21;
              *v21++ = nullptr;
              v22 += 8LL;
              *(_QWORD *)(v22 - 8) = v23;
            }
            while ( v15 != v21 );
          }
          else
          {
            v16 = ((unsigned __int64)(v14 * 8 - 8) >> 3) + 1;
            v17 = 0;
            do
            {
              v18 = _mm_loadu_si128((const __m128i *)&v11[v17 / 2]);
              *(_OWORD *)&v11[v17 / 2] = 0;
              *(__m128i *)&v12[v17 + 2] = v18;
              v17 += 4LL;
            }
            while ( v17 != 4 * (v16 >> 1) );
            if ( (v16 & 1) != 0 )
            {
              v19 = 2 * (v16 & 0xFFFFFFFFFFFFFFFELL);
              v20 = v11[v19 / 2];
              v11[v19 / 2] = nullptr;
              *(_QWORD *)&v12[v19 + 2] = v20;
            }
          }
        }
        sub_3BCC50(v11);
        sub_186B220((void *)(*a1 - 8));
        v5 = (unsigned int)v12[1];
        v6 = (_QWORD *)(v4 + 8 * v5);
      }
      else
      {
        *(_DWORD *)(v5 + 4) = 0;
        v6 = (_QWORD *)(v5 + 8);
        LODWORD(v5) = 0;
      }
      *a1 = v4;
      *v12 = v9;
    }
  }
  else
  {
    v5 = sub_186B270(0x18u);
    v4 = v5 + 8;
    *(_QWORD *)v5 = 2;
    LODWORD(v5) = 0;
    *a1 = v4;
    v6 = (_QWORD *)v4;
  }
  v7 = *a2;
  *v6 = *a2;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 76);
    LODWORD(v5) = *(_DWORD *)(v4 - 4);
  }
  result = (unsigned int)(v5 + 1);
  *(_DWORD *)(v4 - 4) = result;
  return result;
}


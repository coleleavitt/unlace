__int64 __fastcall sub_9780A0(__int64 **a1)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  size_t v4; // rdi
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 *v7; // r14
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm0
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // r15
  void *v19; // rdi
  __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rax
  char **exception; // rbx
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *((_DWORD *)*a1 - 2);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 8 * v3 + 8;
    if ( 8 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v25, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result = sub_186B270(v4);
    v6 = *a1;
    v7 = (__int64 *)result;
    v8 = result + 8;
    if ( *a1 )
    {
      v9 = *((unsigned int *)v6 - 1);
      *(_DWORD *)(result + 4) = v9;
      v10 = 8 * v9;
      v11 = &v6[v9];
      if ( v6 != v11 )
      {
        v12 = v10 - 8;
        if ( (unsigned __int64)(v10 - 8) <= 8 || v6 < v7 + 3 && v8 < (unsigned __int64)(v6 + 2) )
        {
          v20 = v6;
          v21 = v8;
          do
          {
            v22 = *v20;
            *v20++ = 0;
            v21 += 8LL;
            *(_QWORD *)(v21 - 8) = v22;
          }
          while ( v20 != v11 );
        }
        else
        {
          v13 = 0;
          v14 = (v12 >> 3) + 1;
          do
          {
            v15 = _mm_loadu_si128((const __m128i *)&v6[v13]);
            *(_OWORD *)&v6[v13] = 0;
            *(__m128i *)&v7[v13 + 1] = v15;
            v13 += 2LL;
          }
          while ( 2 * (v14 >> 1) != v13 );
          if ( (v14 & 1) != 0 )
          {
            v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
            v17 = v6[v16];
            v6[v16] = 0;
            v7[v16 + 1] = v17;
          }
        }
      }
      v18 = &v6[v9];
      if ( (_DWORD)v9 )
      {
        do
        {
          while ( *v6 )
          {
            v19 = (void *)(*v6++ - 8);
            sub_186B220(v19);
            if ( v18 == v6 )
              goto LABEL_16;
          }
          ++v6;
        }
        while ( v6 != v18 );
LABEL_16:
        v6 = *a1;
      }
      result = sub_186B220(v6 - 1);
    }
    else
    {
      *(_DWORD *)(result + 4) = 0;
    }
    *a1 = (__int64 *)v8;
    *(_DWORD *)v7 = v3;
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x18u);
    *v23 = 2;
    result = (__int64)(v23 + 1);
    *a1 = (__int64 *)result;
  }
  return result;
}


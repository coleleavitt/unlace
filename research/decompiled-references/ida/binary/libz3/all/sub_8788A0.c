__int64 __fastcall sub_8788A0(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  size_t v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi
  _DWORD *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  char **exception; // rbx
  __int64 v14[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 16 * v3 + 8;
    if ( 16 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v14, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v14);
      sub_233E40((__int64)v14);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result = sub_186B270(v4);
    v6 = *a1;
    v7 = (_DWORD *)result;
    v8 = result + 8;
    if ( *a1 )
    {
      v9 = *(unsigned int *)(v6 - 4);
      v10 = 0;
      v7[1] = v9;
      v11 = 16 * v9;
      if ( v11 )
      {
        do
        {
          *(__m128i *)&v7[v10 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v6 + v10));
          v10 += 16LL;
        }
        while ( v10 != v11 );
      }
      result = sub_186B220((void *)(v6 - 8));
    }
    else
    {
      *(_DWORD *)(result + 4) = 0;
    }
    *a1 = v8;
    *v7 = v3;
  }
  else
  {
    v12 = (_QWORD *)sub_186B270(0x28u);
    *v12 = 2;
    result = (__int64)(v12 + 1);
    *a1 = result;
  }
  return result;
}


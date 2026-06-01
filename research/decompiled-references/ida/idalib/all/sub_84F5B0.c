void __noreturn sub_84F5B0(void *src, ...)
{
  __m128i *v1; // rax
  int v2; // r8d
  int v3; // r9d
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbp
  unsigned __int64 v7; // rbx
  size_t v8; // r13
  const char *v9; // rsi
  __int64 v10; // rbp
  size_t v11; // r14
  _BYTE *v12; // rsi
  void *ptr; // [rsp+0h] [rbp-138h] BYREF
  __int128 v14; // [rsp+8h] [rbp-130h]
  void *srca; // [rsp+20h] [rbp-118h] BYREF
  __int128 v16; // [rsp+28h] [rbp-110h]
  gcc_va_list va; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-E0h]
  __int64 v19; // [rsp+68h] [rbp-D0h]
  __int64 v20; // [rsp+70h] [rbp-C8h]
  __int64 v21; // [rsp+78h] [rbp-C0h]
  __int64 v22; // [rsp+80h] [rbp-B8h]
  __int64 v23; // [rsp+88h] [rbp-B0h]

  va_start(va, src);
  v19 = va_arg(va, _QWORD);
  v20 = va_arg(va, _QWORD);
  v21 = va_arg(va, _QWORD);
  v22 = va_arg(va, _QWORD);
  v23 = va_arg(va, _QWORD);
  va_end(va);
  v18 = __readfsqword(0x28u);
  ptr = nullptr;
  v14 = 0;
  v1 = (__m128i *)qvector_reserve(&ptr, 0, 26, 1);
  ptr = v1;
  *(_QWORD *)&v14 = 26;
  *v1 = _mm_load_si128((const __m128i *)&xmmword_23A88D0);
  srca = nullptr;
  *(__m128i *)((char *)v1 + 9) = _mm_load_si128((const __m128i *)&xmmword_23A88E0);
  v16 = 0;
  *((_BYTE *)ptr + 25) = 0;
  if ( src )
  {
    v4 = strlen((const char *)src);
    v5 = v4 + 1;
    v6 = v4;
    srca = (void *)qvector_reserve(&srca, 0, v4 + 1, 1);
    *(_QWORD *)&v16 = v5;
    memmove(srca, src, v6);
    *((_BYTE *)srca + v6) = 0;
    v7 = v16;
    if ( (_QWORD)v16 )
    {
      v8 = v16 - 1;
      if ( (_QWORD)v16 != 1 )
      {
        v10 = v14;
        v11 = v16 - 1;
        if ( (_QWORD)v14 )
        {
          v10 = v14 - 1;
          v11 = v8 + v14 - 1;
          v7 = v16 + v14 - 1;
        }
        v12 = ptr;
        if ( *((_QWORD *)&v14 + 1) < v7 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v7, 1);
          v12 = ptr;
        }
        *(_QWORD *)&v14 = v7;
        v12[v11] = 0;
        memcpy((char *)ptr + v10, srca, v8);
      }
    }
    if ( srca )
    {
      *(_QWORD *)&v16 = 0;
      qfree(srca);
    }
  }
  v9 = haystack;
  va_start(va, src);
  if ( (_QWORD)v14 )
    LODWORD(v9) = (_DWORD)ptr;
  callui(23, (int)v9, (int)va, (int)callui, v2, v3);
}

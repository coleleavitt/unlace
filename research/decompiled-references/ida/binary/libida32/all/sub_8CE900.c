__int64 __fastcall sub_8CE900(__int64 *a1, const char *a2, const char *a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 result; // rax
  size_t v13; // rax
  size_t v14; // r13
  size_t v15; // r12
  const char *v16; // rdx
  unsigned int (__fastcall *v17)(__int64 *, void **, const char *); // rax
  __int64 v18; // rsi
  __m128i v19; // xmm0
  void *v20; // r13
  unsigned int v21; // [rsp+8h] [rbp-D0h]
  void *v22; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+18h] [rbp-C0h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+38h] [rbp-A0h]
  __int64 v26; // [rsp+80h] [rbp-58h] BYREF
  __m128i v27; // [rsp+88h] [rbp-50h]
  unsigned __int64 v28; // [rsp+98h] [rbp-40h]

  v10 = *a1;
  v28 = __readfsqword(0x28u);
  if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v10 + 96))(a1, 0) )
  {
    v18 = a1[1];
    v19 = _mm_loadu_si128((const __m128i *)(a5 + 1));
    v26 = *a5;
    v27 = v19;
    if ( !(unsigned int)sub_8A6E50((__int64)&v26, v18, a2, &ptr) )
    {
      if ( (_BYTE)ptr )
      {
        a3 = a2;
        if ( *a5 == *(_QWORD *)a6 && *(_OWORD *)(a6 + 8) - *(_OWORD *)(a5 + 1) == 0 )
        {
          sub_8A4FA0((__int64)"apply_deltas: do nothing for %s\n", a2);
          return 0;
        }
      }
    }
  }
  if ( *(_QWORD *)(a4 + 8) )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, const char *, const char *, __int64, __int64 *, __int64, __int64))(*a1 + 128))(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6,
               a1[3]);
    goto LABEL_4;
  }
  sub_8A4FA0((__int64)"apply_deltas: copy %s %s\n", a3, a2);
  if ( strcmp(a3, a2) )
  {
    ptr = nullptr;
    v25 = 0;
    v20 = off_2C581D8;
    if ( off_2C581D8 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, off_2C581D8, 1);
      memset((char *)ptr + v25, 0, (size_t)v20 - v25);
      *(_QWORD *)&v25 = v20;
    }
    result = sub_8DA6E0(a1, a3, a2, &ptr);
    if ( ptr )
    {
      v21 = result;
      *(_QWORD *)&v25 = 0;
      qfree(ptr);
      result = v21;
    }
LABEL_4:
    if ( (_DWORD)result )
      return result;
  }
  v22 = nullptr;
  v23 = 0;
  if ( a2 )
  {
    v13 = strlen(a2);
    v14 = v13 + 1;
    v15 = v13;
    v22 = (void *)qvector_reserve(&v22, 0, v13 + 1, 1);
    *(_QWORD *)&v23 = v14;
    memmove(v22, a2, v15);
    v16 = haystack;
    *((_BYTE *)v22 + v15) = 0;
    v17 = *(unsigned int (__fastcall **)(__int64 *, void **, const char *))(*a1 + 96);
    if ( (_QWORD)v23 )
      v16 = (const char *)v22;
  }
  else
  {
    v16 = haystack;
    v17 = *(unsigned int (__fastcall **)(__int64 *, void **, const char *))(*a1 + 96);
  }
  if ( !v17(a1, &ptr, v16) )
    sub_8A8890(a1[1], (__int64)&v22, (__int64)&ptr, (const __m128i *)(a6 + 8));
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return 0;
}


unsigned __int64 __fastcall sub_31DE00(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  size_t v16; // r12
  _QWORD *v17; // rbp
  char **p_s; // rsi
  char *v20; // rax
  char *v21; // r13
  size_t v22; // rax
  size_t v23; // r12
  void *v24; // rdi
  size_t v25; // r14
  __int64 v26; // rax
  char *s; // [rsp+0h] [rbp-48h] BYREF
  __int128 v28; // [rsp+8h] [rbp-40h]
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  s = nullptr;
  v28 = 0;
  v16 = *(_QWORD *)(v10 + 8);
  v17 = (_QWORD *)v10;
  if ( v16 )
  {
    v20 = (char *)qalloc_or_throw(*(_QWORD *)(v10 + 8));
    *((_QWORD *)&v28 + 1) = v16;
    s = v20;
    memcpy(v20, (const void *)*v17, v16);
    *(_QWORD *)&v28 = v16;
  }
  p_s = &s;
  if ( (unsigned __int8)sub_31DCF0(a1, (__int64)&s, 0, v11, v12, v13, (__m128)0LL, a3, a4, a5, v14, v15, a8, a9) )
  {
    sub_31D450(a1, 1);
    if ( (_QWORD)v28 && (v21 = s) != nullptr && (v22 = strlen(s), (v23 = v22) != 0) )
    {
      v24 = (void *)*v17;
      v25 = v22 + 1;
      if ( v17[2] < v22 + 1 )
      {
        v26 = qvector_reserve(v17, *v17, v22 + 1, 1);
        *v17 = v26;
        v24 = (void *)v26;
      }
      v17[1] = v25;
      memmove(v24, v21, v23);
      *(_BYTE *)(*v17 + v23) = 0;
    }
    else
    {
      v17[1] = 0;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 64LL))(*a1, 1);
    p_s = (char **)(&qword_28 + 5);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[1] + 56LL))(a1[1], 45);
  }
  if ( s )
  {
    *(_QWORD *)&v28 = 0;
    qfree(s, (const char *)p_s);
  }
  return v29 - __readfsqword(0x28u);
}

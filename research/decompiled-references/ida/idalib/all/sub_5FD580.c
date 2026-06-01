__int64 __fastcall sub_5FD580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v7; // r13
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rbx
  const char *v13; // rsi
  void *v14; // rax
  const void *v15; // rsi
  void *v16; // [rsp+0h] [rbp-98h] BYREF
  __int128 v17; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+28h] [rbp-70h]
  __int16 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  char v22; // [rsp+48h] [rbp-50h]
  __m128i v23; // [rsp+50h] [rbp-48h]
  unsigned __int64 v24; // [rsp+68h] [rbp-30h]

  v7 = *(_QWORD *)(a3 + 8);
  v24 = __readfsqword(0x28u);
  v16 = nullptr;
  ptr = nullptr;
  v17 = 0;
  v19 = 0;
  if ( v7 )
  {
    v14 = (void *)qalloc_or_throw(v7);
    v15 = *(const void **)a3;
    ptr = v14;
    *((_QWORD *)&v19 + 1) = v7;
    memcpy(v14, v15, v7);
    *(_QWORD *)&v19 = v7;
  }
  v9 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  v20 = *(_WORD *)(a3 + 24);
  v10 = *(_QWORD *)(a3 + 32);
  v23 = v9;
  v21 = v10;
  v22 = *(_BYTE *)(a3 + 40);
  v11 = 3;
  if ( (unsigned __int8)sub_748AD0(&v16, a1, &ptr) )
  {
    v13 = haystack;
    if ( (_QWORD)v17 )
      v13 = (const char *)v16;
    sub_5FD2D0((__int64 *)(a6 + 304), (__int64)v13, ";");
    v11 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v11;
}

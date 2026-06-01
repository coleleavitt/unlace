__int64 __fastcall sub_5E1300(__int64 a1, const char *a2, __int64 a3)
{
  size_t v3; // r12
  __m128i v5; // xmm0
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbx
  void *v13; // rax
  const void *v14; // rsi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  int v17; // [rsp+18h] [rbp-40h]
  int v18; // [rsp+1Ch] [rbp-3Ch]
  int v19; // [rsp+20h] [rbp-38h]
  __m128i v20; // [rsp+28h] [rbp-30h]
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a3 + 8);
  v21 = __readfsqword(0x28u);
  ptr = nullptr;
  v16 = 0;
  if ( v3 )
  {
    v13 = (void *)qalloc_or_throw(v3, a2);
    v14 = *(const void **)a3;
    *((_QWORD *)&v16 + 1) = v3;
    ptr = v13;
    memcpy(v13, v14, v3);
    *(_QWORD *)&v16 = v3;
  }
  v5 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  LOWORD(v17) = *(_WORD *)(a3 + 24);
  v6 = *(_DWORD *)(a3 + 28);
  v20 = v5;
  v18 = v6;
  LOBYTE(v19) = *(_BYTE *)(a3 + 32);
  if ( (unsigned __int8)sub_5E0170(a1, (__int64)&ptr) )
  {
    v11 = 0;
  }
  else
  {
    sub_727620(
      a1,
      (unsigned int)"Wrong TESTID",
      v7,
      v8,
      v9,
      v10,
      (__int64)ptr,
      v16,
      DWORD2(v16),
      v17,
      v19,
      v20.m128i_i32[0],
      v20.m128i_i64[1]);
    v11 = 3;
  }
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return v11;
}


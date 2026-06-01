unsigned __int64 __fastcall reg_finder_find(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int32 a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r15
  int v10; // r14d
  int v11; // r12d
  void *v12; // rdi
  void *v13; // rbx
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  char v16; // al
  void *v17; // rdi
  char v19; // al
  __m128i v20; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __m128i v22; // [rsp+18h] [rbp-60h] BYREF
  char v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 24);
  v24 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_DWORD *)(a1 + 44);
  v20.m128i_i64[0] = v7;
  v11 = *(_DWORD *)(a1 + 48);
  sub_4FF880((__int64)&ptr, a1, a3, a4, a5, a6, a7);
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 32) = v9;
  *(_DWORD *)(a1 + 44) = v10;
  if ( v11 != *(_DWORD *)(a1 + 48) )
  {
    if ( !under_debugger )
      interr(3282);
    BUG();
  }
  if ( !v20.m128i_i64[0] )
    *(_QWORD *)(a1 + 56) = 0;
  v12 = *(void **)a2;
  v13 = ptr;
  ptr = nullptr;
  v14 = _mm_loadu_si128(&v22);
  v22 = 0;
  if ( v12 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v20 = v14;
    qfree(v12);
    v15 = _mm_load_si128(&v20);
    v16 = v23;
    *(_QWORD *)a2 = v13;
    v17 = ptr;
    *(_BYTE *)(a2 + 24) = v16;
    *(__m128i *)(a2 + 8) = v15;
    if ( v17 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v17);
    }
  }
  else
  {
    v19 = v23;
    *(_QWORD *)a2 = v13;
    *(__m128i *)(a2 + 8) = v14;
    *(_BYTE *)(a2 + 24) = v19;
  }
  return v24 - __readfsqword(0x28u);
}

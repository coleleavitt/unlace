unsigned __int64 __fastcall reg_finder_find(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        signed __int32 a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // r13
  __int64 v8; // r15
  int v9; // r14d
  int v10; // r12d
  void *v11; // rdi
  void *v12; // rbx
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  char v15; // al
  void *v16; // rdi
  char v18; // al
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __m128i v21; // [rsp+18h] [rbp-60h] BYREF
  char v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  v23 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 48);
  v19.m128i_i64[0] = *(_QWORD *)(a1 + 56);
  sub_4E6FC0((__int64)&ptr, a1, ((unsigned __int64)a4 << 32) | a3, a5, a6, a7);
  *(_QWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 44) = v9;
  if ( v10 != *(_DWORD *)(a1 + 48) )
  {
    if ( !under_debugger )
      interr(3282);
    BUG();
  }
  if ( !v19.m128i_i64[0] )
    *(_QWORD *)(a1 + 56) = 0;
  v11 = *(void **)a2;
  v12 = ptr;
  ptr = nullptr;
  v13 = _mm_loadu_si128(&v21);
  v21 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v19 = v13;
    qfree(v11);
    v14 = _mm_load_si128(&v19);
    v15 = v22;
    *(_QWORD *)a2 = v12;
    v16 = ptr;
    *(_BYTE *)(a2 + 24) = v15;
    *(__m128i *)(a2 + 8) = v14;
    if ( v16 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v16);
    }
  }
  else
  {
    v18 = v22;
    *(_QWORD *)a2 = v12;
    *(__m128i *)(a2 + 8) = v13;
    *(_BYTE *)(a2 + 24) = v18;
  }
  return v23 - __readfsqword(0x28u);
}


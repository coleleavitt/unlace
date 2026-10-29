unsigned __int64 __fastcall sub_4ECF30(__int64 *a1, __int64 a2, unsigned int *a3)
{
  int v5; // ecx
  __int64 v7; // rdx
  __int64 v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // r12
  size_t v11; // r14
  size_t v12; // rax
  __int64 v13; // rdi
  size_t v14; // rbx
  void *v15; // rbp
  size_t v16; // rax
  __int64 v17; // rdx
  void *v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v22; // rax
  void *v23; // rdi
  const void *v24; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __m128i v26; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v27[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v28[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = *((_DWORD *)a1 + 29);
  v28[0] = __readfsqword(0x28u);
  if ( v5 || (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v7 = a1[1];
    v8 = *a1;
    a1[10] = v7;
    if ( a1[2] < (unsigned __int64)(v7 + 1) )
    {
      v22 = qvector_reserve(a1, v8, v7 + 1, 1);
      v7 = a1[1];
      *a1 = v22;
      v8 = v22;
    }
    *(_BYTE *)(v8 + v7) = 2;
    ++a1[1];
    v9 = sub_4EC590(a1 + 3, *a3);
    v10 = v9;
    if ( !v9 )
      sub_375400();
    v11 = *((_QWORD *)v9 + 3);
    v24 = *((const void **)v9 + 2);
    if ( HIDWORD(v11) )
      ((void (__noreturn *)(void))sub_4EC320)();
    v12 = pack_dd(v27, v28, (unsigned int)v11) - (_QWORD)v27;
    if ( v12 )
      sub_4EC4D0(a1, v27, v12);
    if ( v11 )
      sub_4EC4D0(a1, v24, v11);
    v13 = a2;
    ptr = nullptr;
    v26 = 0;
    sub_4EC630(a2, (__int64 *)&ptr, a3);
    v14 = v26.m128i_i64[0];
    v15 = ptr;
    if ( HIDWORD(v26.m128i_i64[0]) )
      sub_4EC320(v13);
    v16 = pack_dd(v27, v28, v26.m128i_u32[0]) - (_QWORD)v27;
    if ( v16 )
      sub_4EC4D0(a1, v27, v16);
    if ( v14 )
      sub_4EC4D0(a1, v15, v14);
    if ( !*((_DWORD *)a1 + 29) )
    {
      v17 = a1[1];
      if ( v17 )
      {
        add_undo_record(*((unsigned int *)a1 + 28), *a1, v17);
        v23 = (void *)*a1;
        if ( *a1 )
        {
          a1[1] = 0;
          qfree(v23);
          *a1 = 0;
          a1[2] = 0;
        }
        a1[10] = -1;
      }
    }
    v18 = *((void **)v10 + 2);
    v19 = *((_QWORD *)v10 + 4);
    *((_QWORD *)v10 + 2) = ptr;
    v20 = _mm_loadu_si128(&v26);
    ptr = v18;
    v26.m128i_i64[1] = v19;
    *(__m128i *)(v10 + 6) = v20;
    if ( v18 )
    {
      v26.m128i_i64[0] = 0;
      qfree(v18);
    }
  }
  return v28[0] - __readfsqword(0x28u);
}


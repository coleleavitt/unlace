__int64 __fastcall sub_197ED0(const __m128i *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v8; // eax
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  __m128i v18; // [rsp+0h] [rbp-58h] BYREF
  __m128i v19; // [rsp+10h] [rbp-48h]
  __int32 v20; // [rsp+20h] [rbp-38h]
  void (__fastcall ***v21)(_QWORD, __int64, __int64); // [rsp+28h] [rbp-30h]
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]

  v8 = a1[160].m128i_i32[0];
  v22 = __readfsqword(0x28u);
  v21 = nullptr;
  v18 = _mm_loadu_si128(a1 + 158);
  v10 = _mm_loadu_si128(a1 + 159);
  v11 = a1[160].m128i_i64[1];
  v20 = v8;
  v19 = v10;
  if ( v11 )
    v21 = (void (__fastcall ***)(_QWORD, __int64, __int64))(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int32))(*(_QWORD *)v11 + 16LL))(
                                                             v11,
                                                             a2,
                                                             a3,
                                                             a4,
                                                             a5,
                                                             a6,
                                                             v18.m128i_i64[0],
                                                             v18.m128i_i64[1],
                                                             v19.m128i_i64[0],
                                                             v19.m128i_i64[1],
                                                             v20);
  v12 = *a2 + 24;
  if ( (unsigned int)bookmarks_t_get_by_inode(&v18, v12, a3, a1[161].m128i_i64[0]) == -1 )
  {
    v16 = 0;
  }
  else
  {
    v12 = *a2;
    (**v21)(v21, *a2, a1[161].m128i_i64[0]);
    v16 = 1;
  }
  if ( v21 )
    qfree(v21, v12, v13, v14, v15);
  return v16;
}

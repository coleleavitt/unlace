__int64 __fastcall sub_67D5A0(__int64 a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v16; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v7 = a1 + 8;
  v8 = *(_QWORD *)(v7 - 8);
  v17 = __readfsqword(0x28u);
  ptr = nullptr;
  v16 = 0;
  if ( sub_79BAE0(v7, v8, &ptr, 1, a4, 340) <= 0 )
  {
    v12 = 0;
  }
  else
  {
    v10 = ptr;
    v11 = v16;
    *a3 = v16;
    v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)((unsigned __int64)v10 + v11));
    v12 = sub_67D4E0(a1, a2, a4, (unsigned __int8 **)&v14);
  }
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return v12;
}


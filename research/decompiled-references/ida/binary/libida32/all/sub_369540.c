__int64 __fastcall sub_369540(__int64 a1, __m128i *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  void *v4; // rax
  __m128i v5; // xmm0
  int v7; // [rsp+Ch] [rbp-2Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-28h] BYREF
  __m128i v9; // [rsp+18h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 40);
  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = v2;
  v9 = 0;
  get_debug_name(&ptr, &v7, v3);
  v4 = ptr;
  v5 = _mm_loadu_si128(&v9);
  a2->m128i_i8[0] = 7;
  a2->m128i_i64[1] = (__int64)v4;
  a2[1] = v5;
  return 0;
}


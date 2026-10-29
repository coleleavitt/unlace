unsigned __int64 __fastcall sub_9443E0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v6; // ebp
  __m128i v7; // xmm0
  int v8; // eax
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  int v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v6 = *(_DWORD *)(a1 + 44);
  v13 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 84) = a2[11];
  sub_8EE240(&v10, a2, 0xFFFFFFFFFFFFFFFFLL, 0, 0, a6);
  v10.m128i_i32[0] = v6;
  v7 = _mm_load_si128(&v10);
  *(_QWORD *)(a1 + 60) = v11;
  v8 = v12;
  *(__m128i *)(a1 + 44) = v7;
  *(_DWORD *)(a1 + 68) = v8;
  return __readfsqword(0x28u) ^ v13;
}


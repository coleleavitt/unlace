__int64 __fastcall sub_11F44B0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int32 v6; // eax
  __int32 v7; // eax
  __int64 result; // rax

  sub_11F4340(a1, a2, (__int64)a3, a4);
  *(_QWORD *)(a1 + 2432) = a2;
  *(_QWORD *)a1 = off_2C396F8;
  *(_QWORD *)(a1 + 2440) = a1 + 2456;
  sub_11E4760((_QWORD *)(a1 + 2440), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 2472) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 2488) = a3[3].m128i_i32[0];
  v6 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 2496) = a4;
  *(_DWORD *)(a1 + 2492) = v6;
  *(_QWORD *)(a1 + 2696) = a2;
  *(_QWORD *)(a1 + 2704) = a1 + 2720;
  *(_BYTE *)(a1 + 2688) = 0;
  sub_11E4760((_QWORD *)(a1 + 2704), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 2736) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 2752) = a3[3].m128i_i32[0];
  v7 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 2760) = a4;
  *(_DWORD *)(a1 + 2756) = v7;
  *(_QWORD *)(a1 + 3848) = a2;
  *(_QWORD *)(a1 + 3856) = a1 + 3872;
  *(_BYTE *)(a1 + 3840) = 0;
  sub_11E4760((_QWORD *)(a1 + 3856), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 3888) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 3904) = a3[3].m128i_i32[0];
  result = a3[3].m128i_u32[1];
  *(_QWORD *)(a1 + 3912) = a4;
  *(_DWORD *)(a1 + 3908) = result;
  *(_BYTE *)(a1 + 3921) = 0;
  return result;
}

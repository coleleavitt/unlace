__int64 __fastcall sub_E1FF20(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  v2 = sub_186B270(0x88u);
  *(_QWORD *)v2 = a2;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = v3;
  *(_QWORD *)(v2 + 40) = 0;
  *(__m128i *)(v2 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
  v4 = sub_186B270(0x80u);
  *(_QWORD *)v4 = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 120) = 0;
  *(_QWORD *)(v2 + 48) = v4;
  result = *(_QWORD *)(v2 + 8);
  *a1 = v2;
  *(_QWORD *)(v2 + 56) = 8;
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = result;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 1;
  *(_QWORD *)(v2 + 128) = 0;
  return result;
}


__int64 __fastcall sub_87EAC0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdi
  __int64 result; // rax
  __m128i v6; // xmm0
  int v7; // edx

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 432LL);
  if ( v3 == sub_79EFF0 )
    v4 = a2 + 2144;
  else
    v4 = v3(a2);
  result = sub_180C100(v4, 32);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 20));
  v7 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)result = off_1C55958;
  *(_DWORD *)(result + 8) = v7;
  *(__m128i *)(result + 12) = v6;
  return result;
}


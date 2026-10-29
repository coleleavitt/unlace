__int64 __fastcall dbgreg_place_t__::vfunc_4(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // rcx
  unsigned __int64 v11; // rax
  int v12; // edx
  int v13; // eax

  v6 = qalloc_or_throw(24);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC600);
  v8 = v6;
  *(_QWORD *)v6 = dbgreg_place_t___vtable;
  *(__m128i *)(v6 + 8) = si128;
  v9 = a2[1];
  for ( i = *a2; v9 != i; i += 56 )
  {
    v11 = *(int *)(i + 52);
    if ( a3 >= v11
      && a3 < (int)(v11
                  + *(_DWORD *)(i + 8)
                  + (*(int *)(i + 44) + *(_QWORD *)(i + 24) - 1LL) / (unsigned __int64)*(int *)(i + 44)) )
    {
      *(_QWORD *)(v8 + 12) = *(_QWORD *)i;
      v12 = *(_DWORD *)(i + 8);
      v13 = a3 - *(_DWORD *)(i + 52) - v12;
      if ( (int)a3 - *(_DWORD *)(i + 52) >= v12 )
        v13 *= *(_DWORD *)(i + 44);
      *(_DWORD *)(v8 + 20) = v13;
    }
  }
  *(_DWORD *)(v8 + 8) = a4;
  return v8;
}

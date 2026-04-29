__int64 __fastcall sub_95A40(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // r13d
  __int64 v7; // rbp

  if ( *(_BYTE *)a1 == 2 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    result = *(_QWORD *)(v4 + 16);
    *(__m128i *)(v4 + 16) = _mm_unpacklo_epi64(
                              (__m128i)(result & (unsigned __int64)a4),
                              (__m128i)(result & (unsigned __int64)a4));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != result )
    {
      result = 0;
      *(_WORD *)(a1 + 2) = 0;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 4);
    v7 = j__qalloc_or_throw();
    *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v7 + 72) = 0;
    sub_32D4D0(v7, a3);
    *(_DWORD *)v7 = 20;
    sub_11A5D0(a1, v7 + 32);
    result = sub_11E5D0(v7 + 48, a2, 31, v6, -1, 0);
    *(_DWORD *)(v7 + 68) = v6;
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 4) = v6;
  }
  return result;
}

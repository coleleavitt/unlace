unsigned __int64 __fastcall sub_F1ECA0(
        unsigned __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 result; // rax
  __m128i v9; // xmm0
  __m128i v10; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+18h] [rbp-10h]
  int v12; // [rsp+1Ch] [rbp-Ch]

  *a1 = 0;
  v6 = a2[294];
  v10 = (__m128i)__PAIR128__(a4, a3);
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a2[304] += 24LL;
  if ( a2[295] >= v7 + 24 && v6 )
  {
    a2[294] = v7 + 24;
    result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v12 = a6;
    v11 = a5;
    result = sub_986170((__int64)(a2 + 294), 24, 24, 3, a5, a6);
    LODWORD(a6) = v12;
    LODWORD(a5) = v11;
    v7 = result & 0xFFFFFFFFFFFFFFFCLL;
  }
  v9 = _mm_load_si128(&v10);
  *(_DWORD *)(result + 16) = a5;
  *(_DWORD *)(result + 20) = a6;
  *(__m128i *)result = v9;
  *a1 = v7;
  return result;
}

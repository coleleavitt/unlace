unsigned __int64 __fastcall sub_8EAAF0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, const __m128i *a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v11; // rdx
  __m128i *v12; // [rsp+8h] [rbp-60h]
  __m128i *v13; // [rsp+10h] [rbp-58h]
  __m128i *v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v5 = (a3 + a2) >> 1;
  v12 = (__m128i *)(a4 + 3744);
  v13 = (__m128i *)(a4 + 3824);
  v14 = (__m128i *)(a4 + 3904);
  result = a3 - a2;
  if ( a3 - a2 > 0x12B )
  {
    v7 = a2;
    if ( a1[1] <= 0xC3u )
    {
      while ( 1 )
      {
        sub_8E51D0(v12, a5, v7, a3);
        sub_8E51D0(v13, a5, v11, v5);
        sub_8E51D0(v14, a5, v5, a3);
        v16 = sub_8EA850(v12->m128i_i64, a4);
        v15 = sub_8EA850(v13->m128i_i64, a4);
        result = sub_8EA850(v14->m128i_i64, a4);
        if ( v16 > 0xFFFFFFFFFFFFFF88LL || v15 > 0xFFFFFFFFFFFFFF88LL )
          break;
        if ( result > 0xFFFFFFFFFFFFFF88LL )
          break;
        if ( result + v15 >= v16 )
          break;
        sub_8EAAF0(a1, v7, v5, a4, a5);
        *(_DWORD *)(*a1 + 4LL * a1[1]) = v5;
        result = a1[1] + 1LL;
        a1[1] = result;
        if ( a3 - v5 <= 0x12B )
          break;
        v7 = v5;
        if ( result > 0xC3 )
          break;
        v5 = (a3 + v5) >> 1;
      }
    }
  }
  return result;
}


/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423010
// Address: 0x0000000000423010

//----- (0000000000423010) ----------------------------------------------------
__int64 __fastcall sub_423010(
        __int64 a1,
        __int64 a2,
        int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  bool v13; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 *v19; // rdx
  _QWORD *v20; // rdi
  _QWORD v21[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+20h] [rbp-68h]
  __int128 v23; // [rsp+28h] [rbp-60h]
  __int128 v24; // [rsp+38h] [rbp-50h]
  __int128 v25; // [rsp+48h] [rbp-40h]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v13 = *(_BYTE *)(a1 + 1414) == 0;
  v26 = __readfsqword(0x28u);
  if ( !v13 && !*(_BYTE *)(a1 + 1349) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(30059);
    BUG();
  }
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(a1 + 136);
      if ( v15 != *(_QWORD *)(a1 + 168) )
        break;
      v21[1] = -1;
      v22 = 0;
      v21[0] = 0xFFFFFFFFLL;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      if ( !(unsigned int)sub_4225A0(a1, (__int64)v21, a3, (__m128)0LL, a5, a6, a7, a8, a9, a10, a11) )
      {
        sub_478720((__int64)v21);
        return 0;
      }
      if ( (v22 & 0xFFFFFFF00000000LL) != 0 )
      {
        v20 = *(_QWORD **)(a1 + 168);
        if ( v20 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
        {
          sub_41C280((_QWORD *)(a1 + 120), (__int64)v21);
        }
        else
        {
          *v20 = 0xFFFFFFFFLL;
          v20[1] = -1;
          v20[2] = 0;
          sub_4788F0((__int64)v20, (__int64)v21);
          *(_QWORD *)(a1 + 168) += 72LL;
        }
        *(_BYTE *)(a1 + 1412) = 0;
        sub_478720((__int64)v21);
      }
      else
      {
        sub_478720((__int64)v21);
      }
    }
    sub_4788F0(a2, v15);
    v16 = *(_QWORD *)(a1 + 136);
    if ( v16 == *(_QWORD *)(a1 + 152) - 72LL )
    {
      sub_478720(v16);
      operator delete(*(void **)(a1 + 144), 0x1F8u);
      v19 = (__int64 *)(*(_QWORD *)(a1 + 160) + 8LL);
      *(_QWORD *)(a1 + 160) = v19;
      v17 = *v19;
      a5 = (__m128)(unsigned __int64)(v17 + 504);
      *(__m128i *)(a1 + 144) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)a5);
    }
    else
    {
      sub_478720(v16);
      v17 = *(_QWORD *)(a1 + 136) + 72LL;
    }
    *(_QWORD *)(a1 + 136) = v17;
  }
  while ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 0 );
  v13 = *(_QWORD *)(a1 + 440) == 0;
  *(_BYTE *)(a1 + 1414) = 1;
  if ( v13 )
  {
    *(_BYTE *)(a1 + 1413) = 0;
    result = 2;
    if ( v17 != *(_QWORD *)(a1 + 168) )
      return result;
  }
  else
  {
    result = 2;
    if ( v17 != *(_QWORD *)(a1 + 168) )
      return result;
  }
  return 1;
}
// 42312F: variable 'a8' is possibly undefined
// 42312F: variable 'a9' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;

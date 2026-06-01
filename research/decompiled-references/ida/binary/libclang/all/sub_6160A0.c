__int64 __fastcall sub_6160A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const __m128i *v3; // rbp
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  __m128i *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // [rsp+Fh] [rbp-69h]
  __int64 v15; // [rsp+10h] [rbp-68h] BYREF
  __m128i v16; // [rsp+18h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h]
  __m128i v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]

  v2 = *(unsigned int *)(a1 + 136);
  if ( (_DWORD)v2 )
  {
    v3 = *(const __m128i **)(*(_QWORD *)(a1 + 128) + 8 * v2 - 8);
    v3->m128i_i32[2] = 0;
    --*(_DWORD *)(a1 + 136);
  }
  else
  {
    v11 = (__m128i *)operator new(0x290u);
    v12 = *(unsigned int *)(a1 + 196);
    v3 = v11;
    v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
    v11->m128i_i64[1] = 0xA00000000LL;
    v13 = *(unsigned int *)(a1 + 192);
    if ( v12 < v13 + 1 )
    {
      sub_25D6060(a1 + 184, a1 + 200, v13 + 1, 8);
      v13 = *(unsigned int *)(a1 + 192);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v13) = v3;
    ++*(_DWORD *)(a1 + 192);
  }
  sub_639270(&v15, a2, *(_QWORD *)(a1 + 48), *(_QWORD *)a1, *(_QWORD *)(a1 + 84));
  v4 = _mm_loadu_si128(&v16);
  v18[0].m128i_i64[0] = (__int64)v3;
  v18[0].m128i_i64[1] = v15;
  v18[1] = v4;
  v19 = v17;
  sub_611FB0(v18, a2);
  result = sub_615270(a1, v3, v5, v6, v7, v8);
  v10 = *(unsigned int *)(a1 + 136);
  if ( *(unsigned int *)(a1 + 140) < (unsigned __int64)(v10 + 1) )
  {
    v14 = result;
    sub_25D6060(a1 + 128, a1 + 144, v10 + 1, 8);
    v10 = *(unsigned int *)(a1 + 136);
    result = v14;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v10) = v3;
  ++*(_DWORD *)(a1 + 136);
  return result;
}


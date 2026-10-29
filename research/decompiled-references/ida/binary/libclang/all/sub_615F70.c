__int64 __fastcall sub_615F70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const __m128i *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rdx
  __m128i *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+Fh] [rbp-19h]

  v2 = *(unsigned int *)(a1 + 136);
  if ( (_DWORD)v2 )
  {
    v3 = *(const __m128i **)(*(_QWORD *)(a1 + 128) + 8 * v2 - 8);
    v3->m128i_i32[2] = 0;
    --*(_DWORD *)(a1 + 136);
  }
  else
  {
    v10 = (__m128i *)operator new(0x290u);
    v11 = *(unsigned int *)(a1 + 196);
    v3 = v10;
    v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
    v10->m128i_i64[1] = 0xA00000000LL;
    v12 = *(unsigned int *)(a1 + 192);
    if ( v11 < v12 + 1 )
    {
      sub_25D6060(a1 + 184, a1 + 200, v12 + 1, 8);
      v12 = *(unsigned int *)(a1 + 192);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v12) = v3;
    ++*(_DWORD *)(a1 + 192);
  }
  sub_6025D0((_QWORD *)a1, (__int64)v3, a2);
  result = sub_615270(a1, v3, v4, v5, v6, v7);
  v9 = *(unsigned int *)(a1 + 136);
  if ( *(unsigned int *)(a1 + 140) < (unsigned __int64)(v9 + 1) )
  {
    v13 = result;
    sub_25D6060(a1 + 128, a1 + 144, v9 + 1, 8);
    v9 = *(unsigned int *)(a1 + 136);
    result = v13;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v9) = v3;
  ++*(_DWORD *)(a1 + 136);
  return result;
}


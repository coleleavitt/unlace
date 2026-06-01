__int64 __fastcall sub_D0E380(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9; // [rsp+10h] [rbp-28h]

  v2 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v2;
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  v8 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v6 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
  v2 = sub_DCBF60(a1 + 384, v5, v6);
  if ( !(_BYTE)v2 )
    return v2;
  if ( !*(_DWORD *)(v6 + 24) && *(_QWORD *)(v6 + 32) )
  {
    if ( *(_DWORD *)(v6 + 40) )
    {
      sub_E24D00(v6);
      sub_E23CF0(v6);
    }
  }
  v7 = sub_D0E280(v6);
  v9 = _mm_load_si128(&v8);
  *(_QWORD *)v7 = v9.m128i_i64[0];
  *(_DWORD *)(v7 + 8) = v9.m128i_i32[2];
  return v2;
}

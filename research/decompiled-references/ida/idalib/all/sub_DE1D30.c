__int64 __fastcall sub_DE1D30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  __m128i v12; // [rsp+10h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 176);
  v11 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  v3 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v4 = sub_DCBF60(a1, a2, v3);
  if ( (_BYTE)v4 )
  {
    v5 = *(_QWORD *)(v3 + 32);
    if ( *(_DWORD *)(v3 + 24)
      || v5 && *(_DWORD *)(v3 + 40) && (sub_E24D00(v3), sub_E23CF0(v3), v5 = *(_QWORD *)(v3 + 32), *(_DWORD *)(v3 + 24)) )
    {
      v6 = *(_QWORD *)v3;
    }
    else
    {
      v9 = sub_CFDF60(v3);
      v6 = *(_QWORD *)v3;
      if ( *(_BYTE *)(v9 + 60) )
      {
        v10 = *(unsigned int *)(v3 + 40);
        if ( v10 == v6 )
        {
          v7 = v5 + v10 + 72;
          goto LABEL_8;
        }
      }
    }
    v7 = v5 + v6 + 40;
LABEL_8:
    v12 = _mm_load_si128(&v11);
    *(_QWORD *)v7 = v12.m128i_i64[0];
    *(_DWORD *)(v7 + 8) = v12.m128i_i32[2];
  }
  return v4;
}

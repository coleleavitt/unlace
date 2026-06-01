__int64 __fastcall sub_D1CCD0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rax
  __m128i v9; // [rsp+0h] [rbp-78h] BYREF
  __m128i v10; // [rsp+10h] [rbp-68h]
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v9 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DC8930(a1, a2, v5, 2) || !(unsigned __int8)sub_DC8DB0(a1, a2, v5, 2) )
    return 0;
  sub_E23220(v11, *(_QWORD *)(v5 + 32), (unsigned int)(a3 + *(_DWORD *)v5), (unsigned int)(a3 + *(_DWORD *)v5));
  v7 = sub_DCBF60(a1, a2, v11);
  if ( (_BYTE)v7 )
  {
    sub_E24D00(v11);
    v8 = sub_D0E280((__int64)v11);
    v10 = _mm_load_si128(&v9);
    *(_QWORD *)v8 = v10.m128i_i64[0];
    *(_DWORD *)(v8 + 8) = v10.m128i_i32[2];
    sub_E232A0(v11);
  }
  else
  {
    sub_E232A0(v11);
  }
  return v7;
}

__int64 __fastcall sub_D15810(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  const __m128i *v7; // r13
  _DWORD v8[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v8);
  sub_E21790(v4, 48);
  if ( (unsigned __int8)sub_DC8930(a1, a2, v8, 2) && (unsigned __int8)sub_DC8DB0(a1, a2, v8, 2) )
  {
    sub_E23220(v10, v9, (unsigned int)(a3 + v8[0]), (unsigned int)(a3 + v8[0]));
    v5 = sub_DCC160(a1, a2, v10, 0);
    if ( (_BYTE)v5 )
    {
      v7 = (const __m128i *)sub_D0E230((__int64)v10);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128(v7);
    }
    sub_E232A0(v10);
  }
  else
  {
    v5 = 0;
  }
  sub_E232A0(v8);
  return v5;
}

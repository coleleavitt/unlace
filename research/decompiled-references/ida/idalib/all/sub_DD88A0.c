__int64 __fastcall sub_DD88A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i *v9; // rax
  __m128i v10[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v10[0] = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  v3 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v4 = sub_DCA140(a1, a2, v3);
  if ( !(_BYTE)v4 )
    return v4;
  sub_E23CF0(v3);
  sub_E24D00(v3);
  if ( *(_DWORD *)(v3 + 24) )
  {
    v7 = *(_QWORD *)v3;
    v8 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    v6 = sub_CFDF60(v3);
    v7 = *(_QWORD *)v3;
    v8 = *(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(v6 + 60) && v7 == *(_DWORD *)(v3 + 40) )
    {
      v9 = (__m128i *)(v8 + v7 + 72);
      goto LABEL_6;
    }
  }
  v9 = (__m128i *)(v8 + v7 + 40);
LABEL_6:
  *v9 = _mm_load_si128(v10);
  return v4;
}

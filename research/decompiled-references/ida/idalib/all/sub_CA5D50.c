__int64 __fastcall sub_CA5D50(__int64 a1, unsigned int a2, _BYTE *a3, __int64 *a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rsi
  unsigned int v12; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int8 v13; // [rsp+17h] [rbp-31h] BYREF
  _QWORD v14[6]; // [rsp+18h] [rbp-30h] BYREF

  v12 = a2;
  v13 = 1;
  sub_C9FC00((__int64 *)(a1 + 440), &v12, &v13);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v14[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C9FE10(a1 + 464, v14, a4);
  }
  v6 = *(_QWORD *)(a1 + 440);
  result = 0;
  v8 = *(_QWORD *)(a1 + 448) - v6;
  if ( v8 + 1 <= 0xFFFFFFFF )
  {
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v10 = v9 + 8;
    if ( v8 < v9 + 8 )
    {
      sub_C9FA60(a1 + 440, v10 - v8);
      *(_BYTE *)(*(_QWORD *)(a1 + 440) + v9) = *a3;
      return v13;
    }
    else
    {
      if ( v8 > v9 + 8 )
      {
        v11 = v6 + v10;
        if ( *(_QWORD *)(a1 + 448) != v11 )
          *(_QWORD *)(a1 + 448) = v11;
      }
      *(_BYTE *)(v6 + v9) = *a3;
      return v13;
    }
  }
  return result;
}

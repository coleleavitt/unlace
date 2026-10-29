__int64 __fastcall sub_C80030(__int64 a1, unsigned int a2, unsigned int *a3, __int64 *a4)
{
  unsigned int v7; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int8 v8; // [rsp+17h] [rbp-31h] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v7 = a2;
  v8 = 1;
  sub_C7BEC0((__int64 *)(a1 + 440), &v7, &v8);
  if ( (*a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v9[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C7C0D0(a1 + 464, v9, a4);
  }
  sub_C7BE40((__int64 *)(a1 + 440), a3, &v8);
  return v8;
}


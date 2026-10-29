__int64 __fastcall sub_CAB260(__int64 a1, __int64 *a2)
{
  unsigned __int8 v3; // [rsp+3h] [rbp-25h] BYREF
  unsigned int v4; // [rsp+4h] [rbp-24h] BYREF
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = 1;
  v4 = 357;
  sub_C9FC00((__int64 *)(a1 + 440), &v4, &v3);
  if ( (*a2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v5[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C9FE10(a1 + 464, v5, a2);
  }
  return v3;
}

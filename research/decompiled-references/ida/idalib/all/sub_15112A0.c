__int64 __fastcall sub_15112A0(__int64 a1, __m128i a2)
{
  __int64 v2; // rbp
  unsigned int v4; // [rsp+4h] [rbp-64h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v6; // [rsp+Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v8; // [rsp+18h] [rbp-50h]
  _BYTE v9[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = 0;
  ptr = v9;
  v6 = 0;
  v8 = 0x600000000LL;
  if ( !(unsigned __int8)sub_1510F60(a1, &v4, &v5, &v6, (__int64)&ptr, 1, a2) )
    v2 = sub_1B1E5F0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), ptr, (unsigned int)v8, v4, v5, v6);
  if ( ptr != v9 )
    free(ptr);
  return v2;
}

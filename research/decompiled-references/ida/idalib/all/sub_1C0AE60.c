__int64 __fastcall sub_1C0AE60(__m128 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-50h]
  unsigned int v9; // [rsp+10h] [rbp-48h] BYREF
  char v10; // [rsp+14h] [rbp-44h]

  v10 &= ~1u;
  v9 = 0;
  result = sub_1C0A810(a1, a2, a3, a4, a5, &v9, a6, a7);
  if ( v9 > 1 )
  {
    v8 = result;
    sub_A4F8E0((int *)&v9);
    return v8;
  }
  return result;
}

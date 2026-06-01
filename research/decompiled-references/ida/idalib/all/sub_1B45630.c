unsigned __int64 __fastcall sub_1B45630(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __m128 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 result; // rax

  v7 = sub_1B44F60(a1, a2, a3, a4, a5);
  result = 0;
  if ( v7 )
  {
    sub_B94AD0(*(__m128i **)(*a1 + 544), v7, v5, v6, v8, v9);
    return v7;
  }
  return result;
}

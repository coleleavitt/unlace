__int64 __fastcall sub_153D810(__int64 a1, void *a2, unsigned int a3, __m128i a4, __m128 a5)
{
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-100h]
  void *ptr[2]; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v9[232]; // [rsp+20h] [rbp-E8h] BYREF

  ptr[0] = v9;
  ptr[1] = (void *)0x1800000000LL;
  do
    result = sub_153BAF0(a1, (__int64 (__fastcall ***)())ptr, a3, a2, a4, a5);
  while ( result != 1 && (result & 0xFFFFFFFFFFFFFFFELL) == 0 );
  if ( ptr[0] != v9 )
  {
    v7 = result;
    free(ptr[0]);
    return v7;
  }
  return result;
}

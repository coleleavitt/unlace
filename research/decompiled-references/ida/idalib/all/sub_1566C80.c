__int64 __fastcall sub_1566C80(const __m128i *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+0h] [rbp-48h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-38h]
  __int128 v6; // [rsp+20h] [rbp-28h]

  v4 = 0;
  *(_OWORD *)ptr = 0;
  v6 = 0;
  v2 = sub_14D0170(a1, (__int64)&v4, 0, 0, a2, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0);
  if ( !(_BYTE)v2 && ((_DWORD)v4 && DWORD1(v4) || *((_QWORD *)&v4 + 1)) )
    sub_15655A0(a1, (__int64 *)&v4, 1);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  return v2;
}

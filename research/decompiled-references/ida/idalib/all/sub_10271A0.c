__int64 __fastcall sub_10271A0(_QWORD *a1, __int64 *a2, unsigned int a3, int a4, int a5, unsigned int a6, __m128i a7)
{
  unsigned int v11; // ebx
  __int64 v13[8]; // [rsp+8h] [rbp-40h] BYREF

  sub_2230390((unsigned int)v13, 1, a3, a4, a5, a6, *a2, a2[1], a2[2], a2[3]);
  v11 = sub_10270C0(a1, v13, a3, a4, a5, a6, a7);
  if ( v13[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 8LL))(v13[0]);
  return v11;
}

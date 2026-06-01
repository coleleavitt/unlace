unsigned __int64 __fastcall sub_6DDAF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __m128i v4[4]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v5; // [rsp+48h] [rbp-50h]

  v2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v2 + 16) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      return a2;
    v2 = sub_B0D320(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v2 )
      return a2;
  }
  sub_6B29F0((__int64)v4, v2);
  v5 = 0;
  return sub_6DB070(a1, *(_QWORD *)(v2 + 24), v2 + 48, (unsigned __int16)(*(_DWORD *)(v2 + 20) >> 6), v4, 0);
}


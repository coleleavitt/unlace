bool __fastcall sub_107BA20(_BYTE *a1, __int64 *a2)
{
  __int64 v3; // rsi
  bool (__fastcall *v4)(__int64, __int64, __int64); // rax
  __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( !sub_9B4AA0((__int64)a2, "v3") || !sub_9B4AA0((__int64)a2, "v4") )
    a1[509] = 1;
  v3 = *a2;
  v4 = *(bool (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 480LL);
  if ( v4 != sub_107B8D0 )
    return v4((__int64)a1, v3, a2[1]);
  v6[1] = a2[1];
  v6[0] = v3;
  return sub_107B830(v6) != (__m128i *)&off_2B5A340;
}

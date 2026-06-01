__int64 __fastcall sub_105E450(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 (*v4)(); // rcx
  _BYTE v6[72]; // [rsp-30h] [rbp-48h] BYREF

  v3 = *a2;
  v4 = *(__int64 (**)())(*(_QWORD *)a1 + 480LL);
  if ( v4 != sub_105E050 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))v4)(a1, v3, a2[1]);
  sub_2298CF0(v6);
  return v6[48];
}

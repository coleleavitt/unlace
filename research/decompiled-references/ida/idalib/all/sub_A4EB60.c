__int64 __fastcall sub_A4EB60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v7; // [rsp+Fh] [rbp-2E9h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-2E8h] BYREF
  __int64 v9[91]; // [rsp+20h] [rbp-2D8h] BYREF

  sub_22786C0(v9, a1, a2, 0, a4, a5);
  sub_227A310(v9);
  sub_2276E10(v9);
  if ( (unsigned __int8)sub_2279A60(v9, "Name", 1, 0, &v7, v8) )
  {
    sub_A42090(v9, a3);
    sub_2276CF0(v9, v8[0]);
  }
  LODWORD(v8[0]) = 0;
  sub_A40BF0((__int64)v9, (_DWORD *)(a3 + 16), v8);
  v8[0] = &byte_22F0C30;
  v8[1] = 0;
  sub_A43150(v9, (__int64)"AvailabilityMsg", a3 + 24, (__int64)v8, 0);
  BYTE1(v8[0]) = 0;
  sub_A43000(v9, (__int64)"SwiftInferImportAsMember", a3 + 256, v8, 0);
  sub_A4CC70(v9, a3 + 40);
  if ( !(unsigned __int8)sub_2276CE0(v9) || *(_QWORD *)(a3 + 240) != *(_QWORD *)(a3 + 232) )
  {
    if ( (unsigned __int8)sub_2279A60(v9, "SwiftVersions", 0, 0, &v7, v8) )
    {
      sub_A4E350(v9, (const __m128i **)(a3 + 232));
      sub_2276CF0(v9, v8[0]);
    }
  }
  sub_2279510(v9);
  LOBYTE(a3) = (unsigned int)sub_2276CD0(v9) != 0;
  sub_2277780(v9);
  return (unsigned int)a3;
}

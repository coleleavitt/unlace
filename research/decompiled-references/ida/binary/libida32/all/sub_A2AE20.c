__int64 __fastcall sub_A2AE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v7; // [rsp+Fh] [rbp-2E9h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-2E8h] BYREF
  __int64 v9[91]; // [rsp+20h] [rbp-2D8h] BYREF

  sub_2254980(v9, a1, a2, 0, a4, a5);
  sub_22565D0(v9);
  sub_22530D0(v9);
  if ( (unsigned __int8)sub_2255D20(v9, "Name", 1, 0, &v7, v8) )
  {
    sub_A1E350(v9, a3);
    sub_2252FB0(v9, v8[0]);
  }
  LODWORD(v8[0]) = 0;
  sub_A1CEB0((__int64)v9, (_DWORD *)(a3 + 16), v8);
  v8[0] = &byte_22CD811;
  v8[1] = 0;
  sub_A1F410(v9, (__int64)"AvailabilityMsg", a3 + 24, (__int64)v8, 0);
  BYTE1(v8[0]) = 0;
  sub_A1F2C0(v9, (__int64)"SwiftInferImportAsMember", a3 + 256, v8, 0);
  sub_A28F30(v9, a3 + 40);
  if ( !(unsigned __int8)sub_2252FA0(v9) || *(_QWORD *)(a3 + 240) != *(_QWORD *)(a3 + 232) )
  {
    if ( (unsigned __int8)sub_2255D20(v9, "SwiftVersions", 0, 0, &v7, v8) )
    {
      sub_A2A610(v9, (__int64 *)(a3 + 232));
      sub_2252FB0(v9, v8[0]);
    }
  }
  sub_22557D0(v9);
  LOBYTE(a3) = (unsigned int)sub_2252F90(v9) != 0;
  sub_2253A40(v9);
  return (unsigned int)a3;
}


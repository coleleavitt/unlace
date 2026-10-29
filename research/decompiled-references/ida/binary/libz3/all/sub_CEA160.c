__int64 __fastcall sub_CEA160(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  _QWORD v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = sub_186B270(0x10u);
  *(_DWORD *)(v1 + 8) = 0;
  v2 = v1;
  *(_QWORD *)v1 = off_1C59AE8;
  v4[0] = 0;
  sub_1859610(v4, "split_largest_clause", 0);
  sub_18572D0(v4);
  *(_BYTE *)(v2 + 12) = *(_BYTE *)(a1 + 12);
  return v2;
}


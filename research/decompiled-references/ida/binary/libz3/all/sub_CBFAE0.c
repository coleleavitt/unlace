__int64 __fastcall sub_CBFAE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  sub_1863170(a1 + 24, a2);
  v2 = *(_QWORD *)(a1 + 16);
  sub_14B5FE0(v2 + 168, a1 + 24);
  *(_BYTE *)(v2 + 186) = sub_1859610(a1 + 24, "lia2pb_partial", 0);
  *(_DWORD *)(v2 + 188) = sub_1859960(a1 + 24, "lia2pb_max_bits", 32);
  result = sub_1859960(a1 + 24, "lia2pb_total_bits", 2048);
  *(_DWORD *)(v2 + 192) = result;
  return result;
}


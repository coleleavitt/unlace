__int64 __fastcall sub_C88BC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  sub_14B5FE0(v2 + 152, a2);
  result = sub_1859610(a2, "norm_int_only", 1);
  *(_BYTE *)(v2 + 168) = result;
  return result;
}


__int64 __fastcall sub_40BE70(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a1 + 192);
  result = sub_40BD00(a1, a2);
  *(_QWORD *)(a1 + 168) = v2;
  return result;
}


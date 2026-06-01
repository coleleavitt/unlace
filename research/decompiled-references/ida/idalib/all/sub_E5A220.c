__int64 __fastcall sub_E5A220(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  unsigned int v3; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (unsigned int)sub_F6CE20(a1);
  v3 = sub_F6CCB0(a1);
  return sub_E5A130(v1, (v2 << 32) | v3);
}

__int64 __fastcall sub_B13220(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  size_t v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  sub_995540(a2, "__attribute__((guarded_by");
  sub_995540(a2, "(");
  sub_995540(a2, &byte_22F0C30);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = j__strlen("\n");
  sub_F07C00(v4, a2, 0, a3, 0, 0, (__int64)"\n", v5);
  sub_995540(a2, &byte_22F0C30);
  sub_995540(a2, ")");
  return sub_995540(a2, "))");
}

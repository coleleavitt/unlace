__int64 __fastcall sub_73B790(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  void *v6[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "[[hlsl::contained_type");
  sub_5FF0F0(a2, "(");
  v2 = sub_5FF0F0(a2, &byte_3B9466E);
  v5 = **(_QWORD **)(a1 + 40);
  sub_B2ACF0(v6, &v5);
  v3 = sub_26240F0(v2, v6[0], v6[1]);
  sub_5FF0F0(v3, &byte_3B9466E);
  if ( v6[0] != &v7 )
    operator delete(v6[0], v7 + 1);
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "]]");
}


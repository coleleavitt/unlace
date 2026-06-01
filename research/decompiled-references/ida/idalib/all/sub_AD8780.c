void __fastcall sub_AD8780(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = a1 + 8;
  v3 = sub_ACAA10(v2);
  if ( v6 )
    sub_AD7F60(v2, &byte_22F0C30, v3, v4, a2);
  else
    sub_AD7230(v2, &byte_22F0C30, v3, v4, v5);
}

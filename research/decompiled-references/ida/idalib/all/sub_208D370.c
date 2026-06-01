void __fastcall sub_208D370(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  sub_204C7C0(a2, 0);
  if ( (*(_BYTE *)(a2 + 7) & 0x10) != 0 && a1 != 72 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 )
    {
      v3 = sub_20CBB10(a2);
      sub_20CDE20(v2, v3, v4, v5, v6, v7);
    }
  }
}

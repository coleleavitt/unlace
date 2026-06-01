__int64 __fastcall sub_73E5F0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // rax
  const char *v6; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 == 1 || v3 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::iboutletcollection");
    if ( *(_QWORD *)(a1 + 40) )
    {
      sub_5FF0F0(a2, "(");
      v4 = sub_5FF0F0(a2, &byte_3B9466E);
      v10 = **(_QWORD **)(a1 + 40);
      sub_B2ACF0(&v11, &v10);
      v5 = sub_26240F0(v4, v11, v12);
      sub_5FF0F0(v5, &byte_3B9466E);
      std::string::_M_dispose();
      sub_5FF0F0(a2, ")");
    }
    v6 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((iboutletcollection");
    if ( *(_QWORD *)(a1 + 40) )
    {
      sub_5FF0F0(a2, "(");
      v8 = sub_5FF0F0(a2, &byte_3B9466E);
      v10 = **(_QWORD **)(a1 + 40);
      sub_B2ACF0(&v11, &v10);
      v9 = sub_26240F0(v8, v11, v12);
      sub_5FF0F0(v9, &byte_3B9466E);
      std::string::_M_dispose();
      sub_5FF0F0(a2, ")");
    }
    v6 = "))";
  }
  return sub_5FF0F0(a2, v6);
}


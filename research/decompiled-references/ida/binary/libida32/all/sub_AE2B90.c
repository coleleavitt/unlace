__int64 __fastcall sub_AE2B90(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // al
  int v5; // eax
  size_t v6; // rax
  __int64 v7; // rbp
  size_t v8; // rax
  size_t v10; // rax
  __int64 v11; // rbp
  size_t v12; // rax
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+8h] [rbp-50h]
  _BYTE v15[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v15[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_F83A90(a1);
  else
    v5 = v4 >> 4;
  if ( v5 )
  {
    sub_971800(a2, "[[clang::amdgpu_flat_work_group_size");
    sub_AD7BA0(a2, v15);
    sub_971800(a2, &byte_22CD811);
    v14 = *(_QWORD *)(a1 + 40);
    v10 = j__strlen("\n");
    sub_EE3EC0(v14, a2, 0, a3, 0, 0, (__int64)"\n", v10);
    sub_971800(a2, &byte_22CD811);
    sub_AD7BA0(a2, v15);
    sub_971800(a2, &byte_22CD811);
    v11 = *(_QWORD *)(a1 + 48);
    v12 = j__strlen("\n");
    sub_EE3EC0(v11, a2, 0, a3, 0, 0, (__int64)"\n", v12);
    sub_971800(a2, &byte_22CD811);
    if ( !v15[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((amdgpu_flat_work_group_size");
    sub_AD7BA0(a2, v15);
    sub_971800(a2, &byte_22CD811);
    v13 = *(_QWORD *)(a1 + 40);
    v6 = j__strlen("\n");
    sub_EE3EC0(v13, a2, 0, a3, 0, 0, (__int64)"\n", v6);
    sub_971800(a2, &byte_22CD811);
    sub_AD7BA0(a2, v15);
    sub_971800(a2, &byte_22CD811);
    v7 = *(_QWORD *)(a1 + 48);
    v8 = j__strlen("\n");
    sub_EE3EC0(v7, a2, 0, a3, 0, 0, (__int64)"\n", v8);
    sub_971800(a2, &byte_22CD811);
    if ( !v15[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}


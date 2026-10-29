__int64 __fastcall sub_AE2E30(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // al
  int v5; // eax
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // rbp
  size_t v9; // rax
  size_t v11; // rax
  size_t v12; // rax
  __int64 v13; // rbp
  size_t v14; // rax
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+8h] [rbp-50h]
  _BYTE v19[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v19[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_F83A90(a1);
  else
    v5 = v4 >> 4;
  if ( v5 )
  {
    sub_971800(a2, "[[clang::amdgpu_max_num_work_groups");
    sub_AD7BA0(a2, v19);
    sub_971800(a2, &byte_22CD811);
    v17 = *(_QWORD *)(a1 + 40);
    v11 = j__strlen("\n");
    sub_EE3EC0(v17, a2, 0, a3, 0, 0, (__int64)"\n", v11);
    sub_971800(a2, &byte_22CD811);
    if ( *(_QWORD *)(a1 + 48) )
    {
      sub_AD7BA0(a2, v19);
      sub_971800(a2, &byte_22CD811);
      v18 = *(_QWORD *)(a1 + 48);
      v12 = j__strlen("\n");
      sub_EE3EC0(v18, a2, 0, a3, 0, 0, (__int64)"\n", v12);
      sub_971800(a2, &byte_22CD811);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      sub_AD7BA0(a2, v19);
      sub_971800(a2, &byte_22CD811);
      v13 = *(_QWORD *)(a1 + 56);
      v14 = j__strlen("\n");
      sub_EE3EC0(v13, a2, 0, a3, 0, 0, (__int64)"\n", v14);
      sub_971800(a2, &byte_22CD811);
    }
    if ( !v19[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((amdgpu_max_num_work_groups");
    sub_AD7BA0(a2, v19);
    sub_971800(a2, &byte_22CD811);
    v15 = *(_QWORD *)(a1 + 40);
    v6 = j__strlen("\n");
    sub_EE3EC0(v15, a2, 0, a3, 0, 0, (__int64)"\n", v6);
    sub_971800(a2, &byte_22CD811);
    if ( *(_QWORD *)(a1 + 48) )
    {
      sub_AD7BA0(a2, v19);
      sub_971800(a2, &byte_22CD811);
      v16 = *(_QWORD *)(a1 + 48);
      v7 = j__strlen("\n");
      sub_EE3EC0(v16, a2, 0, a3, 0, 0, (__int64)"\n", v7);
      sub_971800(a2, &byte_22CD811);
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      sub_AD7BA0(a2, v19);
      sub_971800(a2, &byte_22CD811);
      v8 = *(_QWORD *)(a1 + 56);
      v9 = j__strlen("\n");
      sub_EE3EC0(v8, a2, 0, a3, 0, 0, (__int64)"\n", v9);
      sub_971800(a2, &byte_22CD811);
    }
    if ( !v19[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}


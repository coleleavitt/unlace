__int64 __fastcall sub_AEED30(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // al
  int v5; // eax
  __int64 v6; // r12
  size_t v7; // rax
  __int64 v9; // r12
  size_t v10; // rax
  _BYTE v11[41]; // [rsp+Fh] [rbp-29h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v11[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_F83A90(a1);
  else
    v5 = v4 >> 4;
  if ( v5 )
  {
    sub_971800(a2, "[[clang::ext_vector_type");
    sub_AD7BA0(a2, v11);
    sub_971800(a2, &byte_22CD811);
    v9 = *(_QWORD *)(a1 + 40);
    v10 = j__strlen("\n");
    sub_EE3EC0(v9, a2, 0, a3, 0, 0, (__int64)"\n", v10);
    sub_971800(a2, &byte_22CD811);
    if ( !v11[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((ext_vector_type");
    sub_AD7BA0(a2, v11);
    sub_971800(a2, &byte_22CD811);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = j__strlen("\n");
    sub_EE3EC0(v6, a2, 0, a3, 0, 0, (__int64)"\n", v7);
    sub_971800(a2, &byte_22CD811);
    if ( !v11[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}


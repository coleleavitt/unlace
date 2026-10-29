__int64 __fastcall sub_AF7A00(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // rbp
  size_t v8; // rax
  __int64 v10; // [rsp+8h] [rbp-50h]
  __int64 v11; // [rsp+8h] [rbp-50h]
  _BYTE v12[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v12[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "__attribute__((work_group_size_hint");
  sub_AD7BA0(a2, v12);
  sub_971800(a2, &byte_22CD811);
  v10 = *(_QWORD *)(a1 + 40);
  v5 = j__strlen("\n");
  sub_EE3EC0(v10, a2, 0, a3, 0, 0, (__int64)"\n", v5);
  sub_971800(a2, &byte_22CD811);
  sub_AD7BA0(a2, v12);
  sub_971800(a2, &byte_22CD811);
  v11 = *(_QWORD *)(a1 + 48);
  v6 = j__strlen("\n");
  sub_EE3EC0(v11, a2, 0, a3, 0, 0, (__int64)"\n", v6);
  sub_971800(a2, &byte_22CD811);
  sub_AD7BA0(a2, v12);
  sub_971800(a2, &byte_22CD811);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = j__strlen("\n");
  sub_EE3EC0(v7, a2, 0, a3, 0, 0, (__int64)"\n", v8);
  sub_971800(a2, &byte_22CD811);
  if ( !v12[0] )
    sub_971800(a2, ")");
  return sub_971800(a2, "))");
}


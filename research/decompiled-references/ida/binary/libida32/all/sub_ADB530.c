__int64 __fastcall sub_ADB530(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  const char *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v11[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  switch ( v4 )
  {
    case 0:
    case 1:
      v5 = "[[riscv::vls_cc";
      goto LABEL_5;
    case 2:
      sub_971800(a2, "__attribute__((riscv_vls_cc");
      sub_AD7BA0(a2, v11);
      v9 = sub_971800(a2, &byte_22CD811);
      v10 = sub_2257BD0(v9, *(unsigned int *)(a1 + 40));
      sub_971800(v10, &byte_22CD811);
      if ( !v11[0] )
        sub_971800(a2, ")");
      result = sub_971800(a2, "))");
      break;
    case 3:
    case 4:
      v5 = "[[clang::riscv_vls_cc";
LABEL_5:
      sub_971800(a2, v5);
      sub_AD7BA0(a2, v11);
      v6 = sub_971800(a2, &byte_22CD811);
      v7 = sub_2257BD0(v6, *(unsigned int *)(a1 + 40));
      sub_971800(v7, &byte_22CD811);
      if ( !v11[0] )
        sub_971800(a2, ")");
      result = sub_971800(a2, "]]");
      break;
  }
  return result;
}


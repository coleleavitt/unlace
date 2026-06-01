__int64 __fastcall sub_ADC060(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v10[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v10[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "__ptrauth");
  sub_AD7BA0(a2, v10);
  v3 = sub_971800(a2, &byte_22CD811);
  v4 = sub_2257BF0(v3, *(int *)(a1 + 40));
  sub_971800(v4, &byte_22CD811);
  sub_AD7BA0(a2, v10);
  v5 = sub_971800(a2, &byte_22CD811);
  v6 = sub_2257BF0(v5, *(unsigned __int8 *)(a1 + 44));
  sub_971800(v6, &byte_22CD811);
  sub_AD7BA0(a2, v10);
  v7 = sub_971800(a2, &byte_22CD811);
  v8 = sub_2257BF0(v7, *(int *)(a1 + 48));
  sub_971800(v8, &byte_22CD811);
  if ( !v10[0] )
    sub_971800(a2, ")");
  return sub_971800(a2, &byte_22CD811);
}


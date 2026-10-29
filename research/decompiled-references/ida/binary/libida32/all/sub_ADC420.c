__int64 __fastcall sub_ADC420(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v17[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_971800(a2, "[[gnu::patchable_function_entry");
    sub_AD7BA0(a2, v17);
    v11 = sub_971800(a2, &byte_22CD811);
    v12 = sub_2257BD0(v11, *(unsigned int *)(a1 + 40));
    sub_971800(v12, &byte_22CD811);
    sub_AD7BA0(a2, v17);
    v13 = sub_971800(a2, &byte_22CD811);
    v14 = sub_2257BF0(v13, *(int *)(a1 + 44));
    sub_971800(v14, &byte_22CD811);
    sub_AD7BA0(a2, v17);
    v15 = sub_971800(a2, "\"");
    v16 = sub_9717A0(v15, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
    sub_971800(v16, "\"");
    if ( !v17[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((patchable_function_entry");
    sub_AD7BA0(a2, v17);
    v4 = sub_971800(a2, &byte_22CD811);
    v5 = sub_2257BD0(v4, *(unsigned int *)(a1 + 40));
    sub_971800(v5, &byte_22CD811);
    sub_AD7BA0(a2, v17);
    v6 = sub_971800(a2, &byte_22CD811);
    v7 = sub_2257BF0(v6, *(int *)(a1 + 44));
    sub_971800(v7, &byte_22CD811);
    sub_AD7BA0(a2, v17);
    v8 = sub_971800(a2, "\"");
    v9 = sub_9717A0(v8, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
    sub_971800(v9, "\"");
    if ( !v17[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}


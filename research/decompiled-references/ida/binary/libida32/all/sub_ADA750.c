__int64 __fastcall sub_ADA750(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v13[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_971800(a2, "[[gnu::sentinel");
    sub_AD7BA0(a2, v13);
    v9 = sub_971800(a2, &byte_22CD811);
    v10 = sub_2257BF0(v9, *(int *)(a1 + 40));
    sub_971800(v10, &byte_22CD811);
    sub_AD7BA0(a2, v13);
    v11 = sub_971800(a2, &byte_22CD811);
    v12 = sub_2257BF0(v11, *(int *)(a1 + 44));
    sub_971800(v12, &byte_22CD811);
    if ( !v13[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((sentinel");
    sub_AD7BA0(a2, v13);
    v4 = sub_971800(a2, &byte_22CD811);
    v5 = sub_2257BF0(v4, *(int *)(a1 + 40));
    sub_971800(v5, &byte_22CD811);
    sub_AD7BA0(a2, v13);
    v6 = sub_971800(a2, &byte_22CD811);
    v7 = sub_2257BF0(v6, *(int *)(a1 + 44));
    sub_971800(v7, &byte_22CD811);
    if ( !v13[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}


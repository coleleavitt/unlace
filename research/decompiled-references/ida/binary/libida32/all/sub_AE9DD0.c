__int64 __fastcall sub_AE9DD0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // r13
  _BYTE v13[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v13[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  if ( v3 == 1 )
  {
    sub_971800(a2, "[[clang::cpu_dispatch");
    sub_971800(a2, &byte_22CD811);
    v11 = *(_QWORD *)(a1 + 48);
    v12 = v11 + 8LL * *(unsigned int *)(a1 + 40);
    while ( v12 != v11 )
    {
      v11 += 8;
      sub_AD7BA0(a2, v13);
      sub_2257C70(a2, *(_QWORD *)(v11 - 8));
    }
    goto LABEL_8;
  }
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      sub_971800(a2, "[[clang::cpu_dispatch");
      sub_971800(a2, &byte_22CD811);
      v4 = *(_QWORD *)(a1 + 48);
      v5 = v4 + 8LL * *(unsigned int *)(a1 + 40);
      while ( v5 != v4 )
      {
        v4 += 8;
        sub_AD7BA0(a2, v13);
        sub_2257C70(a2, *(_QWORD *)(v4 - 8));
      }
LABEL_8:
      sub_971800(a2, &byte_22CD811);
      if ( !v13[0] )
        sub_971800(a2, ")");
      return sub_971800(a2, "]]");
    }
    sub_971800(a2, "__declspec(cpu_dispatch");
    sub_971800(a2, &byte_22CD811);
    v7 = *(_QWORD *)(a1 + 48);
    v8 = v7 + 8LL * *(unsigned int *)(a1 + 40);
    while ( v8 != v7 )
    {
      v7 += 8;
      sub_AD7BA0(a2, v13);
      sub_2257C70(a2, *(_QWORD *)(v7 - 8));
    }
    sub_971800(a2, &byte_22CD811);
    if ( !v13[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, ")");
  }
  else
  {
    sub_971800(a2, "__attribute__((cpu_dispatch");
    sub_971800(a2, &byte_22CD811);
    v9 = *(_QWORD *)(a1 + 48);
    v10 = v9 + 8LL * *(unsigned int *)(a1 + 40);
    while ( v10 != v9 )
    {
      v9 += 8;
      sub_AD7BA0(a2, v13);
      sub_2257C70(a2, *(_QWORD *)(v9 - 8));
    }
    sub_971800(a2, &byte_22CD811);
    if ( !v13[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}


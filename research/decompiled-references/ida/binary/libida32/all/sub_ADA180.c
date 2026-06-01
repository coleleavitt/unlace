__int64 __fastcall sub_ADA180(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v21[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v21[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  if ( v3 == 1 )
  {
    sub_971800(a2, "__attribute__((suppress");
    sub_971800(a2, &byte_22CD811);
    v17 = *(_QWORD *)(a1 + 48);
    v18 = v17 + 16LL * *(unsigned int *)(a1 + 40);
    while ( v18 != v17 )
    {
      v17 += 16;
      sub_AD7BA0(a2, v21);
      v19 = sub_971800(a2, "\"");
      v20 = sub_9717A0(v19, *(const void **)(v17 - 16), *(_QWORD *)(v17 - 8));
      sub_971800(v20, "\"");
    }
    sub_971800(a2, &byte_22CD811);
    if ( !v21[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
  else
  {
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        sub_971800(a2, "[[clang::suppress");
        sub_971800(a2, &byte_22CD811);
        v4 = *(_QWORD *)(a1 + 48);
        v5 = v4 + 16LL * *(unsigned int *)(a1 + 40);
        while ( v5 != v4 )
        {
          v4 += 16;
          sub_AD7BA0(a2, v21);
          v6 = sub_971800(a2, "\"");
          v7 = sub_9717A0(v6, *(const void **)(v4 - 16), *(_QWORD *)(v4 - 8));
          sub_971800(v7, "\"");
        }
      }
      else
      {
        sub_971800(a2, "[[clang::suppress");
        sub_971800(a2, &byte_22CD811);
        v9 = *(_QWORD *)(a1 + 48);
        v10 = v9 + 16LL * *(unsigned int *)(a1 + 40);
        while ( v10 != v9 )
        {
          v9 += 16;
          sub_AD7BA0(a2, v21);
          v11 = sub_971800(a2, "\"");
          v12 = sub_9717A0(v11, *(const void **)(v9 - 16), *(_QWORD *)(v9 - 8));
          sub_971800(v12, "\"");
        }
      }
    }
    else
    {
      sub_971800(a2, "[[gsl::suppress");
      sub_971800(a2, &byte_22CD811);
      v13 = *(_QWORD *)(a1 + 48);
      v14 = v13 + 16LL * *(unsigned int *)(a1 + 40);
      while ( v14 != v13 )
      {
        v13 += 16;
        sub_AD7BA0(a2, v21);
        v15 = sub_971800(a2, "\"");
        v16 = sub_9717A0(v15, *(const void **)(v13 - 16), *(_QWORD *)(v13 - 8));
        sub_971800(v16, "\"");
      }
    }
    sub_971800(a2, &byte_22CD811);
    if ( !v21[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
}


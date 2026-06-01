__int64 __fastcall sub_AF4BF0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // al
  int v5; // eax
  __int64 v6; // r15
  size_t v7; // rax
  __int64 v9; // r15
  size_t v10; // rax
  __int64 v11; // r15
  size_t v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[57]; // [rsp+Fh] [rbp-39h] BYREF

  v4 = *(_BYTE *)(a1 + 34);
  v19[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_F83A90(a1);
  else
    v5 = v4 >> 4;
  if ( v5 == 1 )
  {
    sub_971800(a2, "__attribute__((malloc");
    if ( *(_QWORD *)(a1 + 40) )
    {
      sub_AD7BA0(a2, v19);
      sub_971800(a2, &byte_22CD811);
      v11 = *(_QWORD *)(a1 + 40);
      v12 = j__strlen("\n");
      sub_EE3EC0(v11, a2, 0, a3, 0, 0, (__int64)"\n", v12);
      sub_971800(a2, &byte_22CD811);
    }
    if ( *(char *)(a1 + 51) < 0 )
    {
      sub_AD7BA0(a2, v19);
      v15 = sub_971800(a2, &byte_22CD811);
      v16 = sub_2257BD0(v15, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
      sub_971800(v16, &byte_22CD811);
    }
    if ( !v19[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
  else if ( v5 )
  {
    sub_971800(a2, "[[gnu::malloc");
    if ( *(_QWORD *)(a1 + 40) )
    {
      sub_AD7BA0(a2, v19);
      sub_971800(a2, &byte_22CD811);
      v6 = *(_QWORD *)(a1 + 40);
      v7 = j__strlen("\n");
      sub_EE3EC0(v6, a2, 0, a3, 0, 0, (__int64)"\n", v7);
      sub_971800(a2, &byte_22CD811);
    }
    if ( *(char *)(a1 + 51) < 0 )
    {
      sub_AD7BA0(a2, v19);
      v17 = sub_971800(a2, &byte_22CD811);
      v18 = sub_2257BD0(v17, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
      sub_971800(v18, &byte_22CD811);
    }
    if ( !v19[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__declspec(restrict");
    if ( *(_QWORD *)(a1 + 40) )
    {
      sub_AD7BA0(a2, v19);
      sub_971800(a2, &byte_22CD811);
      v9 = *(_QWORD *)(a1 + 40);
      v10 = j__strlen("\n");
      sub_EE3EC0(v9, a2, 0, a3, 0, 0, (__int64)"\n", v10);
      sub_971800(a2, &byte_22CD811);
    }
    if ( *(char *)(a1 + 51) < 0 )
    {
      sub_AD7BA0(a2, v19);
      v13 = sub_971800(a2, &byte_22CD811);
      v14 = sub_2257BD0(v13, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
      sub_971800(v14, &byte_22CD811);
    }
    if ( !v19[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, ")");
  }
}


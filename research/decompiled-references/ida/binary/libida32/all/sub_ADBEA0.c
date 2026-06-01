__int64 __fastcall sub_ADBEA0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  char v9; // [rsp+7h] [rbp-41h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  void *v11; // [rsp+10h] [rbp-38h] BYREF
  __int64 v12; // [rsp+18h] [rbp-30h]
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v9 = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_971800(a2, "[[clang::preferred_name");
    sub_AD7BA0(a2, &v9);
    v7 = sub_971800(a2, &byte_22CD811);
    v10 = **(_QWORD **)(a1 + 40);
    sub_F546C0(&v11, &v10);
    v8 = sub_22581D0(v7, v11, v12);
    sub_971800(v8, &byte_22CD811);
    if ( v11 != v13 )
      operator delete(v11);
    if ( !v9 )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((preferred_name");
    sub_AD7BA0(a2, &v9);
    v4 = sub_971800(a2, &byte_22CD811);
    v10 = **(_QWORD **)(a1 + 40);
    sub_F546C0(&v11, &v10);
    v5 = sub_22581D0(v4, v11, v12);
    sub_971800(v5, &byte_22CD811);
    if ( v11 != v13 )
      operator delete(v11);
    if ( !v9 )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}


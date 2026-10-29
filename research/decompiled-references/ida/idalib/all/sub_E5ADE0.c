__int64 __fastcall sub_E5ADE0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rbx
  size_t v4; // rax
  __int64 result; // rax
  const char *v6; // rsi
  size_t v7; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v9; // [rsp+10h] [rbp-48h] BYREF
  char v10; // [rsp+18h] [rbp-40h]

  v2 = 0;
  v3 = a1 + 1048;
  if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    v2 = (((unsigned __int8)(*(_BYTE *)(a2 + 17) & 0x1F) >> 2) ^ 1) & 1;
  v10 = v2;
  v9 = 1;
  v4 = j__strlen("undeduced");
  sub_222AB70(v3, "undeduced", v4);
  sub_222CAC0(v3, &v9);
  sub_2229BF0(v3);
  sub_222B2A0(&v9);
  result = (*(_BYTE *)(a2 + 18) >> 3) & 3;
  if ( (_BYTE)result == 1 )
  {
    v6 = "decltype(auto)";
  }
  else if ( (_BYTE)result )
  {
    if ( (_BYTE)result != 2 )
      return result;
    v6 = "__auto_type";
  }
  else
  {
    v6 = "auto";
  }
  sub_E598C0((__int64)&v9, v6);
  v7 = j__strlen("typeKeyword");
  v8[0] = &v9;
  v8[1] = a1 + 1048;
  sub_E585D0(v3, (__int64)"typeKeyword", v7, (__int64)sub_E58580, v8);
  return sub_222B2A0(&v9);
}

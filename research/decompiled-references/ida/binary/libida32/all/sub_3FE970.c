unsigned __int64 __fastcall sub_3FE970(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v11; // rsi
  unsigned int v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+4h] [rbp-34h]
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v12 = a2;
  v13 = a3;
  if ( a4 )
  {
    v6 = sub_3FE900(a1 + 1704, &v12);
    if ( v6 != a1 + 1768 )
      sub_3FA6E0(a1 + 1704, v6, 26);
    v12 = a3;
    v7 = a1 + 1808;
    v13 = a2;
    v8 = 28;
  }
  else
  {
    v11 = sub_3FE900(a1 + 1912, &v12);
    if ( v11 != a1 + 1976 )
      sub_3FA6E0(a1 + 1912, v11, 30);
    v13 = a2;
    v7 = a1 + 2016;
    v8 = 32;
    v12 = a3;
  }
  v9 = sub_3FE900(v7, &v12);
  if ( v9 == v7 + 64 )
    return v14 - __readfsqword(0x28u);
  else
    return sub_3FA6E0(v7, v9, v8);
}


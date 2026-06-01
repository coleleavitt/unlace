char *__fastcall sub_56B9F0(__int64 a1, char *a2, double a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  char v8; // di
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  char *result; // rax
  int v12; // eax
  __int64 v13; // r8
  char *v14; // [rsp+8h] [rbp-40h] BYREF
  char v15; // [rsp+17h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v14 = a2;
  v8 = *a2;
  v16 = __readfsqword(0x28u);
  v9 = v8 & 0xF;
  if ( (v8 & 0xFu) <= 9 )
  {
    if ( sub_565B80(v8, a2) != -1 )
      return v14 + 1;
    return nullptr;
  }
  if ( v9 == 12 )
    return (char *)sub_56B780(a1, (__int64)a2, a3, a4);
  if ( v9 > 0xCu )
  {
    if ( v9 != 13 )
      return nullptr;
    v14 = a2 + 1;
    if ( (v8 & 0x30) != 0x30 )
    {
      v15 = 0;
      v12 = sub_6B38E0(&v14, &v15);
      if ( v12 )
      {
        if ( v12 == -1 )
          return nullptr;
        goto LABEL_10;
      }
      if ( v15 )
      {
LABEL_10:
        if ( (v8 & 0x30) == 0x20 )
          return nullptr;
        v14 = a2;
        if ( sub_56AD90(a1, (__int64 *)&v14, nullptr, nullptr, v13, a3, a4) == -1 )
          return nullptr;
        return v14;
      }
    }
    if ( !(unsigned __int8)sub_567540(0, &v14) )
      return nullptr;
    return v14;
  }
  v10 = sub_56AD90(a1, (__int64 *)&v14, nullptr, nullptr, a7, a3, a4);
  result = v14;
  if ( v10 == -1 )
    return nullptr;
  return result;
}

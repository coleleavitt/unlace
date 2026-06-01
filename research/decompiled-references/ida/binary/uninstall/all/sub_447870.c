const char *__fastcall sub_447870(__int64 a1, __int64 a2, __int64 a3, char *a4, __int16 a5)
{
  char v5; // bl
  const char *v8; // rdx
  __int64 v9; // rax
  char *v11; // rax
  __int64 v12[28]; // [rsp+0h] [rbp-108h] BYREF

  v5 = a5;
  if ( (a5 & 0x800) != 0 )
  {
    sub_447180(a2);
    return nullptr;
  }
  v8 = nullptr;
  if ( a4 )
  {
    if ( (a5 & 0x20) != 0 )
    {
      v11 = (char *)sub_4A59D0(a2, "env", a4, 1);
      sub_447540(a4, v11);
    }
    if ( (v5 & 0x10) == 0 )
      goto LABEL_8;
    v9 = sub_447310((__int64)a4, v12);
    v8 = "no such variable";
    if ( v9 )
    {
      sub_4A42F0(a2, a3, a4, v9, 0);
      sub_49F100(v12);
LABEL_8:
      if ( (v5 & 0x40) != 0 )
        sub_4474D0((__int64)a4);
      return nullptr;
    }
  }
  return v8;
}


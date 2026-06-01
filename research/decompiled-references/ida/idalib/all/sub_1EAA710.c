_QWORD *__fastcall sub_1EAA710(_QWORD *a1, unsigned __int64 a2)
{
  char *v3; // rdi
  unsigned __int64 v5; // rsi
  _BYTE *i; // rdi
  char v7; // [rsp+14h] [rbp-14h] BYREF
  _BYTE v8[19]; // [rsp+15h] [rbp-13h] BYREF

  if ( (a2 & 0x8000000000000000LL) != 0LL )
  {
    v5 = -(__int64)a2;
    for ( i = v8; ; --i )
    {
      *(i - 1) = v5 % 0xA + 48;
      if ( v5 <= 9 )
        break;
      v5 /= 0xAu;
    }
    *(i - 2) = 45;
    *a1 = a1 + 2;
    sub_1EA9CC0(a1, i - 2, (__int64)v8);
    return a1;
  }
  else
  {
    if ( a2 )
    {
      v3 = v8;
      while ( 1 )
      {
        *--v3 = a2 % 0xA + 48;
        if ( a2 <= 9 )
          break;
        a2 /= 0xAu;
      }
    }
    else
    {
      v7 = 48;
      v3 = &v7;
    }
    *a1 = a1 + 2;
    sub_1EA9CC0(a1, v3, (__int64)v8);
    return a1;
  }
}

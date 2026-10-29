__int64 __fastcall sub_449F80(__int64 a1, double a2)
{
  int v2; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  int v8; // r9d
  const char *v9; // rcx
  char *v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  int v16; // r9d

  v2 = *__errno_location();
  if ( v2 == 33 || isnan(a2) )
  {
    v7 = sub_48DF10("domain error: argument not in valid range", 0xFFFFFFFF);
    sub_48AFD0(a1, v7);
    v9 = "domain error: argument not in valid range";
    v10 = "DOMAIN";
    return sub_48BC40(a1, (unsigned int)"ARITH", (_DWORD)v10, (_DWORD)v9, 0, v8);
  }
  if ( v2 == 34 || a2 > 1.797693134862316e308 || a2 < -1.797693134862316e308 )
  {
    if ( a2 == 0.0 )
    {
      v12 = sub_48DF10("floating-point value too small to represent", 0xFFFFFFFF);
      sub_48AFD0(a1, v12);
      v9 = "floating-point value too small to represent";
      v10 = "UNDERFLOW";
    }
    else
    {
      v13 = sub_48DF10("floating-point value too large to represent", 0xFFFFFFFF);
      sub_48AFD0(a1, v13);
      v9 = "floating-point value too large to represent";
      v10 = "OVERFLOW";
    }
    return sub_48BC40(a1, (unsigned int)"ARITH", (_DWORD)v10, (_DWORD)v9, 0, v8);
  }
  v14 = sub_48F930((unsigned int)"unknown floating-point error, errno = %d", v2, v3, v4, v5, v6);
  v15 = sub_47B3B0(v14);
  sub_48BC40(a1, (unsigned int)"ARITH", (unsigned int)"UNKNOWN", v15, 0, v16);
  return sub_48AFD0(a1, v14);
}


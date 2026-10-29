char __fastcall sub_B58650(__int64 a1)
{
  char result; // al
  char *v2; // rbp
  _DWORD *v3; // r12
  __int64 v4; // rax

  result = sub_B4F880(a1);
  if ( result )
  {
    v2 = (char *)sub_B58190(a1);
    if ( *v2 >= 0 )
    {
      v3 = (_DWORD *)sub_B4F900(a1);
      v4 = sub_B685F0(a1);
      result = sub_BDD420(v3, v4, 1);
      if ( result
        && (*v3 & 0x20000) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      {
        result = sub_B583D0(a1) == 0;
      }
      *v2 = ((result & 1) << 6) | *v2 & 0xBF | 0x80;
    }
    else
    {
      return (*v2 & 0x40) != 0;
    }
  }
  return result;
}


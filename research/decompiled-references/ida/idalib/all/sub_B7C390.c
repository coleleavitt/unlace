char __fastcall sub_B7C390(__int64 a1)
{
  char result; // al
  char *v2; // rbp
  _DWORD *v3; // r12
  __int64 v4; // rax

  result = sub_B735C0(a1);
  if ( result )
  {
    v2 = (char *)sub_B7BED0(a1);
    if ( *v2 >= 0 )
    {
      v3 = (_DWORD *)sub_B73640(a1);
      v4 = sub_B8C330(a1);
      result = sub_C01160(v3, v4, 1);
      if ( result
        && (*v3 & 0x20000) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      {
        result = sub_B7C110(a1) == 0;
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

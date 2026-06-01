char *__fastcall sub_21DC5A0(__int64 a1)
{
  char v1; // al
  char *result; // rax
  char *v3; // [rsp+8h] [rbp-10h] BYREF

  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    return (char *)sub_21D7440(a1);
  v1 = **(_BYTE **)a1;
  if ( v1 == 84 )
  {
    result = sub_21D5230(a1);
    v3 = result;
    if ( !result )
      return result;
    goto LABEL_7;
  }
  if ( v1 != 68 )
    return (char *)sub_21D7440(a1);
  result = sub_21DC350(a1);
  v3 = result;
  if ( result )
  {
LABEL_7:
    sub_20D8690((char **)(a1 + 296), (__int64 *)&v3);
    return v3;
  }
  return result;
}

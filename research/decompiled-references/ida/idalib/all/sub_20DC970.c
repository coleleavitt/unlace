__int64 __fastcall sub_20DC970(__int64 a1)
{
  char v1; // al
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    return sub_20D8880(a1);
  v1 = **(_BYTE **)a1;
  if ( v1 == 84 )
  {
    result = sub_20D1430(a1);
    v3 = result;
    if ( !result )
      return result;
    goto LABEL_7;
  }
  if ( v1 != 68 )
    return sub_20D8880(a1);
  result = sub_20DC890((_QWORD *)a1);
  v3 = result;
  if ( result )
  {
LABEL_7:
    sub_20D8690((char **)(a1 + 296), &v3);
    return v3;
  }
  return result;
}

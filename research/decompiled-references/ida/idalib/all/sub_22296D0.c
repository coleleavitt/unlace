__int64 __fastcall sub_22296D0(unsigned __int8 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 *v3; // rsi
  char *v4; // rax
  __int64 result; // rax
  unsigned __int8 *v7; // [rsp+0h] [rbp-20h] BYREF

  v3 = &a1[a2];
  if ( v3 == a1 )
    return 1;
  if ( (*a1 & 0x80u) == 0 )
  {
    v4 = (char *)a1;
    while ( v3 != (unsigned __int8 *)++v4 )
    {
      if ( *v4 < 0 )
        goto LABEL_6;
    }
    return 1;
  }
LABEL_6:
  v7 = a1;
  if ( (unsigned __int8)sub_22189B0(&v7, v3) )
    return 1;
  result = 0;
  if ( a3 )
    *a3 = v7 - a1;
  return result;
}

__int64 __fastcall sub_FFC290(__int64 a1, int a2)
{
  __int64 result; // rax
  _BYTE v3[9]; // [rsp+Fh] [rbp-9h] BYREF

  v3[0] = 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    return 0;
  if ( a2 >= 0 )
  {
    result = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)a2;
    goto LABEL_4;
  }
  result = sub_FFBCE0(a1, (unsigned int)(-2 - a2), v3);
  if ( v3[0] )
    return 0;
LABEL_4:
  if ( result )
  {
    if ( *(char *)(result + 3) < 0 )
      return 0;
  }
  return result;
}


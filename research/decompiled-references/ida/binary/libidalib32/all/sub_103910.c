__int64 __fastcall sub_103910(__int64 a1, int *a2, const char *a3)
{
  int v4; // eax
  __int64 result; // rax

  v4 = sub_CFE50(a3);
  if ( v4 != -1 || !*a3 )
    goto LABEL_2;
  result = str2ea();
  if ( (_BYTE)result )
  {
    v4 = -1;
LABEL_2:
    *a2 = v4;
    return 1;
  }
  return result;
}


__int64 __fastcall sub_13E950(__int64 a1, int *a2, __int64 a3)
{
  const char *v3; // rbp
  int v4; // eax
  __int64 result; // rax

  if ( !*(_QWORD *)(a3 + 8) )
  {
    v4 = sub_CFE50(s1);
LABEL_3:
    *a2 = v4;
    return 1;
  }
  v3 = *(const char **)a3;
  v4 = sub_CFE50(*(const char **)a3);
  if ( v4 != -1 || !*v3 )
    goto LABEL_3;
  result = str2ea();
  if ( (_BYTE)result )
  {
    v4 = -1;
    goto LABEL_3;
  }
  return result;
}


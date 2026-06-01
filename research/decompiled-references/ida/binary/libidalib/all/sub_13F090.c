__int64 __fastcall sub_13F090(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *v3; // rbp
  __int64 v4; // rax
  __int64 result; // rax

  if ( !*(_QWORD *)(a3 + 8) )
  {
    v4 = sub_D1420(s1);
LABEL_3:
    *a2 = v4;
    return 1;
  }
  v3 = *(const char **)a3;
  v4 = sub_D1420(*(const char **)a3);
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


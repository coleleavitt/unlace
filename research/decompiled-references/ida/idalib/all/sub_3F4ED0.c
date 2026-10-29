__int64 __fastcall sub_3F4ED0(_QWORD *a1, __int64 a2, char a3, const char *a4, unsigned int *a5, __int64 a6, char **a7)
{
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( a3 != 72 )
    return 0;
  if ( a2 == a1[18] )
    goto LABEL_7;
  if ( a2 != a1[19] )
    return 0;
  if ( strcmp(a4, "TracingFile") && strcmp(a4, "TracingCondition") )
  {
    if ( a6 == 4 )
    {
      v12 = *a5;
      v13 = a1[3];
      v15[0] = a2;
      v14 = v12;
      sub_7BF4E0(v15, v13, a4, &v14, 8, 72);
      return 1;
    }
    sub_35A790(a7);
    return 0;
  }
LABEL_7:
  v15[0] = a2;
  sub_7BF4E0(v15, a1[3], a4, a5, a6, 72);
  return 1;
}

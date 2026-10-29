__int64 __fastcall sub_694CA0(_QWORD *a1, __int64 a2, int a3, char *a4, const char *a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  int i; // r14d
  int j; // r12d
  char *v13; // rax
  int v14; // r15d
  _QWORD v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  v8 = sub_3BDD60(a1, a2);
  v9 = v8;
  if ( !a4 || !*a4 )
  {
    v15[0] = v8;
    for ( i = a3; (unsigned __int8)sub_7BE850(v15, *a1, i, 83); i += 2 )
      ;
    v15[0] = v9;
    for ( j = a3 + 1; (unsigned __int8)sub_7BE850(v15, *a1, j, 83); j += 2 )
      ;
    return 1;
  }
  v13 = resolve_typedef(a1[1], a4);
  if ( v13 && (*v13 & 0x3F) == 1 )
    return 0;
  if ( (unsigned __int8)sub_694BB0(a1, v9, a3, a4) )
  {
    v14 = a3 + 1;
    if ( (unsigned __int8)sub_694BB0(a1, v9, a3 + 1, a5) )
      return 1;
    v15[0] = v9;
    while ( (unsigned __int8)sub_7BE850(v15, *a1, a3, 83) )
      a3 += 2;
    v15[0] = v9;
    while ( (unsigned __int8)sub_7BE850(v15, *a1, v14, 83) )
      v14 += 2;
    return 0;
  }
  v15[0] = v9;
  while ( (unsigned __int8)sub_7BE850(v15, *a1, a3, 83) )
    a3 += 2;
  return 0;
}

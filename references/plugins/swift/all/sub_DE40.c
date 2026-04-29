__int64 __fastcall sub_DE40(_DWORD *a1, int a2, unsigned int a3, __int64 a4, char a5, char a6)
{
  const char *v7; // rcx
  char v8; // r14
  const char *v10; // r8
  const char *v13; // rdx
  unsigned int v14; // esi
  const char *v15; // rdx
  const char *v17; // [rsp+0h] [rbp-48h]
  const char *v18; // [rsp+8h] [rbp-40h]

  v7 = "expected ";
  v8 = a6;
  v10 = "";
  if ( !a5 )
  {
    v7 = "";
    v10 = " in the value-witness table";
  }
  if ( a2 == -1 )
  {
    if ( a3 == -1 )
      return 1;
    v14 = a1[1];
    if ( a6 )
    {
      if ( a3 == v14 )
        return 1;
      goto LABEL_10;
    }
    goto LABEL_25;
  }
  if ( *a1 == a2 )
  {
    if ( a3 == -1 )
      return 1;
    v14 = a1[1];
    if ( a6 )
    {
      if ( v14 == a3 )
        return 1;
      goto LABEL_10;
    }
LABEL_25:
    v8 = 1;
    if ( a3 >= v14 )
      return 1;
    goto LABEL_10;
  }
  v13 = s1;
  if ( *(_QWORD *)(a4 + 8) )
    v13 = *(const char **)a4;
  v18 = v10;
  v17 = v7;
  sub_CB10((__int64)"bad size %u of the '%s' structure (the %ssize%s is %d)\n", *a1, v13, v7, v10, a2);
  v7 = v17;
  v10 = v18;
  if ( a3 == -1 )
    goto LABEL_14;
  v14 = a1[1];
  if ( !a6 )
  {
    if ( a3 < v14 )
      goto LABEL_10;
LABEL_14:
    a1[17] = 8;
    return 0;
  }
  v8 = 0;
  if ( v14 == a3 )
    goto LABEL_14;
LABEL_10:
  v15 = s1;
  if ( *(_QWORD *)(a4 + 8) )
    v15 = *(const char **)a4;
  sub_CB10((__int64)"bad alignment %u of the '%s' structure (the %salignment%s is %d)\n", v14, v15, v7, v10, a3);
  if ( a5 )
    goto LABEL_14;
  a1[1] = a3;
  if ( !v8 )
    goto LABEL_14;
  return 1;
}

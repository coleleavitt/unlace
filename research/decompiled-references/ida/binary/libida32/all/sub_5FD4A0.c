__int64 __fastcall sub_5FD4A0(__int64 a1, int a2, const char *a3)
{
  const char *v3; // r15
  __int64 v4; // rbx
  size_t i; // r14
  const char *v6; // r13
  char v7; // al
  const char *v9; // rdx
  char v10; // al

  v3 = a3;
  if ( *a3 == 95 || *a3 == 46 )
    v3 = a3 + 1;
  v4 = 0;
  for ( i = 4; ; i = strlen((const char *)*(&off_2B08840 + v4)) )
  {
    v6 = (const char *)*(&off_2B08840 + v4);
    if ( !strncmp(v3, v6, i) )
    {
      v7 = v3[i];
      if ( (v7 & 0xBF) == 0 )
        goto LABEL_6;
      if ( v7 == 95 )
        break;
    }
LABEL_10:
    v4 += 2;
    if ( v4 == 8 )
      return 0;
  }
  v9 = &v3[i + 1];
  v10 = *v9;
  if ( *v9 )
  {
    while ( (unsigned __int8)(v10 - 48) <= 9u )
    {
      v10 = *++v9;
      if ( !v10 )
        goto LABEL_6;
    }
    goto LABEL_10;
  }
LABEL_6:
  if ( (unsigned int)get_named_type(*(_QWORD *)(a1 + 8), (int)v6, 8, 0, 0, 0, 0, 0, 0) )
    return 0;
  return sub_5FD400(*(_QWORD *)(a1 + 8), a2, (__int64)*(&off_2B08840 + (int)v4 + 1));
}


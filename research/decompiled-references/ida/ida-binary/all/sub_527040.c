__int64 __fastcall sub_527040(__int64 a1, const char *a2, __int64 a3, char a4, __int64 a5)
{
  char *v8; // rax
  __int64 v9; // rax
  const char *v10; // rsi

  qstrncpy(a2, a5, a3);
  v8 = strchr(a2, 95);
  if ( !v8 )
    return 0;
  v9 = v8 - a2 + 1;
  v10 = "weight";
  if ( a4 )
    v10 = "italic";
  qstrncpy(&a2[v9], v10, a3 - v9);
  return 1;
}

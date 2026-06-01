_BOOL8 __fastcall sub_D70600(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  bool v5; // al
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  bool v9; // si
  __int64 v10; // r8

  if ( a1 >= 0 )
  {
    v3 = a2;
    if ( a2 >= 0 )
    {
      v4 = a2 * a1;
      v5 = v3 == 0 || a1 == 0;
      goto LABEL_4;
    }
    v3 = -a2;
    v8 = -a2 * a1;
    v9 = a1 == 0;
LABEL_8:
    *a3 = -v8;
    v6 = 0x8000000000000000LL;
    if ( !v9 )
      return v6 / v3 < a1;
    return 0;
  }
  v3 = a2;
  v10 = -a1;
  if ( a2 >= 0 )
  {
    a1 = -a1;
    v8 = v10 * a2;
    v9 = a2 == 0;
    goto LABEL_8;
  }
  v4 = a1 * a2;
  v3 = -(__int64)v3;
  a1 = -a1;
  v5 = v10 == 0;
LABEL_4:
  *a3 = v4;
  if ( !v5 )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    return v6 / v3 < a1;
  }
  return 0;
}

_WORD **__fastcall sub_16C3C70(__int64 a1, __int64 a2)
{
  _WORD **result; // rax
  __int64 v3; // rdx
  _WORD **v5; // rbx
  _WORD *v6; // rsi
  _WORD **vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]

  result = (_WORD **)(a2 + 24);
  v3 = 0;
  v5 = (_WORD **)(a2 + 64);
  vars0 = (_WORD **)(a2 + 24);
  vars8 = 0;
LABEL_2:
  if ( v5 == result )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v3 & 3) != 0 )
      {
        v6 = *(_WORD **)sub_EF2B30((__int64)&vars0);
        if ( !v6 )
          goto LABEL_6;
      }
      else
      {
        v6 = *result;
        if ( !*result )
          goto LABEL_12;
      }
      if ( ((*v6 + 509) & 0x1FFu) <= 0x7E && *(_WORD **)(a2 + 24) != v6 )
        sub_16C1900(a1, (unsigned __int64)v6);
LABEL_6:
      v3 = vars8;
      if ( (vars8 & 3) == 0 )
      {
        result = vars0;
LABEL_12:
        vars0 = ++result;
        goto LABEL_2;
      }
      if ( (vars8 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&vars0, 1);
        result = vars0;
        v3 = vars8;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&vars0);
      result = vars0;
      v3 = vars8;
    }
    while ( v5 != vars0 );
LABEL_9:
    ;
  }
  while ( v3 );
  return result;
}

__int64 __fastcall sub_8BA980(__int64 **a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  bool v10; // cf
  __int64 v11; // rsi
  __int64 *v13; // rsi
  __int64 *v14; // rcx
  __int64 *v15; // rax

  if ( a3 )
  {
    if ( a3 >> 62 )
      return 4;
    v6 = a1[3];
    v7 = 4 * a3;
    v8 = v7;
    if ( !v6 )
    {
      v9 = **a1;
      goto LABEL_5;
    }
LABEL_12:
    v13 = a1[2];
    v14 = &v13[3 * (_QWORD)v6];
    v15 = v14 - 3;
    if ( v13 == v14 )
      v15 = a1[11];
    v9 = v15[2] + 4 * (v15[1] - *v15);
LABEL_5:
    if ( v8 <= 0 )
    {
      v11 = v7 + v9;
    }
    else
    {
      v10 = __CFADD__(v7, v9);
      v11 = v7 + v9;
      if ( v10 )
        return 4;
    }
    goto LABEL_7;
  }
  v6 = a1[3];
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    goto LABEL_12;
  }
  v11 = **a1;
LABEL_7:
  if ( !(unsigned int)sub_8B9D60((__int64)a1, v11) )
  {
    sub_8B99A0((__int64)a1, a2, a1[11], a3, a3);
    return 0;
  }
  return 4;
}

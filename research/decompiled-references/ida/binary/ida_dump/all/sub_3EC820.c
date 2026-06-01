__int64 __fastcall sub_3EC820(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 *v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // rax

  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v3 = (__int64 *)a1[1];
    v4 = *v3;
    if ( (*v3 & 2) != 0 )
    {
      v7 = a1[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_15:
        result |= 2uLL;
        *a1 = result;
LABEL_16:
        if ( a1 )
          return qfree();
        return result;
      }
      goto LABEL_9;
    }
    v5 = (__int64 *)v3[1];
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v6 = (__int64 *)v3[2];
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
LABEL_26:
        *v3 = v4 | 2;
LABEL_6:
        if ( v3 )
          qfree();
        v7 = a1[2];
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
LABEL_14:
          result = *a1;
          if ( (*a1 & 2) != 0 )
            goto LABEL_16;
          goto LABEL_15;
        }
LABEL_9:
        v8 = *(__int64 **)(v7 + 8);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
          v9 = *(__int64 **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
          {
            v10 = *(_QWORD *)v7;
LABEL_28:
            *(_QWORD *)v7 = v10 | 2;
LABEL_12:
            if ( v7 )
              qfree();
            goto LABEL_14;
          }
        }
        else
        {
          sub_3EC730(v8);
          v9 = *(__int64 **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
            goto LABEL_11;
        }
        sub_3EC730(v9);
LABEL_11:
        v10 = *(_QWORD *)v7;
        if ( (*(_QWORD *)v7 & 2) != 0 )
          goto LABEL_12;
        goto LABEL_28;
      }
    }
    else
    {
      sub_3EC730(v5);
      v6 = (__int64 *)v3[2];
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_5;
    }
    sub_3EC730(v6);
LABEL_5:
    v4 = *v3;
    if ( (*v3 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_26;
  }
  return result;
}

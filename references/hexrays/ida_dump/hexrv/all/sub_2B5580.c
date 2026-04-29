__int64 __fastcall sub_2B5580(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v1 = a1[1];
    if ( (*(_BYTE *)v1 & 2) != 0 )
    {
      v6 = a1[2];
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
LABEL_15:
        sub_2B4D80(a1 + 8);
        result = cleanup_argloc(a1 + 3);
        *a1 |= 2uLL;
LABEL_16:
        if ( a1 )
          return qfree(a1);
        return result;
      }
      goto LABEL_9;
    }
    v3 = *(_QWORD **)(v1 + 8);
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v5 = *(_QWORD **)(v1 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
LABEL_26:
        sub_2B4D80((_QWORD *)(v1 + 64));
        result = cleanup_argloc(v1 + 24);
        *(_QWORD *)v1 |= 2uLL;
LABEL_6:
        if ( v1 )
          result = qfree(v1);
        v6 = a1[2];
        if ( (*(_BYTE *)v6 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)a1 & 2) != 0 )
            goto LABEL_16;
          goto LABEL_15;
        }
LABEL_9:
        v7 = *(_QWORD **)(v6 + 8);
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
          v8 = *(_QWORD **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
          {
LABEL_27:
            sub_2B4D80((_QWORD *)(v6 + 64));
            result = cleanup_argloc(v6 + 24);
            *(_QWORD *)v6 |= 2uLL;
LABEL_12:
            if ( v6 )
              result = qfree(v6);
            goto LABEL_14;
          }
        }
        else
        {
          result = sub_2B5470(v7);
          v8 = *(_QWORD **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_11;
        }
        result = sub_2B5470(v8);
LABEL_11:
        if ( (*(_BYTE *)v6 & 2) != 0 )
          goto LABEL_12;
        goto LABEL_27;
      }
    }
    else
    {
      result = sub_2B5470(v3);
      v5 = *(_QWORD **)(v1 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        goto LABEL_5;
    }
    result = sub_2B5470(v5);
LABEL_5:
    if ( (*(_BYTE *)v1 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_26;
  }
  return result;
}

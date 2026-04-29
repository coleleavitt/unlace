__int64 __fastcall sub_174000(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v2 & 2) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
        v9 = *(_QWORD *)(a1 + 48);
        if ( !v9 )
          goto LABEL_17;
        goto LABEL_16;
      }
      goto LABEL_9;
    }
    v3 = *(_QWORD **)(v2 + 8);
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v5 = *(_QWORD **)(v2 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
LABEL_29:
        v10 = *(_QWORD *)(v2 + 48);
        if ( v10 )
        {
          *(_QWORD *)(v2 + 56) = 0;
          qfree(v10);
        }
        result = qfree(*(_QWORD *)(v2 + 32));
        *(_QWORD *)v2 |= 2uLL;
LABEL_6:
        if ( v2 )
          result = qfree(v2);
        v6 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)v6 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)a1 & 2) != 0 )
            goto LABEL_18;
          v9 = *(_QWORD *)(a1 + 48);
          if ( !v9 )
          {
LABEL_17:
            result = qfree(*(_QWORD *)(a1 + 32));
            *(_QWORD *)a1 |= 2uLL;
LABEL_18:
            if ( a1 )
              return qfree(a1);
            return result;
          }
LABEL_16:
          *(_QWORD *)(a1 + 56) = 0;
          qfree(v9);
          goto LABEL_17;
        }
LABEL_9:
        v7 = *(_QWORD **)(v6 + 8);
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
          v8 = *(_QWORD **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_32;
        }
        else
        {
          result = sub_173EC0(v7);
          v8 = *(_QWORD **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_11;
        }
        result = sub_173EC0(v8);
LABEL_11:
        if ( (*(_BYTE *)v6 & 2) != 0 )
        {
LABEL_12:
          if ( v6 )
            result = qfree(v6);
          goto LABEL_14;
        }
LABEL_32:
        v11 = *(_QWORD *)(v6 + 48);
        if ( v11 )
        {
          *(_QWORD *)(v6 + 56) = 0;
          qfree(v11);
        }
        result = qfree(*(_QWORD *)(v6 + 32));
        *(_QWORD *)v6 |= 2uLL;
        goto LABEL_12;
      }
    }
    else
    {
      result = sub_173EC0(v3);
      v5 = *(_QWORD **)(v2 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        goto LABEL_5;
    }
    result = sub_173EC0(v5);
LABEL_5:
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_29;
  }
  return result;
}

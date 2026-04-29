__int64 __fastcall sub_2A9D10(__int64 a1)
{
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // rdi
  __int64 *v8; // rdi
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
        v9 = *(_QWORD *)(a1 + 32);
        if ( !v9 )
          goto LABEL_17;
        goto LABEL_16;
      }
      goto LABEL_9;
    }
    v3 = *(__int64 **)(v2 + 8);
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v5 = *(__int64 **)(v2 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
LABEL_29:
        v10 = *(_QWORD *)(v2 + 32);
        if ( v10 )
        {
          *(_QWORD *)(v2 + 40) = 0;
          result = qfree(v10);
        }
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
          v9 = *(_QWORD *)(a1 + 32);
          if ( !v9 )
          {
LABEL_17:
            *(_QWORD *)a1 |= 2uLL;
LABEL_18:
            if ( a1 )
              return qfree(a1);
            return result;
          }
LABEL_16:
          *(_QWORD *)(a1 + 40) = 0;
          result = qfree(v9);
          goto LABEL_17;
        }
LABEL_9:
        v7 = *(__int64 **)(v6 + 8);
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
          v8 = *(__int64 **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_32;
        }
        else
        {
          result = sub_2A9BE0(v7);
          v8 = *(__int64 **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_11;
        }
        result = sub_2A9BE0(v8);
LABEL_11:
        if ( (*(_BYTE *)v6 & 2) != 0 )
        {
LABEL_12:
          if ( v6 )
            result = qfree(v6);
          goto LABEL_14;
        }
LABEL_32:
        v11 = *(_QWORD *)(v6 + 32);
        if ( v11 )
        {
          *(_QWORD *)(v6 + 40) = 0;
          result = qfree(v11);
        }
        *(_QWORD *)v6 |= 2uLL;
        goto LABEL_12;
      }
    }
    else
    {
      result = sub_2A9BE0(v3);
      v5 = *(__int64 **)(v2 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        goto LABEL_5;
    }
    result = sub_2A9BE0(v5);
LABEL_5:
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_29;
  }
  return result;
}

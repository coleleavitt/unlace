void __fastcall sub_3B08A0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v3 = a1[1];
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v6 = a1[2];
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
LABEL_15:
        sub_3ACAB0((__int64)(a1 + 4));
        *a1 |= 2uLL;
LABEL_16:
        if ( a1 )
          qfree();
        return;
      }
      goto LABEL_9;
    }
    v4 = *(_QWORD **)(v3 + 8);
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
      v5 = *(_QWORD **)(v3 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
LABEL_26:
        sub_3ACAB0(v3 + 32);
        *(_QWORD *)v3 |= 2uLL;
LABEL_6:
        if ( v3 )
          qfree();
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
            sub_3ACAB0(v6 + 32);
            *(_QWORD *)v6 |= 2uLL;
LABEL_12:
            if ( v6 )
              qfree();
            goto LABEL_14;
          }
        }
        else
        {
          sub_3B0790(v7, a2);
          v8 = *(_QWORD **)(v6 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_11;
        }
        sub_3B0790(v8, a2);
LABEL_11:
        if ( (*(_BYTE *)v6 & 2) != 0 )
          goto LABEL_12;
        goto LABEL_27;
      }
    }
    else
    {
      sub_3B0790(v4, a2);
      v5 = *(_QWORD **)(v3 + 16);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        goto LABEL_5;
    }
    sub_3B0790(v5, a2);
LABEL_5:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_26;
  }
}

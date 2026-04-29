void __fastcall sub_3ABC30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbp
  unsigned __int64 *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r12
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r13
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_8;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_26;
  }
  else
  {
    sub_3ABC30();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_5;
  }
  sub_3ABC30();
LABEL_5:
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_6;
LABEL_26:
  v7 = *(unsigned __int64 **)(v2 + 48);
  if ( v7 )
  {
    if ( !*(_QWORD *)(v2 + 56) )
    {
      sub_3ABBF0((unsigned __int64 *)(v2 + 48));
      goto LABEL_29;
    }
    v15 = *v7;
    v16 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
LABEL_54:
      sub_3ABBF0((unsigned __int64 *)(v2 + 48));
      *(_QWORD *)(v2 + 56) = 0;
LABEL_29:
      v8 = *(_QWORD *)(v2 + 48);
      if ( v8 )
        qfree(v8);
      goto LABEL_31;
    }
    v17 = *(_QWORD **)(v16 + 8);
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
      v18 = *(_QWORD **)(v16 + 16);
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
LABEL_66:
        sub_3A7BB0((__int64 *)(v16 + 32));
        *(_QWORD *)v16 |= 2uLL;
LABEL_52:
        if ( v15 > 3 )
          qfree(v16);
        goto LABEL_54;
      }
    }
    else
    {
      sub_3AB9A0(v17, a2);
      v18 = *(_QWORD **)(v16 + 16);
      if ( (*(_BYTE *)v18 & 2) != 0 )
        goto LABEL_51;
    }
    sub_3AB9A0(v18, a2);
LABEL_51:
    if ( (*(_BYTE *)v16 & 2) != 0 )
      goto LABEL_52;
    goto LABEL_66;
  }
LABEL_31:
  clear_tinfo_t(v2 + 32);
  *(_QWORD *)v2 |= 2uLL;
LABEL_6:
  if ( v2 )
    qfree(v2);
LABEL_8:
  v4 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)v4 & 2) != 0 )
    goto LABEL_15;
  if ( (**(_BYTE **)(v4 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v4 + 16) & 2) != 0 )
      goto LABEL_33;
  }
  else
  {
    sub_3ABC30();
    if ( (**(_BYTE **)(v4 + 16) & 2) != 0 )
      goto LABEL_12;
  }
  sub_3ABC30();
LABEL_12:
  if ( (*(_BYTE *)v4 & 2) != 0 )
    goto LABEL_13;
LABEL_33:
  v9 = *(unsigned __int64 **)(v4 + 48);
  if ( v9 )
  {
    if ( !*(_QWORD *)(v4 + 56) )
    {
      sub_3ABBF0((unsigned __int64 *)(v4 + 48));
      goto LABEL_36;
    }
    v19 = *v9;
    v20 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
LABEL_64:
      sub_3ABBF0((unsigned __int64 *)(v4 + 48));
      *(_QWORD *)(v4 + 56) = 0;
LABEL_36:
      v10 = *(_QWORD *)(v4 + 48);
      if ( v10 )
        qfree(v10);
      goto LABEL_38;
    }
    v21 = *(_QWORD **)(v20 + 8);
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = *(_QWORD **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
      {
LABEL_68:
        sub_3A7BB0((__int64 *)(v20 + 32));
        *(_QWORD *)v20 |= 2uLL;
LABEL_62:
        if ( v19 > 3 )
          qfree(v20);
        goto LABEL_64;
      }
    }
    else
    {
      sub_3AB9A0(v21, a2);
      v22 = *(_QWORD **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_61;
    }
    sub_3AB9A0(v22, a2);
LABEL_61:
    if ( (*(_BYTE *)v20 & 2) != 0 )
      goto LABEL_62;
    goto LABEL_68;
  }
LABEL_38:
  clear_tinfo_t(v4 + 32);
  *(_QWORD *)v4 |= 2uLL;
LABEL_13:
  if ( v4 )
    qfree(v4);
LABEL_15:
  if ( (*(_BYTE *)a1 & 2) != 0 )
    goto LABEL_22;
  v5 = *(unsigned __int64 **)(a1 + 48);
  if ( v5 )
  {
    if ( !*(_QWORD *)(a1 + 56) )
    {
      sub_3ABBF0((unsigned __int64 *)(a1 + 48));
      goto LABEL_19;
    }
    v11 = *v5;
    v12 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
LABEL_46:
      sub_3ABBF0((unsigned __int64 *)(a1 + 48));
      *(_QWORD *)(a1 + 56) = 0;
LABEL_19:
      v6 = *(_QWORD *)(a1 + 48);
      if ( v6 )
        qfree(v6);
      goto LABEL_21;
    }
    v13 = *(_QWORD **)(v12 + 8);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
LABEL_56:
        sub_3A7BB0((__int64 *)(v12 + 32));
        *(_QWORD *)v12 |= 2uLL;
LABEL_44:
        if ( v11 > 3 )
          qfree(v12);
        goto LABEL_46;
      }
    }
    else
    {
      sub_3AB9A0(v13, a2);
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_43;
    }
    sub_3AB9A0(v14, a2);
LABEL_43:
    if ( (*(_BYTE *)v12 & 2) != 0 )
      goto LABEL_44;
    goto LABEL_56;
  }
LABEL_21:
  clear_tinfo_t(a1 + 32);
  *(_QWORD *)a1 |= 2uLL;
LABEL_22:
  if ( a1 )
    qfree(a1);
}

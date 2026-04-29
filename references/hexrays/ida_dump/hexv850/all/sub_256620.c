_QWORD *__fastcall sub_256620(_QWORD *a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rax
  _QWORD *result; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 *v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 *v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 *v33; // rdx
  unsigned __int64 v34; // rcx
  _QWORD *v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 *v37; // rdx
  _QWORD *v38; // rdx

  v7 = (_QWORD *)*a1;
  v8 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( a2 == v8 )
    goto LABEL_69;
  v9 = *a2;
  while ( 1 )
  {
    if ( (v9 & 2) == 0 && (v9 & 1) != 0 )
      goto LABEL_5;
    v11 = *(_QWORD *)(a3 + 8);
    if ( (__int64 *)v11 != a2 )
    {
      v12 = *(_QWORD *)v11;
      if ( (*(_QWORD *)v11 & 2) != 0 )
        goto LABEL_11;
      if ( (v12 & 1) != 0 )
      {
        *(_QWORD *)v11 = v12 & 0xFFFFFFFFFFFFFFFELL;
        v13 = *(_QWORD *)(a3 + 8);
        v14 = *(_QWORD *)a3 | 1LL;
        *(_QWORD *)a3 = v14;
        if ( (*(_BYTE *)v13 & 2) != 0 )
          goto LABEL_44;
        v15 = *(unsigned __int64 **)(v13 + 16);
        *(_QWORD *)(a3 + 8) = v15;
        if ( (*v15 & 2) == 0 )
        {
          *v15 = *v15 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
          v14 = *(_QWORD *)a3;
        }
        *(_QWORD *)v13 = *(_QWORD *)v13 & 3LL | v14 & 0xFFFFFFFFFFFFFFFCLL;
        v16 = v13 & 0xFFFFFFFFFFFFFFFCLL;
        v17 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v17 == (_QWORD *)*a1 )
        {
          *v17 = v16 | *v17 & 3LL;
        }
        else if ( a3 == v17[2] )
        {
          v17[2] = v13;
        }
        else
        {
          v17[1] = v13;
        }
        *(_QWORD *)(v13 + 16) = a3;
        *(_QWORD *)a3 = v16 | *(_QWORD *)a3 & 3LL;
        v11 = *(_QWORD *)(a3 + 8);
        v12 = *(_QWORD *)v11;
        if ( (*(_QWORD *)v11 & 2) != 0 )
          goto LABEL_24;
      }
      v18 = *(unsigned __int64 **)(v11 + 16);
      v19 = *v18;
      a5 = *v18 & 2;
      if ( (**(_QWORD **)(v11 + 8) & 2) != 0 )
      {
        if ( !a5 && (v19 & 1) != 0 )
          goto LABEL_48;
        goto LABEL_23;
      }
      a2 = (__int64 *)(**(_QWORD **)(v11 + 8) & 1LL);
      if ( a5 )
      {
LABEL_35:
        if ( a2 )
          goto LABEL_36;
LABEL_23:
        *(_QWORD *)v11 = v12 | 1;
        goto LABEL_24;
      }
      while ( 1 )
      {
        if ( (v19 & 1) == 0 )
          goto LABEL_35;
        if ( a2 )
          break;
LABEL_48:
        v29 = v19 & 0xFFFFFFFFFFFFFFFELL;
        a2 = (__int64 *)v11;
        *v18 = v29;
        *(_QWORD *)v11 |= 1uLL;
        sub_2564A0(a1, v11, v12, v29, a5);
        v11 = *(_QWORD *)(a3 + 8);
        v26 = *(_QWORD *)v11;
        if ( (*(_QWORD *)v11 & 2) == 0 )
          goto LABEL_37;
LABEL_39:
        *(_QWORD *)a3 &= ~1uLL;
        v27 = *(_QWORD **)(v11 + 8);
        if ( (*v27 & 2) == 0 )
          *v27 &= ~1uLL;
        v28 = *(unsigned __int64 **)(a3 + 8);
        if ( (*(_BYTE *)v28 & 2) == 0 )
        {
          v33 = (unsigned __int64 *)v28[2];
          *(_QWORD *)(a3 + 8) = v33;
          if ( (*v33 & 2) == 0 )
            *v33 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v33 & 3;
          *v28 = *v28 & 3 | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
          v34 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFCLL;
          v35 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v35 == (_QWORD *)*a1 )
          {
            *v35 = v34 | *v35 & 3LL;
          }
          else if ( a3 == v35[2] )
          {
            v35[2] = v28;
          }
          else
          {
            v35[1] = v28;
          }
          v28[2] = a3;
          goto LABEL_68;
        }
        if ( under_debugger )
          goto LABEL_87;
        interr(3441, a2, v27, v19, a5);
LABEL_44:
        if ( under_debugger )
          goto LABEL_87;
        v18 = (_QWORD *)(&stru_D68 + 9);
        v11 = interr(3441, a2, v13, v7, a5);
      }
LABEL_36:
      v26 = *(_QWORD *)v11;
LABEL_37:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *(_QWORD *)v11 = v26 | 1;
      else
        *(_QWORD *)v11 = v26 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_39;
    }
    v20 = *(_QWORD *)(a3 + 16);
    v21 = *(_QWORD *)v20;
    if ( (*(_QWORD *)v20 & 2) == 0 )
      break;
LABEL_11:
    v9 = *(_QWORD *)a3;
    a2 = (__int64 *)a3;
    v8 = (__int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (__int64 *)a3 == v8 )
    {
      v8 = (__int64 *)a3;
      v36 = *(_QWORD *)a3 & 2LL;
      goto LABEL_70;
    }
    a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  }
  if ( (v21 & 1) != 0 )
  {
    *(_QWORD *)v20 = v21 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)a3 |= 1uLL;
    sub_2564A0(a1, a3, (__int64)v8, (__int64)v7, a5);
    v20 = *(_QWORD *)(a3 + 16);
    v21 = *(_QWORD *)v20;
    if ( (*(_QWORD *)v20 & 2) != 0 )
      goto LABEL_24;
  }
  v22 = *(unsigned __int64 **)(v20 + 8);
  v23 = **(_QWORD **)(v20 + 16);
  v24 = *v22;
  a5 = v23 & 2;
  if ( (*v22 & 2) != 0 )
  {
    if ( (v23 & 2) == 0 && (v23 & 1) != 0 )
      goto LABEL_31;
LABEL_61:
    *(_QWORD *)v20 = v21 | 1;
LABEL_24:
    v7 = (_QWORD *)*a1;
    goto LABEL_11;
  }
  if ( (v23 & 2) == 0 && (v23 & 1) != 0 )
  {
LABEL_31:
    v25 = *(_QWORD *)v20;
LABEL_32:
    if ( (*(_BYTE *)a3 & 1) != 0 )
      *(_QWORD *)v20 = v25 | 1;
    else
      *(_QWORD *)v20 = v25 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_56;
  }
  if ( (v24 & 1) == 0 )
    goto LABEL_61;
  v30 = v24 & 0xFFFFFFFFFFFFFFFELL;
  *v22 = v30;
  *(_QWORD *)v20 |= 1uLL;
  sub_256560(a1, v20, v30, (__int64)v22, a5);
  v20 = *(_QWORD *)(a3 + 16);
  v25 = *(_QWORD *)v20;
  if ( (*(_QWORD *)v20 & 2) == 0 )
    goto LABEL_32;
LABEL_56:
  *(_QWORD *)a3 &= ~1uLL;
  v31 = *(_QWORD **)(v20 + 16);
  if ( (*v31 & 2) == 0 )
    *v31 &= ~1uLL;
  v32 = *(_QWORD *)(a3 + 16);
  if ( (*(_BYTE *)v32 & 2) != 0 )
  {
    if ( under_debugger )
LABEL_87:
      BUG();
    v21 = interr(3440, v20, v31, v22, a5);
    goto LABEL_61;
  }
  v37 = *(unsigned __int64 **)(v32 + 8);
  *(_QWORD *)(a3 + 16) = v37;
  if ( (*v37 & 2) == 0 )
    *v37 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v37 & 3;
  *(_QWORD *)v32 = *(_QWORD *)v32 & 3LL | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  v34 = v32 & 0xFFFFFFFFFFFFFFFCLL;
  v38 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v38 == (_QWORD *)*a1 )
  {
    *v38 = v34 | *v38 & 3LL;
  }
  else if ( a3 == v38[1] )
  {
    v38[1] = v32;
  }
  else
  {
    v38[2] = v32;
  }
  *(_QWORD *)(v32 + 8) = a3;
LABEL_68:
  *(_QWORD *)a3 = v34 | *(_QWORD *)a3 & 3LL;
  v7 = (_QWORD *)*a1;
  v8 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_69:
  v9 = *v8;
  v36 = *v8 & 2;
LABEL_70:
  if ( !v36 )
  {
    a2 = v8;
LABEL_5:
    *a2 = v9 & 0xFFFFFFFFFFFFFFFELL;
    v7 = (_QWORD *)*a1;
  }
  result = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

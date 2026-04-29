_QWORD *__fastcall sub_33E000(_QWORD *a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
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
  unsigned __int64 *v22; // rdx
  __int64 v23; // rax
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned __int64 *v27; // rcx
  __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rdx
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 *v34; // rdx
  unsigned __int64 v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r9
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // rax
  unsigned __int64 *v43; // rdx
  unsigned __int64 v44; // rcx
  _QWORD *v45; // rdx

  v7 = (_QWORD *)*a1;
  v8 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( a2 == v8 )
    goto LABEL_62;
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
          goto LABEL_47;
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
        else if ( v17[2] == a3 )
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
          goto LABEL_51;
        goto LABEL_23;
      }
      a2 = (__int64 *)(**(_QWORD **)(v11 + 8) & 1LL);
      if ( a5 )
      {
LABEL_38:
        if ( a2 )
          goto LABEL_39;
LABEL_23:
        *(_QWORD *)v11 = v12 | 1;
        goto LABEL_24;
      }
      while ( 1 )
      {
        if ( (v19 & 1) == 0 )
          goto LABEL_38;
        if ( a2 )
          break;
LABEL_51:
        v33 = v19 & 0xFFFFFFFFFFFFFFFELL;
        a2 = (__int64 *)v11;
        *v18 = v33;
        *(_QWORD *)v11 |= 1uLL;
        sub_2CAEE0(a1, v11, v12, v33, a5);
        v11 = *(_QWORD *)(a3 + 8);
        v30 = *(_QWORD *)v11;
        if ( (*(_QWORD *)v11 & 2) == 0 )
          goto LABEL_40;
LABEL_42:
        *(_QWORD *)a3 &= ~1uLL;
        v31 = *(_QWORD **)(v11 + 8);
        if ( (*v31 & 2) == 0 )
          *v31 &= ~1uLL;
        v32 = *(unsigned __int64 **)(a3 + 8);
        if ( (*(_BYTE *)v32 & 2) == 0 )
        {
          v34 = (unsigned __int64 *)v32[2];
          *(_QWORD *)(a3 + 8) = v34;
          if ( (*v34 & 2) == 0 )
            *v34 = a3 & 0xFFFFFFFFFFFFFFFCLL | *v34 & 3;
          *v32 = *v32 & 3 | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
          v35 = (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFCLL;
          v36 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v36 == (_QWORD *)*a1 )
          {
            *v36 = v35 | *v36 & 3LL;
          }
          else if ( v36[2] == a3 )
          {
            v36[2] = v32;
          }
          else
          {
            v36[1] = v32;
          }
          v32[2] = a3;
          goto LABEL_61;
        }
        if ( under_debugger )
          goto LABEL_98;
        interr(3441, a2, v31, v19, a5);
LABEL_47:
        if ( under_debugger )
          goto LABEL_98;
        v18 = (_QWORD *)(&stru_D68 + 9);
        v11 = interr(3441, a2, v13, v7, a5);
      }
LABEL_39:
      v30 = *(_QWORD *)v11;
LABEL_40:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *(_QWORD *)v11 = v30 | 1;
      else
        *(_QWORD *)v11 = v30 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_42;
    }
    v20 = *(_QWORD *)(a3 + 16);
    v21 = *(_QWORD *)v20;
    if ( (*(_QWORD *)v20 & 2) == 0 )
      break;
LABEL_11:
    v9 = *(_QWORD *)a3;
    a2 = (__int64 *)a3;
    if ( a3 == (*v7 & 0xFFFFFFFFFFFFFFFCLL) )
    {
      v8 = (__int64 *)a3;
      v37 = *(_QWORD *)a3 & 2LL;
      goto LABEL_63;
    }
    a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  }
  if ( (v21 & 1) == 0 )
    goto LABEL_34;
  *(_QWORD *)v20 = v21 & 0xFFFFFFFFFFFFFFFELL;
  v22 = *(unsigned __int64 **)(a3 + 16);
  v23 = *(_QWORD *)a3 | 1LL;
  *(_QWORD *)a3 = v23;
  if ( (*(_BYTE *)v22 & 2) == 0 )
  {
    v24 = (unsigned __int64 *)v22[1];
    *(_QWORD *)(a3 + 16) = v24;
    if ( (*v24 & 2) == 0 )
    {
      *v24 = *v24 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = *(_QWORD *)a3;
    }
    *v22 = *v22 & 3 | v23 & 0xFFFFFFFFFFFFFFFCLL;
    v25 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFFCLL;
    v26 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( v26 == (_QWORD *)*a1 )
    {
      *v26 = v25 | *v26 & 3LL;
    }
    else if ( v26[1] == a3 )
    {
      v26[1] = v22;
    }
    else
    {
      v26[2] = v22;
    }
    v22[1] = a3;
    v20 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)a3 = v25 | *(_QWORD *)a3 & 3LL;
    v21 = *(_QWORD *)v20;
    if ( (*(_QWORD *)v20 & 2) == 0 )
    {
LABEL_34:
      v27 = *(unsigned __int64 **)(v20 + 8);
      v28 = **(_QWORD **)(v20 + 16);
      v29 = *v27;
      a5 = v28 & 2;
      if ( (*v27 & 2) != 0 )
      {
        if ( (v28 & 2) == 0 && (v28 & 1) != 0 )
        {
LABEL_75:
          v40 = *(_QWORD *)v20;
LABEL_76:
          if ( (*(_BYTE *)a3 & 1) != 0 )
            *(_QWORD *)v20 = v40 | 1;
          else
            *(_QWORD *)v20 = v40 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_69;
        }
      }
      else
      {
        v38 = *v27 & 1;
        if ( (v28 & 2) == 0 )
          goto LABEL_74;
        while ( v38 )
        {
          v39 = v29 & 0xFFFFFFFFFFFFFFFELL;
          *v27 = v39;
          *(_QWORD *)v20 |= 1uLL;
          sub_2CAFA0(a1, v20, v39, (__int64)v27, a5);
          v20 = *(_QWORD *)(a3 + 16);
          v40 = *(_QWORD *)v20;
          if ( (*(_QWORD *)v20 & 2) == 0 )
            goto LABEL_76;
LABEL_69:
          *(_QWORD *)a3 &= ~1uLL;
          v41 = *(_QWORD **)(v20 + 16);
          if ( (*v41 & 2) == 0 )
            *v41 &= ~1uLL;
          v42 = *(_QWORD *)(a3 + 16);
          if ( (*(_BYTE *)v42 & 2) == 0 )
          {
            v43 = *(unsigned __int64 **)(v42 + 8);
            *(_QWORD *)(a3 + 16) = v43;
            v44 = *v43;
            if ( (*v43 & 2) != 0 )
              goto LABEL_79;
            goto LABEL_86;
          }
          if ( under_debugger )
            goto LABEL_98;
          LOBYTE(v28) = 112;
          v21 = interr(3440, v20, v41, v27, a5);
LABEL_74:
          if ( (v28 & 1) != 0 )
            goto LABEL_75;
        }
      }
      *(_QWORD *)v20 = v21 | 1;
    }
LABEL_24:
    v7 = (_QWORD *)*a1;
    goto LABEL_11;
  }
  if ( under_debugger )
LABEL_98:
    BUG();
  v42 = interr(3440, v20, v22, v7, a5);
LABEL_86:
  *v43 = a3 & 0xFFFFFFFFFFFFFFFCLL | v44 & 3;
LABEL_79:
  *(_QWORD *)v42 = *(_QWORD *)v42 & 3LL | *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  v35 = v42 & 0xFFFFFFFFFFFFFFFCLL;
  v45 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v45 == (_QWORD *)*a1 )
  {
    *v45 = v35 | *v45 & 3LL;
  }
  else if ( v45[1] == a3 )
  {
    v45[1] = v42;
  }
  else
  {
    v45[2] = v42;
  }
  *(_QWORD *)(v42 + 8) = a3;
LABEL_61:
  *(_QWORD *)a3 = v35 | *(_QWORD *)a3 & 3LL;
  v7 = (_QWORD *)*a1;
  v8 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_62:
  v9 = *v8;
  v37 = *v8 & 2;
LABEL_63:
  if ( !v37 )
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

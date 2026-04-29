_QWORD *__fastcall sub_259540(_QWORD *a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rdi
  __int64 *v7; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *result; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 *v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int64 *v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rdx
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 *v33; // rdx
  unsigned __int64 v34; // rcx
  _QWORD *v35; // rdx

  v6 = (_QWORD *)*a1;
  v7 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
  if ( a2 == v7 )
    goto LABEL_60;
  v9 = *a2;
  v10 = a2;
  while ( 1 )
  {
    if ( (v9 & 2) == 0 && (v9 & 1) != 0 )
      goto LABEL_5;
    v12 = *(_QWORD *)(a3 + 8);
    if ( (_QWORD *)v12 != v10 )
    {
      v13 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 2) != 0 )
        goto LABEL_15;
      if ( (v13 & 1) == 0 )
        goto LABEL_11;
      *(_QWORD *)v12 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v17 = *(_QWORD *)(a3 + 8);
      v18 = *(_QWORD *)a3 | 1LL;
      *(_QWORD *)a3 = v18;
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_45;
      v19 = *(unsigned __int64 **)(v17 + 16);
      *(_QWORD *)(a3 + 8) = v19;
      if ( (*v19 & 2) == 0 )
      {
        *v19 = *v19 & 3 | a3 & 0xFFFFFFFFFFFFFFFCLL;
        v18 = *(_QWORD *)a3;
      }
      *(_QWORD *)v17 = *(_QWORD *)v17 & 3LL | v18 & 0xFFFFFFFFFFFFFFFCLL;
      v20 = v17 & 0xFFFFFFFFFFFFFFFCLL;
      v21 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v21 == (_QWORD *)*a1 )
      {
        *v21 = v20 | *v21 & 3LL;
      }
      else if ( a3 == v21[2] )
      {
        v21[2] = v17;
      }
      else
      {
        v21[1] = v17;
      }
      *(_QWORD *)(v17 + 16) = a3;
      v12 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)a3 = v20 | *(_QWORD *)a3 & 3LL;
      v13 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 2) == 0 )
      {
LABEL_11:
        v14 = *(unsigned __int64 **)(v12 + 16);
        v15 = **(_QWORD **)(v12 + 8);
        v16 = *v14;
        a5 = *v14 & 2;
        if ( (v15 & 2) == 0 )
        {
          v15 = **(_QWORD **)(v12 + 8) & 1LL;
          if ( a5 || (v16 & 1) == 0 )
          {
            if ( !v15 )
              goto LABEL_13;
          }
          else if ( !v15 )
          {
            goto LABEL_48;
          }
          v26 = *(_QWORD *)v12;
          goto LABEL_38;
        }
        if ( !a5 )
        {
          while ( (v16 & 1) != 0 )
          {
LABEL_48:
            v29 = v16 & 0xFFFFFFFFFFFFFFFELL;
            *v14 = v29;
            *(_QWORD *)v12 |= 1uLL;
            sub_2593C0(a1, v12, v29, v15, a5);
            v12 = *(_QWORD *)(a3 + 8);
            v26 = *(_QWORD *)v12;
            if ( (*(_QWORD *)v12 & 2) == 0 )
            {
LABEL_38:
              if ( (*(_BYTE *)a3 & 1) != 0 )
                *(_QWORD *)v12 = v26 | 1;
              else
                *(_QWORD *)v12 = v26 & 0xFFFFFFFFFFFFFFFELL;
            }
            *(_QWORD *)a3 &= ~1uLL;
            v27 = *(_QWORD **)(v12 + 8);
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
              *(_QWORD *)a3 = v34 | *(_QWORD *)a3 & 3LL;
              v6 = (_QWORD *)*a1;
              v7 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
              goto LABEL_60;
            }
            if ( under_debugger )
              goto LABEL_76;
            interr(3441, v12, v27, v15, a5);
LABEL_45:
            if ( under_debugger )
LABEL_76:
              BUG();
            v14 = (_QWORD *)(&stru_D68 + 9);
            v13 = interr(3441, v12, v17, v7, a5);
          }
        }
LABEL_13:
        *(_QWORD *)v12 = v13 | 1;
      }
LABEL_14:
      v6 = (_QWORD *)*a1;
      goto LABEL_15;
    }
    v12 = *(_QWORD *)(a3 + 16);
    v13 = *(_QWORD *)v12;
    if ( (*(_QWORD *)v12 & 2) == 0 )
      break;
LABEL_15:
    v9 = *(_QWORD *)a3;
    v10 = (_QWORD *)a3;
    v7 = (__int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (__int64 *)a3 == v7 )
    {
      v7 = (__int64 *)a3;
      v32 = *(_QWORD *)a3 & 2LL;
      goto LABEL_61;
    }
    a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
  }
  if ( (v13 & 1) != 0 )
  {
    *(_QWORD *)v12 = v13 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)a3 |= 1uLL;
    sub_2593C0(a1, a3, v9, (__int64)v7, a5);
    v12 = *(_QWORD *)(a3 + 16);
    v13 = *(_QWORD *)v12;
    if ( (*(_QWORD *)v12 & 2) != 0 )
      goto LABEL_14;
  }
  v22 = *(unsigned __int64 **)(v12 + 8);
  v23 = **(_QWORD **)(v12 + 16);
  v24 = *v22;
  a5 = v23 & 2;
  if ( (*v22 & 2) != 0 )
  {
    if ( (v23 & 2) == 0 && (v23 & 1) != 0 )
      goto LABEL_32;
    goto LABEL_13;
  }
  if ( (v23 & 2) != 0 || (v23 & 1) == 0 )
  {
    if ( (v24 & 1) != 0 )
    {
      v30 = v24 & 0xFFFFFFFFFFFFFFFELL;
      *v22 = v30;
      *(_QWORD *)v12 |= 1uLL;
      sub_259480(a1, v12, v30, (__int64)v22, a5);
      v12 = *(_QWORD *)(a3 + 16);
      v25 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 2) == 0 )
        goto LABEL_33;
      goto LABEL_57;
    }
    goto LABEL_13;
  }
LABEL_32:
  v25 = *(_QWORD *)v12;
LABEL_33:
  if ( (*(_BYTE *)a3 & 1) != 0 )
    *(_QWORD *)v12 = v25 | 1;
  else
    *(_QWORD *)v12 = v25 & 0xFFFFFFFFFFFFFFFELL;
LABEL_57:
  *(_QWORD *)a3 &= ~1uLL;
  v31 = *(_QWORD **)(v12 + 16);
  if ( (*v31 & 2) == 0 )
    *v31 &= ~1uLL;
  sub_2593C0(a1, a3, (__int64)v31, (__int64)v22, a5);
  v6 = (_QWORD *)*a1;
  v7 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_60:
  v9 = *v7;
  v32 = *v7 & 2;
LABEL_61:
  if ( !v32 )
  {
    v10 = v7;
LABEL_5:
    *v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    v6 = (_QWORD *)*a1;
  }
  result = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

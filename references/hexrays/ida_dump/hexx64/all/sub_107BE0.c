_QWORD *__fastcall sub_107BE0(_QWORD *a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *result; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 *v18; // rcx
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdx

  v7 = (_QWORD *)*a1;
  v8 = *a2;
  v9 = *(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL;
  if ( a2 != (__int64 *)v9 )
  {
    while ( 1 )
    {
      if ( (v8 & 2) == 0 && (v8 & 1) != 0 )
        goto LABEL_4;
      v11 = *(_QWORD *)(a3 + 8);
      if ( a2 != (__int64 *)v11 )
        break;
      v16 = *(_QWORD *)(a3 + 16);
      v17 = *(_QWORD *)v16;
      if ( (*(_QWORD *)v16 & 2) == 0 )
      {
        if ( (v17 & 1) == 0
          || (*(_QWORD *)v16 = v17 & 0xFFFFFFFFFFFFFFFELL,
              *(_QWORD *)a3 |= 1uLL,
              sub_1070F0(a1, a3, v9, (__int64)v7, a5),
              v16 = *(_QWORD *)(a3 + 16),
              v17 = *(_QWORD *)v16,
              (*(_QWORD *)v16 & 2) == 0) )
        {
          v18 = *(unsigned __int64 **)(v16 + 8);
          v19 = **(_QWORD **)(v16 + 16);
          v20 = *v18;
          a5 = v19 & 2;
          if ( (*v18 & 2) != 0 )
          {
            if ( (v19 & 2) == 0 && (v19 & 1) != 0 )
              goto LABEL_25;
          }
          else
          {
            if ( (v19 & 2) == 0 && (v19 & 1) != 0 )
            {
LABEL_25:
              v21 = *(_QWORD *)v16;
LABEL_26:
              if ( (*(_BYTE *)a3 & 1) != 0 )
                *(_QWORD *)v16 = v21 | 1;
              else
                *(_QWORD *)v16 = v21 & 0xFFFFFFFFFFFFFFFELL;
LABEL_47:
              *(_QWORD *)a3 &= ~1uLL;
              v28 = *(_QWORD **)(v16 + 16);
              if ( (*v28 & 2) == 0 )
                *v28 &= ~1uLL;
              sub_1070F0(a1, a3, (__int64)v28, (__int64)v18, a5);
              v7 = (_QWORD *)*a1;
              a2 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_35:
              v8 = *a2;
              v26 = *a2 & 2;
              goto LABEL_36;
            }
            if ( (v20 & 1) != 0 )
            {
              v27 = v20 & 0xFFFFFFFFFFFFFFFELL;
              *v18 = v27;
              *(_QWORD *)v16 |= 1uLL;
              sub_1071B0(a1, v16, v27, (__int64)v18, a5);
              v16 = *(_QWORD *)(a3 + 16);
              v21 = *(_QWORD *)v16;
              if ( (*(_QWORD *)v16 & 2) == 0 )
                goto LABEL_26;
              goto LABEL_47;
            }
          }
          *(_QWORD *)v16 = v17 | 1;
        }
LABEL_16:
        v7 = (_QWORD *)*a1;
      }
LABEL_17:
      v8 = *(_QWORD *)a3;
      a2 = (__int64 *)a3;
      v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( a3 == v9 )
        goto LABEL_52;
      a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
    }
    v12 = *(_QWORD *)v11;
    if ( (*(_QWORD *)v11 & 2) != 0 )
      goto LABEL_17;
    if ( (v12 & 1) == 0
      || (v13 = v12 & 0xFFFFFFFFFFFFFFFELL,
          *(_QWORD *)v11 = v13,
          *(_QWORD *)a3 |= 1uLL,
          sub_1071B0(a1, a3, v13, (__int64)v7, a5),
          v11 = *(_QWORD *)(a3 + 8),
          v12 = *(_QWORD *)v11,
          (*(_QWORD *)v11 & 2) == 0) )
    {
      v14 = *(__int64 **)(v11 + 16);
      v15 = *v14;
      a5 = *v14 & 2;
      if ( (**(_QWORD **)(v11 + 8) & 2) != 0 )
      {
        if ( !a5 && (v15 & 1) != 0 )
          goto LABEL_31;
      }
      else
      {
        v22 = **(_QWORD **)(v11 + 8) & 1LL;
        if ( !a5 && (v15 & 1) != 0 )
        {
          if ( v22 )
          {
LABEL_39:
            v24 = *(_QWORD *)v11;
          }
          else
          {
LABEL_31:
            v23 = v15 & 0xFFFFFFFFFFFFFFFELL;
            *v14 = v23;
            *(_QWORD *)v11 |= 1uLL;
            sub_1070F0(a1, v11, v12, v23, 0);
            v11 = *(_QWORD *)(a3 + 8);
            v24 = *(_QWORD *)v11;
            if ( (*(_QWORD *)v11 & 2) != 0 )
            {
LABEL_32:
              *(_QWORD *)a3 &= ~1uLL;
              v25 = *(_QWORD **)(v11 + 8);
              if ( (*v25 & 2) == 0 )
                *v25 &= ~1uLL;
              sub_1071B0(a1, a3, (__int64)v25, v15, a5);
              v7 = (_QWORD *)*a1;
              a2 = (__int64 *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
              goto LABEL_35;
            }
          }
          if ( (*(_BYTE *)a3 & 1) != 0 )
            *(_QWORD *)v11 = v24 | 1;
          else
            *(_QWORD *)v11 = v24 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_32;
        }
        if ( v22 )
          goto LABEL_39;
      }
      *(_QWORD *)v11 = v12 | 1;
    }
    goto LABEL_16;
  }
LABEL_52:
  v26 = v8 & 2;
LABEL_36:
  if ( !v26 )
  {
LABEL_4:
    *a2 = v8 & 0xFFFFFFFFFFFFFFFELL;
    v7 = (_QWORD *)*a1;
  }
  result = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

_QWORD *__fastcall sub_145A60(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *result; // rax
  __int64 v14; // rax
  unsigned __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 *v17; // r8
  unsigned __int64 v18; // rdi
  _QWORD *v19; // rax
  unsigned __int64 *v20; // r8
  _QWORD *v21; // rax
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rcx

  v3 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL;
  v4 = *(_QWORD *)v3;
  v5 = (__int64 *)v3;
  if ( (*(_QWORD *)v3 & 2) == 0 )
  {
    while ( 1 )
    {
      if ( (v4 & 1) == 0 )
        goto LABEL_13;
      v6 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      v7 = *(__int64 **)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
      if ( v7 != (__int64 *)v3 )
        break;
      v7 = *(__int64 **)(v6 + 16);
      if ( (*v7 & 2) != 0 || (*v7 & 1) == 0 )
      {
        if ( *(_QWORD *)(v3 + 16) == a2 )
        {
          sub_1459A0(a1, v3);
          a2 = v3;
          v5 = (__int64 *)(*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL);
          v14 = *v5;
          v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          v14 = *(_QWORD *)v3;
        }
        *v5 = v14 & 0xFFFFFFFFFFFFFFFELL;
        v15 = *(unsigned __int64 **)(v6 + 8);
        v16 = *(_QWORD *)v6 | 1LL;
        *(_QWORD *)v6 = v16;
        if ( (*(_BYTE *)v15 & 2) == 0 )
        {
          v17 = (unsigned __int64 *)v15[2];
          *(_QWORD *)(v6 + 8) = v17;
          if ( (*v17 & 2) == 0 )
          {
            *v17 = v6 | *v17 & 3;
            v16 = *(_QWORD *)v6;
          }
          *v15 = *v15 & 3 | v16 & 0xFFFFFFFFFFFFFFFCLL;
          v18 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL;
          v19 = (_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL);
          if ( v19 == (_QWORD *)*a1 )
          {
            *v19 = v18 | *v19 & 3LL;
          }
          else if ( v6 == v19[2] )
          {
            v19[2] = v15;
          }
          else
          {
            v19[1] = v15;
          }
          v15[2] = v6;
          goto LABEL_31;
        }
        if ( under_debugger )
          goto LABEL_52;
        v18 = 0;
        v21 = (_QWORD *)interr();
LABEL_36:
        *v21 = v18 | *v21 & 3LL;
LABEL_30:
        v10[1] = v6;
LABEL_31:
        *(_QWORD *)v6 = v18 | *(_QWORD *)v6 & 3LL;
        v12 = *(_QWORD *)a2;
        goto LABEL_12;
      }
LABEL_11:
      a2 = v6;
      *(_QWORD *)v3 = v4 & 0xFFFFFFFFFFFFFFFELL;
      *v7 &= ~1uLL;
      v12 = *(_QWORD *)v6 | 1LL;
      *(_QWORD *)v6 = v12;
LABEL_12:
      v3 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      v4 = *(_QWORD *)v3;
      v5 = (__int64 *)v3;
      if ( (*(_QWORD *)v3 & 2) != 0 )
        goto LABEL_13;
    }
    v8 = *v7;
    if ( (*v7 & 2) == 0 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( *(_QWORD *)(v3 + 8) == a2 )
      {
        if ( (*(_BYTE *)a2 & 2) != 0 )
        {
          if ( under_debugger )
LABEL_52:
            BUG();
          v18 = 0;
          v21 = (_QWORD *)interr();
          goto LABEL_40;
        }
        v22 = *(unsigned __int64 **)(a2 + 16);
        *(_QWORD *)(v3 + 8) = v22;
        if ( (*v22 & 2) == 0 )
          *v22 = v3 | *v22 & 3;
        *(_QWORD *)a2 = *(_QWORD *)a2 & 3LL | *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL;
        v23 = a2 & 0xFFFFFFFFFFFFFFFCLL;
        v24 = (_QWORD *)(*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v24 == (_QWORD *)*a1 )
        {
          *v24 = v23 | *v24 & 3LL;
        }
        else if ( v3 == v24[2] )
        {
          v24[2] = a2;
        }
        else
        {
          v24[1] = a2;
        }
        *(_QWORD *)(a2 + 16) = v3;
        a2 = v3;
        v25 = v23 | *(_QWORD *)v3 & 3LL;
        *(_QWORD *)v3 = v25;
        v5 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = *v5;
        v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v9 = *(_QWORD *)v3;
      }
      *v5 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v10 = *(unsigned __int64 **)(v6 + 16);
      v11 = *(_QWORD *)v6 | 1LL;
      *(_QWORD *)v6 = v11;
      if ( (*(_BYTE *)v10 & 2) == 0 )
      {
        v20 = (unsigned __int64 *)v10[1];
        *(_QWORD *)(v6 + 16) = v20;
        if ( (*v20 & 2) == 0 )
        {
          *v20 = v6 | *v20 & 3;
          v11 = *(_QWORD *)v6;
        }
        *v10 = *v10 & 3 | v11 & 0xFFFFFFFFFFFFFFFCLL;
        v18 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
        v21 = (_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v21 == (_QWORD *)*a1 )
          goto LABEL_36;
        if ( v6 != v21[1] )
        {
          v21[2] = v10;
          goto LABEL_30;
        }
LABEL_40:
        v21[1] = v10;
        goto LABEL_30;
      }
      if ( under_debugger )
        goto LABEL_52;
      v7 = 0;
      v4 = interr();
LABEL_10:
      if ( (v8 & 1) != 0 )
        goto LABEL_11;
    }
  }
LABEL_13:
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}

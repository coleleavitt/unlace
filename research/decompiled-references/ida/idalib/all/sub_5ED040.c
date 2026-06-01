__int64 __fastcall sub_5ED040(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r15
  unsigned __int8 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r13
  unsigned __int8 v10; // bl
  unsigned __int8 v11; // cl
  unsigned int v12; // r12d
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int8 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned __int8 v23; // [rsp+Dh] [rbp-3Bh]
  unsigned __int8 v24; // [rsp+Eh] [rbp-3Ah]
  unsigned __int8 v25; // [rsp+Fh] [rbp-39h]

  v3 = a1[50];
  v4 = a1[49];
  v5 = v4 + 16 * v3 - 16;
  v6 = *(_QWORD *)v5;
  v7 = *(_BYTE *)(v5 + 8);
  v23 = *(_BYTE *)(v5 + 9);
  if ( v3 )
  {
    a1[50] = v3 - 1;
    v8 = v4 + 16 * (v3 - 1) - 16;
    v9 = *(_QWORD *)v8;
    v10 = *(_BYTE *)(v8 + 8);
    v24 = *(_BYTE *)(v8 + 9);
    if ( v3 != 1 )
      a1[50] = v3 - 2;
  }
  else
  {
    v10 = *(_BYTE *)(v5 + 8);
    v9 = *(_QWORD *)v5;
    v24 = *(_BYTE *)(v5 + 9);
  }
  if ( v10 < (unsigned __int8)getinf(59) )
  {
    v9 = extend_sign(v9, v10, v24);
    v10 = getinf(59);
  }
  if ( v7 < (unsigned __int8)getinf(59) )
  {
    v6 = extend_sign(v6, v7, v23);
    v7 = getinf(59);
  }
  v11 = v7;
  if ( v7 < v10 )
    v11 = v10;
  v12 = v11;
  v25 = v11;
  if ( v11 > (unsigned __int8)getinf(59) )
    v10 = v25;
  v13 = extend_sign(v9, v12, v24);
  v14 = extend_sign(v6, v12, v23);
  v15 = v23 & v24;
  if ( a2 <= 94 )
  {
    if ( a2 > 36 )
    {
      switch ( a2 )
      {
        case '%':
          if ( !v14 )
            return set_qerrno(86);
          if ( v15 )
            v21 = v13 % v14;
          else
            v21 = v13 % (unsigned __int64)v14;
          goto LABEL_30;
        case '&':
          v21 = v14 & v13;
          goto LABEL_30;
        case '*':
          v21 = v14 * v13;
          goto LABEL_30;
        case '+':
          v21 = v14 + v13;
          goto LABEL_30;
        case '-':
          v21 = v13 - v14;
          goto LABEL_30;
        case '/':
          if ( !v14 )
            return set_qerrno(86);
          if ( v15 )
            v21 = v13 / v14;
          else
            v21 = v13 / (unsigned __int64)v14;
          break;
        case '<':
          if ( v15 )
            LODWORD(v16) = v13 < v14;
          else
            LODWORD(v16) = v13 < (unsigned __int64)v14;
          goto LABEL_22;
        case '>':
          if ( v15 )
            LODWORD(v16) = v13 > v14;
          else
            LODWORD(v16) = v14 < (unsigned __int64)v13;
          goto LABEL_22;
        case '^':
          v21 = v14 ^ v13;
          goto LABEL_30;
        default:
          goto LABEL_53;
      }
      goto LABEL_30;
    }
    goto LABEL_53;
  }
  if ( a2 == 15676 )
  {
    if ( v15 )
      LODWORD(v16) = v13 <= v14;
    else
      LODWORD(v16) = v14 >= (unsigned __int64)v13;
  }
  else if ( a2 <= 15676 )
  {
    switch ( a2 )
    {
      case 9766:
        LODWORD(v16) = v13 != 0 && v14 != 0;
        break;
      case 15649:
        LODWORD(v16) = v13 != v14;
        break;
      case 124:
        v21 = v14 | v13;
LABEL_30:
        v16 = extend_sign(v21, v10, v15);
        goto LABEL_23;
      default:
LABEL_53:
        if ( !under_debugger )
          interr(1636);
        BUG();
    }
  }
  else
  {
    switch ( a2 )
    {
      case 15678:
        if ( v15 )
          LODWORD(v16) = v13 >= v14;
        else
          LODWORD(v16) = v13 >= (unsigned __int64)v14;
        break;
      case 31868:
        LODWORD(v16) = (v13 | v14) != 0;
        break;
      case 15677:
        LODWORD(v16) = v13 == v14;
        break;
      default:
        goto LABEL_53;
    }
  }
LABEL_22:
  v16 = (int)v16;
  v15 = 0;
  v10 = 1;
LABEL_23:
  v17 = a1[50];
  v18 = a1[49];
  if ( a1[51] < (unsigned __int64)(v17 + 1) )
  {
    v22 = qvector_reserve(a1 + 49, v18, v17 + 1, 16);
    a1[49] = v22;
    v18 = v22;
    v17 = a1[50];
  }
  v19 = 16 * v17 + v18;
  *(_QWORD *)v19 = v16;
  *(_BYTE *)(v19 + 8) = v10;
  *(_BYTE *)(v19 + 9) = v15;
  ++a1[50];
  return 0;
}

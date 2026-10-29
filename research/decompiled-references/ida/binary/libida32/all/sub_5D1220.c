__int64 __fastcall sub_5D1220(_QWORD *a1, int a2)
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
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int8 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int8 v24; // [rsp+Dh] [rbp-3Bh]
  unsigned __int8 v25; // [rsp+Eh] [rbp-3Ah]
  unsigned __int8 v26; // [rsp+Fh] [rbp-39h]

  v3 = a1[49];
  v4 = a1[48];
  v5 = v4 + 16 * v3 - 16;
  v6 = *(_QWORD *)v5;
  v7 = *(_BYTE *)(v5 + 8);
  v24 = *(_BYTE *)(v5 + 9);
  if ( v3 )
  {
    a1[49] = v3 - 1;
    v8 = v4 + 16 * (v3 - 1) - 16;
    v9 = *(_QWORD *)v8;
    v10 = *(_BYTE *)(v8 + 8);
    v25 = *(_BYTE *)(v8 + 9);
    if ( v3 != 1 )
      a1[49] = v3 - 2;
  }
  else
  {
    v10 = *(_BYTE *)(v5 + 8);
    v9 = *(_QWORD *)v5;
    v25 = *(_BYTE *)(v5 + 9);
  }
  if ( v10 < (unsigned __int8)getinf(59) )
  {
    v9 = extend_sign(v9, v10, v25);
    v10 = getinf(59);
  }
  if ( v7 < (unsigned __int8)getinf(59) )
  {
    v6 = extend_sign(v6, v7, v24);
    v7 = getinf(59);
  }
  v11 = v7;
  if ( v7 < v10 )
    v11 = v10;
  v12 = v11;
  v26 = v11;
  if ( v11 > (unsigned __int8)getinf(59) )
    v10 = v26;
  v13 = v12;
  v14 = extend_sign(v9, v12, v25);
  v15 = extend_sign(v6, v12, v24);
  v16 = v24 & v25;
  if ( a2 <= 94 )
  {
    if ( a2 > 36 )
    {
      switch ( a2 )
      {
        case '%':
          if ( !v15 )
            return set_qerrno(86, v13);
          if ( v16 )
            v22 = v14 % v15;
          else
            v22 = v14 % (unsigned __int64)v15;
          goto LABEL_30;
        case '&':
          v22 = v15 & v14;
          goto LABEL_30;
        case '*':
          v22 = v15 * v14;
          goto LABEL_30;
        case '+':
          v22 = v15 + v14;
          goto LABEL_30;
        case '-':
          v22 = v14 - v15;
          goto LABEL_30;
        case '/':
          if ( !v15 )
            return set_qerrno(86, v13);
          if ( v16 )
            v22 = v14 / v15;
          else
            v22 = v14 / (unsigned __int64)v15;
          break;
        case '<':
          if ( v16 )
            LODWORD(v17) = v14 < v15;
          else
            LODWORD(v17) = v14 < (unsigned __int64)v15;
          goto LABEL_22;
        case '>':
          if ( v16 )
            LODWORD(v17) = v14 > v15;
          else
            LODWORD(v17) = v15 < (unsigned __int64)v14;
          goto LABEL_22;
        case '^':
          v22 = v15 ^ v14;
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
    if ( v16 )
      LODWORD(v17) = v14 <= v15;
    else
      LODWORD(v17) = v15 >= (unsigned __int64)v14;
  }
  else if ( a2 <= 15676 )
  {
    switch ( a2 )
    {
      case 9766:
        LODWORD(v17) = v14 != 0 && v15 != 0;
        break;
      case 15649:
        LODWORD(v17) = v14 != v15;
        break;
      case 124:
        v22 = v15 | v14;
LABEL_30:
        v17 = extend_sign(v22, v10, v16);
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
        if ( v16 )
          LODWORD(v17) = v14 >= v15;
        else
          LODWORD(v17) = v14 >= (unsigned __int64)v15;
        break;
      case 31868:
        LODWORD(v17) = (v14 | v15) != 0;
        break;
      case 15677:
        LODWORD(v17) = v14 == v15;
        break;
      default:
        goto LABEL_53;
    }
  }
LABEL_22:
  v17 = (int)v17;
  v16 = 0;
  v10 = 1;
LABEL_23:
  v18 = a1[49];
  v19 = a1[48];
  if ( a1[50] < (unsigned __int64)(v18 + 1) )
  {
    v23 = qvector_reserve(a1 + 48, v19, v18 + 1, 16);
    a1[48] = v23;
    v19 = v23;
    v18 = a1[49];
  }
  v20 = 16 * v18 + v19;
  *(_QWORD *)v20 = v17;
  *(_BYTE *)(v20 + 8) = v10;
  *(_BYTE *)(v20 + 9) = v16;
  ++a1[49];
  return 0;
}


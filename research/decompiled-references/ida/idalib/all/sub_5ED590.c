__int64 __fastcall sub_5ED590(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rax

  v2 = a1[50];
  v4 = a1[49] + 16 * v2 - 16;
  v5 = *(_QWORD *)v4;
  v6 = *(_BYTE *)(v4 + 8);
  v7 = *(_BYTE *)(v4 + 9);
  if ( v2 )
    a1[50] = v2 - 1;
  if ( v6 < (unsigned __int8)getinf(59) )
  {
    v5 = extend_sign(v5, v6, v7);
    v6 = getinf(59);
  }
  switch ( a2 )
  {
    case '-':
      v10 = v7;
      v8 = v6;
      v9 = -v5;
      break;
    case '~':
      v10 = v7;
      v8 = v6;
      v9 = ~v5;
      break;
    case '!':
      v8 = 1;
      v6 = 1;
      v9 = v5 == 0;
      v10 = 0;
      v7 = 0;
      break;
    default:
      if ( !under_debugger )
        interr(1637);
      BUG();
  }
  v11 = extend_sign(v9, v8, v10);
  v12 = a1[49];
  v13 = v11;
  v14 = a1[50];
  if ( a1[51] < (unsigned __int64)(v14 + 1) )
  {
    v17 = qvector_reserve(a1 + 49, v12, v14 + 1, 16);
    a1[49] = v17;
    v12 = v17;
    v14 = a1[50];
  }
  v15 = 16 * v14 + v12;
  *(_QWORD *)v15 = v13;
  *(_BYTE *)(v15 + 8) = v6;
  *(_BYTE *)(v15 + 9) = v7;
  ++a1[50];
  return 0;
}

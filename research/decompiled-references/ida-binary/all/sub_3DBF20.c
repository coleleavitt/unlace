__int64 __fastcall sub_3DBF20(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, double a5)
{
  _QWORD *v5; // r13
  unsigned __int64 v6; // r14
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  unsigned int v9; // ebp
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  int v12; // r15d
  _QWORD *v13; // rbp
  unsigned int v14; // r9d
  int v15; // r12d
  _QWORD *v16; // rbx
  int v17; // r15d
  _QWORD *v18; // rbp
  int v19; // ebx
  _QWORD *v20; // rbp
  int v21; // r12d
  _QWORD *v22; // r9
  int v23; // r10d
  int v24; // r11d
  _QWORD *v25; // r8
  __int64 v26; // rax
  _QWORD *v28; // [rsp+8h] [rbp-90h]
  _QWORD *v29; // [rsp+10h] [rbp-88h]
  _QWORD *v30; // [rsp+18h] [rbp-80h]
  int v31; // [rsp+20h] [rbp-78h]
  int v32; // [rsp+24h] [rbp-74h]
  _QWORD *v33; // [rsp+28h] [rbp-70h]
  _QWORD *v34; // [rsp+30h] [rbp-68h]
  _QWORD *v35; // [rsp+38h] [rbp-60h]
  int v36; // [rsp+40h] [rbp-58h]
  int v37; // [rsp+44h] [rbp-54h]
  _QWORD *v38; // [rsp+48h] [rbp-50h]
  _QWORD *v39; // [rsp+50h] [rbp-48h]
  int v40; // [rsp+58h] [rbp-40h]
  int v41; // [rsp+5Ch] [rbp-3Ch]

  v7 = (_QWORD *)a3;
  v8 = (_QWORD *)*a1;
  if ( *a1 != a3 && !*(_QWORD *)(a3 + 40) )
  {
    if ( under_debugger )
      goto LABEL_99;
    goto LABEL_82;
  }
  LOBYTE(a3) = a3 == 0;
  LOBYTE(a4) = v7 == nullptr || a2 == nullptr;
  v9 = a4;
  if ( (_BYTE)a4 )
    goto LABEL_74;
  if ( v7 == a2 )
    return 1;
  LODWORD(v5) = 0;
  a3 = 0;
  if ( !v7[3] )
    return v9;
  v6 = (unsigned int)a4;
  v10 = v7;
  while ( 1 )
  {
    a4 = v10[2];
    v11 = *(_QWORD **)(a4 + 8 * a3);
    if ( v11 != v8 && !v11[5] )
    {
      if ( under_debugger )
        goto LABEL_99;
      goto LABEL_82;
    }
    if ( v11 )
      break;
LABEL_74:
    if ( under_debugger )
      goto LABEL_99;
    a1 = (_QWORD *)(&stru_9D48 + 11);
    interr(40275, a2, a3, a4, a5);
LABEL_76:
    v10 = v34;
    a2 = (_QWORD *)v6;
    v6 = (unsigned int)a4;
LABEL_77:
    LODWORD(v5) = (_DWORD)v5 + 1;
    a3 = (int)v5;
    if ( (unsigned __int64)(int)v5 >= v10[3] )
      return (unsigned int)v6;
    v8 = (_QWORD *)*a1;
  }
  if ( v11 == a2 )
    return 1;
  if ( !v11[3] )
    goto LABEL_77;
  v34 = v10;
  a4 = (unsigned int)v6;
  v12 = 0;
  a3 = 0;
  v6 = (unsigned __int64)a2;
  while ( 1 )
  {
    a2 = (_QWORD *)v11[2];
    v13 = (_QWORD *)a2[a3];
    if ( v13 != v8 && !v13[5] )
    {
      if ( under_debugger )
        goto LABEL_99;
      goto LABEL_82;
    }
    if ( !v13 )
      goto LABEL_74;
    if ( (_QWORD *)v6 == v13 )
      return 1;
    if ( v13[3] )
      break;
LABEL_72:
    a3 = ++v12;
    if ( (unsigned __int64)v12 >= v11[3] )
      goto LABEL_76;
    v8 = (_QWORD *)*a1;
  }
  v35 = v11;
  a2 = nullptr;
  a3 = 0;
  v14 = a4;
  v37 = (int)v5;
  v15 = 0;
  while ( 1 )
  {
    v16 = *(_QWORD **)(v13[2] + 8 * a3);
    if ( v16 != v8 && !v16[5] )
    {
      if ( under_debugger )
        goto LABEL_99;
      goto LABEL_82;
    }
    if ( !v16 )
      goto LABEL_74;
    if ( (_QWORD *)v6 == v16 )
      return 1;
    if ( v16[3] )
      break;
LABEL_69:
    a3 = ++v15;
    if ( (unsigned __int64)v15 >= v13[3] )
    {
      v11 = v35;
      LODWORD(v5) = v37;
      a4 = v14;
      goto LABEL_72;
    }
    v8 = (_QWORD *)*a1;
  }
  v40 = v12;
  a3 = 0;
  v38 = v13;
  v17 = 0;
  v18 = v16;
  while ( 1 )
  {
    v5 = *(_QWORD **)(v18[2] + 8 * a3);
    if ( v8 != v5 && !v5[5] )
    {
      if ( under_debugger )
        goto LABEL_99;
      goto LABEL_82;
    }
    if ( !v5 )
      goto LABEL_74;
    if ( (_QWORD *)v6 == v5 )
      return 1;
    if ( v5[3] )
      break;
LABEL_66:
    a3 = ++v17;
    if ( (unsigned __int64)v17 >= v18[3] )
    {
      v12 = v40;
      v13 = v38;
      goto LABEL_69;
    }
    v8 = (_QWORD *)*a1;
  }
  v39 = v18;
  a4 = *(_QWORD *)(v18[2] + 8 * a3);
  v19 = 0;
  a3 = 0;
  v41 = v15;
  LODWORD(v5) = v14;
  while ( 1 )
  {
    a2 = *(_QWORD **)(a4 + 16);
    v20 = (_QWORD *)a2[a3];
    if ( v20 != v8 && !v20[5] )
    {
      if ( under_debugger )
        goto LABEL_99;
      goto LABEL_82;
    }
    if ( !v20 )
      goto LABEL_74;
    if ( (_QWORD *)v6 == v20 )
      return 1;
    if ( v20[3] )
      break;
LABEL_63:
    a3 = ++v19;
    if ( (unsigned __int64)v19 >= *(_QWORD *)(a4 + 24) )
    {
      v18 = v39;
      v15 = v41;
      v14 = (unsigned int)v5;
      goto LABEL_66;
    }
    v8 = (_QWORD *)*a1;
  }
  v33 = (_QWORD *)a4;
  v21 = 0;
  a3 = 0;
  while ( 1 )
  {
    a2 = (_QWORD *)v20[2];
    v22 = (_QWORD *)a2[a3];
    if ( v22 != v8 && !v22[5] )
    {
      if ( under_debugger )
        goto LABEL_99;
      goto LABEL_82;
    }
    if ( !v22 )
      goto LABEL_74;
    if ( (_QWORD *)v6 == v22 )
      return 1;
    if ( v22[3] )
      break;
LABEL_60:
    a3 = ++v21;
    if ( (unsigned __int64)v21 >= v20[3] )
    {
      a4 = (unsigned __int64)v33;
      goto LABEL_63;
    }
    v8 = (_QWORD *)*a1;
  }
  v23 = 0;
  a3 = 0;
  while ( 1 )
  {
    a4 = *(_QWORD *)(v22[2] + 8 * a3);
    if ( (_QWORD *)a4 != v8 && !*(_QWORD *)(a4 + 40) )
      goto LABEL_83;
    if ( !a4 )
      goto LABEL_74;
    if ( v6 == a4 )
      return 1;
    if ( *(_QWORD *)(a4 + 24) )
      break;
LABEL_58:
    a3 = ++v23;
    if ( (unsigned __int64)v23 >= v22[3] )
      goto LABEL_60;
    v8 = (_QWORD *)*a1;
  }
  v24 = 0;
  a3 = 0;
  while ( 2 )
  {
    a2 = *(_QWORD **)(a4 + 16);
    v25 = (_QWORD *)a2[a3];
    if ( v25 != v8 && !v25[5] )
    {
      if ( under_debugger )
        goto LABEL_99;
      do
      {
LABEL_82:
        interr(40274, a2, a3, a4, a5);
LABEL_83:
        ;
      }
      while ( !under_debugger );
LABEL_99:
      BUG();
    }
    if ( !v25 )
      goto LABEL_74;
    if ( (_QWORD *)v6 == v25 )
      return 1;
    v26 = 0;
    v31 = 0;
    if ( !v25[3] )
    {
LABEL_56:
      a3 = ++v24;
      if ( (unsigned __int64)v24 >= *(_QWORD *)(a4 + 24) )
        goto LABEL_58;
      v8 = (_QWORD *)*a1;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    a2 = (_QWORD *)v6;
    v36 = v24;
    v32 = v23;
    v30 = (_QWORD *)a4;
    v29 = v22;
    v28 = v25;
    if ( (unsigned __int8)sub_3DBF20(a1, v6, *(_QWORD *)(v25[2] + 8 * v26)) )
      return 1;
    v25 = v28;
    v26 = ++v31;
    v22 = v29;
    a4 = (unsigned __int64)v30;
    v23 = v32;
    v24 = v36;
    if ( (unsigned __int64)v31 >= v28[3] )
      goto LABEL_56;
  }
}

unsigned __int64 __fastcall sub_8B99A0(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 *v8; // rbp
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax

  v8 = (__int64 *)a1;
  v9 = a2;
  v10 = *(_QWORD **)(a1 + 88);
  if ( v10 != a2 )
  {
    v11 = a2[2];
    if ( !a4 )
    {
      v12 = 0;
      v13 = a2[2];
      a1 = 0;
      if ( v10 != a3 )
      {
LABEL_7:
        v14 = a3[2] + 4LL * (a3[1] - *a3);
LABEL_8:
        if ( v14 != v11 && (_BYTE)a1 && *((_BYTE *)v8 + 100) )
        {
          a1 = *v8;
          sub_8BCDF0(*v8);
        }
LABEL_12:
        if ( !(a5 >> 62) )
          goto LABEL_13;
        goto LABEL_31;
      }
LABEL_21:
      v16 = v8[3];
      if ( v16 )
      {
        v21 = v8[2];
        v22 = v21 + 24 * v16;
        v23 = (_QWORD *)(v22 - 24);
        if ( v21 == v22 )
          v23 = a3;
        v14 = v23[2] + 4LL * (v23[1] - *v23);
      }
      else
      {
        v14 = *(_QWORD *)*v8;
      }
      goto LABEL_8;
    }
LABEL_3:
    if ( a4 >> 62 )
    {
      if ( !under_debugger )
        interr(1164);
    }
    else
    {
      v12 = 4 * a4;
      v13 = 4 * a4 + v11;
      if ( !__CFADD__(4 * a4, v11) )
      {
        a1 = 1;
        if ( v10 == v9 )
          goto LABEL_12;
        if ( v10 != a3 )
          goto LABEL_7;
        goto LABEL_21;
      }
      if ( !under_debugger )
        interr(1165);
    }
LABEL_40:
    BUG();
  }
  v17 = *(_QWORD *)(a1 + 24);
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v19 = v18 + 24 * v17;
    v20 = (_QWORD *)(v19 - 24);
    if ( v18 == v19 )
      v20 = *(_QWORD **)(a1 + 88);
    v11 = v20[2] + 4LL * (v20[1] - *v20);
  }
  else
  {
    v11 = **(_QWORD **)a1;
  }
  if ( a4 )
    goto LABEL_3;
  v12 = 0;
  v13 = v11;
  if ( a5 >> 62 )
  {
LABEL_31:
    if ( !under_debugger )
      interr(1166);
    goto LABEL_40;
  }
LABEL_13:
  if ( v13 - 4 * a5 != v13 )
  {
    if ( v13 < 4 * a5 )
      sub_8B8620(a1);
    sub_8BCD60(*v8, v13 - 4 * a5, 0);
  }
  while ( v9 != (_QWORD *)v8[11] )
  {
    v9[2] += v12;
    if ( a3 == v9 )
      break;
    v9 += 3;
  }
  return a4 - a5;
}

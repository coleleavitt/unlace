__int64 __fastcall sub_45BA30(int *a1, double a2, double a3, __m128 a4)
{
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax

  v5 = switch_dbctx(a1[91]);
  v6 = sub_631AD0(**(_QWORD **)(v5 + 1672), 29);
  v7 = switch_dbctx(a1[90]);
  result = sub_631AD0(**(_QWORD **)(v7 + 1672), 29);
  if ( v6 == result )
    return result;
  v9 = a1[92];
  v10 = *(_QWORD **)(v7 + 1672);
  v11 = result;
  v12 = result - v6;
  if ( (_DWORD)v9 == -1 )
    goto LABEL_3;
  v15 = switch_dbctx(v9);
  v16 = sub_631AD0(**(_QWORD **)(v15 + 1672), 29);
  if ( v11 == v16 )
  {
    if ( !sub_45B760((__int64)a1, 1, v6 - v11, 0, a2, a3, a4) )
    {
      v13 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    if ( v6 != v16 )
    {
LABEL_3:
      if ( !v11 )
      {
        if ( sub_45B760((__int64)a1, 1, v6, 0, a2, a3, a4) )
        {
          v12 = v6;
LABEL_9:
          if ( a1[92] != -1 )
            sub_45B760((__int64)a1, 2, v12, 0, a2, a3, a4);
          goto LABEL_11;
        }
        v13 = 0;
LABEL_8:
        sub_45B760((__int64)a1, v13, v12, 1, a2, a3, a4);
        goto LABEL_9;
      }
      if ( sub_45B760((__int64)a1, 0, v12, 0, a2, a3, a4) )
        goto LABEL_9;
LABEL_7:
      v13 = 1;
      v12 = v6 - v11;
      goto LABEL_8;
    }
    if ( !sub_45B760((__int64)a1, 0, v12, 0, a2, a3, a4) )
      goto LABEL_7;
  }
LABEL_11:
  v14 = sub_631AD0(*v10, 29);
  result = *(_QWORD *)(v10[3] + 16LL) & (v14 ^ sub_631AD0(**(_QWORD **)(v5 + 1672), 29));
  if ( result )
  {
    if ( !under_debugger )
      interr(3289);
    BUG();
  }
  return result;
}

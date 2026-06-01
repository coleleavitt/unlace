__int64 __fastcall sub_447B10(int *a1)
{
  __int64 v2; // r12
  signed int v3; // ebp
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rdi
  _QWORD *v7; // r14
  int v8; // r15d
  signed int v9; // r13d
  int v10; // esi
  int v11; // ebx
  __int64 v12; // rax
  int v13; // eax

  v2 = switch_dbctx(a1[91]);
  v3 = sub_614FB0(**(_QWORD **)(v2 + 1480), 29);
  v4 = switch_dbctx(a1[90]);
  result = sub_614FB0(**(_QWORD **)(v4 + 1480), 29);
  if ( v3 == (_DWORD)result )
    return result;
  v6 = a1[92];
  v7 = *(_QWORD **)(v4 + 1480);
  v8 = result;
  v9 = result - v3;
  if ( (_DWORD)v6 == -1 )
    goto LABEL_3;
  v12 = switch_dbctx(v6);
  v13 = sub_614FB0(**(_QWORD **)(v12 + 1480), 29);
  if ( v8 == v13 )
  {
    if ( !sub_4478C0((__int64)a1, 1, v3 - v8, 0) )
    {
      v10 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    if ( v3 != v13 )
    {
LABEL_3:
      if ( !v8 )
      {
        if ( sub_4478C0((__int64)a1, 1, v3, 0) )
        {
          v9 = v3;
LABEL_9:
          if ( a1[92] != -1 )
            sub_4478C0((__int64)a1, 2, v9, 0);
          goto LABEL_11;
        }
        v10 = 0;
LABEL_8:
        sub_4478C0((__int64)a1, v10, v9, 1);
        goto LABEL_9;
      }
      if ( sub_4478C0((__int64)a1, 0, v9, 0) )
        goto LABEL_9;
LABEL_7:
      v10 = 1;
      v9 = v3 - v8;
      goto LABEL_8;
    }
    if ( !sub_4478C0((__int64)a1, 0, v9, 0) )
      goto LABEL_7;
  }
LABEL_11:
  v11 = sub_614FB0(*v7, 29);
  result = sub_614FB0(**(_QWORD **)(v2 + 1480), 29);
  if ( v11 != (_DWORD)result )
  {
    if ( !under_debugger )
      interr(3289);
    BUG();
  }
  return result;
}


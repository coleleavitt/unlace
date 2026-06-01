__int64 __fastcall sub_479450(_QWORD *a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned int v11; // ebp
  struct _Unwind_Exception *v13; // rbx
  _QWORD *v14; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v5 = a2;
  v6 = a1[8];
  qmutex_lock(v6);
  if ( a2 )
  {
    v8 = a1[5];
    v14 = a1 + 2;
    v9 = v8 + 16LL * a1[6];
    if ( v8 == v9 )
    {
LABEL_9:
      switch ( v4 )
      {
        case 0LL:
        case 4LL:
LABEL_17:
          if ( !under_debugger )
          {
            v13 = (struct _Unwind_Exception *)interr(70196, a2, v8, v7, a4);
            qmutex_unlock(v6);
            _Unwind_Resume(v13);
          }
          BUG();
        case 1LL:
          goto LABEL_12;
        case 2LL:
LABEL_11:
          sub_4793A0(a1, v5);
          sub_478E30(v14, v5, 2);
LABEL_12:
          v11 = 1;
          break;
        case 3LL:
          v11 = 1;
LABEL_14:
          sub_4793A0(a1, v5);
          sub_478E30(v14, v5, 3);
          break;
        default:
          v11 = 1;
          break;
      }
    }
    else
    {
      v10 = a1[5];
      while ( 1 )
      {
        a2 = v5;
        if ( (unsigned __int8)qthread_equal(*(_QWORD *)v10, v5) )
          break;
        v10 += 16;
        if ( v9 == v10 )
          goto LABEL_9;
      }
      v11 = *(_DWORD *)(v10 + 8);
      switch ( v4 )
      {
        case 0LL:
        case 4LL:
          goto LABEL_17;
        case 1LL:
          if ( v11 == 1 )
            goto LABEL_12;
          sub_478E30(v14, v5, 1);
          break;
        case 2LL:
          if ( v11 == 1 )
            goto LABEL_11;
          break;
        case 3LL:
          goto LABEL_14;
        default:
          break;
      }
    }
  }
  else
  {
    v11 = 0;
  }
  qmutex_unlock(v6);
  return v11;
}

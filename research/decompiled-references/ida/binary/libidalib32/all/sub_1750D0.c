__int64 __fastcall sub_1750D0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int v7; // ebp
  struct _Unwind_Exception *v9; // rbx
  _QWORD *v10; // [rsp+8h] [rbp-40h]

  v3 = a3;
  qmutex_lock();
  if ( a2 )
  {
    v4 = a1[5];
    v10 = a1 + 2;
    v5 = v4 + 16LL * a1[6];
    if ( v4 == v5 )
    {
LABEL_9:
      switch ( v3 )
      {
        case 0LL:
        case 4LL:
LABEL_17:
          if ( !under_debugger )
          {
            v9 = (struct _Unwind_Exception *)interr();
            qmutex_unlock();
            _Unwind_Resume(v9);
          }
          BUG();
        case 1LL:
          goto LABEL_12;
        case 2LL:
LABEL_11:
          sub_175020(a1);
          sub_174A90(v10, a2, 2);
LABEL_12:
          v7 = 1;
          break;
        case 3LL:
          v7 = 1;
LABEL_14:
          sub_175020(a1);
          sub_174A90(v10, a2, 3);
          break;
        default:
          v7 = 1;
          break;
      }
    }
    else
    {
      v6 = a1[5];
      while ( !(unsigned __int8)qthread_equal() )
      {
        v6 += 16;
        if ( v5 == v6 )
          goto LABEL_9;
      }
      v7 = *(_DWORD *)(v6 + 8);
      switch ( v3 )
      {
        case 0LL:
        case 4LL:
          goto LABEL_17;
        case 1LL:
          if ( v7 == 1 )
            goto LABEL_12;
          sub_174A90(v10, a2, 1);
          break;
        case 2LL:
          if ( v7 == 1 )
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
    v7 = 0;
  }
  qmutex_unlock();
  return v7;
}


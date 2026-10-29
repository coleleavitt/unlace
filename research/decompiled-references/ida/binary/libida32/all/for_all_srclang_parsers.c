__int64 __fastcall for_all_srclang_parsers(__int64 (__fastcall ***a1)(_QWORD, __int64), char a2)
{
  _QWORD *v2; // r14
  int v3; // r13d
  __int64 v4; // rax
  int v5; // r15d
  __int64 v6; // r15
  __int64 v8; // [rsp+0h] [rbp-48h]
  __int64 v9; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD **)(qword_2CA1698 + 1696);
  v8 = v2[1];
  qmutex_lock(v8);
  v9 = v2[2];
  if ( v2[4] )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v2[3] + 8 * v4);
      if ( v6 )
      {
        if ( a2 )
          sub_7091D0(v2, v6, 1);
        v5 = (**a1)(a1, v6);
        if ( v5 )
          break;
      }
      v4 = ++v3;
      if ( (unsigned __int64)v3 >= v2[4] )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v5 = 0;
  }
  if ( a2 )
    sub_7091D0(v2, *(_QWORD *)(v2[3] + 8 * v9), 1);
  qmutex_unlock(v8);
  return v5;
}


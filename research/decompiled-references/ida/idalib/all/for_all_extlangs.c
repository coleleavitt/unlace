__int64 __fastcall for_all_extlangs(__int64 (__fastcall ***a1)(_QWORD), char a2)
{
  __int64 v2; // r14
  int v3; // r15d
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rbx
  int v8; // [rsp+0h] [rbp-48h]
  unsigned __int64 v9; // [rsp+8h] [rbp-40h]

  v2 = qword_2CD4560;
  qmutex_lock(qword_2CD4560);
  v9 = qword_2CD4558;
  if ( (_QWORD)xmmword_2CD4548 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(qword_2CD4540 + 8 * v4) )
      {
        if ( a2 )
          select_extlang(*(void **)(qword_2CD4540 + 8 * v4));
        v5 = (**a1)(a1);
        if ( v5 )
          break;
      }
      v4 = ++v3;
      if ( v3 >= (unsigned __int64)xmmword_2CD4548 )
      {
        v5 = 0;
        break;
      }
    }
    if ( a2 && v9 < (unsigned __int64)xmmword_2CD4548 )
    {
      v8 = v5;
      select_extlang(*(void **)(qword_2CD4540 + 8 * v9));
      v6 = v8;
    }
    else
    {
      v6 = v5;
    }
  }
  else
  {
    v6 = 0;
  }
  qmutex_unlock(v2);
  return v6;
}

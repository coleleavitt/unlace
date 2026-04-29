__int64 __fastcall sub_E3C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx

  v5 = a1[8277];
  *a1 = off_2C2C0;
  while ( v5 )
  {
    v6 = (_QWORD *)v5;
    sub_E080(*(_QWORD **)(v5 + 24), a2, a3, a4);
    v9 = *(_QWORD *)(v5 + 32);
    v5 = *(_QWORD *)(v5 + 16);
    if ( v9 )
    {
      v6[5] = 0;
      qfree(v9, a2, v7, v8);
    }
    a2 = 56;
    operator delete(v6, 0x38u);
  }
  a1[15] = &off_2CD20;
  remove_event_listener(a1 + 15);
  *a1 = &off_2CD20;
  remove_event_listener(a1);
  return qfree(a1, a2, v10, v11);
}

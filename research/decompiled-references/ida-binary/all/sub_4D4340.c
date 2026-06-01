__int64 __fastcall sub_4D4340(__int64 a1)
{
  void (__fastcall **v1)(void *); // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // r15
  _QWORD *v7; // r14
  void (__fastcall ***v9)(void *); // rcx
  void (__fastcall *v10)(void *); // r8
  __int64 v11; // rdi
  __int64 v12; // rdi
  void *v14; // [rsp+8h] [rbp-40h]

  v1 = nullptr;
  QT::QTableWidget::setRowCount(*(QT::QTableWidget **)(*(_QWORD *)(a1 + 96) + 88LL), 0);
  v3 = *(_QWORD **)(a1 + 80);
  v4 = v3[231];
  if ( v4 )
  {
    v5 = v3[232];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 80 * i);
        v1 = (void (__fastcall **)(void *))v7[9];
        if ( v1 )
        {
          if ( (*((_DWORD *)v1 + 2))-- == 1 )
          {
            v9 = (void (__fastcall ***)(void *))v7[9];
            v1 = *v9;
            v10 = **v9;
            if ( v10 == refcnted_regex_t__::vfunc_0 )
            {
              if ( v9 )
              {
                v1 = (void (__fastcall **)(void *))v1[2];
                if ( v1 == (void (__fastcall **)(void *))refcnted_regex_t__::vfunc_2 )
                {
                  v14 = (void *)v7[9];
                  *v9 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
                  qregfree(v9 + 2);
                  v1 = (void (__fastcall **)(void *))&dword_30;
                  operator delete(v14, 0x30u);
                }
                else
                {
                  ((void (__fastcall *)(_QWORD))v1)(v7[9]);
                }
              }
            }
            else
            {
              v10((void *)v7[9]);
            }
          }
        }
        v11 = v7[5];
        if ( v11 )
        {
          v7[6] = 0;
          qfree(v11, (const char *)v1);
        }
        v12 = v7[1];
        if ( v12 )
        {
          v7[2] = 0;
          qfree(v12, (const char *)v1);
        }
        v4 = v3[231];
      }
    }
    v3[232] = 0;
    qfree(v4, (const char *)v1);
    v3[231] = 0;
    v3[233] = 0;
  }
  return sub_4D39D0(a1);
}

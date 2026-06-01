void __fastcall sub_4D4FF0(__int64 a1, const char *a2, char a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  void (__fastcall ***v11)(void *); // r13
  void (__fastcall *v12)(void *); // rdx
  void (__fastcall *v13)(void *); // rax
  __int64 v14; // rdi
  __int64 v15; // rdi

  if ( (int)a2 >= 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1856LL);
    if ( (int)a2 < v5 )
    {
      v6 = 80 * (v5 - 1 - (int)a2);
      QT::QTableWidget::removeRow(*(QT::QTableWidget **)(*(_QWORD *)(a1 + 96) + 88LL), (int)a2);
      if ( a3 )
      {
        a2 = (const char *)(v6 + *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1848LL));
        sub_4D4E20(a1, (__int64)a2);
      }
      v7 = *(_QWORD *)(a1 + 80);
      v8 = (_QWORD *)(*(_QWORD *)(v7 + 1848) + v6);
      v9 = v8[9];
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 8))-- == 1 )
        {
          v11 = (void (__fastcall ***)(void *))v8[9];
          v12 = **v11;
          if ( v12 == refcnted_regex_t__::vfunc_0 )
          {
            if ( v11 )
            {
              v13 = (*v11)[2];
              if ( (char *)v13 == (char *)refcnted_regex_t__::vfunc_2 )
              {
                *v11 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
                qregfree(v11 + 2);
                a2 = (const char *)&dword_30;
                operator delete(v11, 0x30u);
              }
              else
              {
                v13((void *)v8[9]);
              }
            }
          }
          else
          {
            v12((void *)v8[9]);
          }
        }
      }
      v14 = v8[5];
      if ( v14 )
      {
        v8[6] = 0;
        qfree(v14, a2);
      }
      v15 = v8[1];
      if ( v15 )
      {
        v8[2] = 0;
        qfree(v15, a2);
      }
      memmove(v8, v8 + 10, *(_QWORD *)(v7 + 1848) + 80LL * *(_QWORD *)(v7 + 1856) - (_QWORD)v8 - 80);
      --*(_QWORD *)(v7 + 1856);
      sub_4D39D0(a1);
    }
  }
}

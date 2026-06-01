void __fastcall sub_478720(__int64 a1, __int64 a2, char a3)
{
  _QWORD **v4; // rdi
  _QWORD *v5; // r13
  __int64 v6; // rax
  const char *v7; // rsi
  void (__fastcall *v8)(_QWORD *); // rax
  _QWORD *v9; // r12
  _QWORD *v10; // rbp
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // rdi

  v4 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24 * a2);
  if ( a3 )
  {
    v5 = *v4;
    v6 = *(_QWORD *)(a1 + 24) - a2;
    v7 = (const char *)(v4 + 3);
    memmove(v4, v4 + 3, 24 * v6 - 24);
    --*(_QWORD *)(a1 + 24);
    if ( v5 )
    {
      if ( (v5[1] & 4) != 0 )
      {
        v8 = *(void (__fastcall **)(_QWORD *))(*v5 + 16LL);
        if ( (char *)v8 == (char *)_base_app_mixin_t::execute_ui_requests )
        {
          v9 = (_QWORD *)v5[3];
          *v5 = &_base_app_mixin_t::execute_ui_requests;
          if ( v9 )
          {
            v10 = (_QWORD *)*v9;
            if ( v9 != (_QWORD *)*v9 )
            {
              do
              {
                v11 = v10[2];
                if ( v11 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
                v10 = (_QWORD *)*v10;
              }
              while ( v9 != v10 );
              v12 = (_QWORD *)*v9;
              if ( v9 != (_QWORD *)*v9 )
              {
                do
                {
                  v13 = v12;
                  v12 = (_QWORD *)*v12;
                  *(_QWORD *)v13[1] = v12;
                  v12[1] = v13[1];
                  qfree(v13, v7);
                  --v9[2];
                }
                while ( v10 != v12 );
              }
            }
            qfree(v9, v7);
          }
          v14 = v5[2];
          *v5 = &off_86FF78;
          qsem_free(v14);
          operator delete(v5, 0x28u);
        }
        else
        {
          v8(v5);
        }
      }
      else
      {
        v5[1] = -1;
        qsem_post(v5[2]);
      }
    }
  }
  else
  {
    memmove(v4, v4 + 3, 24 * (*(_QWORD *)(a1 + 24) - a2) - 24);
    --*(_QWORD *)(a1 + 24);
  }
}

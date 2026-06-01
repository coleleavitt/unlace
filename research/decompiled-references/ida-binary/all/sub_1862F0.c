void __fastcall sub_1862F0(QT::QWidget *this)
{
  char *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  volatile signed __int32 *v6; // rax
  _QWORD *v7; // rax
  void **v8; // rax
  void **v9; // r14
  void **v10; // r12
  char *v11; // rbp
  void **v12; // rbx
  __int64 v13; // rax
  char *v14; // rbp
  _QWORD *v15; // r15
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  char *v19; // [rsp+8h] [rbp-50h]
  _QWORD *v20; // [rsp+10h] [rbp-48h]
  void **v21; // [rsp+18h] [rbp-40h]

  *(_QWORD *)this = &ActionsInspector___vtable;
  *((_QWORD *)this + 5) = &ActionsInspector___vtable_at__40;
  *((_QWORD *)this + 2) = algn_87E910;
  v2 = (char *)this + 40;
  v19 = (char *)this + 40;
  unhook_event_listener(1, (char *)this + 40);
  v6 = *((volatile signed __int32 **)this + 14);
  if ( v6 )
  {
    v3 = *(unsigned int *)v6;
    if ( (_DWORD)v3 != -1 && !_InterlockedSub(v6, 1u) )
    {
      v7 = *((_QWORD **)this + 14);
      v20 = v7;
      if ( v7 )
      {
        v8 = (void **)v7[4];
        if ( v8 )
        {
          v9 = &v8[18 * (_QWORD)*(v8 - 1)];
          if ( v8 == v9 )
          {
            v17 = 0;
          }
          else
          {
            v10 = v9 - 2;
            do
            {
              v11 = (char *)*v10;
              v21 = v9;
              v9 -= 18;
              if ( *v10 )
              {
                v12 = v9;
                if ( v9 == v10 )
                  goto LABEL_19;
                do
                {
                  v13 = *(unsigned __int8 *)v12;
                  if ( (_BYTE)v13 != 0xFF )
                  {
                    v14 = &v11[32 * v13];
                    v15 = *((_QWORD **)v14 + 3);
                    while ( v15 )
                    {
                      v16 = v15;
                      v15 = (_QWORD *)v15[1];
                      operator delete(v16, 0x10u);
                    }
                    if ( *(_QWORD *)v14 && !_InterlockedSub(*(volatile signed __int32 **)v14, 1u) )
                      free(*(void **)v14);
                    v11 = (char *)*v10;
                  }
                  v12 = (void **)((char *)v12 + 1);
                }
                while ( v10 != v12 );
                if ( v11 )
LABEL_19:
                  operator delete[](v11);
              }
              v10 -= 18;
            }
            while ( (void **)v20[4] != v9 );
            v17 = 144LL * (_QWORD)*(v21 - 19);
          }
          operator delete[](v9 - 1, v17 + 8);
        }
        v2 = (char *)&qword_28;
        operator delete(v20, 0x28u);
      }
    }
  }
  v18 = *((_QWORD *)this + 9);
  if ( v18 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v18, v2, v3, v4, v5);
  }
  *((_QWORD *)this + 5) = &off_86FB08;
  remove_event_listener(v19);
  QT::QWidget::~QWidget(this);
}

unsigned __int64 __fastcall sub_47B260(__int64 a1, __int64 a2, int a3, double a4)
{
  QT::QWidget *v4; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  _QWORD *v10; // r15
  _QWORD *v11; // rbp
  __int64 *v12; // rbp
  __int64 *i; // r15
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rcx
  _QWORD v20[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 520) )
  {
    v4 = *(QT::QWidget **)(a1 + 512);
    if ( v4 )
    {
      if ( (unsigned __int8)sub_47AFB0(a1, a4) )
      {
        v7 = *(_QWORD *)(a2 + 8);
        v8 = v7 + 8LL * *(_QWORD *)(a2 + 16);
        while ( v8 != v7 )
        {
          v7 += 8;
          sub_4CB2D0(v4);
        }
      }
      else
      {
        sub_4C8870(v4, 0);
        QT::QEvent::QEvent(v20, 2006);
        v10 = *(_QWORD **)(a2 + 8);
        v20[0] = &ISaveStateEvent___vtable;
        v11 = &v10[*(_QWORD *)(a2 + 16)];
        if ( v11 != v10 )
        {
          do
            sub_51B5E0(*v10++, v20);
          while ( v11 != v10 );
          v12 = *(__int64 **)(a2 + 8);
          for ( i = &v12[*(_QWORD *)(a2 + 16)]; i != v12; ++v12 )
          {
            while ( 1 )
            {
              v16 = *v12;
              v17 = sub_4CD6B0(*v12, 0);
              v18 = sub_4B8CE0(v17);
              v19 = *(_QWORD *)a1;
              if ( v18 )
                break;
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(v19 + 248))(a1, v16, a3 | 8u);
              if ( i == ++v12 )
                goto LABEL_18;
            }
            v14 = *(__int64 (__fastcall **)(__int64, __int64))(v19 + 256);
            if ( v14 == sub_478360 )
            {
              v15 = 0;
              if ( !*(_BYTE *)(a1 + 520) )
                v15 = *(_QWORD *)(a1 + 512);
              sub_4C9900(v15, v16);
            }
            else
            {
              v14(a1, v16);
            }
          }
        }
LABEL_18:
        sub_4C8870(v4, 1);
        v20[0] = &ISaveStateEvent___vtable;
        QT::QEvent::~QEvent((QT::QEvent *)v20);
      }
    }
  }
  return v21 - __readfsqword(0x28u);
}

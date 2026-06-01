unsigned __int64 __fastcall sub_1F7A00(__int64 a1, __int64 a2, double a3)
{
  __int64 v6; // rax
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  __int64 v10; // rdi
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, double); // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rcx
  double (__fastcall *v18)(__int64, _QWORD, _BYTE *, __int64); // r15
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rax
  struct _Unwind_Exception *v22; // rbx
  _QWORD v23[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-98h]
  char v25; // [rsp+18h] [rbp-90h]
  __int64 v26; // [rsp+20h] [rbp-88h]
  __int16 v27; // [rsp+28h] [rbp-80h]
  _BYTE v28[32]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+50h] [rbp-58h]
  __int16 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F6F20(a1) )
  {
    *(_BYTE *)(a2 + 12) = 1;
  }
  else
  {
    if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
    {
      v6 = QT::QCursor::pos((QT::QCursor *)a1);
      v7 = *(_DWORD *)(a1 + 804);
      v8 = *(_DWORD *)(a1 + 808);
      v9 = v6;
      v10 = v6 >> 32;
      if ( v7 >= (int)v6 )
        v9 = v7;
      if ( v7 > (int)v6 )
        v7 = v6;
      if ( v9 - v7 > 4 )
        goto LABEL_34;
      v11 = HIDWORD(v6);
      if ( v8 >= (int)v10 )
        v11 = v8;
      if ( v8 > (int)v10 )
        v8 = v10;
      if ( v11 - v8 > 4 )
      {
LABEL_34:
        if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
          QT::QWidget::close(qword_8CCE70);
      }
    }
    v12 = 4;
    if ( *(_DWORD *)(a2 + 68) == 1 )
      v12 = 2;
    sub_1E95D0((QT::QObject *)v23, a1, v12, *(_BYTE *)(a2 + 35) & 2, -32768, a3);
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, double))(*(_QWORD *)a1 + 1032LL);
    if ( v14 == sub_1E6A90 )
    {
      if ( *(_BYTE *)(a1 + 968) )
      {
        if ( !*(_QWORD *)(a1 + 424) )
        {
          v22 = (struct _Unwind_Exception *)sub_1E69C0(a3, (__int64)v23, a1, (__int64)sub_1E6A90, v13);
          sub_1E9680((__int64)v23);
          _Unwind_Resume(v22);
        }
        v15 = *(_DWORD *)(a1 + 416);
        if ( v15 == 2 )
        {
          v16 = *(_QWORD *)(a1 + 896);
        }
        else if ( v15 == 3 )
        {
          v16 = *(_QWORD *)(a1 + 904);
        }
        else
        {
          v16 = 0;
          if ( v15 == 1 )
            v16 = *(_QWORD *)(a1 + 888);
        }
      }
      else
      {
        v16 = 0;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 432LL))(v16, a2);
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64))v14)(a1, a2);
    }
    if ( *(_QWORD *)(a1 + 288) )
    {
      v29 = -1;
      v30 = -1;
      sub_1F73F0(a1, (__int64)v28, a2, v17, a3);
      v18 = *(double (__fastcall **)(__int64, _QWORD, _BYTE *, __int64))(a1 + 288);
      v19 = *(_QWORD *)(a1 + 376);
      v20 = sub_47B6A0(QT::QCoreApplication::self, a2);
      a3 = v18(a1, v20, v28, v19);
    }
    v29 = -1;
    v30 = -1;
    sub_1F73F0(a1, (__int64)v28, a2, v17, a3);
    sub_1F4990(0xBu, a1, v28);
    QT::QBasicTimer::start(a1 + 800, dword_8BA8F0, a1);
    if ( !v25 )
    {
      v21 = v24;
      if ( v24 )
      {
        *(_QWORD *)(v24 + 948) = v26;
        *(_WORD *)(v21 + 956) = v27;
      }
    }
    v23[0] = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v23);
  }
  return v31 - __readfsqword(0x28u);
}

unsigned __int64 __fastcall sub_17E590(__int64 a1, __int64 a2)
{
  _QWORD *(*v2)(); // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r13
  _QWORD *(*v5)(); // rax
  _QWORD *v6; // rbp
  char **v7; // rbx
  char **v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+0h] [rbp-38h]
  int v16; // [rsp+0h] [rbp-38h]
  int v17; // [rsp+0h] [rbp-38h]
  int v18; // [rsp+0h] [rbp-38h]
  char v19; // [rsp+7h] [rbp-31h] BYREF
  int v20[2]; // [rsp+8h] [rbp-30h]
  int v21; // [rsp+10h] [rbp-28h]
  __int64 v22; // [rsp+18h] [rbp-20h]
  __int64 v23; // [rsp+20h] [rbp-18h]
  int v24; // [rsp+28h] [rbp-10h]
  __int64 v25; // [rsp+30h] [rbp-8h]

  v2 = sub_178D20;
  *(_QWORD *)v20 = __readfsqword(0x28u);
  v3 = 0;
  v4 = QT::QCoreApplication::self;
  v5 = *(_QWORD *(**)())(*QT::QCoreApplication::self + 528LL);
  if ( v5 == sub_178D20 )
  {
    v6 = QT::QCoreApplication::self + 132;
    if ( !QT::QCoreApplication::self )
      v6 = nullptr;
  }
  else
  {
    v6 = (_QWORD *)((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD *(*)(), _QWORD))v5)(
                     QT::QCoreApplication::self,
                     a2,
                     sub_178D20,
                     0);
  }
  v7 = &off_8A5060;
  do
  {
    v8 = v7;
    v7 += 18;
    sub_5383D0(v6, v8, v2, v3);
  }
  while ( v7 != (char **)&off_8BA300 );
  sub_5348E0("Undo", v15, v20[0], v21, v22, v23, v24, v25);
  sub_5348E0("Redo", v16, v20[0], v21, v22, v23, v24, v25);
  sub_5348E0("Quit", v17, v20[0], v21, v22, v23, v24, v25);
  sub_5348E0("msglist:Clear", v18, v20[0], v21, v22, v23, v24, v25);
  v9 = sub_426230("msglist:Clear", "OutputClearContents");
  v19 = sub_418320(v9);
  v10 = sub_5313F0(qword_8CAB28);
  if ( v10 )
    sub_537630(v10, 7, &v19);
  v19 = sub_418330(v9);
  v11 = sub_5313F0(qword_8CAB38);
  if ( v11 )
    sub_537630(v11, 7, &v19);
  v19 = *((_BYTE *)v4 + 745);
  v12 = sub_5313F0(qword_8C98B8);
  if ( v12 )
    sub_537630(v12, 7, &v19);
  v19 = *((_BYTE *)v4 + 744);
  v13 = sub_5313F0(qword_8C98E8);
  if ( v13 )
    sub_537630(v13, 7, &v19);
  return *(_QWORD *)v20 - __readfsqword(0x28u);
}

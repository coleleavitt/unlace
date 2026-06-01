unsigned __int64 __fastcall sub_271EE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  const QT::QObject *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _BYTE v13[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 40);
  v14 = __readfsqword(0x28u);
  v5 = (const QT::QObject *)sub_277C30(v3);
  v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v5);
  if ( v6 )
  {
    v7 = v6;
    if ( *(_QWORD *)(sub_277DF0() + 112) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 816LL))(v7, *(_QWORD *)(a3 + 40));
      v9 = sub_277DF0();
      v10 = sub_2781D0(v9, v8, &v12);
      sub_277BE0(v13, v9);
      if ( v10 && v12 != *(_QWORD *)(v9 + 120) )
      {
        sub_278850(v9, v12, 0, 0, 0);
        sub_278AD0(v13);
      }
      else
      {
        sub_278AD0(v13);
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}

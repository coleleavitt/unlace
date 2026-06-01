void __fastcall sub_4F2E80(QT::QObject *a1)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 (*v5)(); // rax
  unsigned int v6; // eax
  void (__fastcall *v7)(__int64); // rax
  __int64 v8; // rax

  v8 = QT::QObject::sender(a1);
  if ( !v8 || (*(_BYTE *)(*(_QWORD *)(v8 + 8) + 48LL) & 1) == 0 )
  {
    nullsub_344();
    return;
  }
  v2 = sub_4F23C0((__int64)a1, v8, 14, 0);
  if ( v2 )
  {
    v3 = sub_4F5C00(*((_QWORD *)a1 + 5));
    if ( v3 )
    {
      v4 = *((_QWORD *)a1 + 5);
      v5 = *(__int64 (**)())(*(_QWORD *)v4 + 40LL);
      if ( v5 == forms::abstract_form_desc_t__::vfunc_5
        || !((unsigned __int8 (__fastcall *)(__int64, __int64))v5)(v4, v2) )
      {
        v6 = *(_DWORD *)(v2 + 132);
        if ( v6 <= 4 )
        {
          if ( v6 > 2 )
          {
            v7 = *(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 448LL);
          }
          else
          {
            if ( v6 - 1 > 1 )
              return;
            v7 = *(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 440LL);
          }
          v7(v3);
          return;
        }
        if ( v6 == 5 )
          (*(void (__fastcall **)(_QWORD *, __int64))(QT::QCoreApplication::self[2] + 136LL))(
            QT::QCoreApplication::self + 2,
            *((_QWORD *)a1 + 5) + 208LL);
      }
    }
  }
}

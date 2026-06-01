__int64 __fastcall registry_persistent_t__::vfunc_4(__int64 a1, const QT::QString *a2, char a3)
{
  __int64 (__fastcall *v3)(__int64, const QT::QString *); // rax
  unsigned int v4; // ebp
  void *v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v6[3] = (void *)__readfsqword(0x28u);
  if ( a3 )
    goto LABEL_5;
  v3 = *(__int64 (__fastcall **)(__int64, const QT::QString *))(*(_QWORD *)a1 + 24LL);
  if ( v3 == registry_persistent_t__::vfunc_3 )
  {
    QT::QString::toUtf8_helper((QT::QString *)v6, a2);
    v4 = reg_subkey_exists();
    sub_17F470(v6);
  }
  else
  {
    v4 = v3(a1, a2);
  }
  if ( (_BYTE)v4 )
  {
LABEL_5:
    v4 = 1;
    QT::QString::operator=(a1 + 8, a2);
  }
  return v4;
}

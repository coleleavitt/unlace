__int64 __fastcall sub_4F24E0(QT::QObject *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 (*v3)(); // rdx

  result = QT::QObject::sender(a1);
  if ( result )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(result + 8) + 48LL) & 1) != 0 )
    {
      result = sub_4F23C0((__int64)a1, result, 10, 0);
      if ( result )
      {
        v2 = *((_QWORD *)a1 + 5);
        v3 = *(__int64 (**)())(*(_QWORD *)v2 + 40LL);
        if ( v3 != forms::abstract_form_desc_t__::vfunc_5 )
          return ((__int64 (__fastcall *)(__int64, __int64))v3)(v2, result);
      }
    }
  }
  return result;
}

__int64 __fastcall sub_4F2460(QT::QObject *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  _QWORD *v4; // r13
  __int64 v5; // rdi

  result = QT::QObject::sender(a1);
  if ( result )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(result + 8) + 48LL) & 1) != 0 )
    {
      result = sub_4F23C0((__int64)a1, result, 15, 0);
      v3 = result;
      if ( result )
      {
        v4 = *(_QWORD **)(result + 104);
        *v4 = sub_51A470(a2);
        v5 = *((_QWORD *)a1 + 5);
        result = *(_QWORD *)(*(_QWORD *)v5 + 48LL);
        if ( (void (*)())result != nullsub_40 )
          return ((__int64 (__fastcall *)(__int64, __int64))result)(v5, v3);
      }
    }
  }
  return result;
}

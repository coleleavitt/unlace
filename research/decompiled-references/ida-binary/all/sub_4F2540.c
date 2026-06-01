_BYTE *__fastcall sub_4F2540(QT::QObject *a1, char a2)
{
  __int64 v2; // rax
  _BYTE *result; // rax
  int v4; // edx
  __int64 v5; // r11
  __int64 v6; // rdi
  void (*v7)(); // rdx

  v2 = QT::QObject::sender(a1);
  result = *(_BYTE **)(sub_4F23C0((__int64)a1, v2, 0, 0) + 104);
  *result = a2;
  if ( v5 )
  {
    result = *(_BYTE **)(v5 + 8);
    if ( (result[48] & 1) != 0 )
    {
      result = (_BYTE *)sub_4F23C0((__int64)a1, v5, v4, 0);
      if ( result )
      {
        v6 = *((_QWORD *)a1 + 5);
        v7 = *(void (**)())(*(_QWORD *)v6 + 32LL);
        if ( v7 != nullsub_39 )
          return (_BYTE *)((__int64 (__fastcall *)(__int64, _BYTE *))v7)(v6, result);
      }
    }
  }
  return result;
}

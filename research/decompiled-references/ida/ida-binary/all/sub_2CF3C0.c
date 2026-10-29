__int64 __fastcall sub_2CF3C0(QT::QFrame *a1, __int64 a2, double a3)
{
  __int64 result; // rax

  sub_1F8760(a1, a2, a3);
  result = *((_QWORD *)a1 + 91);
  if ( *(_BYTE *)(result + 32) )
    return (*(__int64 (__fastcall **)(QT::QFrame *))(*(_QWORD *)a1 + 664LL))(a1);
  return result;
}

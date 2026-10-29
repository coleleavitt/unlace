__int64 __fastcall sub_2DF500(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax

  if ( (sub_47B6A0(QT::QCoreApplication::self, a2) & 4) == 0
    || (v5 = sub_5313F0(unk_8C9E98)) == 0
    || (result = sub_5314B0(v5), !(_BYTE)result) )
  {
    v7 = sub_1EB5B0(a1, a2, v3, v4, a3);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 464LL))(v7, a2);
  }
  return result;
}

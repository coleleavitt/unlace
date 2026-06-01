__int64 __fastcall sub_2F1D80(const char *a1, __int64 a2, double a3)
{
  _QWORD *v5; // rdi
  __int64 result; // rax
  __int64 ph; // rbx
  __int64 v8; // rdx
  __int64 current_config; // rax
  __int64 v10; // rdx

  v5 = QT::QCoreApplication::self + 2;
  result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(QT::QCoreApplication::self[2] + 40LL))(
             QT::QCoreApplication::self + 2,
             a1,
             a2);
  if ( (int)result <= 3 )
  {
    ph = get_ph(v5, a1);
    v8 = (unsigned int)netnode_inited(a3);
    result = 5;
    if ( (_BYTE)v8 )
    {
      if ( (*(_BYTE *)(ph + 12) & 0x20) != 0 )
      {
        current_config = get_current_config(v5, a1, v8);
        if ( current_config )
        {
          v10 = *(_QWORD *)(current_config + 640);
          result = 2;
          if ( *(_QWORD *)(v10 + 16) <= 1u )
            return 6;
        }
        else
        {
          return 7;
        }
      }
    }
  }
  return result;
}

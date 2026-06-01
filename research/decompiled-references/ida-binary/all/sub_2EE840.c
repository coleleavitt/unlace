__int64 __fastcall sub_2EE840(const char *a1, __int64 a2, char a3, double a4)
{
  _QWORD *v7; // rdi
  __int64 result; // rax
  __int64 ph; // rbp
  __int64 v10; // rdx
  __int64 current_config; // rax
  __int64 v12; // rdx

  v7 = QT::QCoreApplication::self + 2;
  result = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(QT::QCoreApplication::self[2] + 40LL))(
             QT::QCoreApplication::self + 2,
             a1,
             a2);
  if ( (int)result <= 3 )
  {
    ph = get_ph(v7, a1);
    if ( (unsigned __int8)netnode_inited(a4) && (*(_BYTE *)(ph + 12) & 0x20) != 0 )
    {
      if ( (a3 & 0xC) == 0 )
      {
LABEL_6:
        result = 2;
        if ( (a3 & 1) == 0 )
          return (a3 & 2) == 0 ? 3 : 1;
        return result;
      }
      current_config = get_current_config(v7, a1, v10);
      if ( !current_config )
        return 7;
      v12 = *(_QWORD *)(current_config + 640);
      if ( (a3 & 4) != 0 )
        v12 = *(_QWORD *)(current_config + 632);
      if ( *(_QWORD *)(v12 + 16) > 1u )
        goto LABEL_6;
      result = 6;
      if ( (a3 & 1) != 0 )
        return result;
      if ( (a3 & 2) == 0 )
        return 7;
    }
    return 5;
  }
  return result;
}

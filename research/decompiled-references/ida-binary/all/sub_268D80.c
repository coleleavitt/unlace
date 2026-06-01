__int64 __fastcall sub_268D80(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // r9d
  unsigned int v6; // r12d
  const char *v7; // rsi

  v3 = a3 | (8 * *(unsigned __int8 *)(a1 + 24));
  v4 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*QT::QCoreApplication::self + 336LL))(
         QT::QCoreApplication::self,
         a2,
         v3);
  v6 = v4;
  if ( a1 && (_BYTE)v4 && (v3 & 0x40000000) == 0 )
  {
    v7 = &s1;
    if ( *(_QWORD *)(a1 + 8) )
      v7 = *(const char **)a1;
    callui(186, (_DWORD)v7, *(unsigned __int8 *)(a1 + 24), *(unsigned __int8 *)(a1 + 25), (_DWORD)callui, v5);
  }
  return v6;
}

__int64 __fastcall sub_49EF20(__int64 a1, __int64 a2, double a3)
{
  __int64 (*v3)(); // rdx
  __int64 (*v4)(); // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = addon_chooser_t__::vfunc_4;
  v4 = *(__int64 (**)())(*(_QWORD *)a1 + 32LL);
  if ( v4 == addon_chooser_t__::vfunc_4 || (result = v4(), (_BYTE)result) )
  {
    v5 = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1;
    if ( *(_BYTE *)(a1 + 8) > 3u )
    {
      if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
      {
        sub_49AF50(a3, a1, a2, (__int64)v3, v5);
        return sub_49EFB0();
      }
      LODWORD(v5) = *(char *)(a1 + 11);
    }
    if ( (int)v5 >= 0 )
    {
      if ( QT::QCoreApplication::self )
        (*(void (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64, _QWORD))(QT::QCoreApplication::self[2]
                                                                                     + 176LL))(
          QT::QCoreApplication::self + 2,
          (unsigned __int64)((v5 & 0x40) == 0) << v5,
          (unsigned __int64)((v5 & 0x40) != 0) << v5,
          0);
    }
    return 1;
  }
  return result;
}

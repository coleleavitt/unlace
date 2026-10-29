__int64 __fastcall help_ah_t__::vfunc_0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi

  v2 = *((unsigned int *)a2 + 2);
  v3 = *a2;
  if ( (_DWORD)v2 == 36 || (v4 = 0, (_DWORD)v2 == 41) )
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 2392) + 16LL))(*(_QWORD *)(v3 + 2392));
  v5 = *(_QWORD *)(v4 + 96);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(QT::QCoreApplication::self[2] + 136LL))(
      QT::QCoreApplication::self + 2,
      v5 + 8,
      v2,
      v3);
  return 0;
}

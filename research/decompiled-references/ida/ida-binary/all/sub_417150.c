__int64 __fastcall sub_417150(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 192LL);
  if ( !v2 )
  {
    v4 = operator new(0x30u);
    *(_DWORD *)(v4 + 8) = 0;
    *(_QWORD *)(v4 + 24) = v4 + 8;
    *(_QWORD *)(v4 + 32) = v4 + 8;
    v5 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 40) = 0;
    *(_QWORD *)(v5 + 192) = v4;
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 192LL);
  }
  sub_4144C0(*(void **)(v2 + 16), a2);
  result = v2 + 8;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = v2 + 8;
  *(_QWORD *)(v2 + 32) = v2 + 8;
  *(_QWORD *)(v2 + 40) = 0;
  if ( (_BYTE)a2 )
    return (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, __int64))(QT::QCoreApplication::self[2] + 176LL))(
             QT::QCoreApplication::self + 2,
             0x8000000000000000LL,
             0,
             1);
  return result;
}

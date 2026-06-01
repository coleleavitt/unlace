__int64 __fastcall sub_510480(__int64 a1, _BYTE *a2)
{
  void (__fastcall *v2)(__int64, char); // rbp
  __int64 result; // rax

  v2 = *(void (__fastcall **)(__int64, char))(*(_QWORD *)a2 + 16LL);
  result = QT::QWidget::close(*(QT::QWidget **)(a1 + 56));
  if ( v2 != IRendererUpdateModel__::vfunc_2 )
    return ((__int64 (__fastcall *)(_BYTE *, _QWORD))v2)(a2, (unsigned __int8)result);
  a2[12] = result;
  return result;
}

__int64 __fastcall form_actions_impl_t__::vfunc_5(__int64 a1)
{
  _QWORD *v1; // rdx
  int v2; // r13d
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  QT::QWidget *v7; // rdi

  v1 = *(_QWORD **)(a1 + 24);
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL) & 0x8000;
  if ( !v1[1] )
    return 0xFFFFFFFFLL;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *v1 + 72 * v5;
      v7 = *(QT::QWidget **)v6;
      if ( !*(_QWORD *)v6 || (*(_BYTE *)(*((_QWORD *)v7 + 1) + 48LL) & 1) == 0 )
        goto LABEL_4;
      if ( v2 )
        break;
      if ( v7 == *(QT::QWidget **)(*(_QWORD *)(a1 + 8) + 304LL) )
        return *(unsigned int *)(v6 + 56);
LABEL_4:
      v5 = ++v4;
      if ( (unsigned __int64)v4 >= v1[1] )
        return 0xFFFFFFFFLL;
    }
    if ( (unsigned __int8)QT::QWidget::hasFocus(v7) )
      return *(unsigned int *)(v6 + 56);
    v1 = *(_QWORD **)(a1 + 24);
    v5 = ++v4;
    if ( (unsigned __int64)v4 >= v1[1] )
      return 0xFFFFFFFFLL;
  }
}

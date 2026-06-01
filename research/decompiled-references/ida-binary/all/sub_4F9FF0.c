__int64 __fastcall form_actions_impl_t__::vfunc_15(__int64 a1, int a2, int a3, int a4, bool *a5)
{
  __int64 *v5; // rax
  unsigned __int64 v7; // rdi
  __int64 v9; // r9
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  char v15; // al
  const QT::QObject *v16; // rsi

  v5 = *(__int64 **)(a1 + 24);
  v7 = v5[1];
  if ( !v7 )
    return 0;
  v9 = *v5;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = v9 + 72 * v11;
    v14 = *(_DWORD *)(v13 + 56);
    if ( a2 == v14 )
    {
      v15 = *(_BYTE *)(v13 + 52);
      v16 = *(const QT::QObject **)v13;
      goto LABEL_7;
    }
    if ( v14 == -a2 )
      break;
    v11 = ++v12;
    if ( v12 >= v7 )
      return 0;
  }
  v15 = *(_BYTE *)(v13 + 52);
  v16 = nullptr;
LABEL_7:
  if ( v15 == 61 )
    return sub_4F9F50(*(_QWORD *)(a1 + 8), v16, a3, a4, a5);
  return 0;
}

__int64 __fastcall form_actions_impl_t__::vfunc_16(__int64 a1, _BYTE *a2, int a3, int a4, int a5)
{
  __int64 *v5; // rax
  unsigned __int64 v7; // rdi
  __int64 v11; // r9
  int v13; // edx
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // rcx
  int v17; // eax
  char v18; // al
  const QT::QObject *v19; // rdx

  v5 = *(__int64 **)(a1 + 24);
  v7 = v5[1];
  if ( !v7 )
    return 0;
  v11 = *v5;
  v13 = 0;
  v14 = 0;
  v15 = -a3;
  while ( 1 )
  {
    v16 = v11 + 72 * v14;
    v17 = *(_DWORD *)(v16 + 56);
    if ( a3 == v17 )
    {
      v18 = *(_BYTE *)(v16 + 52);
      v19 = *(const QT::QObject **)v16;
      goto LABEL_7;
    }
    if ( v17 == v15 )
      break;
    v14 = ++v13;
    if ( v13 >= v7 )
      return 0;
  }
  v18 = *(_BYTE *)(v16 + 52);
  v19 = nullptr;
LABEL_7:
  if ( v18 == 61 )
    return sub_4FA070(*(_QWORD *)(a1 + 8), a2, v19, a4, a5);
  return 0;
}

_QWORD *__fastcall sub_704780(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  int v13; // eax

  v6 = *a1;
  v7 = *a1 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*a1 & 1) == 0 )
  {
    if ( v7 <= 3 )
      return nullptr;
    result = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v9 = *(_DWORD *)a1 & 2;
    if ( !(_DWORD)v9 )
      return result;
    v10 = sub_6E2500(result, a2, v9, a4, a5, a6);
    v6 = v10 | 1;
    *a1 = v10 | 1;
    v7 = v10 & 0xFFFFFFFFFFFFFFFELL;
  }
  result = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v11 = result;
  if ( !v7 || (v7 & 4) == 0 )
    return result;
  if ( !result )
    return nullptr;
  v12 = *result;
  v13 = *(_DWORD *)(*result + 12LL);
  if ( *((_DWORD *)v11 + 2) != v13 )
  {
    *((_DWORD *)v11 + 2) = v13;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 152LL))(v12, a2);
  }
  return (_QWORD *)v11[2];
}

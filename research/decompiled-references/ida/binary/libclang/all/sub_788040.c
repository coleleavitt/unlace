_QWORD *__fastcall sub_788040(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  _QWORD *result; // rax
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  int v8; // eax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = v2 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v2 & 1) == 0 )
  {
    if ( v3 <= 3 )
      return nullptr;
    result = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v3 & 2) == 0 )
      return result;
    v5 = sub_6D4E90(result, a1);
    v2 = v5 | 1;
    *(_QWORD *)(a1 + 64) = v5 | 1;
    v3 = v5 & 0xFFFFFFFFFFFFFFFELL;
  }
  result = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  v6 = result;
  if ( v3 && (v3 & 4) != 0 )
  {
    if ( !result )
      return nullptr;
    v7 = *result;
    v8 = *(_DWORD *)(*result + 12LL);
    if ( *((_DWORD *)v6 + 2) != v8 )
    {
      *((_DWORD *)v6 + 2) = v8;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 144LL))(v7, a1);
    }
    return (_QWORD *)v6[2];
  }
  return result;
}


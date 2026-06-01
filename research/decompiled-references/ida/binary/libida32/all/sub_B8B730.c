_QWORD *__fastcall sub_B8B730(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v6 = *a1;
  v7 = *a1 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*a1 & 1) == 0 )
  {
    v9 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v6 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v10 = v6 & 2;
      result = v9;
      if ( !(_DWORD)v10 )
        return result;
      v7 = sub_6C1EC0(v9, a2, v10, v7, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v6 = v7 | 1;
      *a1 = v7 | 1;
    }
  }
  v12 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  result = (_QWORD *)v12;
  if ( v7 )
  {
    if ( (v7 & 4) != 0 )
    {
      result = nullptr;
      if ( v12 )
      {
        v13 = *(_QWORD *)v12;
        v14 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
        if ( *(_DWORD *)(v12 + 8) != v14 )
        {
          *(_DWORD *)(v12 + 8) = v14;
          v15 = v12;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 152LL))(v13, a2);
          v12 = v15;
        }
        return *(_QWORD **)(v12 + 16);
      }
    }
  }
  return result;
}


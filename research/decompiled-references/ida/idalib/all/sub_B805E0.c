_QWORD *__fastcall sub_B805E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *result; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // [rsp+8h] [rbp-10h]

  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(_QWORD *)(v6 + 72);
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) == 0 )
  {
    v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v10 = v7 & 2;
      result = v9;
      if ( !(_DWORD)v10 )
        return result;
      v8 = sub_6E2500(v9, v6, v10, v8, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v7 = v8 | 1;
      *(_QWORD *)(v6 + 72) = v8 | 1;
    }
  }
  v12 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  result = (_QWORD *)v12;
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
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
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 152LL))(v13, v6);
          v12 = v15;
        }
        return *(_QWORD **)(v12 + 16);
      }
    }
  }
  return result;
}

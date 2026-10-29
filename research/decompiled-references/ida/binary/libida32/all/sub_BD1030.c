__int64 __fastcall sub_BD1030(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rsi
  __int64 v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 2264) + 80LL);
  v8 = *(_QWORD *)(v7 + 72);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) == 0 )
  {
    v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v11 = v8 & 2;
      v12 = v10;
      if ( !(_DWORD)v11 )
        return (*(__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64))(*(_QWORD *)a1 + 56LL))(a1, v12, v11);
      v9 = sub_6C1EC0(v10, v7, v11, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v8 = v9 | 1;
      *(_QWORD *)(v7 + 72) = v9 | 1;
    }
  }
  v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = (_QWORD *)v11;
  if ( v9 )
  {
    if ( (v9 & 4) != 0 )
    {
      v12 = nullptr;
      if ( v11 )
      {
        v14 = *(_QWORD *)v11;
        v15 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
        if ( *(_DWORD *)(v11 + 8) != v15 )
        {
          *(_DWORD *)(v11 + 8) = v15;
          v16 = v11;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 152LL))(v14, v7);
          v11 = v16;
        }
        v12 = *(_QWORD **)(v11 + 16);
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64))(*(_QWORD *)a1 + 56LL))(a1, v12, v11);
}


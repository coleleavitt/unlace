__int64 __fastcall sub_158D40(__int64 a1, __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _DWORD *v7; // rdi
  _DWORD **v8; // rax
  _DWORD **v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax

  nullsub_40();
  v5 = *(_QWORD *)(a1 + 760);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, v5);
  v7 = *(_DWORD **)(sub_F2E40(a2, v5) + 216);
  if ( v7 )
  {
    v8 = (_DWORD **)(v7 + 14);
    v9 = (_DWORD **)(v7 + 20);
    while ( 1 )
    {
      v7 = *v8;
      if ( *v8 )
      {
        if ( (unsigned int)*(_QWORD *)(a1 + 168) == v7[2] )
          break;
      }
      if ( ++v8 == v9 )
      {
        v7 = nullptr;
        break;
      }
    }
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 152LL);
  if ( v10 == sub_155240 )
    return v6;
  else
    return v10((__int64)v7, v6);
}


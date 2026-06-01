__int64 __fastcall sub_5A0820(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _DWORD *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64, __int64, unsigned int); // r8
  void *v8; // rbx
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(void (__fastcall ***)(_QWORD)); // rdx

  v3 = a1 + 64;
  v4 = *(_DWORD **)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 96);
  v6 = *(_QWORD *)v4;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)v4 + 72LL);
  if ( v7 != sub_4EA4F0 )
    return v7((__int64)v4, a2, v3, v5);
  if ( v4[2] == v5 || v5 == -1 )
    return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(v6 + 64))(v4, a2, v3);
  v8 = (void *)(*(__int64 (__fastcall **)(_DWORD *, __int64))(v6 + 48))(v4, v3);
  v9 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v8 + 128LL))(v8, a2);
  v10 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v8 + 16LL);
  if ( v10 == sub_4C9C10 )
  {
    (**(void (__fastcall ***)(void *))v8)(v8);
    sub_186B220(v8);
  }
  else
  {
    v10((void (__fastcall ***)(_QWORD))v8);
  }
  return v9;
}


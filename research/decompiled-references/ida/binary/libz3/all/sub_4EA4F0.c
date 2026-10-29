__int64 __fastcall sub_4EA4F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64); // r8
  void *v6; // rbp
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rcx

  v4 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) == a4 || a4 == -1 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v4 + 64);
    if ( v10 != sub_4EA370 )
      return v10(a1, a2, a3);
  }
  else
  {
    v5 = *(__int64 (__fastcall **)(__int64))(v4 + 48);
    if ( v5 != sub_4DD980 )
    {
      v6 = (void *)((__int64 (__fastcall *)(__int64, __int64, _QWORD))v5)(a1, a3, a4);
      goto LABEL_5;
    }
  }
  v6 = (void *)(*(__int64 (__fastcall **)(__int64, __int64))(v4 + 40))(a1, a3);
LABEL_5:
  v7 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 128LL))(v6, a2);
  v8 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v6 + 16LL);
  if ( v8 == sub_4C9C10 )
  {
    (**(void (__fastcall ***)(void *))v6)(v6);
    sub_186B220(v6);
  }
  else
  {
    v8((void (__fastcall ***)(_QWORD))v6);
  }
  return v7;
}


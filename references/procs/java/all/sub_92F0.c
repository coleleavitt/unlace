__int64 __fastcall sub_92F0(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 v4; // rdx
  void (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 module_data; // rax
  __int64 v10; // rdx
  char v12; // al
  void (__fastcall *v13)(__int64, _QWORD); // rbp
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, __int64); // rbp

  v4 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24);
  v5 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL);
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    v5(a1, 32);
    v12 = sub_FDF0(a1, &aSignature[a3 == 0]);
    v10 = 1;
    if ( v12 )
      return 1;
  }
  else
  {
    v5(a1, 4);
    v8 = (int)sub_FB40(a1, "User type: ", 0, v6, v7);
    module_data = get_module_data((unsigned int)dword_2D4F4);
    *(_QWORD *)(module_data + 176) += v8;
    if ( a3 )
    {
      v10 = 8;
      if ( a3 <= 0 )
      {
        if ( (unsigned __int8)sub_10630(a1, a2, 4, 0)
          || (unsigned __int8)sub_10630(a1, a2, 5, 0)
          || (unsigned __int8)sub_117A0(a1)
          || (unsigned __int8)sub_10630(a1, a2, 6, 0)
          || (unsigned __int8)sub_10630(a1, a2, 7, 0) )
        {
          return 1;
        }
        v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL);
        if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
          v15(a1, 32);
        else
          v15(a1, 4);
        return sub_FBC0(a1, 0);
      }
    }
    else
    {
      v10 = 9;
    }
  }
  if ( (unsigned __int8)sub_10630(a1, a2, v10, 0) )
    return 1;
  v13 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL);
  v14 = get_module_data((unsigned int)dword_2D4F4);
  v13(a1, (*(_BYTE *)(*(_QWORD *)(v14 + 24) + 4LL) & 1) == 0 ? 4 : 32);
  if ( a3 || (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
    return sub_FBC0(a1, 0);
  return sub_117A0(a1);
}

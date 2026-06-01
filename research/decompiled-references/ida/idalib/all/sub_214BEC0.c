__int64 __fastcall sub_214BEC0(__int64 a1)
{
  _DWORD **v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64, unsigned __int64, _QWORD); // rbp
  unsigned __int64 v6; // rax
  const char *v8; // [rsp+0h] [rbp-48h] BYREF
  __int16 v9; // [rsp+20h] [rbp-28h]

  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(v3 + 24);
    v5 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v4 + 176LL);
    v6 = sub_21097F0(
           *(_QWORD *)(v3 + 16),
           (__int64)"__TEXT",
           6,
           (__int64)"__symbol_stub",
           13,
           -2147483640,
           16,
           2,
           nullptr);
    v5(v4, v6, 0);
    return 0;
  }
  else
  {
    v8 = "unexpected token in section switching directive";
    v9 = 259;
    return sub_21543E0(v2, &v8, 0, 0);
  }
}

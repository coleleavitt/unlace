void __fastcall sub_183060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void (*v4)(void); // rax
  __int64 v5; // rax
  void (__fastcall *v6)(__int64, unsigned __int64); // rax

  v4 = *(void (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v4 == (char *)sub_183000 )
  {
    sub_182AA0(a1 + 1208, a2, (__int64)sub_183000, a4);
    v5 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 1760) &= ~2u;
    v6 = *(void (__fastcall **)(__int64, unsigned __int64))(v5 + 136);
    if ( v6 == sub_17EEE0 )
      sub_17EDE0((_QWORD *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFLL);
    else
      v6(a1, -1uLL);
  }
  else
  {
    v4();
  }
}


void __fastcall sub_183000(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  void (__fastcall *v5)(__int64, unsigned __int64); // rax

  sub_182AA0(a1 + 1208, a2, a3, a4);
  v4 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 1760) &= ~2u;
  v5 = *(void (__fastcall **)(__int64, unsigned __int64))(v4 + 136);
  if ( v5 == sub_17EEE0 )
    sub_17EDE0((_QWORD *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFLL);
  else
    v5(a1, -1uLL);
}


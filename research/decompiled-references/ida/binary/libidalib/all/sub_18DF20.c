void __fastcall sub_18DF20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // rbp
  char v5; // al
  void (__fastcall *v6)(void *); // rax

  if ( *(_QWORD *)(a1 + 16) > 1u )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, 0);
    ++*(_DWORD *)(a1 + 32);
    v4 = (void *)v3;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2, a1 + 8);
    --*(_DWORD *)(a1 + 32);
    if ( !v5 )
    {
      if ( *(_QWORD *)(a1 + 16) )
        sub_8F740((__int64)"String \"%s\" not found\n", *(const char **)(a1 + 8));
      else
        sub_8F740((__int64)"String \"%s\" not found\n", s1);
    }
    if ( v4 )
    {
      v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL);
      if ( v6 == sub_18DEC0 )
        operator delete(v4, 8u);
      else
        v6(v4);
    }
  }
}


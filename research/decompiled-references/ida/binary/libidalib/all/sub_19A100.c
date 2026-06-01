void __fastcall sub_19A100(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, void *); // rcx
  __int64 v5; // rax
  void (__fastcall *v6)(void *); // rdx

  v1 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)a1 = &off_235FB8;
  if ( !v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
    v4 = *(void (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL);
    v5 = *(_QWORD *)(a1 + 8);
    if ( v4 == sub_199BB0 )
    {
      if ( v5 )
      {
        v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL);
        if ( v6 == sub_199840 )
          operator delete(*(void **)(a1 + 8), 0x10u);
        else
          v6(*(void **)(a1 + 8));
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, _QWORD, __int64))v4)(v3, *(_QWORD *)(a1 + 8), 1);
    }
  }
}


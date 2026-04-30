__int64 __fastcall lineslist_idaplace_t__::vfunc_1(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned int v3; // edx
  unsigned int v5; // edx
  _QWORD *func; // rax
  _QWORD *v7; // rdx

  v2 = *(_BYTE *)(a1 + 56);
  if ( v2 == 1 )
  {
    func = (_QWORD *)get_func(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    v3 = 1;
    if ( !func )
      return v3;
    v7 = *(_QWORD **)(a1 + 64);
    LOBYTE(v7) = *v7 != *func;
    return (unsigned int)v7;
  }
  else
  {
    if ( v2 != 3 )
    {
      v3 = 0;
      if ( !v2 )
        LOBYTE(v3) = *(_QWORD *)(a1 + 40) < (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 128LL))(
                                                                *(_QWORD *)(a1 + 24),
                                                                a2,
                                                                0);
      return v3;
    }
    LOBYTE(v5) = *(_QWORD *)(a1 + 48) < (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24)
                                                                                            + 128LL))(*(_QWORD *)(a1 + 24));
    return v5;
  }
}

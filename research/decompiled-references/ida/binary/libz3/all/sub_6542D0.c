void __fastcall sub_6542D0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rdi

  if ( a3 )
  {
    sub_654200(a1, 0);
    v6 = *(_QWORD *)(a1 + 2968);
    if ( v6 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v6 + 312LL))(v6, a2, a3, a4);
  }
}


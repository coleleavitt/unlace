void __fastcall deskcfg_t__::vfunc_1(void *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  void (__fastcall ***v7)(_QWORD); // rdi
  __int64 v8; // rdi

  *(_QWORD *)a1 = &deskcfg_t___vtable;
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 8);
    if ( v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = (void (__fastcall ***)(_QWORD))(v5 + v3);
        ++v6;
        v5 += 56;
        (**v7)(v7);
        v3 = *((_QWORD *)a1 + 7);
      }
      while ( v4 != v6 );
    }
    *((_QWORD *)a1 + 8) = 0;
    qfree(v3, a2);
  }
  v8 = *((_QWORD *)a1 + 6);
  *(_QWORD *)a1 = &deskcfg_target_t___vtable;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  sub_16D970((void **)a1 + 2);
  operator delete(a1, 0x50u);
}

void __fastcall ida_deskcfg_t__::vfunc_0(void **a1, const char *a2)
{
  void **v3; // rdi
  char *v4; // rdi
  char *v5; // r13
  __int64 v6; // r12
  char *v7; // rbp
  char *v8; // rdi
  void *v9; // rdi

  v3 = a1 + 13;
  *(v3 - 13) = &ida_deskcfg_t___vtable;
  sub_16D970(v3);
  sub_16D970(a1 + 10);
  v4 = (char *)a1[7];
  *a1 = &deskcfg_t___vtable;
  if ( v4 )
  {
    v5 = (char *)a1[8];
    if ( v5 )
    {
      v6 = 0;
      v7 = nullptr;
      do
      {
        v8 = &v4[v6];
        ++v7;
        v6 += 56;
        (**(void (__fastcall ***)(char *))v8)(v8);
        v4 = (char *)a1[7];
      }
      while ( v5 != v7 );
    }
    a1[8] = nullptr;
    qfree(v4, a2);
  }
  v9 = a1[6];
  *a1 = &deskcfg_target_t___vtable;
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  sub_16D970(a1 + 2);
}

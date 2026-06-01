void __fastcall sub_91870(__int64 a1, void *a2, char a3)
{
  void *v3; // r12
  __int64 *i; // rax
  __int64 *v6; // rbp
  void (__fastcall *v7)(void *); // rax

  v3 = a2;
  if ( !(unsigned __int8)sub_10E220() && ((a3 & 1) != 0 || *(_BYTE *)(a1 + 21)) )
  {
    if ( !a2 )
      v3 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 21) = 0;
    for ( i = *(__int64 **)(a1 + 32); (__int64 *)(a1 + 32) != i; i = v6 )
    {
      v6 = (__int64 *)*i;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)i[2] + 24LL))(i[2]);
    }
    if ( v3 )
    {
      v7 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v7 == sub_8E310 )
        operator delete(v3, 0x18u);
      else
        v7(v3);
    }
  }
}


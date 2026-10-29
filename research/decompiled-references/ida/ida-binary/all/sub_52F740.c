void __fastcall sub_52F740(__int64 a1, void *a2)
{
  void (__fastcall *v2)(void *); // rax

  if ( a2 )
  {
    v2 = *(void (__fastcall **)(void *))(*(_QWORD *)a2 + 8LL);
    if ( v2 == sub_52F010 )
      operator delete(a2, 0x10u);
    else
      v2(a2);
  }
}

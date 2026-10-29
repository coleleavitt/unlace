void __fastcall sub_198FB0(__int64 a1, void *a2)
{
  void (__fastcall *v2)(void *); // rax

  if ( a2 )
  {
    v2 = *(void (__fastcall **)(void *))(*(_QWORD *)a2 + 8LL);
    if ( v2 == sub_198C40 )
      operator delete(a2, 0x10u);
    else
      v2(a2);
  }
}


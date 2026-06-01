void __fastcall sub_2279530(__int64 a1)
{
  void (*v1)(void); // rax

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 112LL);
  if ( (char *)v1 == (char *)sub_2279510 )
  {
    if ( !*(_DWORD *)(a1 + 96) )
      sub_2279140(a1);
  }
  else
  {
    v1();
  }
}

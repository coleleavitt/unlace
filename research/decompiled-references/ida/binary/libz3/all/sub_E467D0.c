void __fastcall sub_E467D0(__int64 a1)
{
  __int64 v1; // rdi
  void (*v2)(void); // rax

  v1 = *(_QWORD *)(a1 + 176);
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 88LL);
    if ( v2 != nullsub_92 )
      v2();
  }
}


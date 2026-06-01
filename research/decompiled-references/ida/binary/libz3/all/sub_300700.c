void __fastcall sub_300700(__int64 a1)
{
  __int64 v1; // rdi
  void (*v2)(void); // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 48LL);
    if ( (char *)v2 != (char *)nullsub_146 )
      v2();
  }
}


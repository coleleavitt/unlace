void __fastcall set_filesys_callbacks(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  void (*v6)(void); // rax
  void *v7; // rdi
  void (*v8)(void); // rax

  if ( a2 )
  {
    v5 = *(void **)(a1 + 16);
    if ( v5 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
      if ( (char *)v6 == (char *)sub_8BD690 )
        operator delete(v5, 8u);
      else
        v6();
    }
    *(_QWORD *)(a1 + 16) = a2;
  }
  if ( a3 )
  {
    v7 = *(void **)(a1 + 24);
    if ( v7 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v7 + 32LL);
      if ( (char *)v8 == (char *)sub_8BD6A0 )
        operator delete(v7, 0x20u);
      else
        v8();
    }
    *(_QWORD *)(a1 + 24) = a3;
  }
}

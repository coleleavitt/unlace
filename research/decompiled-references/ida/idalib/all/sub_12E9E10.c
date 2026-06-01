void __fastcall sub_12E9E10(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  void *v4; // rdi
  void (*v5)(void); // rax
  __int64 v6; // rdi
  void (*v7)(void); // rax

  v3 = *a2;
  v4 = *(void **)(a1 + 128);
  *a2 = 0;
  *(_QWORD *)(a1 + 128) = v3;
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)sub_A55C70 )
      operator delete(v4, 0x10u);
    else
      v5();
  }
  if ( *(_QWORD *)(a1 + 112) )
  {
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
      if ( v7 != nullsub_148 )
        v7();
    }
  }
}

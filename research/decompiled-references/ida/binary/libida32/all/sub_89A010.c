void __fastcall sub_89A010(__int64 a1)
{
  void *v1; // rbp
  void *v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  void (*v6)(void); // rax
  void *v7; // rdi
  void (*v8)(void); // rax

  v1 = (void *)(a1 - 40);
  *(_QWORD *)(a1 - 40) = &off_2BD2230;
  *(_QWORD *)a1 = &off_2BD24A8;
  qmutex_free(*(void **)(a1 + 296));
  v3 = *(void **)(a1 + 264);
  *(_QWORD *)a1 = &unk_2BD21B8;
  *(_OWORD *)(a1 + 296) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 272) = 0;
    qfree(v3);
  }
  sub_79E280(a1);
  v4 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = &unk_2BD2600;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(void **)(a1 - 24);
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( (char *)v6 == (char *)sub_899950 )
      operator delete(v5, 8u);
    else
      v6();
  }
  v7 = *(void **)(a1 - 16);
  if ( v7 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 32LL);
    if ( (char *)v8 == (char *)sub_899960 )
      operator delete(v7, 0x20u);
    else
      v8();
  }
  operator delete(v1, 0x168u);
}


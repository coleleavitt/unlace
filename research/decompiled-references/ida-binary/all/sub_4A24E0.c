void __fastcall sub_4A24E0(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rax
  void (*v4)(void); // rax
  char *v5; // rdi
  char *v6; // rdx
  __int64 v7; // rax
  void *v8; // rdi
  void (*v9)(void); // rax

  v2 = *(_BYTE **)(a1 + 2392);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 2384);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 32LL))(*(_QWORD *)(a1 + 2384));
      v2 = *(_BYTE **)(a1 + 2392);
      *(_QWORD *)(a1 + 2384) = 0;
    }
    v4 = *(void (**)(void))(*(_QWORD *)v2 + 64LL);
    if ( v4 != nullsub_4 )
    {
      v4();
      v2 = *(_BYTE **)(a1 + 2392);
    }
    if ( (v2[12] & 2) == 0 && v2 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 8LL))(v2);
    v5 = (char *)qword_8D1C20;
    v6 = (char *)(qword_8D1C20 + 8 * xmmword_8D1C28);
    if ( (char *)qword_8D1C20 != v6 )
    {
      while ( a1 != *(_QWORD *)v5 )
      {
        v5 += 8;
        if ( v6 == v5 )
          goto LABEL_15;
      }
      if ( v6 != v5 )
      {
        memmove(v5, v5 + 8, v6 - v5 - 8);
        *(_QWORD *)&xmmword_8D1C28 = xmmword_8D1C28 - 1;
      }
    }
LABEL_15:
    v7 = *(int *)(a1 + 2080);
    if ( (unsigned int)v7 <= 0x7F )
      qword_8D1820[v7] = 0;
    v8 = *(void **)(a1 + 2112);
    if ( v8 )
    {
      v9 = *(void (**)(void))(*(_QWORD *)v8 + 8LL);
      if ( (char *)v9 != (char *)chooser_persistence_helper_t__::vfunc_1 )
      {
        v9();
        *(_QWORD *)(a1 + 2392) = 0;
        return;
      }
      operator delete(v8, 8u);
    }
    *(_QWORD *)(a1 + 2392) = 0;
  }
}

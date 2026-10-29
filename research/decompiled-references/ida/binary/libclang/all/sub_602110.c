void __fastcall sub_602110(__int64 *a1)
{
  __int64 v1; // rbp
  _BYTE *v2; // rbx
  void *v3; // rbx
  __int64 v4; // rdi
  void *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_BYTE **)(v1 + 8);
    if ( v2 )
    {
      if ( (v2[2036] & 1) != 0 )
        return;
      sub_FFE9C0(*(_QWORD *)(v1 + 8));
      operator delete(v2, 0x808u);
    }
    v3 = *(void **)(v1 + 16);
    if ( v3 )
    {
      sub_690750(*(_QWORD *)(v1 + 16));
      operator delete(v3, 0x18u);
    }
    v4 = *(_QWORD *)(v1 + 24);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_63BC90(*(void **)(v1 + 32));
    v5 = *(void **)(v1 + 40);
    if ( v5 )
    {
      nullsub_214(*(_QWORD *)(v1 + 40));
      operator delete(v5, 1u);
    }
    v6 = *(_QWORD *)(v1 + 64);
    v7 = *(_QWORD *)(v1 + 56);
    if ( v6 != v7 )
    {
      do
      {
        if ( *(_QWORD *)v7 != v7 + 16 )
          operator delete(*(void **)v7, *(_QWORD *)(v7 + 16) + 1LL);
        v7 += 32;
      }
      while ( v6 != v7 );
      v7 = *(_QWORD *)(v1 + 56);
    }
    if ( v7 )
      operator delete((void *)v7, *(_QWORD *)(v1 + 72) - v7);
    operator delete((void *)v1, 0x50u);
  }
}


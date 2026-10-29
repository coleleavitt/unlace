void __fastcall sub_195020(__int64 a1)
{
  _BYTE *v2; // rdi
  void (*v3)(void); // rax
  char *v4; // rdi
  char *v5; // rdx
  __int64 v6; // rax
  void *v7; // rdi
  void (*v8)(void); // rax

  v2 = *(_BYTE **)(a1 + 2520);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 64LL);
    if ( v3 != nullsub_10 )
    {
      v3();
      v2 = *(_BYTE **)(a1 + 2520);
    }
    if ( (v2[12] & 2) == 0 && v2 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = (char *)qword_255940;
    v5 = (char *)(qword_255940 + 8 * xmmword_255948);
    if ( (char *)qword_255940 != v5 )
    {
      while ( a1 != *(_QWORD *)v4 )
      {
        v4 += 8;
        if ( v5 == v4 )
          goto LABEL_13;
      }
      if ( v5 != v4 )
      {
        memmove(v4, v4 + 8, v5 - v4 - 8);
        *(_QWORD *)&xmmword_255948 = xmmword_255948 - 1;
      }
    }
LABEL_13:
    v6 = *(int *)(a1 + 2176);
    if ( (unsigned int)v6 <= 0x7F )
      qword_255540[v6] = 0;
    v7 = *(void **)(a1 + 2248);
    if ( v7 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v7 + 8LL);
      if ( (char *)v8 != (char *)sub_13E8A0 )
      {
        v8();
        *(_QWORD *)(a1 + 2520) = 0;
        return;
      }
      operator delete(v7, 8u);
    }
    *(_QWORD *)(a1 + 2520) = 0;
  }
}


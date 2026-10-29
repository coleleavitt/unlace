void __fastcall sub_29B90(char *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void (*v5)(void); // rax
  void *v6; // rdi
  void (__fastcall *v7)(void *); // rax

  *(_QWORD *)a1 = &off_1641E8;
  *((_QWORD *)a1 + 5) = &off_164460;
  sub_98140(*((void **)a1 + 42));
  v2 = *((void **)a1 + 38);
  *((_QWORD *)a1 + 5) = qword_164170;
  *((_OWORD *)a1 + 21) = 0;
  if ( v2 )
  {
    *((_QWORD *)a1 + 39) = 0;
    j__free(v2);
  }
  sub_6CF50(a1 + 40);
  v3 = *((_QWORD *)a1 + 1);
  *(_QWORD *)a1 = &qword_1644F0[2];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *((void **)a1 + 2);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)sub_16420 )
      operator delete(v4, 8u);
    else
      v5();
  }
  v6 = *((void **)a1 + 3);
  if ( !v6 )
    goto LABEL_11;
  v7 = *(void (__fastcall **)(void *))(*(_QWORD *)v6 + 32LL);
  if ( v7 == sub_295E0 )
  {
    operator delete(v6, 0x20u);
LABEL_11:
    operator delete(a1, 0x168u);
    return;
  }
  ((void (*)(void))v7)();
  operator delete(a1, 0x168u);
}


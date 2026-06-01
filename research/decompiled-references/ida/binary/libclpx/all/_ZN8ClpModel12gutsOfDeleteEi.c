void __fastcall ClpModel::gutsOfDelete(ClpModel *this, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rdi
  void *v17; // rdi
  void *v18; // rax
  void *v19; // rdx
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // rdi

  if ( a2 && (*((_BYTE *)this + 338) & 1) != 0 )
    goto LABEL_3;
  v7 = *((void **)this + 14);
  *((_QWORD *)this + 60) = -1;
  if ( v7 )
    operator delete[](v7);
  v8 = *((void **)this + 15);
  *((_QWORD *)this + 14) = 0;
  if ( v8 )
    operator delete[](v8);
  v9 = *((void **)this + 16);
  *((_QWORD *)this + 15) = 0;
  if ( v9 )
    operator delete[](v9);
  v10 = *((void **)this + 17);
  *((_QWORD *)this + 16) = 0;
  if ( v10 )
    operator delete[](v10);
  v11 = *((void **)this + 18);
  *((_QWORD *)this + 17) = 0;
  if ( v11 )
    operator delete[](v11);
  v12 = *((void **)this + 19);
  if ( v12 )
    operator delete[](v12);
  v13 = *((void **)this + 21);
  if ( v13 )
    operator delete[](v13);
  v14 = *((void **)this + 22);
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 21) = 0;
  if ( v14 )
    operator delete[](v14);
  v15 = *((void **)this + 23);
  if ( v15 )
    operator delete[](v15);
  v16 = *((_QWORD *)this + 20);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
  v17 = *((void **)this + 84);
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 20) = 0;
  if ( v17 )
  {
    operator delete[](v17);
    v17 = *((void **)this + 84);
  }
  v18 = *((void **)this + 28);
  if ( v18 == v17 )
  {
    *((_QWORD *)this + 28) = 0;
    v18 = nullptr;
  }
  v19 = *((void **)this + 85);
  *((_QWORD *)this + 84) = 0;
  if ( v19 )
  {
    operator delete[](v19);
    v19 = *((void **)this + 85);
    v18 = *((void **)this + 28);
  }
  v20 = *((void **)this + 29);
  if ( v20 != v19 )
  {
    *((_QWORD *)this + 85) = 0;
    if ( !v18 )
      goto LABEL_41;
    goto LABEL_40;
  }
  *((_QWORD *)this + 29) = 0;
  *((_QWORD *)this + 85) = 0;
  if ( v18 )
  {
LABEL_40:
    operator delete[](v18);
    v20 = *((void **)this + 29);
LABEL_41:
    *((_QWORD *)this + 28) = 0;
    if ( v20 )
      operator delete[](v20);
    goto LABEL_43;
  }
  *((_QWORD *)this + 28) = 0;
LABEL_43:
  v21 = *((void **)this + 34);
  *((_QWORD *)this + 29) = 0;
  if ( v21 )
    operator delete[](v21);
  v22 = *((void **)this + 33);
  *((_QWORD *)this + 34) = 0;
  if ( v22 )
    operator delete[](v22);
  v23 = *((_QWORD *)this + 45);
  *((_QWORD *)this + 33) = 0;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
  *((_QWORD *)this + 45) = 0;
LABEL_3:
  v3 = *((_QWORD *)this + 24);
  *((_DWORD *)this + 79) = 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 480LL))(v3);
  v4 = *((_QWORD *)this + 25);
  *((_QWORD *)this + 24) = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 480LL))(v4);
  v5 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 25) = 0;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 480LL))(v5);
  v6 = *((void **)this + 27);
  *((_QWORD *)this + 26) = 0;
  if ( v6 )
    operator delete[](v6);
  *((_QWORD *)this + 27) = 0;
  *((_DWORD *)this + 84) = 0;
}


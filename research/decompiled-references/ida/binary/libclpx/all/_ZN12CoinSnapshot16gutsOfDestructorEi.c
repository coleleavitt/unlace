void __fastcall CoinSnapshot::gutsOfDestructor(CoinSnapshot *this, char a2)
{
  char v3; // al
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rdi

  if ( (a2 & 2) == 0 )
    goto LABEL_46;
  v3 = *((_BYTE *)this + 224);
  if ( (v3 & 1) != 0 )
  {
    v4 = *((void **)this + 10);
    if ( v4 )
    {
      operator delete[](v4);
      v3 = *((_BYTE *)this + 224);
    }
  }
  if ( (v3 & 2) != 0 )
  {
    v5 = *((void **)this + 11);
    if ( v5 )
    {
      operator delete[](v5);
      v3 = *((_BYTE *)this + 224);
    }
  }
  if ( (v3 & 4) != 0 )
  {
    v6 = *((void **)this + 12);
    if ( v6 )
    {
      operator delete[](v6);
      v3 = *((_BYTE *)this + 224);
    }
  }
  if ( (v3 & 8) != 0 )
  {
    v7 = *((void **)this + 13);
    if ( v7 )
    {
      operator delete[](v7);
      v3 = *((_BYTE *)this + 224);
    }
  }
  if ( (v3 & 0x10) != 0 )
  {
    v8 = *((void **)this + 14);
    if ( v8 )
    {
      operator delete[](v8);
      v3 = *((_BYTE *)this + 224);
    }
  }
  if ( (v3 & 0x20) != 0 )
  {
    v9 = *((void **)this + 15);
    if ( v9 )
    {
      operator delete[](v9);
      v3 = *((_BYTE *)this + 224);
    }
  }
  if ( (v3 & 0x40) != 0 )
  {
    v10 = *((void **)this + 16);
    if ( v10 )
    {
      operator delete[](v10);
      v3 = *((_BYTE *)this + 224);
    }
  }
  if ( v3 < 0 && (v20 = *((_QWORD *)this + 17)) != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v11 = *((_BYTE *)this + 225);
    if ( (v11 & 1) != 0 )
    {
LABEL_25:
      v12 = *((_QWORD *)this + 18);
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v11 = *((_BYTE *)this + 225);
      }
    }
  }
  else
  {
    v11 = *((_BYTE *)this + 225);
    if ( (v11 & 1) != 0 )
      goto LABEL_25;
  }
  if ( (v11 & 2) != 0 )
  {
    v13 = *((_QWORD *)this + 19);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v11 = *((_BYTE *)this + 225);
    }
  }
  if ( (v11 & 4) != 0 )
  {
    v14 = *((_QWORD *)this + 20);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v11 = *((_BYTE *)this + 225);
    }
  }
  if ( (v11 & 8) != 0 )
  {
    v15 = *((void **)this + 21);
    if ( v15 )
    {
      operator delete[](v15);
      v11 = *((_BYTE *)this + 225);
    }
  }
  if ( (v11 & 0x10) != 0 )
  {
    v16 = *((void **)this + 22);
    if ( v16 )
    {
      operator delete[](v16);
      v11 = *((_BYTE *)this + 225);
    }
  }
  if ( (v11 & 0x20) != 0 )
  {
    v17 = *((void **)this + 23);
    if ( v17 )
    {
      operator delete[](v17);
      v11 = *((_BYTE *)this + 225);
    }
  }
  if ( (v11 & 0x40) != 0 )
  {
    v18 = *((void **)this + 24);
    if ( v18 )
    {
      operator delete[](v18);
      v11 = *((_BYTE *)this + 225);
    }
  }
  if ( v11 < 0 )
  {
    v19 = *((void **)this + 25);
    if ( v19 )
      operator delete[](v19);
  }
LABEL_46:
  if ( (a2 & 4) != 0 )
  {
    *((_QWORD *)this + 5) = 0x3E7AD7F29ABCAF48LL;
    *((_QWORD *)this + 1) = 0x3FF0000000000000LL;
    *((_QWORD *)this + 6) = 0x3E7AD7F29ABCAF48LL;
    *((_QWORD *)this + 7) = 0x3E7AD7F29ABCAF48LL;
    *((_QWORD *)this + 2) = 0x7FEFFFFFFFFFFFFFLL;
  }
  if ( (a2 & 8) != 0 )
  {
    *(_OWORD *)((char *)this + 24) = 0x7FEFFFFFFFFFFFFFuLL;
    *((_QWORD *)this + 8) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 9) = 0xFFEFFFFFFFFFFFFFLL;
  }
  if ( (a2 & 1) != 0 )
  {
    *((_DWORD *)this + 56) = 0;
    *((_OWORD *)this + 5) = 0;
    *((_OWORD *)this + 6) = 0;
    *((_OWORD *)this + 7) = 0;
    *((_OWORD *)this + 8) = 0;
    *((_OWORD *)this + 9) = 0;
    *((_OWORD *)this + 10) = 0;
    *((_OWORD *)this + 11) = 0;
    *((_OWORD *)this + 12) = 0;
    *((_OWORD *)this + 13) = 0;
  }
}


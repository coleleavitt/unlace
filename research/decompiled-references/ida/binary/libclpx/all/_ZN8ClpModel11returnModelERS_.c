void *__fastcall ClpModel::returnModel(ClpModel *this, ClpModel *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *result; // rax
  void *v9; // rdi
  bool v10; // zf
  __int64 v11; // rdi

  *((_QWORD *)a2 + 9) = *((_QWORD *)this + 9);
  *((_DWORD *)a2 + 77) = *((_DWORD *)this + 77);
  *((_DWORD *)a2 + 80) = *((_DWORD *)this + 80);
  *((_DWORD *)a2 + 81) = *((_DWORD *)this + 81);
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  v3 = *((_QWORD *)this + 25);
  if ( *((_QWORD *)a2 + 25) != v3 && v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 480LL))(v3);
  v4 = *((_QWORD *)this + 26);
  *((_QWORD *)this + 25) = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 480LL))(v4);
  *((_QWORD *)this + 26) = 0;
  v5 = *((void **)a2 + 27);
  if ( v5 )
    operator delete[](v5);
  *((_QWORD *)a2 + 27) = *((_QWORD *)this + 27);
  v6 = *((void **)this + 28);
  *((_QWORD *)this + 27) = 0;
  if ( v6 )
  {
    if ( v6 != *((void **)a2 + 28) )
    {
      operator delete[](v6);
      v7 = *((void **)this + 29);
      if ( v7 )
        operator delete[](v7);
    }
  }
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = 0;
  result = *((void **)this + 33);
  v9 = *((void **)a2 + 33);
  if ( v9 != result )
  {
    if ( v9 )
    {
      operator delete[](v9);
      result = *((void **)this + 33);
    }
    *((_QWORD *)a2 + 33) = result;
  }
  v10 = *((_BYTE *)this + 352) == 0;
  *((_QWORD *)this + 33) = 0;
  if ( !v10 )
  {
    v11 = *((_QWORD *)this + 43);
    if ( v11 )
      result = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
    *((_QWORD *)this + 43) = 0;
  }
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  return result;
}


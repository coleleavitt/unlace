__int64 __fastcall ClpModel::borrowModel(ClpModel *this, ClpModel *a2)
{
  __int64 v3; // rdi
  void *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rdi
  int v7; // eax
  __int64 result; // rax

  if ( *((_BYTE *)this + 352) )
  {
    v3 = *((_QWORD *)this + 43);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    *((_QWORD *)this + 43) = 0;
  }
  ClpModel::gutsOfDelete(this, 1);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  v4 = *((void **)a2 + 27);
  if ( v4 )
    operator delete[](v4);
  *((_QWORD *)a2 + 27) = 0;
  v5 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0;
  v6 = *((_QWORD *)this + 26);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 480LL))(v6);
  *((_QWORD *)this + 26) = 0;
  ClpModel::gutsOfCopy(this, a2, 0);
  v7 = *((_DWORD *)a2 + 84);
  *((_QWORD *)a2 + 26) = v5;
  *((_QWORD *)this + 84) = 0;
  *((_QWORD *)this + 85) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  result = v7 & 0xFFFEFFFF;
  *((_DWORD *)this + 84) = result;
  return result;
}


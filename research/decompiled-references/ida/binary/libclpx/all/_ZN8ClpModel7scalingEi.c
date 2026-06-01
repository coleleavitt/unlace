__int64 __fastcall ClpModel::scaling(ClpModel *this, int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( *((_DWORD *)this + 64) != a2 )
  {
    *((_DWORD *)this + 79) &= 0xFFFFFFF1;
    v3 = *((_QWORD *)this + 26);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 480LL))(v3);
    *((_QWORD *)this + 26) = 0;
  }
  result = (unsigned int)(a2 - 1);
  if ( (unsigned int)result <= 4 )
  {
    *((_DWORD *)this + 64) = a2;
  }
  else if ( !a2 )
  {
    *((_DWORD *)this + 64) = 0;
    ClpModel::setRowScale(this, nullptr);
    return ClpModel::setColumnScale(this, nullptr);
  }
  return result;
}


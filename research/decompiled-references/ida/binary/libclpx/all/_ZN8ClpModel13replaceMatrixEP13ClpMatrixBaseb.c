__int64 __fastcall ClpModel::replaceMatrix(ClpModel *this, ClpMatrixBase *a2, char a3)
{
  __int64 v4; // rdi
  __int64 result; // rax

  if ( a3 )
  {
    v4 = *((_QWORD *)this + 24);
    if ( v4 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 480LL))(v4);
  }
  *((_QWORD *)this + 24) = a2;
  *((_DWORD *)this + 79) = 0;
  return result;
}

